// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ExhibitionExcelConfig.cpp

// Line 20: range 0000000013AAABB6-0000000013AAAE5A
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteConfig(
        ExhibitionExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ExhibitionExcelConfigMgr::rewriteExhibitionLuaKeyExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewritePlayerExhibitionExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewriteExhibitionSeriesExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewriteExhibitionDisplayExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewriteExhibitionCardExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewriteExhibitionScoreExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::rewriteExhibitionListDataExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "rewriteConfig",
      29);
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

// Line 36: range 0000000013AAAE5C-0000000013AAB100
int32_t __cdecl ExhibitionExcelConfigMgr::checkConfig(
        ExhibitionExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ExhibitionExcelConfigMgr::checkExhibitionLuaKeyExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkPlayerExhibitionExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkExhibitionSeriesExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkExhibitionDisplayExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkExhibitionCardExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkExhibitionScoreExcelConfig(this, txt_config_mgr)
    || ExhibitionExcelConfigMgr::checkExhibitionListDataExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkConfig",
      45);
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

// Line 52: range 0000000013AAB102-0000000013AAB6E6
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionLuaKeyExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 p_trigger_type; // rsi
  const unsigned int *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  int v12; // eax
  int32_t result; // eax
  data::ExhibitionLuaKeyExcelConfigMap *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::reference v15; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig> >::type *id; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig> >::type *config; // [rsp+38h] [rbp-178h]
  char v18[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 9 <unknown> 64 8 14 __for_begin:53 96 8 12 __for_end:53 128 32 17 trigger_string:55 192 3"
                        "2 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewriteExhibitionLuaKeyExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->exhibition_lua_key_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false> *)(v3 + 96)) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false> *const)(v3 + 64));
    id = std::get<0ul,unsigned int const,data::ExhibitionLuaKeyExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionLuaKeyExcelConfig>(v15);
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 192),
      off_1AC735A0,
      (const std::allocator<char> *)(v3 + 48));
    p_trigger_type = (__int64)&config->trigger_type;
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      p_trigger_type = 32LL;
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::tools::StringUtils::trim(
      (std::string *)(v3 + 128),
      (const std::string *)p_trigger_type,
      (const std::string *)(v3 + 192),
      1);
    std::string::~string((void *)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 48);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    v8 = std::unordered_map<std::string,unsigned int>::emplace<std::string&,unsigned int const&>(
           &this->lua_trigger_key_map,
           (std::string *)(v3 + 128),
           id,
           (std::string *)&this->lua_trigger_key_map,
           v7);
    if ( !v8.second )
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewriteExhibitionLuaKeyExcelConfig",
        58);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v9, (const char (*)[50])byte_1AC73640);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &config->trigger_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    std::string::~string((void *)(v3 + 128));
    *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
    if ( v11 != 1 )
    {
      v12 = 0;
      goto LABEL_21;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false> *const)(v3 + 64));
  }
  v12 = 1;
LABEL_21:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 66: range 0000000013AAB6E8-0000000013AAC468
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionLuaKeyExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  __int64 v13; // rsi
  int SceneIdByGroupId; // edx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  int v21; // edx
  int v22; // eax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  char *v31; // rsi
  unsigned int *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // edx
  int32_t result; // eax
  data::ExhibitionLuaKeyExcelConfigMap *__for_range; // [rsp+18h] [rbp-288h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::reference v42; // [rsp+20h] [rbp-280h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig> >::type *config; // [rsp+30h] [rbp-270h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-268h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-260h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+48h] [rbp-258h]
  char v47[592]; // [rsp+50h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 11 group_id:70 48 4 11 scene_id:72 64 4 11 scene_id:80 80 4 15 group_tag_id:89 96 8 14 _"
                        "_for_begin:67 128 8 12 __for_end:67 160 8 14 __for_begin:70 192 8 12 __for_end:70 224 8 14 __for"
                        "_begin:80 256 8 12 __for_end:80 288 8 14 __for_begin:89 320 8 12 __for_end:89 352 32 9 <unknown>"
                        " 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkExhibitionLuaKeyExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  __for_range = &this->exhibition_lua_key_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ExhibitionLuaKeyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false> *)(v3 + 128)) )
      break;
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::ExhibitionLuaKeyExcelConfig>(v42);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionLuaKeyExcelConfig>(v42);
    __for_range_0 = &config->group_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        break;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
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
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v13 = *(unsigned int *)(v3 + 32);
      SceneIdByGroupId = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, v13);
      v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store4(v3 + 48, v13);
      }
      *(_DWORD *)(v3 + 48) = SceneIdByGroupId;
      v7 = (char *)(v3 + 48);
      if ( !common::tools::MiscUtils::isContains<unsigned int>(&config->scene_list, (const unsigned int *)(v3 + 48)) )
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "checkExhibitionLuaKeyExcelConfig",
          75);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v16, (const char (*)[77])byte_1AC73860);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v3 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])", scene_id:");
        v7 = (char *)(v3 + 48);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
      }
      else
      {
        v20 = 1;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v20 != 1 )
      {
        v21 = 0;
        goto LABEL_33;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    v21 = 1;
LABEL_33:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v21 != 1 )
    {
      v22 = 0;
      goto LABEL_73;
    }
    __for_range_1 = &config->scene_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v23 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v30 = 1;
        goto LABEL_51;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v25 = (int *)v24;
      if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v24);
      }
      v26 = *v25;
      v27 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(v23) = v27 != 0;
        __asan_report_store4(v3 + 64, v23);
      }
      *(_DWORD *)(v3 + 64) = v26;
      if ( SceneExcelConfigMgr::getSceneTypeBySceneId(&txt_config_mgr->scene_config_mgr, *(_DWORD *)(v3 + 64)) == SCENE_NONE )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
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
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkExhibitionLuaKeyExcelConfig",
      84);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v28, (const char (*)[52])byte_1AC73920);
    v23 = (char *)(v3 + 64);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v30 = 0;
LABEL_51:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v22 = 0;
      goto LABEL_73;
    }
    __for_range_2 = &config->group_tag_list;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v23);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v23);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v31 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
      {
        v38 = 1;
        goto LABEL_69;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v32 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
      v33 = (int *)v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      v34 = *v33;
      v35 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v31) = v35 != 0;
        __asan_report_store4(v3 + 80, v31);
      }
      *(_DWORD *)(v3 + 80) = v34;
      if ( !data::GroupTagExcelConfigMgrBase::findGroupTagExcelConfig(
              &txt_config_mgr->group_tag_config_mgr,
              *(unsigned int *)(v3 + 80)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
    }
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
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkExhibitionLuaKeyExcelConfig",
      93);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v37 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v36, (const char (*)[36])byte_1AC73980);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v38 = 0;
LABEL_69:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v38 != 1 )
    {
      v22 = 0;
      goto LABEL_73;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionLuaKeyExcelConfig>,false,false> *const)(v3 + 96));
  }
  v22 = 1;
LABEL_73:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v47 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 102: range 0000000013AAC46A-0000000013AB3C98
int32_t __cdecl ExhibitionExcelConfigMgr::rewritePlayerExhibitionExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::set<unsigned int> *v6; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  data::ExhibitionKeyType key_type; // eax
  __int64 p_trigger_type; // rsi
  const char *v17; // rax
  char *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  int v24; // eax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r13
  const std::string *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  const std::string *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // r13
  const std::string *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  __int64 v53; // rsi
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  std::set<unsigned int> *v62; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  _BOOL4 v70; // eax
  unsigned __int64 v71; // rax
  const std::string *v72; // rax
  char *v73; // rsi
  bool v74; // r15
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  _BOOL4 v79; // r15d
  char *v80; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v81; // rax
  int *v82; // rdx
  int v83; // ecx
  char v84; // al
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  int v91; // eax
  std::set<unsigned int> *v92; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  unsigned __int64 v96; // rdx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  int v101; // eax
  const std::string *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // r13
  const std::string *v105; // rax
  std::set<unsigned int> *v106; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  _BOOL4 v114; // eax
  const std::string *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // r13
  const std::string *v118; // rax
  unsigned __int64 v119; // rax
  const std::string *v120; // rax
  bool v121; // r15
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  int v124; // r15d
  std::set<unsigned int> *v125; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  unsigned __int64 v129; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>,bool> v130; // rax
  bool v131; // r15
  unsigned __int64 v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  unsigned __int64 v135; // rdx
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  int v140; // eax
  const std::string *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  int v147; // eax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
  std::set<unsigned int> *v154; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  _BOOL4 v162; // edx
  unsigned __int64 v163; // rax
  const std::string *v164; // rax
  bool v165; // r15
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // r13
  const std::string *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  _BOOL4 v173; // r15d
  unsigned __int64 v174; // rax
  unsigned int *M_current; // r15
  unsigned int *v176; // rsi
  std::unordered_set<unsigned int>::size_type v177; // r15
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // r13
  const std::string *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  _BOOL4 v185; // r15d
  char *v186; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v187; // rax
  int *v188; // rdx
  int v189; // ecx
  char v190; // al
  LuaConfigMgr *v191; // rcx
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rax
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rax
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rax
  int v198; // eax
  std::set<unsigned int> *v199; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // rax
  unsigned __int64 v203; // rax
  unsigned __int64 v204; // rax
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // rax
  common::milog::MiLogStream *v207; // rax
  common::milog::MiLogStream *v208; // rax
  _BOOL4 v209; // edx
  unsigned __int64 v210; // rax
  const std::string *v211; // rax
  bool v212; // r15
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // r13
  const std::string *v215; // rax
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // rax
  common::milog::MiLogStream *v218; // rax
  common::milog::MiLogStream *v219; // rax
  _BOOL4 v220; // r15d
  unsigned __int64 v221; // rax
  unsigned int *v222; // r15
  unsigned int *v223; // rsi
  std::unordered_set<unsigned int>::size_type v224; // r15
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // r13
  const std::string *v227; // rax
  common::milog::MiLogStream *v228; // rax
  common::milog::MiLogStream *v229; // rax
  common::milog::MiLogStream *v230; // rax
  common::milog::MiLogStream *v231; // rax
  _BOOL4 v232; // r15d
  const std::string *v233; // rax
  char *v234; // rsi
  common::milog::MiLogStream *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rax
  common::milog::MiLogStream *v238; // rax
  char *v239; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v240; // rax
  int *v241; // rdx
  int v242; // ecx
  char v243; // al
  LuaConfigMgr *v244; // rcx
  common::milog::MiLogStream *v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rax
  common::milog::MiLogStream *v248; // rax
  common::milog::MiLogStream *v249; // rax
  common::milog::MiLogStream *v250; // rax
  int v251; // eax
  std::set<std::pair<unsigned int,unsigned int>> *v252; // r15
  std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >,bool> v253; // rax
  common::milog::MiLogStream *v254; // rax
  common::milog::MiLogStream *v255; // rax
  unsigned __int64 v256; // rax
  unsigned __int64 v257; // rax
  common::milog::MiLogStream *v258; // rax
  common::milog::MiLogStream *v259; // rax
  common::milog::MiLogStream *v260; // rax
  common::milog::MiLogStream *v261; // rax
  _BOOL4 v262; // edx
  unsigned __int64 v263; // rax
  const std::string *v264; // rax
  bool v265; // r15
  common::milog::MiLogStream *v266; // rax
  common::milog::MiLogStream *v267; // r13
  const std::string *v268; // rax
  common::milog::MiLogStream *v269; // rax
  common::milog::MiLogStream *v270; // rax
  common::milog::MiLogStream *v271; // rax
  common::milog::MiLogStream *v272; // rax
  _BOOL4 v273; // r15d
  unsigned __int64 v274; // rax
  unsigned int *v275; // r15
  unsigned int *v276; // rsi
  std::unordered_set<unsigned int>::size_type v277; // r15
  common::milog::MiLogStream *v278; // rax
  common::milog::MiLogStream *v279; // r13
  const std::string *v280; // rax
  common::milog::MiLogStream *v281; // rax
  common::milog::MiLogStream *v282; // rax
  common::milog::MiLogStream *v283; // rax
  common::milog::MiLogStream *v284; // rax
  _BOOL4 v285; // r15d
  char *v286; // rsi
  unsigned int *v287; // rax
  int *v288; // rdx
  int v289; // ecx
  char v290; // al
  common::milog::MiLogStream *v291; // rax
  common::milog::MiLogStream *v292; // rax
  common::milog::MiLogStream *v293; // rax
  common::milog::MiLogStream *v294; // rax
  common::milog::MiLogStream *v295; // rax
  common::milog::MiLogStream *v296; // rax
  int v297; // eax
  std::set<unsigned int> *v298; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v299; // rax
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // rax
  unsigned __int64 v302; // rax
  unsigned __int64 v303; // rax
  std::set<unsigned int> *v304; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v305; // rax
  common::milog::MiLogStream *v306; // rax
  common::milog::MiLogStream *v307; // rax
  __int64 v308; // rsi
  std::set<unsigned int> *v309; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v310; // rax
  common::milog::MiLogStream *v311; // rax
  common::milog::MiLogStream *v312; // rax
  int v313; // r15d
  common::milog::MiLogStream *v314; // rax
  common::milog::MiLogStream *v315; // r13
  __int64 v316; // rax
  data::PlayerExhibitionExcelConfigMap *__for_range; // [rsp+28h] [rbp-1488h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false,false>::reference v320; // [rsp+30h] [rbp-1480h]
  std::tuple_element<0,std::pair<unsigned int const,data::PlayerExhibitionExcelConfig> >::type *id; // [rsp+38h] [rbp-1478h]
  std::tuple_element<1,const std::pair<unsigned int const,data::PlayerExhibitionExcelConfig> >::type *config; // [rsp+40h] [rbp-1470h]
  std::unordered_set<unsigned int> *__for_range_3; // [rsp+48h] [rbp-1468h]
  std::vector<unsigned int> *__for_range_2; // [rsp+50h] [rbp-1460h]
  std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-1450h]
  std::vector<unsigned int> *__for_range_0; // [rsp+70h] [rbp-1440h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+78h] [rbp-1438h]
  char v328[5168]; // [rsp+80h] [rbp-1430h] BYREF

  v3 = (unsigned __int64)v328;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_7(5120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "105 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 4 16 trigger_type:127 304 4 12 group_id:142 320 4 13 config_id:143 336 4 14 monster_id:185 35"
                        "2 4 14 dungeon_id:211 368 4 14 dungeon_id:231 384 4 21 target_monster_id:266 400 4 12 group_id:3"
                        "03 416 4 8 time:338 432 4 12 group_id:344 448 4 14 gallery_id:379 464 8 15 __for_begin:103 496 8"
                        " 13 __for_end:103 528 8 9 <unknown> 560 8 15 __for_begin:185 592 8 13 __for_end:185 624 8 9 <unk"
                        "nown> 656 8 9 <unknown> 688 8 15 __for_begin:303 720 8 13 __for_end:303 752 8 15 __for_begin:344"
                        " 784 8 13 __for_end:344 816 8 9 <unknown> 848 8 15 __for_begin:379 880 8 13 __for_end:379 912 8 "
                        "9 <unknown> 944 24 18 monster_id_vec:179 1008 24 16 group_id_vec:291 1072 24 16 group_id_vec:326"
                        " 1136 24 18 gallery_id_vec:367 1200 32 9 <unknown> 1264 32 9 <unknown> 1328 32 9 <unknown> 1392 "
                        "32 18 trigger_string:126 1456 32 9 <unknown> 1520 32 9 <unknown> 1584 32 9 <unknown> 1648 32 9 <"
                        "unknown> 1712 32 9 <unknown> 1776 32 9 <unknown> 1840 32 9 <unknown> 1904 32 9 <unknown> 1968 32"
                        " 9 <unknown> 2032 32 9 <unknown> 2096 32 9 <unknown> 2160 32 9 <unknown> 2224 32 9 <unknown> 228"
                        "8 32 9 <unknown> 2352 32 9 <unknown> 2416 32 9 <unknown> 2480 32 9 <unknown> 2544 32 9 <unknown>"
                        " 2608 32 9 <unknown> 2672 32 9 <unknown> 2736 32 9 <unknown> 2800 32 9 <unknown> 2864 32 9 <unkn"
                        "own> 2928 32 9 <unknown> 2992 32 9 <unknown> 3056 32 9 <unknown> 3120 32 9 <unknown> 3184 32 9 <"
                        "unknown> 3248 32 9 <unknown> 3312 32 9 <unknown> 3376 32 9 <unknown> 3440 32 9 <unknown> 3504 32"
                        " 9 <unknown> 3568 32 9 <unknown> 3632 32 9 <unknown> 3696 32 9 <unknown> 3760 32 9 <unknown> 382"
                        "4 32 9 <unknown> 3888 32 9 <unknown> 3952 32 9 <unknown> 4016 32 9 <unknown> 4080 32 9 <unknown>"
                        " 4144 32 9 <unknown> 4208 32 9 <unknown> 4272 32 9 <unknown> 4336 32 9 <unknown> 4400 32 18 trig"
                        "ger_string:408 4464 32 9 <unknown> 4528 32 9 <unknown> 4592 32 9 <unknown> 4656 48 16 reaction_s"
                        "et:238 4736 56 9 <unknown> 4832 56 16 group_id_set:297 4928 56 16 group_id_set:332 5024 56 18 ga"
                        "llery_id_set:373";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewritePlayerExhibitionExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -234753535;
  v5[536862726] = -234753535;
  v5[536862727] = -234753535;
  v5[536862728] = -234753535;
  v5[536862729] = -234556924;
  v5[536862730] = -234556924;
  v5[536862731] = -234556924;
  v5[536862732] = -234556924;
  v5[536862733] = -234556924;
  v5[536862734] = 61956;
  v5[536862734] = -234881024;
  v5[536862735] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = 62194;
  v5[536862737] = -234881024;
  v5[536862738] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = 62194;
  v5[536862742] = -234881024;
  v5[536862743] = 62194;
  v5[536862743] = -234881024;
  v5[536862744] = 62194;
  v5[536862744] = -234881024;
  v5[536862745] = 62194;
  v5[536862745] = -234881024;
  v5[536862746] = 62194;
  v5[536862746] = -234881024;
  v5[536862747] = 62194;
  v5[536862747] = -234881024;
  v5[536862748] = 62194;
  v5[536862748] = -234881024;
  v5[536862749] = 62194;
  v5[536862750] = -218959360;
  v5[536862751] = 62194;
  v5[536862752] = -218959360;
  v5[536862753] = 62194;
  v5[536862754] = -218959360;
  v5[536862755] = 62194;
  v5[536862756] = -218959360;
  v5[536862757] = 62194;
  v5[536862758] = -219021312;
  v5[536862759] = 62194;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862762] = -219021312;
  v5[536862763] = 62194;
  v5[536862764] = -219021312;
  v5[536862765] = 62194;
  v5[536862766] = -219021312;
  v5[536862767] = 62194;
  v5[536862768] = -219021312;
  v5[536862769] = 62194;
  v5[536862770] = -219021312;
  v5[536862771] = 62194;
  v5[536862772] = -219021312;
  v5[536862773] = 62194;
  v5[536862774] = -219021312;
  v5[536862775] = 62194;
  v5[536862776] = -219021312;
  v5[536862777] = 62194;
  v5[536862778] = -219021312;
  v5[536862779] = 62194;
  v5[536862780] = -219021312;
  v5[536862781] = 62194;
  v5[536862782] = -219021312;
  v5[536862783] = 62194;
  v5[536862784] = -219021312;
  v5[536862785] = 62194;
  v5[536862786] = -219021312;
  v5[536862787] = 62194;
  v5[536862788] = -219021312;
  v5[536862789] = 62194;
  v5[536862790] = -219021312;
  v5[536862791] = 62194;
  v5[536862792] = -219021312;
  v5[536862793] = 62194;
  v5[536862794] = -219021312;
  v5[536862795] = 62194;
  v5[536862796] = -219021312;
  v5[536862797] = 62194;
  v5[536862798] = -219021312;
  v5[536862799] = 62194;
  v5[536862800] = -219021312;
  v5[536862801] = 62194;
  v5[536862802] = -219021312;
  v5[536862803] = 62194;
  v5[536862804] = -219021312;
  v5[536862805] = 62194;
  v5[536862806] = -219021312;
  v5[536862807] = 62194;
  v5[536862808] = -219021312;
  v5[536862809] = 62194;
  v5[536862810] = -219021312;
  v5[536862811] = 62194;
  v5[536862812] = -219021312;
  v5[536862813] = 62194;
  v5[536862814] = -219021312;
  v5[536862815] = 62194;
  v5[536862816] = -219021312;
  v5[536862817] = 62194;
  v5[536862818] = -219021312;
  v5[536862819] = 62194;
  v5[536862820] = -219021312;
  v5[536862821] = 62194;
  v5[536862822] = -219021312;
  v5[536862823] = 62194;
  v5[536862824] = -219021312;
  v5[536862825] = 62194;
  v5[536862826] = -219021312;
  v5[536862827] = 62194;
  v5[536862828] = -219021312;
  v5[536862829] = 62194;
  v5[536862830] = -219021312;
  v5[536862831] = 62194;
  v5[536862832] = -219021312;
  v5[536862833] = 62194;
  v5[536862834] = -219021312;
  v5[536862835] = 62194;
  v5[536862836] = -219021312;
  v5[536862837] = 62194;
  v5[536862838] = -219021312;
  v5[536862839] = 62194;
  v5[536862840] = -219021312;
  v5[536862841] = 62194;
  v5[536862842] = -219021312;
  v5[536862843] = 62194;
  v5[536862844] = -219021312;
  v5[536862845] = 62194;
  v5[536862846] = -219021312;
  v5[536862847] = 62194;
  v5[536862848] = -219021312;
  v5[536862849] = 62194;
  v5[536862850] = -219021312;
  v5[536862851] = 62194;
  v5[536862852] = -219021312;
  v5[536862853] = 62194;
  v5[536862854] = -219021312;
  v5[536862855] = 62194;
  v5[536862856] = -219021312;
  v5[536862857] = 62194;
  v5[536862858] = -219021312;
  v5[536862859] = 62194;
  v5[536862860] = -219021312;
  v5[536862861] = 62194;
  v5[536862862] = -219021312;
  v5[536862863] = 62194;
  v5[536862864] = -219021312;
  v5[536862865] = 62194;
  v5[536862867] = -218959118;
  v5[536862869] = -234881024;
  v5[536862870] = -218959118;
  v5[536862872] = -234881024;
  v5[536862873] = -218959118;
  v5[536862875] = -234881024;
  v5[536862876] = -218959118;
  v5[536862878] = -218103808;
  v5[536862879] = -202116109;
  __for_range = &this->player_exhibition_excel_config_map;
  if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 464, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerExhibitionExcelConfig>::iterator *)(v3 + 464) = std::unordered_map<unsigned int,data::PlayerExhibitionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 496, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::PlayerExhibitionExcelConfig>::iterator *)(v3 + 496) = std::unordered_map<unsigned int,data::PlayerExhibitionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false> *)(v3 + 464),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false> *)(v3 + 496)) )
    {
      v10 = 1;
      goto LABEL_327;
    }
    v320 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false,false> *const)(v3 + 464));
    id = std::get<0ul,unsigned int const,data::PlayerExhibitionExcelConfig>(v320);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::PlayerExhibitionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::PlayerExhibitionExcelConfig>(v320);
    v6 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           &this->series_exhibition_map,
           &config->series_id);
    v7 = std::set<unsigned int>::insert(v6, id);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 1200) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1200) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1231) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1200, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1200),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewritePlayerExhibitionExcelConfig",
        107);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 1200),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1AC74300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1200));
      v2 = -1;
      v10 = 0;
      goto LABEL_327;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->replaceable_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->replaceable_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->replaceable_value);
    }
    if ( config->replaceable_value )
    {
      *(_DWORD *)(((v3 + 1264) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1264) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1295) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1264, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1264),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewritePlayerExhibitionExcelConfig",
        113);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1264),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v11, (const char (*)[64])byte_1AC74360);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1264));
      v2 = -1;
      v10 = 0;
      goto LABEL_327;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->accumulable_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->accumulable_value >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->accumulable_value);
    }
    if ( config->accumulable_value )
    {
      *(_DWORD *)(((v3 + 1328) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1328) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1359) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1328, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1328),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewritePlayerExhibitionExcelConfig",
        118);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1328),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v13, (const char (*)[52])byte_1AC743C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1328));
      v2 = -1;
      v10 = 0;
      goto LABEL_327;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->key_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->key_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->key_type);
    }
    key_type = config->key_type;
    if ( key_type == EXHIBITION_KEY_SERVER )
    {
      *(_DWORD *)(((v3 + 1392) >> 3) + 0x7FFF8000) = 0;
      *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1456),
        off_1AC735A0,
        (const std::allocator<char> *)(v3 + 32));
      p_trigger_type = (__int64)&config->trigger_type;
      if ( *(char *)(((v3 + 1392) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1423) >> 3) + 0x7FFF8000) )
      {
        p_trigger_type = 32LL;
        __asan_report_store_n(v3 + 1392, 32LL);
      }
      common::tools::StringUtils::trim(
        (std::string *)(v3 + 1392),
        (const std::string *)p_trigger_type,
        (const std::string *)(v3 + 1456),
        1);
      std::string::~string((void *)(v3 + 1456));
      *(_DWORD *)(((v3 + 1456) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 288, p_trigger_type);
      *(_DWORD *)(v3 + 288) = 0;
      v17 = (const char *)std::string::c_str(v3 + 1392);
      v18 = (char *)(v3 + 288);
      if ( (unsigned int)data::enumStrToVal(v17, v3 + 288) )
      {
        *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1520) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1551) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1520, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1520),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewritePlayerExhibitionExcelConfig",
          130);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1520),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v19,
                (const char (*)[25])"enumStrToVal failed, id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v21,
                (const char (*)[16])", trigger_type:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, &config->trigger_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1520));
        *(_DWORD *)(((v3 + 1520) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v23 = 0;
      }
      else
      {
        v24 = *(unsigned __int8 *)(((v3 + 288) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v24 != 0 && (char)v24 <= 3 )
          __asan_report_load4(v3 + 288);
        switch ( *(_DWORD *)(v3 + 288) )
        {
          case 5:
            if ( std::vector<std::string>::size(&config->trigger_param_list) == 2 )
            {
              *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 304, v18);
              *(_DWORD *)(v3 + 304) = 0;
              *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 320, v18);
              *(_DWORD *)(v3 + 320) = 0;
              v30 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v30, (unsigned int *)(v3 + 304), 1) )
              {
                *(_DWORD *)(((v3 + 1648) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1648) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1679) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1648, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1648),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  146);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1648),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v32 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v31,
                        (const char (*)[32])byte_1AC744E0);
                v33 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                v34 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, v33);
                v35 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v34, (const char (*)[6])", id:");
                v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, id);
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v36,
                        (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1648));
                *(_DWORD *)(((v3 + 1648) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v29 = 0;
              }
              else
              {
                v38 = std::vector<std::string>::operator[](&config->trigger_param_list, 1uLL);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v38, (unsigned int *)(v3 + 320), 1) )
                {
                  *(_DWORD *)(((v3 + 1712) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1712) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1743) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1743) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1712, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1712),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    151);
                  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1712),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v40 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          v39,
                          (const char (*)[34])byte_1AC74560);
                  v41 = std::vector<std::string>::operator[](&config->trigger_param_list, 1uLL);
                  v42 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, v41);
                  v43 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v42, (const char (*)[6])", id:");
                  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
                  v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          v44,
                          (const char (*)[16])", trigger_type:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, &config->trigger_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1712));
                  *(_DWORD *)(((v3 + 1712) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v29 = 0;
                }
                else
                {
                  p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
                  if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v3 + 304);
                  }
                  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v3 + 304));
                  if ( group_script_config_ptr )
                  {
                    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v3 + 320);
                    }
                    v53 = *(unsigned int *)(v3 + 320);
                    if ( GroupScriptConfig::findMonsterConfig(group_script_config_ptr, v53) )
                    {
                      *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v3 + 528, v53);
                      *(std::pair<unsigned int,unsigned int> *)(v3 + 528) = std::make_pair<unsigned int &,unsigned int &>(
                                                                              (unsigned int *)(v3 + 304),
                                                                              (unsigned int *)(v3 + 320));
                      v62 = std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<unsigned int>>>>::operator[](
                              &this->group_config_id_to_exhibition_map,
                              (std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > > >::key_type *)(v3 + 528));
                      v63 = std::set<unsigned int>::insert(v62, id);
                      *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
                      if ( !v63.second )
                      {
                        *(_DWORD *)(((v3 + 1904) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1904) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1935) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 1935) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1904, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1904),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                          "rewritePlayerExhibitionExcelConfig",
                          167);
                        v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 1904),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v65 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                v64,
                                (const char (*)[35])byte_1AC74300);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1904));
                        *(_DWORD *)(((v3 + 1904) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v29 = 0;
                      }
                      else
                      {
                        v29 = 1;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v3 + 1840) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1840) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1871) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1871) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1840, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1840),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                        "rewritePlayerExhibitionExcelConfig",
                        162);
                      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1840),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v55 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                              v54,
                              (const char (*)[25])byte_1AC745C0);
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v55,
                              (const unsigned int *)(v3 + 304));
                      v57 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                              v56,
                              (const char (*)[14])", config_id: ");
                      v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v57,
                              (const unsigned int *)(v3 + 320));
                      v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                              v58,
                              (const char (*)[6])", id:");
                      v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, id);
                      v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              v60,
                              (const char (*)[16])", trigger_type:");
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &config->trigger_type);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1840));
                      *(_DWORD *)(((v3 + 1840) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v29 = 0;
                    }
                  }
                  else
                  {
                    *(_DWORD *)(((v3 + 1776) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1776) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1807) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 1807) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1776, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1776),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      157);
                    v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1776),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v48 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            v47,
                            (const char (*)[25])byte_1AC745C0);
                    v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v48,
                            (const unsigned int *)(v3 + 304));
                    v50 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v49, (const char (*)[6])", id:");
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, id);
                    v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            v51,
                            (const char (*)[16])", trigger_type:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, &config->trigger_type);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1776));
                    *(_DWORD *)(((v3 + 1776) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v29 = 0;
                  }
                }
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1584) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1584) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 1615) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1584, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1584),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                139);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1584),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v25,
                      (const char (*)[25])byte_1AC744A0);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v27,
                      (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1584));
              *(_DWORD *)(((v3 + 1584) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v29 = 0;
            }
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            if ( v29 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 6:
            if ( std::vector<std::string>::empty(&config->trigger_param_list) )
            {
              *(_DWORD *)(((v3 + 1968) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1968) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1999) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 1999) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1968, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1968),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                176);
              v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1968),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v67 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v66,
                      (const char (*)[18])byte_1AC74640);
              v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, id);
              v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v68,
                      (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v69, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1968));
              *(_DWORD *)(((v3 + 1968) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v70 = 0;
            }
            else
            {
              v71 = ((v3 + 944) >> 3) + 2147450880;
              *(_WORD *)v71 = 0;
              *(_BYTE *)(v71 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 944));
              *(_DWORD *)(((v3 + 2032) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 48);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 2032),
                ",",
                (const std::allocator<char> *)(v3 + 48));
              v72 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              v73 = (char *)(v3 + 2032);
              v74 = common::tools::StringUtils::splitToList<unsigned int>(
                      v72,
                      (const std::string *)(v3 + 2032),
                      (std::vector<unsigned int> *)(v3 + 944),
                      0) != 0;
              std::string::~string((void *)(v3 + 2032));
              *(_DWORD *)(((v3 + 2032) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 48);
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
              if ( v74 )
              {
                *(_DWORD *)(((v3 + 2096) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2096) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2127) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2127) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2096, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2096),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  182);
                v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2096),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v76 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        v75,
                        (const char (*)[32])byte_1AC74680);
                v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, id);
                v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v77,
                        (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v78, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2096));
                *(_DWORD *)(((v3 + 2096) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v79 = 0;
              }
              else
              {
                __for_range_0 = (std::vector<unsigned int> *)(v3 + 944);
                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 560, v73);
                *(std::vector<unsigned int>::iterator *)(v3 + 560) = std::vector<unsigned int>::begin(__for_range_0);
                *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 592, v73);
                *(std::vector<unsigned int>::iterator *)(v3 + 592) = std::vector<unsigned int>::end(__for_range_0);
                while ( 1 )
                {
                  v80 = (char *)(v3 + 592);
                  if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 560),
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 592)) )
                  {
                    v91 = 1;
                    goto LABEL_107;
                  }
                  *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 4;
                  v81 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 560));
                  v82 = (int *)v81;
                  if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v81 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v81);
                  }
                  v83 = *v82;
                  v84 = *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000);
                  if ( v84 != 0 && v84 <= 3 )
                  {
                    LOBYTE(v80) = v84 != 0;
                    __asan_report_store4(v3 + 336, v80);
                  }
                  *(_DWORD *)(v3 + 336) = v83;
                  if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                          &txt_config_mgr->monster_config_mgr,
                          *(unsigned int *)(v3 + 336)) )
                  {
                    *(_DWORD *)(((v3 + 2160) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2160) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2191) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2191) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2160, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2160),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      189);
                    v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 2160),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v86 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                            v85,
                            (const char (*)[43])"findMonsterExcelConfig failed, monster_id:");
                    v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v86,
                            (const unsigned int *)(v3 + 336));
                    v88 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v87, (const char (*)[6])", id:");
                    v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, id);
                    v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            v89,
                            (const char (*)[16])", trigger_type:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v90, &config->trigger_type);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2160));
                    *(_DWORD *)(((v3 + 2160) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v91 = 0;
                    goto LABEL_107;
                  }
                  v92 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                          &this->monster_id_to_exhibition_map,
                          (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 336));
                  v93 = std::set<unsigned int>::insert(v92, id);
                  if ( !v93.second )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 560));
                }
                *(_DWORD *)(((v3 + 2224) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2224) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2255) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 2255) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2224, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2224),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  194);
                v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2224),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v95 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        v94,
                        (const char (*)[35])byte_1AC74300);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2224));
                *(_DWORD *)(((v3 + 2224) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v91 = 0;
LABEL_107:
                *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
                v79 = v91 == 1;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 944));
              v70 = v79;
            }
            v96 = ((v3 + 944) >> 3) + 2147450880;
            *(_WORD *)v96 = -1800;
            *(_BYTE *)(v96 + 2) = -8;
            if ( v70 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0xF:
          case 0x10:
          case 0x11:
          case 0x13:
          case 0x14:
            if ( std::vector<std::string>::size(&config->trigger_param_list) )
            {
              *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 352, v18);
              *(_DWORD *)(v3 + 352) = 0;
              v102 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v102, (unsigned int *)(v3 + 352), 1) )
              {
                *(_DWORD *)(((v3 + 2352) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2352) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2383) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2383) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2352, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2352),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  214);
                v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2352),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v104 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                         v103,
                         (const char (*)[38])byte_1AC74760);
                v105 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v104, v105);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2352));
                *(_DWORD *)(((v3 + 2352) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v101 = 0;
              }
              else
              {
                *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 624, v3 + 352);
                *(std::pair<unsigned int,data::ExhibitionServerTriggerType> *)(v3 + 624) = std::make_pair<unsigned int &,data::ExhibitionServerTriggerType &>(
                                                                                             (unsigned int *)(v3 + 352),
                                                                                             (data::ExhibitionServerTriggerType *)(v3 + 288));
                v106 = std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::operator[](
                         &this->param_trigger_type_to_exhibition_map,
                         (std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > >::key_type *)(v3 + 624));
                v107 = std::set<unsigned int>::insert(v106, id);
                *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
                if ( !v107.second )
                {
                  *(_DWORD *)(((v3 + 2416) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 2416) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 2447) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2447) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 2416, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 2416),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    219);
                  v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2416),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v109 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           v108,
                           (const char (*)[42])byte_1AC747C0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2416));
                  *(_DWORD *)(((v3 + 2416) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v101 = 0;
                }
                else
                {
                  v101 = 1;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 2288) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2288) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2319) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2319) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2288, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2288),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                208);
              v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 2288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v98 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      v97,
                      (const char (*)[25])byte_1AC74720);
              v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, id);
              v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v99,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v100, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2288));
              *(_DWORD *)(((v3 + 2288) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v101 = 0;
            }
            *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
            if ( v101 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0x12:
            if ( std::vector<std::string>::size(&config->trigger_param_list) > 1 )
            {
              *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 368, v18);
              *(_DWORD *)(v3 + 368) = 0;
              v115 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v115, (unsigned int *)(v3 + 368), 1) )
              {
                *(_DWORD *)(((v3 + 2544) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2544) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2575) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2575) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2544, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2544),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  234);
                v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2544),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v117 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                         v116,
                         (const char (*)[38])byte_1AC74760);
                v118 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v117, v118);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2544));
                *(_DWORD *)(((v3 + 2544) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v114 = 0;
              }
              else
              {
                v119 = ((v3 + 4656) >> 3) + 2147450880;
                *(_DWORD *)v119 = 0;
                *(_WORD *)(v119 + 4) = 0;
                std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 4656));
                *(_DWORD *)(((v3 + 2608) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 64);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 2608),
                  ",",
                  (const std::allocator<char> *)(v3 + 64));
                v120 = std::vector<std::string>::operator[](&config->trigger_param_list, 1uLL);
                v121 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
                         v120,
                         (const std::string *)(v3 + 2608),
                         (std::set<unsigned int> *)(v3 + 4656),
                         1) != 0;
                std::string::~string((void *)(v3 + 2608));
                *(_DWORD *)(((v3 + 2608) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 64);
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                if ( v121 )
                {
                  *(_DWORD *)(((v3 + 2672) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 2672) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 2703) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2703) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 2672, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 2672),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    241);
                  v122 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2672),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v123 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                           v122,
                           (const char (*)[32])byte_1AC74860);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v123, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2672));
                  *(_DWORD *)(((v3 + 2672) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v124 = 0;
                }
                else
                {
                  *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 656, v3 + 2608);
                  *(std::pair<unsigned int,data::ExhibitionServerTriggerType> *)(v3 + 656) = std::make_pair<unsigned int &,data::ExhibitionServerTriggerType &>(
                                                                                               (unsigned int *)(v3 + 368),
                                                                                               (data::ExhibitionServerTriggerType *)(v3 + 288));
                  v125 = std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::operator[](
                           &this->param_trigger_type_to_exhibition_map,
                           (std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > >::key_type *)(v3 + 656));
                  v126 = std::set<unsigned int>::insert(v125, id);
                  *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = -8;
                  if ( !v126.second )
                  {
                    *(_DWORD *)(((v3 + 2736) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2736) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2767) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 2767) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2736, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2736),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      247);
                    v127 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 2736),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v128 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                             v127,
                             (const char (*)[77])byte_1AC748A0);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v128, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2736));
                    *(_DWORD *)(((v3 + 2736) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v124 = 0;
                  }
                  else
                  {
                    v129 = ((v3 + 4736) >> 3) + 2147450880;
                    *(_DWORD *)v129 = 0;
                    *(_WORD *)(v129 + 4) = 0;
                    *(_BYTE *)(v129 + 6) = 0;
                    std::pair<unsigned int const,std::set<unsigned int>>::pair<std::set<unsigned int>&,true>(
                      (std::pair<unsigned int const,std::set<unsigned int> > *const)(v3 + 4736),
                      id,
                      (std::set<unsigned int> *)(v3 + 4656));
                    v130 = std::unordered_map<unsigned int,std::set<unsigned int>>::insert(
                             &this->exhibiton_to_reaction_map,
                             (std::unordered_map<unsigned int,std::set<unsigned int>>::value_type *)(v3 + 4736));
                    v131 = !v130.second;
                    std::pair<unsigned int const,std::set<unsigned int>>::~pair((std::pair<unsigned int const,std::set<unsigned int> > *const)(v3 + 4736));
                    v132 = ((v3 + 4736) >> 3) + 2147450880;
                    *(_DWORD *)v132 = -117901064;
                    *(_WORD *)(v132 + 4) = -1800;
                    *(_BYTE *)(v132 + 6) = -8;
                    if ( v131 )
                    {
                      *(_DWORD *)(((v3 + 2800) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 2800) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 2831) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 2831) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 2800, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 2800),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                        "rewritePlayerExhibitionExcelConfig",
                        253);
                      v133 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 2800),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v134 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                               v133,
                               (const char (*)[64])byte_1AC74920);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v134, id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2800));
                      *(_DWORD *)(((v3 + 2800) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v124 = 0;
                    }
                    else
                    {
                      v124 = 1;
                    }
                  }
                }
                std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 4656));
                v114 = v124 != 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 2480) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2511) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 2511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                228);
              v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 2480),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v111 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                       v110,
                       (const char (*)[25])byte_1AC74820);
              v112 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, id);
              v113 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v112,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v113, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2480));
              *(_DWORD *)(((v3 + 2480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v114 = 0;
            }
            *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
            v135 = ((v3 + 4656) >> 3) + 2147450880;
            *(_DWORD *)v135 = -117901064;
            *(_WORD *)(v135 + 4) = -1800;
            if ( v114 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0x15:
            if ( std::vector<std::string>::empty(&config->trigger_param_list) )
            {
              *(_DWORD *)(((v3 + 2864) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2864) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2895) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 2895) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2864, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2864),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                262);
              v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 2864),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v137 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                       v136,
                       (const char (*)[18])byte_1AC74640);
              v138 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v137, id);
              v139 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v138,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v139, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2864));
              *(_DWORD *)(((v3 + 2864) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v140 = 0;
            }
            else
            {
              *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 384, v18);
              *(_DWORD *)(v3 + 384) = 0;
              v141 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v141, (unsigned int *)(v3 + 384), 1) )
              {
                *(_DWORD *)(((v3 + 2928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 2959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  269);
                v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2928),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v143 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                         v142,
                         (const char (*)[35])byte_1AC74980);
                v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v143, id);
                v145 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         v144,
                         (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v145, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2928));
                *(_DWORD *)(((v3 + 2928) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v140 = 0;
              }
              else
              {
                p_monster_config_mgr = &txt_config_mgr->monster_config_mgr;
                v147 = *(unsigned __int8 *)(((v3 + 384) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v147 != 0 && (char)v147 <= 3 )
                  __asan_report_load4(v3 + 384);
                if ( data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                       p_monster_config_mgr,
                       *(unsigned int *)(v3 + 384)) )
                {
                  v154 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                           &this->monster_id_to_damage_percentage_map,
                           (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 384));
                  v155 = std::set<unsigned int>::insert(v154, id);
                  if ( !v155.second )
                  {
                    *(_DWORD *)(((v3 + 3056) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 3056) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 3087) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 3087) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 3056, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 3056),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      279);
                    v156 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 3056),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v157 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                             v156,
                             (const char (*)[35])byte_1AC74300);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v157, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3056));
                    *(_DWORD *)(((v3 + 3056) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v140 = 0;
                  }
                  else
                  {
                    v140 = 1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v3 + 2992) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 2992) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 3023) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 3023) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 2992, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 2992),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    274);
                  v148 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2992),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v149 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                           v148,
                           (const char (*)[43])"findMonsterExcelConfig failed, monster_id:");
                  v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v149,
                           (const unsigned int *)(v3 + 384));
                  v151 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v150, (const char (*)[6])", id:");
                  v152 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v151, id);
                  v153 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           v152,
                           (const char (*)[16])", trigger_type:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v153, &config->trigger_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2992));
                  *(_DWORD *)(((v3 + 2992) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v140 = 0;
                }
              }
            }
            *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
            if ( v140 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0x16:
            if ( std::vector<std::string>::empty(&config->trigger_param_list) )
            {
              *(_DWORD *)(((v3 + 3120) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 3120) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 3151) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 3151) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 3120, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 3120),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                288);
              v158 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 3120),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v159 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                       v158,
                       (const char (*)[18])byte_1AC74640);
              v160 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v159, id);
              v161 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v160,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v161, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3120));
              *(_DWORD *)(((v3 + 3120) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v162 = 0;
            }
            else
            {
              v163 = ((v3 + 1008) >> 3) + 2147450880;
              *(_WORD *)v163 = 0;
              *(_BYTE *)(v163 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1008));
              *(_DWORD *)(((v3 + 3184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 80);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 3184),
                ",",
                (const std::allocator<char> *)(v3 + 80));
              v164 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              v165 = common::tools::StringUtils::splitToList<unsigned int>(
                       v164,
                       (const std::string *)(v3 + 3184),
                       (std::vector<unsigned int> *)(v3 + 1008),
                       0) != 0;
              std::string::~string((void *)(v3 + 3184));
              *(_DWORD *)(((v3 + 3184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 80);
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              if ( v165 )
              {
                *(_DWORD *)(((v3 + 3248) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 3248) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 3279) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 3279) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 3248, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 3248),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  294);
                v166 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 3248),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v167 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                         v166,
                         (const char (*)[37])byte_1AC749E0);
                v168 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                v169 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v167, v168);
                v170 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v169, (const char (*)[6])", id:");
                v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v170, id);
                v172 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         v171,
                         (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v172, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3248));
                *(_DWORD *)(((v3 + 3248) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v173 = 0;
              }
              else
              {
                v174 = ((v3 + 4832) >> 3) + 2147450880;
                *(_DWORD *)v174 = 0;
                *(_WORD *)(v174 + 4) = 0;
                *(_BYTE *)(v174 + 6) = 0;
                *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
                std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 128));
                *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
                *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
                M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 1008))._M_current;
                v176 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 1008))._M_current;
                std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                  (std::unordered_set<unsigned int> *const)(v3 + 4832),
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v176,
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                  0LL,
                  (const std::unordered_set<unsigned int>::hasher *)(v3 + 96),
                  (const std::unordered_set<unsigned int>::key_equal *)(v3 + 112),
                  (const std::unordered_set<unsigned int>::allocator_type *)(v3 + 128));
                *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 128));
                *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
                v177 = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v3 + 4832));
                if ( v177 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1008)) )
                {
                  __for_range_1 = (std::vector<unsigned int> *)(v3 + 1008);
                  *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 688, v176);
                  *(std::vector<unsigned int>::iterator *)(v3 + 688) = std::vector<unsigned int>::begin(__for_range_1);
                  *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 720, v176);
                  *(std::vector<unsigned int>::iterator *)(v3 + 720) = std::vector<unsigned int>::end(__for_range_1);
                  while ( 1 )
                  {
                    v186 = (char *)(v3 + 720);
                    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 688),
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 720)) )
                    {
                      v198 = 1;
                      goto LABEL_215;
                    }
                    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 4;
                    v187 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 688));
                    v188 = (int *)v187;
                    if ( *(_BYTE *)(((unsigned __int64)v187 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v187 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v187 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v187);
                    }
                    v189 = *v188;
                    v190 = *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000);
                    if ( v190 != 0 && v190 <= 3 )
                    {
                      LOBYTE(v186) = v190 != 0;
                      __asan_report_store4(v3 + 400, v186);
                    }
                    *(_DWORD *)(v3 + 400) = v189;
                    v191 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
                    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v3 + 400);
                    }
                    if ( !LuaConfigMgr::findGroupScriptConfig(v191, *(_DWORD *)(v3 + 400)) )
                    {
                      *(_DWORD *)(((v3 + 3376) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 3376) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 3407) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 3407) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 3376, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 3376),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                        "rewritePlayerExhibitionExcelConfig",
                        308);
                      v192 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 3376),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v193 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                               v192,
                               (const char (*)[25])byte_1AC745C0);
                      v194 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v193,
                               (const unsigned int *)(v3 + 400));
                      v195 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                               v194,
                               (const char (*)[6])", id:");
                      v196 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v195, id);
                      v197 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               v196,
                               (const char (*)[16])", trigger_type:");
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v197, &config->trigger_type);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3376));
                      *(_DWORD *)(((v3 + 3376) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v198 = 0;
                      goto LABEL_215;
                    }
                    v199 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                             &this->group_id_to_exhibition_map,
                             (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 400));
                    v200 = std::set<unsigned int>::insert(v199, id);
                    if ( !v200.second )
                      break;
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 688));
                  }
                  *(_DWORD *)(((v3 + 3440) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 3440) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 3471) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 3471) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 3440, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 3440),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    313);
                  v201 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 3440),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v202 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                           v201,
                           (const char (*)[35])byte_1AC74300);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v202, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3440));
                  *(_DWORD *)(((v3 + 3440) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v198 = 0;
LABEL_215:
                  *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 688) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 720) >> 3) + 0x7FFF8000) = -8;
                  v185 = v198 == 1;
                }
                else
                {
                  *(_DWORD *)(((v3 + 3312) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 3312) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 3343) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 3343) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 3312, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 3312),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    300);
                  v178 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 3312),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v179 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                           v178,
                           (const char (*)[31])byte_1AC74A40);
                  v180 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                  v181 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v179, v180);
                  v182 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v181, (const char (*)[6])", id:");
                  v183 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v182, id);
                  v184 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           v183,
                           (const char (*)[16])", trigger_type:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v184, &config->trigger_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3312));
                  *(_DWORD *)(((v3 + 3312) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v185 = 0;
                }
                std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 4832));
                v173 = v185;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1008));
              v162 = v173;
            }
            v203 = ((v3 + 1008) >> 3) + 2147450880;
            *(_WORD *)v203 = -1800;
            *(_BYTE *)(v203 + 2) = -8;
            v204 = ((v3 + 4832) >> 3) + 2147450880;
            *(_DWORD *)v204 = -117901064;
            *(_WORD *)(v204 + 4) = -1800;
            *(_BYTE *)(v204 + 6) = -8;
            if ( v162 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0x17:
            if ( std::vector<std::string>::size(&config->trigger_param_list) == 2 )
            {
              v210 = ((v3 + 1072) >> 3) + 2147450880;
              *(_WORD *)v210 = 0;
              *(_BYTE *)(v210 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1072));
              *(_DWORD *)(((v3 + 3568) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 3568),
                ",",
                (const std::allocator<char> *)(v3 + 144));
              v211 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              v212 = common::tools::StringUtils::splitToList<unsigned int>(
                       v211,
                       (const std::string *)(v3 + 3568),
                       (std::vector<unsigned int> *)(v3 + 1072),
                       0) != 0;
              std::string::~string((void *)(v3 + 3568));
              *(_DWORD *)(((v3 + 3568) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 144);
              *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( v212 )
              {
                *(_DWORD *)(((v3 + 3632) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 3632) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 3663) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 3663) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 3632, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 3632),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  329);
                v213 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 3632),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v214 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                         v213,
                         (const char (*)[37])byte_1AC749E0);
                v215 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                v216 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v214, v215);
                v217 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v216, (const char (*)[6])", id:");
                v218 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v217, id);
                v219 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         v218,
                         (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v219, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3632));
                *(_DWORD *)(((v3 + 3632) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v220 = 0;
              }
              else
              {
                v221 = ((v3 + 4928) >> 3) + 2147450880;
                *(_DWORD *)v221 = 0;
                *(_WORD *)(v221 + 4) = 0;
                *(_BYTE *)(v221 + 6) = 0;
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 1;
                std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 192));
                *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 1;
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 1;
                v222 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 1072))._M_current;
                v223 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 1072))._M_current;
                std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                  (std::unordered_set<unsigned int> *const)(v3 + 4928),
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v223,
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v222,
                  0LL,
                  (const std::unordered_set<unsigned int>::hasher *)(v3 + 160),
                  (const std::unordered_set<unsigned int>::key_equal *)(v3 + 176),
                  (const std::unordered_set<unsigned int>::allocator_type *)(v3 + 192));
                *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
                std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 192));
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                v224 = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v3 + 4928));
                if ( v224 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1072)) )
                {
                  *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 416, v223);
                  }
                  *(_DWORD *)(v3 + 416) = 0;
                  v233 = std::vector<std::string>::operator[](&config->trigger_param_list, 1uLL);
                  v234 = (char *)(v3 + 416);
                  if ( common::tools::StringUtils::strToNum<unsigned int>(v233, (unsigned int *)(v3 + 416), 1) )
                  {
                    *(_DWORD *)(((v3 + 3760) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 3760) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 3791) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 3791) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 3760, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 3760),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      341);
                    v235 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 3760),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v236 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                             v235,
                             (const char (*)[22])byte_1AC74A80);
                    v237 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v236, id);
                    v238 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             v237,
                             (const char (*)[16])", trigger_type:");
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v238, &config->trigger_type);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3760));
                    *(_DWORD *)(((v3 + 3760) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v232 = 0;
                  }
                  else
                  {
                    __for_range_2 = (std::vector<unsigned int> *)(v3 + 1072);
                    *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 752, v234);
                    *(std::vector<unsigned int>::iterator *)(v3 + 752) = std::vector<unsigned int>::begin(__for_range_2);
                    *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 784, v234);
                    *(std::vector<unsigned int>::iterator *)(v3 + 784) = std::vector<unsigned int>::end(__for_range_2);
                    while ( 1 )
                    {
                      v239 = (char *)(v3 + 784);
                      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 752),
                              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 784)) )
                      {
                        v251 = 1;
                        goto LABEL_260;
                      }
                      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 4;
                      v240 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 752));
                      v241 = (int *)v240;
                      if ( *(_BYTE *)(((unsigned __int64)v240 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v240 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v240 >> 3)
                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_load4(v240);
                      }
                      v242 = *v241;
                      v243 = *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000);
                      if ( v243 != 0 && v243 <= 3 )
                      {
                        LOBYTE(v239) = v243 != 0;
                        __asan_report_store4(v3 + 432, v239);
                      }
                      *(_DWORD *)(v3 + 432) = v242;
                      v244 = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
                      if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(v3 + 432);
                      }
                      if ( !LuaConfigMgr::findGroupScriptConfig(v244, *(_DWORD *)(v3 + 432)) )
                      {
                        *(_DWORD *)(((v3 + 3824) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 3824) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 3855) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 3855) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 3824, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 3824),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                          "rewritePlayerExhibitionExcelConfig",
                          349);
                        v245 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 3824),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v246 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                 v245,
                                 (const char (*)[25])byte_1AC745C0);
                        v247 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                 v246,
                                 (const unsigned int *)(v3 + 432));
                        v248 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                                 v247,
                                 (const char (*)[6])", id:");
                        v249 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v248, id);
                        v250 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 v249,
                                 (const char (*)[16])", trigger_type:");
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v250, &config->trigger_type);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3824));
                        *(_DWORD *)(((v3 + 3824) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v251 = 0;
                        goto LABEL_260;
                      }
                      v252 = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::operator[](
                               &this->group_id_to_exhibition_time_map,
                               (const std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::key_type *)(v3 + 432));
                      *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
                      std::pair<unsigned int,unsigned int>::pair<unsigned int &,true>(
                        (std::pair<unsigned int,unsigned int> *const)(v3 + 816),
                        id,
                        (unsigned int *)(v3 + 416));
                      v253 = std::set<std::pair<unsigned int,unsigned int>>::insert(
                               v252,
                               (std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v3 + 816));
                      *(_BYTE *)(((v3 + 816) >> 3) + 0x7FFF8000) = -8;
                      if ( !v253.second )
                        break;
                      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 752));
                    }
                    *(_DWORD *)(((v3 + 3888) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 3888) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 3919) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 3919) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 3888, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 3888),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                      "rewritePlayerExhibitionExcelConfig",
                      354);
                    v254 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 3888),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v255 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                             v254,
                             (const char (*)[35])byte_1AC74300);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v255, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3888));
                    *(_DWORD *)(((v3 + 3888) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v251 = 0;
LABEL_260:
                    *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 752) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 784) >> 3) + 0x7FFF8000) = -8;
                    v232 = v251 == 1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v3 + 3696) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 3696) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 3727) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 3727) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 3696, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 3696),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    335);
                  v225 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 3696),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v226 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                           v225,
                           (const char (*)[31])byte_1AC74A40);
                  v227 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                  v228 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v226, v227);
                  v229 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v228, (const char (*)[6])", id:");
                  v230 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v229, id);
                  v231 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           v230,
                           (const char (*)[16])", trigger_type:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v231, &config->trigger_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3696));
                  *(_DWORD *)(((v3 + 3696) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v232 = 0;
                }
                std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 4928));
                v220 = v232;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1072));
              v209 = v220;
            }
            else
            {
              *(_DWORD *)(((v3 + 3504) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 3504) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 3535) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 3535) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 3504, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 3504),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                323);
              v205 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 3504),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v206 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                       v205,
                       (const char (*)[25])byte_1AC744A0);
              v207 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v206, id);
              v208 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v207,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v208, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3504));
              *(_DWORD *)(((v3 + 3504) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v209 = 0;
            }
            v256 = ((v3 + 1072) >> 3) + 2147450880;
            *(_WORD *)v256 = -1800;
            *(_BYTE *)(v256 + 2) = -8;
            v257 = ((v3 + 4928) >> 3) + 2147450880;
            *(_DWORD *)v257 = -117901064;
            *(_WORD *)(v257 + 4) = -1800;
            *(_BYTE *)(v257 + 6) = -8;
            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
            if ( v209 )
              goto LABEL_306;
            v23 = 0;
            break;
          case 0x19:
            if ( std::vector<std::string>::empty(&config->trigger_param_list) )
            {
              *(_DWORD *)(((v3 + 3952) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 3952) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 3983) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 3983) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 3952, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 3952),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                364);
              v258 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 3952),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v259 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                       v258,
                       (const char (*)[18])byte_1AC74640);
              v260 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v259, id);
              v261 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       v260,
                       (const char (*)[16])", trigger_type:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v261, &config->trigger_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3952));
              *(_DWORD *)(((v3 + 3952) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v262 = 0;
            }
            else
            {
              v263 = ((v3 + 1136) >> 3) + 2147450880;
              *(_WORD *)v263 = 0;
              *(_BYTE *)(v263 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 1136));
              *(_DWORD *)(((v3 + 4016) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 208);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 4016),
                ",",
                (const std::allocator<char> *)(v3 + 208));
              v264 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
              v265 = common::tools::StringUtils::splitToList<unsigned int>(
                       v264,
                       (const std::string *)(v3 + 4016),
                       (std::vector<unsigned int> *)(v3 + 1136),
                       0) != 0;
              std::string::~string((void *)(v3 + 4016));
              *(_DWORD *)(((v3 + 4016) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 208);
              *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
              if ( v265 )
              {
                *(_DWORD *)(((v3 + 4080) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 4080) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 4111) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 4111) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 4080, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 4080),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                  "rewritePlayerExhibitionExcelConfig",
                  370);
                v266 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 4080),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v267 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                         v266,
                         (const char (*)[41])byte_1AC74AC0);
                v268 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                v269 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v267, v268);
                v270 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v269, (const char (*)[6])", id:");
                v271 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v270, id);
                v272 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         v271,
                         (const char (*)[16])", trigger_type:");
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v272, &config->trigger_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4080));
                *(_DWORD *)(((v3 + 4080) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v273 = 0;
              }
              else
              {
                v274 = ((v3 + 5024) >> 3) + 2147450880;
                *(_DWORD *)v274 = 0;
                *(_WORD *)(v274 + 4) = 0;
                *(_BYTE *)(v274 + 6) = 0;
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 1;
                std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v3 + 256));
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 1;
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 1;
                v275 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 1136))._M_current;
                v276 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 1136))._M_current;
                std::unordered_set<unsigned int>::unordered_set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
                  (std::unordered_set<unsigned int> *const)(v3 + 5024),
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v276,
                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v275,
                  0LL,
                  (const std::unordered_set<unsigned int>::hasher *)(v3 + 224),
                  (const std::unordered_set<unsigned int>::key_equal *)(v3 + 240),
                  (const std::unordered_set<unsigned int>::allocator_type *)(v3 + 256));
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
                std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v3 + 256));
                *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
                v277 = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v3 + 5024));
                if ( v277 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 1136)) )
                {
                  __for_range_3 = (std::unordered_set<unsigned int> *)(v3 + 5024);
                  *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 848, v276);
                  *(std::unordered_set<unsigned int>::iterator *)(v3 + 848) = std::unordered_set<unsigned int>::begin(__for_range_3);
                  *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 880, v276);
                  *(std::unordered_set<unsigned int>::iterator *)(v3 + 880) = std::unordered_set<unsigned int>::end(__for_range_3);
                  while ( 1 )
                  {
                    v286 = (char *)(v3 + 880);
                    if ( !std::__detail::operator!=<unsigned int,false>(
                            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 848),
                            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 880)) )
                    {
                      v297 = 1;
                      goto LABEL_297;
                    }
                    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 4;
                    v287 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v3 + 848));
                    v288 = (int *)v287;
                    if ( *(_BYTE *)(((unsigned __int64)v287 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v287 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v287 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v287);
                    }
                    v289 = *v288;
                    v290 = *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000);
                    if ( v290 != 0 && v290 <= 3 )
                    {
                      LOBYTE(v286) = v290 != 0;
                      __asan_report_store4(v3 + 448, v286);
                    }
                    *(_DWORD *)(v3 + 448) = v289;
                    if ( !data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                            &txt_config_mgr->gallery_config_mgr,
                            *(unsigned int *)(v3 + 448)) )
                    {
                      *(_DWORD *)(((v3 + 4208) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 4208) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 4239) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 4239) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 4208, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 4208),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                        "rewritePlayerExhibitionExcelConfig",
                        383);
                      v291 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 4208),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v292 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                               v291,
                               (const char (*)[43])"findGalleryExcelConfig failed, gallery_id:");
                      v293 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v292,
                               (const unsigned int *)(v3 + 448));
                      v294 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
                               v293,
                               (const char (*)[6])", id:");
                      v295 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v294, id);
                      v296 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               v295,
                               (const char (*)[16])", trigger_type:");
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v296, &config->trigger_type);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4208));
                      *(_DWORD *)(((v3 + 4208) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v297 = 0;
                      goto LABEL_297;
                    }
                    v298 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                             &this->gallery_id_to_exhibition_map,
                             (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 448));
                    v299 = std::set<unsigned int>::insert(v298, id);
                    if ( !v299.second )
                      break;
                    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v3 + 848));
                  }
                  *(_DWORD *)(((v3 + 4272) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 4272) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 4303) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 4303) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 4272, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 4272),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    388);
                  v300 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 4272),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v301 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                           v300,
                           (const char (*)[35])byte_1AC74300);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v301, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4272));
                  *(_DWORD *)(((v3 + 4272) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v297 = 0;
LABEL_297:
                  *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 848) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000) = -8;
                  v285 = v297 == 1;
                }
                else
                {
                  *(_DWORD *)(((v3 + 4144) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 4144) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 4175) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 4175) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 4144, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 4144),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                    "rewritePlayerExhibitionExcelConfig",
                    376);
                  v278 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 4144),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v279 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                           v278,
                           (const char (*)[35])byte_1AC74B20);
                  v280 = std::vector<std::string>::operator[](&config->trigger_param_list, 0LL);
                  v281 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v279, v280);
                  v282 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v281, (const char (*)[6])", id:");
                  v283 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v282, id);
                  v284 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           v283,
                           (const char (*)[16])", trigger_type:");
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v284, &config->trigger_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4144));
                  *(_DWORD *)(((v3 + 4144) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v285 = 0;
                }
                std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v3 + 5024));
                v273 = v285;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 1136));
              v262 = v273;
            }
            v302 = ((v3 + 1136) >> 3) + 2147450880;
            *(_WORD *)v302 = -1800;
            *(_BYTE *)(v302 + 2) = -8;
            v303 = ((v3 + 5024) >> 3) + 2147450880;
            *(_DWORD *)v303 = -117901064;
            *(_WORD *)(v303 + 4) = -1800;
            *(_BYTE *)(v303 + 6) = -8;
            if ( v262 )
              goto LABEL_306;
            v23 = 0;
            break;
          default:
            v304 = std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::operator[](
                     &this->server_trigger_exhibition_map,
                     (const std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::key_type *)(v3 + 288));
            v305 = std::set<unsigned int>::insert(v304, id);
            if ( !v305.second )
            {
              *(_DWORD *)(((v3 + 4336) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 4336) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 4367) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 4367) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 4336, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 4336),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "rewritePlayerExhibitionExcelConfig",
                398);
              v306 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 4336),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v307 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                       v306,
                       (const char (*)[35])byte_1AC74300);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v307, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4336));
              *(_DWORD *)(((v3 + 4336) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v23 = 0;
            }
            else
            {
LABEL_306:
              v23 = 1;
            }
            break;
        }
      }
      std::string::~string((void *)(v3 + 1392));
      *(_DWORD *)(((v3 + 1392) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( !v23 )
      {
        v10 = 0;
        goto LABEL_327;
      }
      goto LABEL_325;
    }
    if ( key_type != EXHIBITION_KEY_LUA )
      break;
    *(_DWORD *)(((v3 + 4400) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v3 + 4464) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v3 + 272);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v3 + 4464),
      off_1AC735A0,
      (const std::allocator<char> *)(v3 + 272));
    v308 = (__int64)&config->trigger_type;
    if ( *(char *)(((v3 + 4400) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 4431) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 4431) >> 3) + 0x7FFF8000) )
    {
      v308 = 32LL;
      __asan_report_store_n(v3 + 4400, 32LL);
    }
    common::tools::StringUtils::trim(
      (std::string *)(v3 + 4400),
      (const std::string *)v308,
      (const std::string *)(v3 + 4464),
      1);
    std::string::~string((void *)(v3 + 4464));
    *(_DWORD *)(((v3 + 4464) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v3 + 272);
    *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
    v309 = std::unordered_map<std::string,std::set<unsigned int>>::operator[](
             &this->lua_trigger_exhibition_map,
             (const std::unordered_map<std::string,std::set<unsigned int>>::key_type *)(v3 + 4400));
    v310 = std::set<unsigned int>::insert(v309, id);
    if ( !v310.second )
    {
      *(_DWORD *)(((v3 + 4528) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 4528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 4559) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 4559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 4528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 4528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewritePlayerExhibitionExcelConfig",
        411);
      v311 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 4528),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v312 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v311, (const char (*)[35])byte_1AC74300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v312, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4528));
      *(_DWORD *)(((v3 + 4528) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v313 = 0;
    }
    else
    {
      v313 = 1;
    }
    std::string::~string((void *)(v3 + 4400));
    *(_DWORD *)(((v3 + 4400) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v313 )
    {
      v10 = 0;
      goto LABEL_327;
    }
LABEL_325:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::PlayerExhibitionExcelConfig>,false,false> *const)(v3 + 464));
  }
  *(_DWORD *)(((v3 + 4592) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 4592) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 4623) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 4623) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 4592, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 4592),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "rewritePlayerExhibitionExcelConfig",
    418);
  v314 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 4592),
           (const char (*)[16])"[CONFIG_ERROR] ");
  v315 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           v314,
           (const char (*)[22])"unsupported key_type:");
  *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&config->key_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->key_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->key_type);
  }
  v316 = (__int64)data::enumValToStr(config->key_type, (__int64)"unsupported key_type:");
  if ( *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) )
    v316 = __asan_report_store8(v3 + 912, "unsupported key_type:");
  *(_QWORD *)(v3 + 912) = v316;
  common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v315, (const char *const *)(v3 + 912));
  *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4592));
  v2 = -1;
  v10 = 0;
LABEL_327:
  if ( v10 == 1 )
    v2 = 0;
  if ( v328 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8278) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 640) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_7(v3, 5120LL, v328);
  }
  return v2;
};

// Line 427: range 0000000013AB3C9A-0000000013AB4374
int32_t __cdecl ExhibitionExcelConfigMgr::checkPlayerExhibitionExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *v6; // rsi
  ExhibitionExcelConfigMgr *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+10h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v20; // [rsp+18h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *series_id; // [rsp+20h] [rbp-180h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *id_set; // [rsp+28h] [rbp-178h]
  std::unordered_map<std::string,std::set<unsigned int>> *__for_range_0; // [rsp+30h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true>::reference v24; // [rsp+38h] [rbp-168h]
  std::tuple_element<0,std::pair<const std::string,std::set<unsigned int> > >::type *lua_trigger_key; // [rsp+40h] [rbp-160h]
  std::tuple_element<1,const std::pair<const std::string,std::set<unsigned int> > >::type *id_set_0; // [rsp+48h] [rbp-158h]
  char v27[336]; // [rsp+50h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:429 64 8 13 __for_end:429 96 8 15 __for_begin:438 128 8 13 __for_end:438 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkPlayerExhibitionExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->series_exhibition_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_18;
    }
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
    series_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v20);
    id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v20);
    v7 = this;
    if ( *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)series_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(series_id);
    }
    if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(v7, *series_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "checkPlayerExhibitionExcelConfig",
    433);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 160),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v8, (const char (*)[52])byte_1AC74D60);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, series_id);
  v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v10, (const char (*)[18])byte_1AC74DC0);
  v6 = id_set;
  common::milog::MiLogStream::operator<<<unsigned int>(v11, id_set);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v12 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v12 == 1 )
  {
    __for_range_0 = &this->lua_trigger_exhibition_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<std::string,std::set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<std::string,std::set<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<std::string,std::set<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<std::string,std::set<unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<std::string const,std::set<unsigned int>>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true> *)(v3 + 128)) )
      {
        v17 = 1;
        goto LABEL_31;
      }
      v24 = std::__detail::_Node_iterator<std::pair<std::string const,std::set<unsigned int>>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *const)(v3 + 96));
      lua_trigger_key = std::get<0ul,std::string const,std::set<unsigned int>>(v24);
      id_set_0 = (std::tuple_element<1,const std::pair<const std::string,std::set<unsigned int> > >::type *)std::get<1ul,std::string const,std::set<unsigned int>>(v24);
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<std::string,unsigned int>,std::string>(
              &this->lua_trigger_key_map,
              lua_trigger_key) )
        break;
      std::__detail::_Node_iterator<std::pair<std::string const,std::set<unsigned int>>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkPlayerExhibitionExcelConfig",
      442);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v13, (const char (*)[64])byte_1AC74E00);
    v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, lua_trigger_key);
    v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v15, (const char (*)[18])byte_1AC74DC0);
    common::milog::MiLogStream::operator<<<unsigned int>(v16, id_set_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    v2 = -1;
    v17 = 0;
LABEL_31:
    if ( v17 == 1 )
      v2 = 0;
  }
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 450: range 0000000013AB4376-0000000013AB5A49
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionSeriesExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  int series_type; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::set<unsigned int> *v19; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  char *v26; // rsi
  bool v27; // r15
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  _BOOL4 v30; // r15d
  char *v31; // rsi
  unsigned int *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  const unsigned int *v36; // r8
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  unsigned __int64 v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  __int64 v50; // rsi
  __int64 v51; // rax
  data::ExhibitionSeriesExcelConfigMap *__for_range; // [rsp+28h] [rbp-418h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false,false>::reference v55; // [rsp+30h] [rbp-410h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig> >::type *id; // [rsp+38h] [rbp-408h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig> >::type *config; // [rsp+40h] [rbp-400h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-3F8h]
  char v59[1008]; // [rsp+50h] [rbp-3F0h] BYREF

  v3 = (unsigned __int64)v59;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(960LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 1 9 <unknown> 48 4 15 activity_id:463 64 4 14 dungeon_id:489 80 8 15 __for_begin:452 112 8"
                        " 13 __for_end:452 144 8 15 __for_begin:489 176 8 13 __for_end:489 208 8 9 <unknown> 240 32 9 <un"
                        "known> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 32 9 <unk"
                        "nown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 32 9 <unknown> 880 48 18 dungeon_id_set:483";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewriteExhibitionSeriesExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862749] = -202116109;
  __for_range = &this->exhibition_series_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionSeriesExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ExhibitionSeriesExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionSeriesExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::ExhibitionSeriesExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false> *)(v3 + 112)) )
    {
      v8 = 1;
      goto LABEL_82;
    }
    v55 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false,false> *const)(v3 + 80));
    id = std::get<0ul,unsigned int const,data::ExhibitionSeriesExcelConfig>(v55);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionSeriesExcelConfig>(v55);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    if ( !*id )
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewriteExhibitionSeriesExcelConfig",
        456);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v6, (const char (*)[48])byte_1AC75060);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      v2 = -1;
      v8 = 0;
      goto LABEL_82;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->series_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->series_type);
    }
    series_type = config->series_type;
    if ( series_type == 3 )
      break;
    if ( series_type > 3 )
      goto LABEL_73;
    if ( series_type == 1 )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, (((_BYTE)config + 12) & 7u) + 3);
      *(_DWORD *)(v3 + 48) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(&config->series_param, (unsigned int *)(v3 + 48), 1) )
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionSeriesExcelConfig",
          466);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v10, (const char (*)[48])byte_1AC75060);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
        v14 = *(unsigned __int8 *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v14 != 0 && (char)v14 <= 3 )
          __asan_report_load4(v3 + 48);
        if ( data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
               p_new_activity_config_mgr,
               *(unsigned int *)(v3 + 48)) )
        {
          v19 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->activity_series_map_,
                  (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
          v20 = std::set<unsigned int>::insert(v19, id);
          if ( !v20.second )
          {
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 432, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "rewriteExhibitionSeriesExcelConfig",
              476);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    v21,
                    (const char (*)[66])byte_1AC75160);
            v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
            v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v23,
                    (const char (*)[12])byte_1AC75120);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &config->series_param);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 368, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 368),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "rewriteExhibitionSeriesExcelConfig",
            471);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v15, (const char (*)[51])byte_1AC750C0);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
          v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])byte_1AC75120);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, &config->series_param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v12 )
      {
        v8 = 0;
        goto LABEL_82;
      }
    }
    else
    {
      if ( series_type != 2 )
      {
LABEL_73:
        *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 847) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 816, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 816),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionSeriesExcelConfig",
          515);
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 816),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v49 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v48,
                (const char (*)[25])"unsupported series_type:");
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
        v50 = (((_BYTE)config + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&config->series_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_type >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->series_type);
        }
        v51 = (__int64)data::enumValToStr(config->series_type, v50);
        if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
          v51 = __asan_report_store8(v3 + 208, v50);
        *(_QWORD *)(v3 + 208) = v51;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v49, (const char *const *)(v3 + 208));
        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
        v2 = -1;
        v8 = 0;
        goto LABEL_82;
      }
      v25 = ((v3 + 880) >> 3) + 2147450880;
      *(_DWORD *)v25 = 0;
      *(_WORD *)(v25 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 880));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 496),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      v26 = (char *)(v3 + 496);
      v27 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
              &config->series_param,
              (const std::string *)(v3 + 496),
              (std::set<unsigned int> *)(v3 + 880),
              1) != 0;
      std::string::~string((void *)(v3 + 496));
      *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v27 )
      {
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 560, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 560),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionSeriesExcelConfig",
          486);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 560),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v28, (const char (*)[48])byte_1AC75060);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
        *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v30 = 0;
      }
      else
      {
        __for_range_0 = (std::set<unsigned int> *)(v3 + 880);
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, v26);
        *(std::set<unsigned int>::iterator *)(v3 + 144) = std::set<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 176, v26);
        *(std::set<unsigned int>::iterator *)(v3 + 176) = std::set<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v31 = (char *)(v3 + 176);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 144),
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 176)) )
          {
            v39 = 1;
            goto LABEL_66;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v32 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 144));
          v33 = (int *)v32;
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v32);
          }
          v34 = *v33;
          v35 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v35 != 0 && v35 <= 3 )
          {
            LOBYTE(v31) = v35 != 0;
            __asan_report_store4(v3 + 64, v31);
          }
          *(_DWORD *)(v3 + 64) = v34;
          if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                  &txt_config_mgr->dungeon_config_mgr,
                  *(unsigned int *)(v3 + 64)) )
          {
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 624, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 624),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "rewriteExhibitionSeriesExcelConfig",
              493);
            v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 624),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v38 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    v37,
                    (const char (*)[28])byte_1AC751E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
            *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v39 = 0;
            goto LABEL_66;
          }
          v40 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
                  &this->dungeon_series_map_,
                  (unsigned int *)(v3 + 64),
                  id,
                  (unsigned int *)&this->dungeon_series_map_,
                  v36);
          if ( !v40.second )
            break;
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 144));
        }
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 688, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 688),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionSeriesExcelConfig",
          498);
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 688),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v42 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v41, (const char (*)[68])byte_1AC75220);
        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
        v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v43, (const char (*)[12])byte_1AC75120);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, &config->series_param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
        *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v39 = 0;
LABEL_66:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
        v30 = v39 == 1;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 880));
      v45 = ((v3 + 880) >> 3) + 2147450880;
      *(_DWORD *)v45 = -117901064;
      *(_WORD *)(v45 + 4) = -1800;
      if ( !v30 )
      {
        v8 = 0;
        goto LABEL_82;
      }
    }
LABEL_80:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionSeriesExcelConfig>,false,false> *const)(v3 + 80));
  }
  if ( (unsigned __int8)std::string::empty() == 1 )
    goto LABEL_80;
  *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 752, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 752),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "rewriteExhibitionSeriesExcelConfig",
    508);
  v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 752),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v47 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v46, (const char (*)[78])byte_1AC752A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
  v2 = -1;
  v8 = 0;
LABEL_82:
  if ( v8 == 1 )
    v2 = 0;
  if ( v59 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 524: range 0000000013AB5A4A-0000000013AB5A5C
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionSeriesExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 529: range 0000000013AB5A5E-0000000013AB652B
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionCardExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::pair<unsigned int const,data::ExhibitionCardExcelConfig> *v6; // rax
  ExhibitionExcelConfigMgr *v7; // rcx
  uint32_t *p_display_id; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  uint32_t series_id; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::set<unsigned int> *v25; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int v29; // eax
  int32_t result; // eax
  uint32_t param_num; // [rsp+2Ch] [rbp-1F4h]
  data::ExhibitionCardExcelConfigMap *__for_range; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExhibitionCardExcelConfig> >::type *id; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionCardExcelConfig> >::type *config; // [rsp+40h] [rbp-1E0h]
  data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+48h] [rbp-1D8h]
  char v36[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:530 64 8 13 __for_end:530 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewriteExhibitionCardExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->exhibition_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionCardExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ExhibitionCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionCardExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ExhibitionCardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false> *)(v3 + 64)) )
  {
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false,false> *const)(v3 + 32));
    std::pair<unsigned int const,data::ExhibitionCardExcelConfig>::pair(
      (std::pair<unsigned int const,data::ExhibitionCardExcelConfig> *const)(v3 + 96),
      v6);
    id = std::get<0ul,unsigned int const,data::ExhibitionCardExcelConfig>((const std::pair<unsigned int const,data::ExhibitionCardExcelConfig> *)(v3 + 96));
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionCardExcelConfig>((const std::pair<unsigned int const,data::ExhibitionCardExcelConfig> *)(v3 + 96));
    v7 = this;
    p_display_id = &config->display_id;
    if ( *(_BYTE *)(((unsigned __int64)p_display_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_display_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_display_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(v7, config->display_id);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)display_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&display_config_ptr->series_id);
      }
      series_id = display_config_ptr->series_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->series_id);
      }
      if ( series_id == config->series_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->display_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->display_id);
        }
        param_num = ExhibitionExcelConfigMgr::getDisplayParamNum(this, config->display_id);
        if ( *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->display_param_order);
        }
        if ( param_num >= config->display_param_order )
        {
          v25 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->series_to_card_map,
                  &config->series_id);
          v26 = std::set<unsigned int>::insert(v25, id);
          if ( !v26.second )
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
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "rewriteExhibitionCardExcelConfig",
              553);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v27,
                    (const char (*)[30])"duplicate exhibition card_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
            *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
          else
          {
            v13 = 1;
          }
        }
        else
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "rewriteExhibitionCardExcelConfig",
            548);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v19, (const char (*)[59])byte_1AC75560);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])", display_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->display_id);
          v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])", order:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->display_param_order);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionCardExcelConfig",
          540);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                v15,
                (const char (*)[56])"card series_id is not equal display series_id, card_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", display_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->display_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewriteExhibitionCardExcelConfig",
        535);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              v9,
              (const char (*)[42])"findExhibitionDisplayExcelConfig card_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->display_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    std::pair<unsigned int const,data::ExhibitionCardExcelConfig>::~pair((std::pair<unsigned int const,data::ExhibitionCardExcelConfig> *const)(v3 + 96));
    if ( v13 != 1 )
    {
      v29 = 0;
      goto LABEL_41;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionCardExcelConfig>,false,false> *const)(v3 + 32));
  }
  v29 = 1;
LABEL_41:
  if ( v29 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 562: range 0000000013AB652C-0000000013AB68C3
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionCardExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ExhibitionExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v13; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *series_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *card_set; // [rsp+30h] [rbp-E0h]
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:563 64 8 13 __for_end:563 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkExhibitionCardExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->series_to_card_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
    series_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v13);
    card_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v13);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)series_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(series_id);
    }
    if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(v6, *series_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
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
    3u,
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "checkExhibitionCardExcelConfig",
    568);
  v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, series_id);
  v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])", card_id:");
  common::milog::MiLogStream::operator<<<unsigned int>(v9, card_set);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 576: range 0000000013AB68C4-0000000013AB7419
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionScoreExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> *v7; // rax
  ExhibitionExcelConfigMgr *v8; // rcx
  uint32_t *p_display_id; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  uint32_t series_id; // ecx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::set<unsigned int> *v26; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int v30; // eax
  int32_t result; // eax
  uint32_t param_num; // [rsp+2Ch] [rbp-214h]
  data::ExhibitionScoreExcelConfigMap *__for_range; // [rsp+30h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> >::type *id; // [rsp+38h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> >::type *config; // [rsp+40h] [rbp-200h]
  data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+48h] [rbp-1F8h]
  char v37[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 8 15 __for_begin:577 80 8 13 __for_end:577 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <"
                        "unknown> 304 32 9 <unknown> 368 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewriteExhibitionScoreExcelConfig;
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
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  __for_range = &this->exhibition_score_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionScoreExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ExhibitionScoreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionScoreExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ExhibitionScoreExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false> *)(v3 + 80)) )
  {
    v6 = ((v3 + 368) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false,false> *const)(v3 + 48));
    std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>::pair(
      (std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> *const)(v3 + 368),
      v7);
    id = std::get<0ul,unsigned int const,data::ExhibitionScoreExcelConfig>((const std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> *)(v3 + 368));
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionScoreExcelConfig>((const std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> *)(v3 + 368));
    v8 = this;
    p_display_id = &config->display_id;
    if ( *(_BYTE *)(((unsigned __int64)p_display_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_display_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_display_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(v8, config->display_id);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)display_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&display_config_ptr->series_id);
      }
      series_id = display_config_ptr->series_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->series_id);
      }
      if ( series_id == config->series_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->display_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->display_id);
        }
        param_num = ExhibitionExcelConfigMgr::getDisplayParamNum(this, config->display_id);
        if ( *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->display_param_order);
        }
        if ( param_num >= config->display_param_order )
        {
          v26 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->series_to_score_map,
                  &config->series_id);
          v27 = std::set<unsigned int>::insert(v26, id);
          if ( !v27.second )
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
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "rewriteExhibitionScoreExcelConfig",
              600);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v28,
                    (const char (*)[30])"duplicate exhibition card_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
            *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v14 = 0;
          }
          else
          {
            v14 = 1;
          }
        }
        else
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "rewriteExhibitionScoreExcelConfig",
            595);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v20, (const char (*)[60])byte_1AC75940);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, id);
          v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v22,
                  (const char (*)[14])", display_id:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &config->display_id);
          v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])", order:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &config->display_param_order);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v14 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionScoreExcelConfig",
          587);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v16,
                (const char (*)[58])"score series_id is not equal display series_id, score_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
        v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])", display_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->display_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v14 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewriteExhibitionScoreExcelConfig",
        582);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 112),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v10,
              (const char (*)[43])"findExhibitionDisplayExcelConfig score_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &config->display_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v14 = 0;
    }
    std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>::~pair((std::pair<unsigned int const,data::ExhibitionScoreExcelConfig> *const)(v3 + 368));
    if ( v14 != 1 )
    {
      v30 = 0;
      goto LABEL_41;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionScoreExcelConfig>,false,false> *const)(v3 + 48));
  }
  v30 = 1;
LABEL_41:
  if ( v30 == 1 )
    v2 = 0;
  result = v2;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 608: range 0000000013AB741A-0000000013AB77B1
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionScoreExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ExhibitionExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v13; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *series_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *score_set; // [rsp+30h] [rbp-E0h]
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:609 64 8 13 __for_end:609 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkExhibitionScoreExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->series_to_score_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
    series_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v13);
    score_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v13);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)series_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(series_id);
    }
    if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(v6, *series_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
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
    3u,
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "checkExhibitionScoreExcelConfig",
    614);
  v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, series_id);
  v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])", score_id:");
  common::milog::MiLogStream::operator<<<unsigned int>(v9, score_set);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 622: range 0000000013AB77B2-0000000013AB77C4
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionDisplayExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 628: range 0000000013AB77C6-0000000013AB9A67
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionDisplayExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  ExhibitionExcelConfigMgr *v17; // rcx
  __int64 series_id; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v23; // rax
  char v24; // dl
  std::vector<data::ExhibitionDisplayCondParam>::size_type v25; // rsi
  int param_type; // eax
  const std::vector<data::ExhibitionDisplayCondParam> *v27; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int v33; // eax
  ExhibitionExcelConfigMgr *v34; // rdx
  int v35; // eax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  const std::vector<data::ExhibitionDisplayCondParam> *v38; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  uint32_t v42; // ecx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rdx
  int v45; // eax
  const std::vector<data::ExhibitionDisplayCondParam> *v46; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  int v52; // eax
  ExhibitionExcelConfigMgr *v53; // rdx
  int v54; // eax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // r14
  const std::vector<data::ExhibitionDisplayCondParam> *v57; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  const std::vector<data::ExhibitionDisplayCondParam> *v61; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int v67; // edx
  const std::vector<data::ExhibitionDisplayCondParam> *p_cond_param; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  int v74; // eax
  ExhibitionExcelConfigMgr *v75; // rdx
  int v76; // eax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  __int64 v81; // rsi
  uint32_t v82; // ecx
  char v83; // dl
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  common::milog::MiLogStream *v92; // r14
  const std::vector<data::ExhibitionDisplayCondParam> *v93; // rcx
  std::vector<data::ExhibitionDisplayCondParam>::const_reference v94; // rax
  char v95; // dl
  std::vector<data::ExhibitionDisplayCondParam>::size_type v96; // rsi
  __int64 v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rdx
  uint32_t param_size; // [rsp+18h] [rbp-538h]
  int32_t ret; // [rsp+1Ch] [rbp-534h]
  data::ExhibitionDisplayExcelConfigMap *__for_range; // [rsp+20h] [rbp-530h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false,false>::reference v104; // [rsp+28h] [rbp-528h]
  uint32_t *id; // [rsp+30h] [rbp-520h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig> >::type *config; // [rsp+38h] [rbp-518h]
  data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+48h] [rbp-508h]
  data::PlayerExhibitionExcelConfig *exhibition_config_ptr; // [rsp+58h] [rbp-4F8h]
  char v109[1264]; // [rsp+60h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v109;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "25 48 4 9 index:651 64 4 17 exhibition_id:657 80 4 17 exhibition_id:679 96 4 14 display_id:706 1"
                        "12 4 9 depth:725 128 8 15 __for_begin:629 160 8 13 __for_end:629 192 8 9 <unknown> 224 8 9 <unkn"
                        "own> 256 8 17 display_value:695 288 8 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 "
                        "<unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9"
                        " <unknown> 1152 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkExhibitionDisplayExcelConfig;
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
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -202116109;
  __for_range = &this->exhibition_display_excel_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionDisplayExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ExhibitionDisplayExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionDisplayExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ExhibitionDisplayExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false> *)(v3 + 160)) )
    {
      v11 = 1;
      goto LABEL_155;
    }
    v104 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false,false> *const)(v3 + 128));
    id = std::get<0ul,unsigned int const,data::ExhibitionDisplayExcelConfig>(v104);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionDisplayExcelConfig>(v104);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    param_size = ExhibitionExcelConfigMgr::getDisplayParamNum(this, *id);
    if ( !param_size )
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "checkExhibitionDisplayExcelConfig",
        635);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v6, (const char (*)[47])byte_1AC75CE0);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->cond_type);
      }
      v8 = (__int64)data::enumValToStr(config->cond_type, (__int64)byte_1AC75CE0);
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8(v3 + 192, byte_1AC75CE0);
      *(_QWORD *)(v3 + 192) = v8;
      v9 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v7, (const char *const *)(v3 + 192));
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])", id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v11 = 0;
      goto LABEL_155;
    }
    if ( std::vector<data::ExhibitionDisplayCondParam>::size(&config->cond_param) < param_size )
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "checkExhibitionDisplayExcelConfig",
        640);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
              v12,
              (const char (*)[53])"cond_param size less than cond_type need, cond_type:");
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&config->cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->cond_type);
      }
      v14 = (__int64)data::enumValToStr(
                       config->cond_type,
                       (__int64)"cond_param size less than cond_type need, cond_type:");
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        v14 = __asan_report_store8(v3 + 224, "cond_param size less than cond_type need, cond_type:");
      *(_QWORD *)(v3 + 224) = v14;
      v15 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v3 + 224));
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])", id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v11 = 0;
      goto LABEL_155;
    }
    v17 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->series_id);
    }
    series_id = config->series_id;
    if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(v17, series_id) )
      break;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, series_id);
    for ( *(_DWORD *)(v3 + 48) = 0; ; ++*(_DWORD *)(v3 + 48) )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( param_size <= *(_DWORD *)(v3 + 48) )
      {
        v45 = 1;
        goto LABEL_151;
      }
      v25 = *(unsigned int *)(v3 + 48);
      v23 = std::vector<data::ExhibitionDisplayCondParam>::operator[](&config->cond_param, v25);
      v24 = *(_BYTE *)(((unsigned __int64)&v23->param_type >> 3) + 0x7FFF8000);
      LOBYTE(v25) = v24 != 0;
      if ( v24 != 0 && v24 <= 3 )
        __asan_report_load4(&v23->param_type);
      param_type = v23->param_type;
      if ( param_type != 4 )
        break;
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96, v25);
      *(_DWORD *)(v3 + 96) = 0;
      p_cond_param = &config->cond_param;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v69 = std::vector<data::ExhibitionDisplayCondParam>::operator[](p_cond_param, *(unsigned int *)(v3 + 48));
      if ( common::tools::StringUtils::strToNum<unsigned int>(&v69->param, (unsigned int *)(v3 + 96), 1) )
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "checkExhibitionDisplayExcelConfig",
          709);
        v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v71 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v70,
                (const char (*)[30])"strToNum failed, param_index:");
        v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v71,
                (const unsigned int *)(v3 + 48));
        v73 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v72, (const char (*)[6])", id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
        *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v74 = 0;
      }
      else
      {
        v75 = this;
        v76 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v76 != 0 && (char)v76 <= 3 )
          __asan_report_load4(v3 + 96);
        display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                               v75,
                               *(unsigned int *)(v3 + 96));
        if ( display_config_ptr )
        {
          v81 = (((_BYTE)display_config_ptr + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)display_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&display_config_ptr->series_id);
          }
          v82 = display_config_ptr->series_id;
          v83 = *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000);
          LOBYTE(v81) = v83 != 0;
          if ( v83 != 0 && (char)((((_BYTE)config + 12) & 7) + 3) >= v83 )
            __asan_report_load4(&config->series_id);
          if ( v82 == config->series_id )
          {
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 112, v81);
            *(_DWORD *)(v3 + 112) = 0;
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 96);
            ret = ExhibitionExcelConfigMgr::checkDisplayRecursionDepth(
                    this,
                    *(_DWORD *)(v3 + 96),
                    (uint32_t *)(v3 + 112));
            if ( ret )
            {
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1088, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1088),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "checkExhibitionDisplayExcelConfig",
                729);
              v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1088),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v89 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
                      v88,
                      (const char (*)[98])byte_1AC76060);
              v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v89,
                      (const unsigned int *)(v3 + 96));
              v91 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      v90,
                      (const char (*)[20])byte_1AC75FA0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
              *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              v2 = ret;
              v74 = 0;
            }
            else
            {
              v74 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "checkExhibitionDisplayExcelConfig",
              721);
            v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v85 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(
                    v84,
                    (const char (*)[96])byte_1AC75FE0);
            v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v85,
                    (const unsigned int *)(v3 + 96));
            v87 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    v86,
                    (const char (*)[20])byte_1AC75FA0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
            *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v74 = 0;
          }
        }
        else
        {
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "checkExhibitionDisplayExcelConfig",
            715);
          v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v78 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v77, (const char (*)[72])byte_1AC75F20);
          v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v78,
                  (const unsigned int *)(v3 + 96));
          v80 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v79, (const char (*)[20])byte_1AC75FA0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
          *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v74 = 0;
        }
      }
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
      if ( !v74 )
      {
        v45 = 0;
        goto LABEL_151;
      }
LABEL_147:
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
    }
    if ( param_type > 4 )
      goto LABEL_138;
    switch ( param_type )
    {
      case 3:
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v25);
        *(_QWORD *)(v3 + 256) = 0LL;
        v61 = &config->cond_param;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v62 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v61, *(unsigned int *)(v3 + 48));
        if ( common::tools::StringUtils::strToNum<unsigned long>(&v62->param, (unsigned __int64 *)(v3 + 256), 1) )
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "checkExhibitionDisplayExcelConfig",
            698);
          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v64 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v63,
                  (const char (*)[30])"strToNum failed, param_index:");
          v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v64,
                  (const unsigned int *)(v3 + 48));
          v66 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v65, (const char (*)[6])", id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
          *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v67 = 0;
        }
        else
        {
          v67 = 1;
        }
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( !v67 )
        {
          v45 = 0;
          goto LABEL_151;
        }
        goto LABEL_147;
      case 1:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, v25);
        *(_DWORD *)(v3 + 64) = 0;
        v27 = &config->cond_param;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v28 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v27, *(unsigned int *)(v3 + 48));
        if ( common::tools::StringUtils::strToNum<unsigned int>(&v28->param, (unsigned int *)(v3 + 64), 1) )
        {
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "checkExhibitionDisplayExcelConfig",
            660);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v29,
                  (const char (*)[30])"strToNum failed, param_index:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v30,
                  (const unsigned int *)(v3 + 48));
          v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v31, (const char (*)[6])", id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v33 = 0;
        }
        else
        {
          v34 = this;
          v35 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v35 != 0 && (char)v35 <= 3 )
            __asan_report_load4(v3 + 64);
          exhibition_config_ptr = data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(
                                    v34,
                                    *(unsigned int *)(v3 + 64));
          if ( exhibition_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_id >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->series_id);
            }
            v42 = config->series_id;
            if ( *(_BYTE *)(((unsigned __int64)&exhibition_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)exhibition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&exhibition_config_ptr->series_id >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&exhibition_config_ptr->series_id);
            }
            if ( v42 == exhibition_config_ptr->series_id )
            {
              v33 = 1;
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
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "checkExhibitionDisplayExcelConfig",
                672);
              v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 640),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v44 = common::milog::MiLogStream::operator<<<char [177],(char *[177])0>(
                      v43,
                      (const char (*)[177])byte_1AC75E40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v33 = 0;
            }
          }
          else
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
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "checkExhibitionDisplayExcelConfig",
              666);
            v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v37 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v36,
                    (const char (*)[47])"findPlayerExhibitionExcelConfig failed, param:");
            v38 = &config->cond_param;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v39 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v38, *(unsigned int *)(v3 + 48));
            v40 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, &v39->param);
            v41 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v40, (const char (*)[6])", id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v33 = 0;
          }
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( !v33 )
        {
          v45 = 0;
          goto LABEL_151;
        }
        goto LABEL_147;
      case 2:
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80, v25);
        *(_DWORD *)(v3 + 80) = 0;
        v46 = &config->cond_param;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v47 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v46, *(unsigned int *)(v3 + 48));
        if ( common::tools::StringUtils::strToNum<unsigned int>(&v47->param, (unsigned int *)(v3 + 80), 1) )
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "checkExhibitionDisplayExcelConfig",
            682);
          v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v49 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v48,
                  (const char (*)[30])"strToNum failed, param_index:");
          v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v49,
                  (const unsigned int *)(v3 + 48));
          v51 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v50, (const char (*)[6])", id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
          *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v52 = 0;
        }
        else
        {
          v53 = this;
          v54 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v54 != 0 && (char)v54 <= 3 )
            __asan_report_load4(v3 + 80);
          if ( data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(v53, *(unsigned int *)(v3 + 80)) )
          {
            v52 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "checkExhibitionDisplayExcelConfig",
              688);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 768),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v55,
                    (const char (*)[47])"findPlayerExhibitionExcelConfig failed, param:");
            v57 = &config->cond_param;
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            v58 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v57, *(unsigned int *)(v3 + 48));
            v59 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &v58->param);
            v60 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v59, (const char (*)[6])", id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
            *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v52 = 0;
          }
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( !v52 )
        {
          v45 = 0;
          goto LABEL_151;
        }
        goto LABEL_147;
    }
LABEL_138:
    *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1152, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1152),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkExhibitionDisplayExcelConfig",
      735);
    v92 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)(v3 + 1152),
            (const char (*)[24])"unsupported param_type:");
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    v93 = &config->cond_param;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    v96 = *(unsigned int *)(v3 + 48);
    v94 = std::vector<data::ExhibitionDisplayCondParam>::operator[](v93, v96);
    v95 = *(_BYTE *)(((unsigned __int64)&v94->param_type >> 3) + 0x7FFF8000);
    LOBYTE(v96) = v95 != 0;
    if ( v95 != 0 && v95 <= 3 )
      __asan_report_load4(&v94->param_type);
    v97 = (__int64)data::enumValToStr(v94->param_type, v96);
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      v97 = __asan_report_store8(v3 + 288, v96);
    *(_QWORD *)(v3 + 288) = v97;
    v98 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v92, (const char *const *)(v3 + 288));
    v99 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v98, (const char (*)[6])", id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, id);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
    *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v45 = 0;
LABEL_151:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v45 != 1 )
    {
      v11 = 0;
      goto LABEL_155;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionDisplayExcelConfig>,false,false> *const)(v3 + 128));
  }
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
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "checkExhibitionDisplayExcelConfig",
    646);
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 448),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v20 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          v19,
          (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
  v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->series_id);
  v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])", id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
  v2 = -1;
  v11 = 0;
LABEL_155:
  if ( v11 == 1 )
    v2 = 0;
  if ( v109 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450940 - (((_DWORD)v5 + 2147450948) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v109);
  }
  return v2;
};

// Line 745: range 0000000013AB9A68-0000000013AB9C0A
const std::set<unsigned int> *__cdecl ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet(
        const ExhibitionExcelConfigMgr *const this,
        const std::string *key)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,std::set<unsigned int>> *p_lua_trigger_exhibition_map; // rdx
  std::unordered_map<std::string,std::set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::set<unsigned int> >,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true>::__node_type *)"2 32 8 8 iter:746 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true>::__node_type *)ExhibitionExcelConfigMgr::getLuaKeyExhibitionSet;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_lua_trigger_exhibition_map = &this->lua_trigger_exhibition_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], key);
  v2[4]._M_cur = std::unordered_map<std::string,std::set<unsigned int>>::find(p_lua_trigger_exhibition_map, key)._M_cur;
  v6 = &this->lua_trigger_exhibition_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], key);
  v2[8]._M_cur = std::unordered_map<std::string,std::set<unsigned int>>::end(v6)._M_cur;
  v7 = std::__detail::operator==<std::pair<std::string const,std::set<unsigned int>>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::set<unsigned int>>,false,true>::operator->(v2 + 4)->second;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::set<unsigned int> >,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 755: range 0000000013AB9C0C-0000000013AB9DCD
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getServerKeyExhibitionSet(
        const ExhibitionExcelConfigMgr *const this,
        __int64 trigger_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>> *p_server_trigger_exhibition_map; // rdx
  std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 16 trigger_type:754 64 8 8 iter:756 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getServerKeyExhibitionSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = trigger_type;
  p_server_trigger_exhibition_map = &this->server_trigger_exhibition_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, trigger_type);
  *(std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::find(p_server_trigger_exhibition_map, (const std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->server_trigger_exhibition_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<data::ExhibitionServerTriggerType,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::ExhibitionServerTriggerType const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExhibitionServerTriggerType,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ExhibitionServerTriggerType,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<data::ExhibitionServerTriggerType const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ExhibitionServerTriggerType,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 765: range 0000000013AB9DCE-0000000013AB9F8F
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByMonsterId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_monster_id_to_exhibition_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 monster_id:764 64 8 8 iter:766 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByMonsterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_monster_id_to_exhibition_map = &this->monster_id_to_exhibition_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_monster_id_to_exhibition_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->monster_id_to_exhibition_map;
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

// Line 775: range 0000000013AB9F90-0000000013ABA1E7
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupConfigId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 group_id,
        uint32_t config_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > > > *p_group_config_id_to_exhibition_map; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 group_id:774 48 4 13 config_id:774 64 8 8 iter:776 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupConfigId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = group_id;
  *(_DWORD *)(v3 + 48) = config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, group_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > > >::const_iterator *)(v3 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<unsigned int>>>>::find(&this->group_config_id_to_exhibition_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > > >::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_group_config_id_to_exhibition_map = &this->group_config_id_to_exhibition_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> > > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::set<unsigned int>>>>::end(p_group_config_id_to_exhibition_map);
  v7 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,std::set<unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> >,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> >,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::set<unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::set<unsigned int> >,false,true> *const)(v3 + 64))->second;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 785: range 0000000013ABA1E8-0000000013ABA746
__int64 __fastcall ExhibitionExcelConfigMgr::checkLuaWriteExhibition(
        const ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const std::string *key,
        uint32_t group_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<std::string,unsigned int> *p_lua_trigger_key_map; // rdx
  std::unordered_map<std::string,unsigned int> *v8; // rdx
  bool v9; // al
  unsigned int v10; // r14d
  std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true>::pointer v11; // rax
  const HK4EDesignConfig *Config; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v16; // rax
  unsigned __int64 v17; // rax
  const unsigned int *v18; // r14
  std::vector<unsigned int>::const_iterator v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v21; // r14
  std::set<unsigned int>::iterator v22; // rax
  __int64 result; // rax
  std::vector<unsigned int> *__result; // [rsp+10h] [rbp-1E0h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+18h] [rbp-1D8h]
  const data::ExhibitionLuaKeyExcelConfig *lua_key_config_ptr; // [rsp+50h] [rbp-1A0h]
  const GroupInfoScriptConfig *group_config_ptr; // [rsp+58h] [rbp-198h]
  char v30[400]; // [rsp+60h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 12 group_id:784 64 8 8 iter:786 96 8 9 <unknown> 128 24 20 intersection_vec:806 192 48 18"
                        " config_tag_set:807 272 48 17 group_tag_set:808";
  *(_QWORD *)(v4 + 16) = ExhibitionExcelConfigMgr::checkLuaWriteExhibition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 48) = group_id;
  p_lua_trigger_key_map = &this->lua_trigger_key_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, txt_config_mgr);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v4 + 64) = std::unordered_map<std::string,unsigned int>::find(
                                                                                 p_lua_trigger_key_map,
                                                                                 key);
  v8 = &this->lua_trigger_key_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, key);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v4 + 96) = std::unordered_map<std::string,unsigned int>::end(v8);
  v9 = std::__detail::operator==<std::pair<std::string const,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    v10 = -1;
  }
  else
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v11->second >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v11->second);
    }
    lua_key_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionLuaKeyExcelConfig(this, v11->second);
    if ( lua_key_config_ptr )
    {
      if ( common::tools::MiscUtils::isContains<unsigned int>(
             &lua_key_config_ptr->group_list,
             (const unsigned int *)(v4 + 48)) )
      {
        v10 = 0;
      }
      else
      {
        Config = TxtConfigMgr::getConfig(txt_config_mgr);
        group_config_ptr = LuaConfigMgr::findGroupInfoConfig(&Config->lua_config_mgr, *(_DWORD *)(v4 + 48));
        if ( group_config_ptr )
        {
          v13 = ((v4 + 128) >> 3) + 2147450880;
          *(_WORD *)v13 = 0;
          *(_BYTE *)(v13 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
          v14 = ((v4 + 192) >> 3) + 2147450880;
          *(_DWORD *)v14 = 0;
          *(_WORD *)(v14 + 4) = 0;
          M_current = std::vector<unsigned int>::end(&lua_key_config_ptr->group_tag_list)._M_current;
          v16._M_current = std::vector<unsigned int>::begin(&lua_key_config_ptr->group_tag_list)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v4 + 192),
            v16,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
          v17 = ((v4 + 272) >> 3) + 2147450880;
          *(_DWORD *)v17 = 0;
          *(_WORD *)(v17 + 4) = 0;
          v18 = std::vector<unsigned int>::end(&group_config_ptr->group_tag_vec)._M_current;
          v19._M_current = std::vector<unsigned int>::begin(&group_config_ptr->group_tag_vec)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v4 + 272),
            v19,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18);
          __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v4 + 128)).container;
          __last2 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 272))._M_node;
          M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 272))._M_node;
          v21 = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 192))._M_node;
          v22._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 192))._M_node;
          std::set_intersection<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::back_insert_iterator<std::vector<unsigned int>>>(
            v22,
            (std::_Rb_tree_const_iterator<unsigned int>)v21,
            (std::_Rb_tree_const_iterator<unsigned int>)M_node,
            (std::_Rb_tree_const_iterator<unsigned int>)__last2,
            (std::back_insert_iterator<std::vector<unsigned int> >)__result);
          if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v4 + 128)) )
            v10 = 0;
          else
            v10 = -1;
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 272));
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 192));
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
        }
        else
        {
          v10 = -1;
        }
      }
    }
    else
    {
      v10 = -1;
    }
  }
  result = v10;
  if ( v30 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 821: range 0000000013ABA748-0000000013ABAC7E
__int64 __fastcall ExhibitionExcelConfigMgr::getDisplayParamNum(
        const ExhibitionExcelConfigMgr *const this,
        uint32_t display_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  uint32_t res; // [rsp+14h] [rbp-14Ch]
  const data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+18h] [rbp-148h]
  const std::vector<data::ExhibitionDisplayCondParam> *__for_range; // [rsp+20h] [rbp-140h]
  const data::ExhibitionDisplayCondParam *param; // [rsp+28h] [rbp-138h]
  char v16[304]; // [rsp+30h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 display_id:820 64 8 15 __for_begin:843 96 8 13 __for_end:843 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getDisplayParamNum;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = display_id;
  v6 = *(unsigned int *)(v3 + 48);
  display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(this, v6);
  if ( display_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&display_config_ptr->cond_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&display_config_ptr->cond_type);
    }
    switch ( display_config_ptr->cond_type )
    {
      case EXHIBITION_DISPLAY_COND_A_GE_B:
      case EXHIBITION_DISPLAY_COND_RETURN_A_IF_B_MEET:
      case EXHIBITION_DISPLAY_COND_RETURN_TRUE_IF_B_MEET:
      case EXHIBITION_DISPLAY_COND_A_SUB_B:
        v2 = 2;
        break;
      case EXHIBITION_DISPLAY_COND_AND:
      case EXHIBITION_DISPLAY_COND_OR:
      case EXHIBITION_DISPLAY_COND_RETURN_A_IF_AND_IS_TRUE:
        res = 0;
        __for_range = &display_config_ptr->cond_param;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 64, v6);
        *(std::vector<data::ExhibitionDisplayCondParam>::const_iterator *)(v3 + 64) = std::vector<data::ExhibitionDisplayCondParam>::begin(__for_range);
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 96, v6);
        *(std::vector<data::ExhibitionDisplayCondParam>::const_iterator *)(v3 + 96) = std::vector<data::ExhibitionDisplayCondParam>::end(__for_range);
        while ( __gnu_cxx::operator!=<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>(
                  (const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *)(v3 + 64),
                  (const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *)(v3 + 96)) )
        {
          param = __gnu_cxx::__normal_iterator<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&param->param_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&param->param_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&param->param_type);
          }
          if ( param->param_type == EXHIBITION_DISPLAY_COND_PARAM_NONE )
          {
            v2 = res;
            v9 = 0;
            goto LABEL_24;
          }
          ++res;
          __gnu_cxx::__normal_iterator<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>::operator++((__gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *const)(v3 + 64));
        }
        v9 = 1;
LABEL_24:
        if ( v9 == 1 )
          v2 = res;
        break;
      case EXHIBITION_DISPLAY_COND_SCENE_PLAYER_LARGEST:
      case EXHIBITION_DISPLAY_COND_SCENE_PLAYER_SMALLEST:
        v2 = 1;
        break;
      default:
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "getDisplayParamNum",
          862);
        v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[35])"unsupported cond_type, display_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        v2 = 0;
        break;
    }
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
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "getDisplayParamNum",
      825);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           v7,
           (const char (*)[46])"findExhibitionDisplayExcelConfig, display_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = 0;
  }
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 869: range 0000000013ABAC80-0000000013ABAE7B
__int64 __fastcall ExhibitionExcelConfigMgr::getSeriesIdByDungeonId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_series_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:868 64 8 8 iter:870 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getSeriesIdByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_series_map = &this->dungeon_series_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_series_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_series_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 879: range 0000000013ABAE7C-0000000013ABB7AA
__int64 __fastcall ExhibitionExcelConfigMgr::checkDisplayRecursionDepth(
        ExhibitionExcelConfigMgr *const this,
        uint32_t display_id,
        uint32_t *depth)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // eax
  __int64 result; // rax
  data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+28h] [rbp-1C8h]
  const std::vector<data::ExhibitionDisplayCondParam> *__for_range; // [rsp+30h] [rbp-1C0h]
  const data::ExhibitionDisplayCondParam *cond_param; // [rsp+38h] [rbp-1B8h]
  char v29[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 32 4 18 sub_display_id:897 48 4 14 display_id:878 64 8 15 __for_begin:893 96 8 13 __for_end:89"
                        "3 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ExhibitionExcelConfigMgr::checkDisplayRecursionDepth;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862725] = -218959118;
  v6[536862727] = -218959118;
  v6[536862729] = -218959118;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 48) = display_id;
  display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(
                         this,
                         *(unsigned int *)(v4 + 48));
  if ( display_config_ptr )
  {
    v9 = ((unsigned __int8)depth & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)depth >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)depth & 7) + 3) >= *(_BYTE *)(((unsigned __int64)depth >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(depth);
    }
    if ( ++*depth <= 0x32 )
    {
      __for_range = &display_config_ptr->cond_param;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 64, v9);
      *(std::vector<data::ExhibitionDisplayCondParam>::const_iterator *)(v4 + 64) = std::vector<data::ExhibitionDisplayCondParam>::begin(__for_range);
      if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 96, v9);
      *(std::vector<data::ExhibitionDisplayCondParam>::const_iterator *)(v4 + 96) = std::vector<data::ExhibitionDisplayCondParam>::end(__for_range);
      while ( __gnu_cxx::operator!=<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>(
                (const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *)(v4 + 64),
                (const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *)(v4 + 96)) )
      {
        cond_param = __gnu_cxx::__normal_iterator<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>::operator*((const __gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond_param->param_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&cond_param->param_type);
        }
        if ( cond_param->param_type == EXHIBITION_DISPLAY_COND_PARAM_DISPLAY_VALUE )
        {
          *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v4 + 32, v4 + 96);
          *(_DWORD *)(v4 + 32) = 0;
          if ( common::tools::StringUtils::strToNum<unsigned int>(&cond_param->param, (unsigned int *)(v4 + 32), 1) )
          {
            *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 31) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 256, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 256),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "checkDisplayRecursionDepth",
              900);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 256),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v14,
                    (const char (*)[33])"strToNum failed, sub_display_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
            *(_DWORD *)(((v4 + 256) >> 3) + 0x7FFF8000) = -117901064;
            v3 = -1;
            v16 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v4 + 32);
            if ( ExhibitionExcelConfigMgr::checkDisplayRecursionDepth(this, *(_DWORD *)(v4 + 32), depth) )
            {
              *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 320, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 320),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
                "checkDisplayRecursionDepth",
                906);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v4 + 320),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v17,
                      (const char (*)[39])"checkDisplayRecursionDepth display_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      (const unsigned int *)(v4 + 48));
              v20 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v19,
                      (const char (*)[18])", sub_display_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v4 + 32));
              v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])", depth:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, depth);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
              *(_DWORD *)(((v4 + 320) >> 3) + 0x7FFF8000) = -117901064;
              v3 = -1;
              v16 = 0;
            }
            else
            {
              v16 = 1;
            }
          }
          *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
          if ( v16 != 1 )
          {
            v23 = 0;
            goto LABEL_40;
          }
        }
        __gnu_cxx::__normal_iterator<data::ExhibitionDisplayCondParam const*,std::vector<data::ExhibitionDisplayCondParam>>::operator++((__gnu_cxx::__normal_iterator<const data::ExhibitionDisplayCondParam*,std::vector<data::ExhibitionDisplayCondParam> > *const)(v4 + 64));
      }
      v23 = 1;
LABEL_40:
      if ( v23 == 1 )
        v3 = 0;
    }
    else
    {
      if ( *(char *)(((v4 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 33) & 7) >= *(_BYTE *)(((v4 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "checkDisplayRecursionDepth",
        890);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v10, (const char (*)[54])byte_1AC76620);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", depth:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, depth);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 192));
      v3 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
      "checkDisplayRecursionDepth",
      883);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           v7,
           (const char (*)[45])"findExhibitionDisplayExcelConfig display_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
    v3 = -1;
  }
  result = v3;
  if ( v29 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 915: range 0000000013ABB7AC-0000000013ABB821
uint32_t __cdecl ExhibitionExcelConfigMgr::getSeriesIdByExhibitionId(
        const ExhibitionExcelConfigMgr *const this,
        uint32_t exhibtion_id)
{
  const data::PlayerExhibitionExcelConfig *exhibition_config_ptr; // [rsp+18h] [rbp-8h]

  exhibition_config_ptr = data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(this, exhibtion_id);
  if ( !exhibition_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&exhibition_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)exhibition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&exhibition_config_ptr->series_id >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&exhibition_config_ptr->series_id);
  }
  return exhibition_config_ptr->series_id;
};

// Line 925: range 0000000013ABB822-0000000013ABC367
int32_t __cdecl ExhibitionExcelConfigMgr::rewriteExhibitionListDataExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  const std::pair<unsigned int const,data::ExhibitionListExcelConfig> *v7; // rax
  ExhibitionExcelConfigMgr *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  uint32_t series_id; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::set<unsigned int> *v25; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  int v29; // eax
  int32_t result; // eax
  uint32_t param_num; // [rsp+2Ch] [rbp-214h]
  data::ExhibitionListExcelConfigMap *__for_range; // [rsp+30h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,data::ExhibitionListExcelConfig> >::type *id; // [rsp+38h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionListExcelConfig> >::type *config; // [rsp+40h] [rbp-200h]
  data::ExhibitionDisplayExcelConfig *display_config_ptr; // [rsp+48h] [rbp-1F8h]
  char v36[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 8 15 __for_begin:926 80 8 13 __for_end:926 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <"
                        "unknown> 304 32 9 <unknown> 368 40 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::rewriteExhibitionListDataExcelConfig;
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
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  __for_range = &this->exhibition_list_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionListExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::ExhibitionListExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ExhibitionListExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::ExhibitionListExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false> *)(v3 + 80)) )
  {
    v6 = ((v3 + 368) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false,false> *const)(v3 + 48));
    std::pair<unsigned int const,data::ExhibitionListExcelConfig>::pair(
      (std::pair<unsigned int const,data::ExhibitionListExcelConfig> *const)(v3 + 368),
      v7);
    id = std::get<0ul,unsigned int const,data::ExhibitionListExcelConfig>((const std::pair<unsigned int const,data::ExhibitionListExcelConfig> *)(v3 + 368));
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExhibitionListExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExhibitionListExcelConfig>((const std::pair<unsigned int const,data::ExhibitionListExcelConfig> *)(v3 + 368));
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->display_id);
    }
    display_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionDisplayExcelConfig(v8, config->display_id);
    if ( display_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)display_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&display_config_ptr->series_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&display_config_ptr->series_id);
      }
      series_id = display_config_ptr->series_id;
      if ( *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->series_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config->series_id);
      }
      if ( series_id == config->series_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->display_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->display_id);
        }
        param_num = ExhibitionExcelConfigMgr::getDisplayParamNum(this, config->display_id);
        if ( *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->display_param_order >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->display_param_order);
        }
        if ( param_num >= config->display_param_order )
        {
          v25 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                  &this->series_to_list_data_map,
                  &config->series_id);
          v26 = std::set<unsigned int>::insert(v25, id);
          if ( !v26.second )
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
              "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
              "rewriteExhibitionListDataExcelConfig",
              949);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v27,
                    (const char (*)[33])"duplicate exhibitionListData id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
            *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
          else
          {
            v13 = 1;
          }
        }
        else
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
            "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
            "rewriteExhibitionListDataExcelConfig",
            944);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v19, (const char (*)[58])byte_1AC76920);
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])", display_id:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->display_id);
          v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])", order:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->display_param_order);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
          "rewriteExhibitionListDataExcelConfig",
          936);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                v15,
                (const char (*)[61])"list data series_id is not equal display series_id, card_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
        v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])", display_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config->display_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
    }
    else
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
        "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
        "rewriteExhibitionListDataExcelConfig",
        931);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              v9,
              (const char (*)[42])"findExhibitionDisplayExcelConfig card_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", display_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->display_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    std::pair<unsigned int const,data::ExhibitionListExcelConfig>::~pair((std::pair<unsigned int const,data::ExhibitionListExcelConfig> *const)(v3 + 368));
    if ( v13 != 1 )
    {
      v29 = 0;
      goto LABEL_41;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ExhibitionListExcelConfig>,false,false> *const)(v3 + 48));
  }
  v29 = 1;
LABEL_41:
  if ( v29 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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

// Line 957: range 0000000013ABC368-0000000013ABC6FF
int32_t __cdecl ExhibitionExcelConfigMgr::checkExhibitionListDataExcelConfig(
        ExhibitionExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ExhibitionExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  int32_t result; // eax
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range; // [rsp+18h] [rbp-F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference v13; // [rsp+20h] [rbp-F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::set<unsigned int> > >::type *series_id; // [rsp+28h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *list_data_set; // [rsp+30h] [rbp-E0h]
  char v16[208]; // [rsp+40h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:958 64 8 13 __for_end:958 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::checkExhibitionListDataExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->series_to_list_data_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_18;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
    series_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(v13);
    list_data_set = (std::tuple_element<1,const std::pair<unsigned int const,std::set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::set<unsigned int>>(v13);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)series_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)series_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(series_id);
    }
    if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(v6, *series_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 32));
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
    3u,
    "./src/txt_data_manual/ExhibitionExcelConfig.cpp",
    "checkExhibitionListDataExcelConfig",
    963);
  v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, series_id);
  v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])", list_data_ids:");
  common::milog::MiLogStream::operator<<<unsigned int>(v9, list_data_set);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_18:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 971: range 0000000013ABC700-0000000013ABC957
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
        const ExhibitionExcelConfigMgr *const this,
        __int64 param,
        data::ExhibitionServerTriggerType trigger_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > > *p_param_trigger_type_to_exhibition_map; // rdx
  bool v7; // al
  const std::set<unsigned int> *result; // rax
  char v10[208]; // [rsp+10h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 param:970 48 4 16 trigger_type:970 64 8 8 iter:972 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = param;
  *(_DWORD *)(v3 + 48) = trigger_type;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, param);
  *(std::pair<unsigned int,data::ExhibitionServerTriggerType> *)(v3 + 96) = std::make_pair<unsigned int &,data::ExhibitionServerTriggerType &>(
                                                                              (unsigned int *)(v3 + 32),
                                                                              (data::ExhibitionServerTriggerType *)(v3 + 48));
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > >::const_iterator *)(v3 + 64) = std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::find(&this->param_trigger_type_to_exhibition_map, (const std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > >::key_type *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_param_trigger_type_to_exhibition_map = &this->param_trigger_type_to_exhibition_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 96);
  *(std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType> >,std::allocator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> > > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>,boost::hash<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::equal_to<std::pair<unsigned int,data::ExhibitionServerTriggerType>>,std::allocator<std::pair<std::pair<unsigned int,data::ExhibitionServerTriggerType> const,std::set<unsigned int>>>>::end(p_param_trigger_type_to_exhibition_map);
  v7 = std::__detail::operator==<std::pair<std::pair const<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> >,true> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> >,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,data::ExhibitionServerTriggerType>,std::set<unsigned int> >,false,true> *const)(v3 + 64))->second;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 981: range 0000000013ABC958-0000000013ABCB19
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getElementReactionSetByExhibitionId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 exhibition_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_exhibiton_to_reaction_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 17 exhibition_id:980 64 8 8 iter:982 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getElementReactionSetByExhibitionId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = exhibition_id;
  p_exhibiton_to_reaction_map = &this->exhibiton_to_reaction_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, exhibition_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_exhibiton_to_reaction_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->exhibiton_to_reaction_map;
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

// Line 991: range 0000000013ABCB1A-0000000013ABCCDB
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getMonsterDamagePercentageExhibitionSetByMonsterId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 monster_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_monster_id_to_damage_percentage_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 monster_id:990 64 8 8 iter:992 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getMonsterDamagePercentageExhibitionSetByMonsterId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = monster_id;
  p_monster_id_to_damage_percentage_map = &this->monster_id_to_damage_percentage_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, monster_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_monster_id_to_damage_percentage_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->monster_id_to_damage_percentage_map;
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

// Line 1001: range 0000000013ABCCDC-0000000013ABCF68
std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getGallerySuccLastTimeSetByGalleryId(
        std::set<unsigned int> *retstr,
        const ExhibitionExcelConfigMgr *const this,
        uint32_t gallery_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_gallery_id_to_exhibition_map; // rdx
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
  *(_QWORD *)(v3 + 8) = "3 48 4 15 gallery_id:1000 64 8 9 iter:1002 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getGallerySuccLastTimeSetByGalleryId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = gallery_id;
  p_gallery_id_to_exhibition_map = &this->gallery_id_to_exhibition_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_gallery_id_to_exhibition_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->gallery_id_to_exhibition_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::set<unsigned int>::set(retstr, &v9->second);
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

// Line 1011: range 0000000013ABCF6A-0000000013ABD12B
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getSeriesIdSetByActivityId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 activity_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_activity_series_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 16 activity_id:1010 64 8 9 iter:1012 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getSeriesIdSetByActivityId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = activity_id;
  p_activity_series_map = &this->activity_series_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, activity_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_activity_series_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->activity_series_map_;
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

// Line 1021: range 0000000013ABD12C-0000000013ABD2ED
const std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_group_id_to_exhibition_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1020 64 8 9 iter:1022 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getMonsterDamageExhibitionSetByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_to_exhibition_map = &this->group_id_to_exhibition_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_group_id_to_exhibition_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->group_id_to_exhibition_map;
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

// Line 1031: range 0000000013ABD2EE-0000000013ABD4AF
const std::set<std::pair<unsigned int,unsigned int>> *__fastcall ExhibitionExcelConfigMgr::getMonsterDrawnExhibitionSetByGroupId(
        const ExhibitionExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *p_group_id_to_exhibition_time_map; // rdx
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *v6; // rdx
  bool v7; // al
  const std::set<std::pair<unsigned int,unsigned int>> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1030 64 8 9 iter:1032 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ExhibitionExcelConfigMgr::getMonsterDrawnExhibitionSetByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_to_exhibition_time_map = &this->group_id_to_exhibition_time_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::find(p_group_id_to_exhibition_time_map, (const std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->group_id_to_exhibition_time_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<std::pair<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64))->second;
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

// Line 1041: range 0000000013ABD4B0-0000000013ABD73C
std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getScoreSetBySeriesId(
        std::set<unsigned int> *retstr,
        const ExhibitionExcelConfigMgr *const this,
        uint32_t series_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_series_to_score_map; // rdx
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
  *(_QWORD *)(v3 + 8) = "3 48 4 14 series_id:1040 64 8 9 iter:1042 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getScoreSetBySeriesId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = series_id;
  p_series_to_score_map = &this->series_to_score_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_series_to_score_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->series_to_score_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::set<unsigned int>::set(retstr, &v9->second);
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

// Line 1051: range 0000000013ABD73E-0000000013ABD9CA
std::set<unsigned int> *__fastcall ExhibitionExcelConfigMgr::getCardSetBySeriesId(
        std::set<unsigned int> *retstr,
        const ExhibitionExcelConfigMgr *const this,
        uint32_t series_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_series_to_card_map; // rdx
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
  *(_QWORD *)(v3 + 8) = "3 48 4 14 series_id:1050 64 8 9 iter:1052 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ExhibitionExcelConfigMgr::getCardSetBySeriesId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = series_id;
  p_series_to_card_map = &this->series_to_card_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_series_to_card_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->series_to_card_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::set<unsigned int>::set(retstr, &v9->second);
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

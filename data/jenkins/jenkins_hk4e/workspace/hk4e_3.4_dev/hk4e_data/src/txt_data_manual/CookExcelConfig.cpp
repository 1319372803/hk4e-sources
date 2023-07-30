// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CookExcelConfig.cpp

// Line 21: range 0000000013A59372-0000000013A59761
int32_t __cdecl CookExcelConfigMgr::rewriteConfig(CookExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::unordered_map<unsigned int,data::CookBonusExcelConfig> *v6; // rax
  data::CookBonusExcelConfig *v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  int32_t result; // eax
  data::CookBonusExcelConfigVec *__for_range; // [rsp+10h] [rbp-F0h]
  data::CookRecipeExcelConfigMap *__for_range_0; // [rsp+18h] [rbp-E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *recipe_config; // [rsp+30h] [rbp-D0h]
  const data::CookBonusExcelConfig *bonus_config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:22 64 8 12 __for_end:22 96 8 14 __for_begin:28 128 8 12 __for_end:28";
  *(_QWORD *)(v2 + 16) = CookExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->cook_bonus_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::CookBonusExcelConfig>::iterator *)(v2 + 32) = std::vector<data::CookBonusExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::CookBonusExcelConfig>::iterator *)(v2 + 64) = std::vector<data::CookBonusExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !__gnu_cxx::operator!=<data::CookBonusExcelConfig *,std::vector<data::CookBonusExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::CookBonusExcelConfig*,std::vector<data::CookBonusExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::CookBonusExcelConfig*,std::vector<data::CookBonusExcelConfig> > *)(v2 + 64)) )
      break;
    bonus_config = __gnu_cxx::__normal_iterator<data::CookBonusExcelConfig *,std::vector<data::CookBonusExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::CookBonusExcelConfig*,std::vector<data::CookBonusExcelConfig> > *const)(v2 + 32));
    v6 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::operator[](
           &this->avatar_bonus_config_map,
           &bonus_config->avatar_id);
    v7 = std::unordered_map<unsigned int,data::CookBonusExcelConfig>::operator[](v6, &bonus_config->recipe_id);
    data::CookBonusExcelConfig::operator=(v7, bonus_config);
    __gnu_cxx::__normal_iterator<data::CookBonusExcelConfig *,std::vector<data::CookBonusExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::CookBonusExcelConfig*,std::vector<data::CookBonusExcelConfig> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::vector<data::CookBonusExcelConfig>::clear(&this->cook_bonus_excel_config_vec);
  __for_range_0 = &this->cook_recipe_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v2 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false> *const)(v2 + 96));
    std::get<0ul,unsigned int const,data::CookRecipeExcelConfig>(__in);
    recipe_config = std::get<1ul,unsigned int const,data::CookRecipeExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &recipe_config->input_vec,
      (unsigned int *)8);
    v8 = ((_BYTE)recipe_config + 20) & 7;
    v9 = (*(_BYTE *)(((unsigned __int64)&recipe_config->is_default_unlocked >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&recipe_config->is_default_unlocked >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_load1(&recipe_config->is_default_unlocked, v8, v9);
    if ( recipe_config->is_default_unlocked )
      std::vector<unsigned int>::push_back(&this->default_unlocked_recipe_vec, &recipe_config->id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = 0;
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

// Line 41: range 0000000013A59762-0000000013A59A86
int32_t __cdecl CookExcelConfigMgr::checkConfig(CookExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = CookExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( CookExcelConfigMgr::checkRecipeConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkConfig",
      44);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v5, (const char (*)[25])"checkRecipeConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( CookExcelConfigMgr::checkBonusConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkConfig",
      49);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])"checkBonusConfig failed");
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

// Line 57: range 0000000013A59A88-0000000013A5AA8F
int32_t __cdecl CookExcelConfigMgr::checkRecipeConfig(
        const CookExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *v7; // rsi
  uint32_t *p_count; // rax
  const data::MaterialExcelConfigMgrBase *v9; // rdx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // edx
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  uint32_t *v21; // rax
  const data::MaterialExcelConfigMgrBase *v22; // rdx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  int32_t result; // eax
  MaterialExcelConfigMgr *material_config_mgr; // [rsp+28h] [rbp-2D8h]
  data::CookRecipeExcelConfigMap *__for_range; // [rsp+30h] [rbp-2D0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::reference v48; // [rsp+38h] [rbp-2C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *id; // [rsp+40h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *recipe_config; // [rsp+48h] [rbp-2B8h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+50h] [rbp-2B0h]
  const data::IdCountConfig *input_config; // [rsp+58h] [rbp-2A8h]
  const std::vector<data::IdCountConfig> *__for_range_1; // [rsp+60h] [rbp-2A0h]
  const data::IdCountConfig *output_config; // [rsp+68h] [rbp-298h]
  char v55[656]; // [rsp+70h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 32 8 14 __for_begin:59 64 8 12 __for_end:59 96 8 14 __for_begin:61 128 8 12 __for_end:61 160 "
                        "8 14 __for_begin:75 192 8 12 __for_end:75 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknow"
                        "n> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CookExcelConfigMgr::checkRecipeConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  material_config_mgr = &txt_config_mgr->material_config_mgr;
  __for_range = &this->cook_recipe_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v3 + 64)) )
    {
      v17 = 1;
      goto LABEL_74;
    }
    v48 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::CookRecipeExcelConfig>(v48);
    recipe_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CookRecipeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CookRecipeExcelConfig>(v48);
    __for_range_0 = &recipe_config->input_vec;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 96) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 128) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (const char *)(v3 + 128);
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 128)) )
      {
        v16 = 1;
        goto LABEL_30;
      }
      input_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 96));
      p_count = &input_config->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_count);
      }
      if ( !input_config->count )
        goto LABEL_22;
      v9 = material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&input_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&input_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&input_config->id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v9, input_config->id) )
        v10 = 0;
      else
LABEL_22:
        v10 = 1;
      if ( v10 )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkRecipeConfig",
      65);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])byte_1AC5E780);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
    v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v13, (const char (*)[21])byte_1AC5E060);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &input_config->id);
    v7 = byte_1AC5E0A0;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AC5E0A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
    *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v17 = 0;
      goto LABEL_74;
    }
    if ( std::vector<data::IdCountConfig>::empty(&recipe_config->input_vec) )
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
        "./src/txt_data_manual/CookExcelConfig.cpp",
        "checkRecipeConfig",
        71);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1AC5E780);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, id);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v20, (const char (*)[22])byte_1AC5E7C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v17 = 0;
      goto LABEL_74;
    }
    __for_range_1 = &recipe_config->quality_output_vec;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v7);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 160) = std::vector<data::IdCountConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v7);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 192) = std::vector<data::IdCountConfig>::end(__for_range_1);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 192)) )
      {
        v29 = 1;
        goto LABEL_62;
      }
      output_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
      v21 = &output_config->count;
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v21);
      }
      if ( !output_config->count )
        goto LABEL_48;
      v22 = material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&output_config->id);
      }
      if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v22, output_config->id) )
        v23 = 0;
      else
LABEL_48:
        v23 = 1;
      if ( v23 )
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
          "./src/txt_data_manual/CookExcelConfig.cpp",
          "checkRecipeConfig",
          79);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1AC5E780);
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, id);
        v27 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v26, (const char (*)[21])byte_1AC5E160);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &output_config->id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AC5E0A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v29 = 0;
        goto LABEL_62;
      }
      if ( *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&output_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&output_config->id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, output_config->id, ITEM_LIMIT_COOK) )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkRecipeConfig",
      84);
    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])byte_1AC5E780);
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, id);
    v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v32, (const char (*)[21])byte_1AC5E160);
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &output_config->id);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v34, (const char (*)[7])byte_1AC5E0A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_62:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v17 = 0;
      goto LABEL_74;
    }
    if ( std::vector<unsigned int>::size(&recipe_config->qte_quality_weight_vec) != 3 )
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
        "./src/txt_data_manual/CookExcelConfig.cpp",
        "checkRecipeConfig",
        91);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])byte_1AC5E780);
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, id);
      v38 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v37, (const char (*)[36])byte_1AC5E800);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &CookExcelConfigMgr::max_quality);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      v2 = -1;
      v17 = 0;
      goto LABEL_74;
    }
    M_current = std::vector<unsigned int>::end(&recipe_config->qte_quality_weight_vec)._M_current;
    v40._M_current = std::vector<unsigned int>::begin(&recipe_config->qte_quality_weight_vec)._M_current;
    if ( !std::accumulate<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,int>(
            v40,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
            0) )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/CookExcelConfig.cpp",
    "checkRecipeConfig",
    97);
  v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 544),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v42 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])byte_1AC5E780);
  v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v43, (const char (*)[39])byte_1AC5E860);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
  v2 = -1;
  v17 = 0;
LABEL_74:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v55 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
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
  return result;
};

// Line 105: range 0000000013A5AA90-0000000013A5B42A
int32_t __cdecl CookExcelConfigMgr::checkBonusConfig(
        const CookExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const data::AvatarExcelConfigMgrBase *v7; // rcx
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  data::CookRecipeExcelConfigMap *p_cook_recipe_excel_config_map; // rdx
  data::CookRecipeExcelConfigMap *v14; // rdx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int v24; // eax
  int32_t result; // eax
  AvatarExcelConfigMgr *avatar_config_mgr; // [rsp+18h] [rbp-218h]
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>> *__for_range; // [rsp+20h] [rbp-210h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false,false>::reference v29; // [rsp+28h] [rbp-208h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> > >::type *avatar_id; // [rsp+30h] [rbp-200h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> > >::type *__for_range_0; // [rsp+40h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false>::reference v32; // [rsp+48h] [rbp-1E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CookBonusExcelConfig> >::type *recipe_id; // [rsp+50h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CookBonusExcelConfig> >::type *bonus_config; // [rsp+58h] [rbp-1D8h]
  char v35[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:107 64 8 13 __for_end:107 96 8 15 __for_begin:109 128 8 13 __for_end:109 1"
                        "60 8 9 <unknown> 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CookExcelConfigMgr::checkBonusConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  avatar_config_mgr = &txt_config_mgr->avatar_config_mgr;
  __for_range = &this->avatar_bonus_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false> *)(v3 + 64)) )
      break;
    v29 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false,false> *const)(v3 + 32));
    avatar_id = std::get<0ul,unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>(v29);
    __for_range_0 = std::get<1ul,unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>(v29);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<unsigned int,data::CookBonusExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::CookBonusExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,data::CookBonusExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CookBonusExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::CookBonusExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookBonusExcelConfig>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookBonusExcelConfig>,false> *)(v3 + 128)) )
      {
        v12 = 1;
        goto LABEL_36;
      }
      v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false> *const)(v3 + 96));
      recipe_id = std::get<0ul,unsigned int const,data::CookBonusExcelConfig>(v32);
      bonus_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CookBonusExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CookBonusExcelConfig>(v32);
      v7 = avatar_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(avatar_id);
      }
      v8 = *avatar_id;
      if ( !data::AvatarExcelConfigMgrBase::findAvatarExcelConfig(v7, v8) )
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
          "./src/txt_data_manual/CookExcelConfig.cpp",
          "checkBonusConfig",
          113);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])"avatar_id: ");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, avatar_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1AC59CC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_36;
      }
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      p_cook_recipe_excel_config_map = &this->cook_recipe_excel_config_map;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v8);
      *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::find(p_cook_recipe_excel_config_map, recipe_id);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      v14 = &this->cook_recipe_excel_config_map;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, recipe_id);
      *(std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::CookRecipeExcelConfig>::end(v14);
      v15 = std::__detail::operator==<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v3 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookRecipeExcelConfig>,false> *)(v3 + 192));
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v15 )
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
          "./src/txt_data_manual/CookExcelConfig.cpp",
          "checkBonusConfig",
          118);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])"recipe_id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, recipe_id);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1AC59CC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_36;
      }
      if ( CookExcelConfigMgr::checkBonusType(this, txt_config_mgr, bonus_config) )
        break;
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false> *const)(v3 + 96));
    }
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkBonusConfig",
      123);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])"avatar_id: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &bonus_config->avatar_id);
    v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" recipe_id: ");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &bonus_config->recipe_id);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v23, (const char (*)[24])byte_1AC5EA80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v12 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v24 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false,false> *const)(v3 + 32));
  }
  v24 = 1;
LABEL_40:
  if ( v24 == 1 )
    v2 = 0;
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 132: range 0000000013A5B42C-0000000013A5BDA6
int32_t __cdecl CookExcelConfigMgr::checkBonusType(
        const CookExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const data::CookBonusExcelConfig *bonus_config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::CookBonusType bonus_type; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  int v13; // edx
  common::milog::MiLogStream *v14; // rax
  std::vector<unsigned int>::const_reference v15; // rax
  unsigned int *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const unsigned int *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-1D8h]
  char v25[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 8 15 __for_begin:141 64 8 13 __for_end:141 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = CookExcelConfigMgr::checkBonusType;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -218959118;
  v6[536862728] = -218959118;
  v6[536862730] = -218959118;
  v6[536862732] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&bonus_config->bonus_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&bonus_config->bonus_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&bonus_config->bonus_type);
  }
  bonus_type = bonus_config->bonus_type;
  if ( bonus_type != COOK_BONUS_REPLACE )
  {
    if ( bonus_type == COOK_BONUS_PROFICIENCY && !std::vector<unsigned int>::size(&bonus_config->param_vec) )
    {
      if ( *(char *)(((v4 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/CookExcelConfig.cpp",
        "checkBonusType",
        163);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v21, (const char (*)[35])byte_1AC5ED00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 352));
      v3 = -1;
      goto LABEL_43;
    }
LABEL_42:
    v3 = 0;
    goto LABEL_43;
  }
  if ( std::vector<unsigned int>::size(&bonus_config->complex_param_vec) > 2 )
  {
    __for_range = &bonus_config->complex_param_vec;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 32) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 64) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 32),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 64)) )
      {
        v13 = 1;
        goto LABEL_27;
      }
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 32));
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      if ( *v11 > 0x64u )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 32));
    }
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkBonusType",
      145);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v4 + 160),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v12, (const char (*)[37])byte_1AC5EC00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
    *(_DWORD *)(((v4 + 160) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
    v13 = 0;
LABEL_27:
    *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      if ( std::vector<unsigned int>::size(&bonus_config->param_vec) )
      {
        v15 = std::vector<unsigned int>::operator[](&bonus_config->param_vec, 0LL);
        v16 = (unsigned int *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(&txt_config_mgr->material_config_mgr, *v16) )
          goto LABEL_42;
        *(_DWORD *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CookExcelConfig.cpp",
          "checkBonusType",
          156);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v17, (const char (*)[30])byte_1AC5ECC0);
        v19 = std::vector<unsigned int>::operator[](&bonus_config->param_vec, 0LL);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, v19);
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1AC59CC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 288));
        v3 = -1;
      }
      else
      {
        *(_DWORD *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 96 + 95) & 7) >= *(_BYTE *)(((v4 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/CookExcelConfig.cpp",
          "checkBonusType",
          151);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v14, (const char (*)[35])byte_1AC5EC60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 224));
        v3 = -1;
      }
    }
  }
  else
  {
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
      "./src/txt_data_manual/CookExcelConfig.cpp",
      "checkBonusType",
      138);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v8, (const char (*)[39])byte_1AC5EBA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &CookExcelConfigMgr::max_quality);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    v3 = -1;
  }
LABEL_43:
  result = v3;
  if ( v25 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 174: range 0000000013A5BDA8-0000000013A5C08F
const data::CookBonusExcelConfig *__fastcall CookExcelConfigMgr::findCookBonusExcelConfig(
        const CookExcelConfigMgr *const this,
        __int64 avatar_id,
        uint32_t recipe_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>> *p_avatar_bonus_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::CookBonusExcelConfig *result; // rax
  std::unordered_map<unsigned int,data::CookBonusExcelConfig> *p_second; // rdx
  std::unordered_map<unsigned int,data::CookBonusExcelConfig> *v11; // rdx
  bool v12; // al
  char v14[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 13 avatar_id:173 48 4 13 recipe_id:173 64 8 8 iter:175 96 8 9 <unknown> 128 8 15 config_i"
                        "ter:180 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CookExcelConfigMgr::findCookBonusExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = avatar_id;
  *(_DWORD *)(v3 + 48) = recipe_id;
  p_avatar_bonus_config_map = &this->avatar_bonus_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, avatar_id);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::find(p_avatar_bonus_config_map, (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->avatar_bonus_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,data::CookBonusExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::CookBonusExcelConfig>::find(
                                                                                                   p_second,
                                                                                                   (const std::unordered_map<unsigned int,data::CookBonusExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_map<unsigned int,data::CookBonusExcelConfig> >,false,false> *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::unordered_map<unsigned int,data::CookBonusExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::CookBonusExcelConfig>::end(v11);
    v12 = std::__detail::operator==<std::pair<unsigned int const,data::CookBonusExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookBonusExcelConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CookBonusExcelConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::CookBonusExcelConfig>,false,false> *const)(v3 + 128))->second;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

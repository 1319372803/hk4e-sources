// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GachaExcelConfig.cpp

// Line 20: range 00000000144353FA-0000000014435630
int32_t __cdecl GachaExcelConfigMgr::rewriteConfig(GachaExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
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
  *(_QWORD *)(v2 + 16) = GachaExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GachaExcelConfigMgr::rewriteGachaPoolConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::rewriteGachaRuleConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::rewriteGachaProbRuleConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::rewriteGachaNewbieConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "rewriteConfig",
      26);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[21])"rewriteConfig failed");
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

// Line 34: range 0000000014435632-00000000144358C7
int32_t __cdecl GachaExcelConfigMgr::checkConfig(GachaExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
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
  *(_QWORD *)(v2 + 16) = GachaExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GachaExcelConfigMgr::checkGachaPoolConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaRuleConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaProbRuleConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaNewbieConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaTokenDropConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaWishConfig(this, txt_config_mgr)
    || GachaExcelConfigMgr::checkGachaRestrictConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "checkConfig",
      43);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[19])"checkConfig failed");
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

// Line 51: range 00000000144358C8-0000000014436460
int32_t __cdecl GachaExcelConfigMgr::rewriteGachaPoolConfig(
        GachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::GachaPoolExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaPoolExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::map<unsigned int,data::GachaItemType> *p_gacha_item_type_map; // rdx
  const std::map<unsigned int,data::GachaItemType>::key_type *p_item_id; // rcx
  __int64 v14; // rsi
  const std::map<unsigned int,data::GachaItemType>::key_type *v15; // rsi
  std::map<unsigned int,data::GachaItemType> *v16; // rdx
  bool v17; // al
  data::GachaItemType gacha_item_type; // r15d
  uint32_t *v19; // rsi
  std::map<unsigned int,data::GachaItemType>::mapped_type *v20; // rax
  data::GachaItemType *v21; // rdx
  char v22; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> >::pointer v23; // rdx
  data::GachaItemType *p_second; // rax
  data::GachaItemType second; // ecx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> >::pointer v29; // rdx
  char v30; // cl
  const char *v31; // rsi
  __int64 v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  __int64 v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // eax
  int32_t result; // eax
  data::GachaPoolExcelConfigVec *__for_range; // [rsp+28h] [rbp-1F8h]
  data::GachaPoolExcelConfig *gacha_pool_config; // [rsp+30h] [rbp-1F0h]
  std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::mapped_type *type_pool_map; // [rsp+38h] [rbp-1E8h]
  std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::mapped_type *pool_item_vec; // [rsp+40h] [rbp-1E0h]
  std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::mapped_type *gacha_item_map; // [rsp+48h] [rbp-1D8h]
  char v47[464]; // [rsp+50h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 14 __for_begin:52 64 8 12 __for_end:52 96 8 7 iter:65 128 8 9 <unknown> 160 8 9 <unknown>"
                        " 192 8 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::rewriteGachaPoolConfig;
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
  __for_range = &this->gacha_pool_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 32) = std::vector<data::GachaPoolExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 64) = std::vector<data::GachaPoolExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 64)) )
  {
    gacha_pool_config = __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 32));
    type_pool_map = std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::operator[](
                      &this->gacha_pool_type_map,
                      &gacha_pool_config->pool_root_id);
    pool_item_vec = std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::operator[](
                      type_pool_map,
                      &gacha_pool_config->gacha_item_type);
    std::vector<data::GachaPoolExcelConfig>::emplace_back<data::GachaPoolExcelConfig&>(
      pool_item_vec,
      gacha_pool_config,
      gacha_pool_config);
    gacha_item_map = std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::operator[](
                       &this->gacha_pool_item_map,
                       &gacha_pool_config->pool_root_id);
    v7 = std::map<unsigned int,data::GachaPoolExcelConfig>::emplace<unsigned int &,data::GachaPoolExcelConfig&>(
           gacha_item_map,
           &gacha_pool_config->item_id,
           gacha_pool_config,
           &gacha_pool_config->item_id,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "rewriteGachaPoolConfig",
        61);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[36])byte_1AD74080);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &gacha_pool_config->pool_root_id);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1AD740E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &gacha_pool_config->item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
      goto LABEL_47;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_gacha_item_type_map = &this->gacha_item_type_map;
    p_item_id = &gacha_pool_config->item_id;
    v14 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v14 )
      __asan_report_store8(v3 + 96, v14);
    v15 = p_item_id;
    *(std::map<unsigned int,data::GachaItemType>::iterator *)(v3 + 96) = std::map<unsigned int,data::GachaItemType>::find(
                                                                           p_gacha_item_type_map,
                                                                           p_item_id);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v16 = &this->gacha_item_type_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v15);
    *(std::map<unsigned int,data::GachaItemType>::iterator *)(v3 + 128) = std::map<unsigned int,data::GachaItemType>::end(v16);
    v17 = std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> >::_Self *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v17 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_pool_config->gacha_item_type);
      }
      gacha_item_type = gacha_pool_config->gacha_item_type;
      v19 = &gacha_pool_config->item_id;
      v20 = std::map<unsigned int,data::GachaItemType>::operator[](
              &this->gacha_item_type_map,
              &gacha_pool_config->item_id);
      v21 = v20;
      v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
      {
        LOBYTE(v19) = v22 != 0;
        __asan_report_store4(v20, v19);
      }
      *v21 = gacha_item_type;
LABEL_40:
      if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gacha_pool_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_pool_config->item_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&gacha_pool_config->item_id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, gacha_pool_config->item_id, ITEM_LIMIT_GACHA) )
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
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "rewriteGachaPoolConfig",
          79);
        v36 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[12])byte_1AD741E0);
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &gacha_pool_config->item_id);
        v38 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v37, (const char (*)[40])byte_1AD74220);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &gacha_pool_config->pool_root_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      goto LABEL_47;
    }
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> > *const)(v3 + 96));
    p_second = &v23->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v23->second;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_pool_config->gacha_item_type);
    }
    if ( second == gacha_pool_config->gacha_item_type )
      goto LABEL_40;
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
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "rewriteGachaPoolConfig",
      72);
    v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[19])byte_1AD74120);
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &gacha_pool_config->item_id);
    v31 = byte_1AD74160;
    v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v27, (const char (*)[27])byte_1AD74160);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::GachaItemType> > *const)(v3 + 96));
    v30 = *(_BYTE *)(((unsigned __int64)&v29->second >> 3) + 0x7FFF8000);
    LOBYTE(v31) = v30 != 0;
    if ( v30 != 0 && (char)((((_BYTE)v29 + 4) & 7) + 3) >= v30 )
      __asan_report_load4(&v29->second);
    v32 = (__int64)data::enumValToStr(v29->second, (__int64)v31);
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      v32 = __asan_report_store8(v3 + 160, v31);
    *(_QWORD *)(v3 + 160) = v32;
    v33 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v28, (const char *const *)(v3 + 160));
    v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])byte_1AD741A0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_pool_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_pool_config->gacha_item_type);
    }
    v35 = (__int64)data::enumValToStr(gacha_pool_config->gacha_item_type, (__int64)byte_1AD741A0);
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      v35 = __asan_report_store8(v3 + 192, byte_1AD741A0);
    *(_QWORD *)(v3 + 192) = v35;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v34, (const char *const *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v11 = 0;
LABEL_47:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v11 != 1 )
    {
      v39 = 0;
      goto LABEL_51;
    }
    __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 32));
  }
  v39 = 1;
LABEL_51:
  if ( v39 == 1 )
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

// Line 88: range 0000000014436462-000000001443AF1F
int32_t __cdecl GachaExcelConfigMgr::rewriteGachaRuleConfig(
        GachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  _BOOL4 v18; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 v21; // rax
  const std::string *v22; // rax
  bool v23; // r15
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  int v28; // r15d
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  const std::string *v36; // rax
  std::vector<unsigned int>::reference v37; // rax
  uint32_t *v38; // rdx
  std::vector<unsigned int>::reference v39; // rax
  uint32_t *v40; // rdx
  char v41; // cl
  std::vector<unsigned int>::size_type v42; // rsi
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // r14
  const std::string *v47; // rax
  int v48; // edx
  __int64 *v49; // rdx
  data::GachaGuaranteeParentTypeWeight *v50; // rax
  data::GachaGuaranteeParentTypeWeight *v51; // rdx
  unsigned __int64 v52; // rdx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  const std::string *v58; // rax
  char *v59; // rsi
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // r14
  const std::string *v63; // rax
  int v64; // eax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // r14
  const std::string *v68; // rax
  data::GachaItemParentType v69; // ecx
  char v70; // dl
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  _BOOL4 v73; // eax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  unsigned __int64 v76; // rax
  const std::string *v77; // rax
  std::string *v78; // rsi
  bool v79; // r15
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // r14
  const std::string *v83; // rax
  int v84; // r15d
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // r14
  const std::string *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // r14
  const std::string *v92; // rax
  const std::string *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // r14
  _BOOL4 v98; // eax
  int v99; // eax
  const std::string *v100; // rax
  char *v101; // rsi
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r14
  int v106; // eax
  char v107; // al
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // r14
  unsigned __int64 v111; // rax
  int v112; // ecx
  char v113; // al
  int v114; // ecx
  char v115; // dl
  const std::string *v116; // rax
  bool v117; // r15
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // r14
  int v121; // r15d
  data::GachaGuaranteeParentTypeWeightWithChilds *v122; // rsi
  data::GachaGuaranteeParentTypeWeightWithChilds *v123; // rdx
  __int64 *v124; // rdx
  data::GachaGuaranteeParentTypeWeight *v125; // rdx
  unsigned __int64 v126; // rdx
  unsigned __int64 v127; // rdx
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  _BOOL4 v130; // eax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  unsigned __int64 v133; // rax
  const std::string *v134; // rax
  bool v135; // r15
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // r14
  const std::string *v139; // rax
  _BOOL4 v140; // r15d
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // r14
  const std::string *v144; // rax
  const std::string *v145; // rax
  char *v146; // rsi
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // r14
  const std::string *v151; // rax
  int v152; // eax
  char v153; // al
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // r14
  const std::string *v157; // rax
  unsigned __int64 v158; // rax
  int v159; // ecx
  char v160; // al
  const std::string *v161; // rax
  bool v162; // r15
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // r14
  const std::string *v166; // rax
  int v167; // r15d
  char *v168; // rsi
  data::GachaItemParentType v169; // ecx
  char v170; // dl
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rdx
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  uint32_t idx; // [rsp+20h] [rbp-CA0h]
  uint32_t idx_0; // [rsp+24h] [rbp-C9Ch]
  uint32_t gacha_item_parent_type; // [rsp+28h] [rbp-C98h]
  uint32_t weight; // [rsp+2Ch] [rbp-C94h]
  data::GachaRuleExcelConfigMap *__for_range; // [rsp+30h] [rbp-C90h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-C88h]
  std::tuple_element<1,std::pair<unsigned int const,data::GachaRuleExcelConfig> >::type *gacha_rule_config; // [rsp+48h] [rbp-C78h]
  char v183[3184]; // [rsp+50h] [rbp-C70h] BYREF

  v3 = (unsigned __int64)v183;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(3136LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "59 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 4 26 gacha_item_parent_type:168 176 4 26 gacha"
                        "_item_parent_type:212 192 4 10 weight:218 208 4 26 gacha_item_parent_type:268 224 8 14 __for_beg"
                        "in:89 256 8 12 __for_end:89 288 16 27 item_parent_type_weight:149 320 16 27 item_parent_type_wei"
                        "ght:238 352 24 13 param_vec:124 416 24 13 param_vec:194 480 24 13 param_vec:257 544 32 9 <unknow"
                        "n> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown"
                        "> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unkno"
                        "wn> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <u"
                        "nknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 "
                        "9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144"
                        " 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> "
                        "2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unkno"
                        "wn> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 40 34 item_parent_type_weig"
                        "ht_childs:229 3056 40 27 item_parent_type_childs:279";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::rewriteGachaRuleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234753535;
  v5[536862723] = -234753535;
  v5[536862724] = -234753535;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -219021312;
  v5[536862730] = -219021312;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -218959118;
  v5[536862786] = -218959118;
  v5[536862788] = -218959118;
  v5[536862790] = -218959118;
  v5[536862792] = -218959118;
  v5[536862794] = -218959118;
  v5[536862796] = -218959118;
  v5[536862798] = -218959118;
  v5[536862800] = -218959118;
  v5[536862802] = -218959118;
  v5[536862804] = -218959118;
  v5[536862806] = -218959118;
  v5[536862808] = -218959118;
  v5[536862810] = -218959118;
  v5[536862812] = -218959118;
  v5[536862814] = -218959360;
  v5[536862815] = 62194;
  v5[536862816] = -218103808;
  v5[536862817] = -202116109;
  __for_range = &this->gacha_rule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::end(__for_range);
  while ( 2 )
  {
    if ( std::__detail::operator!=<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false> *)(v3 + 224),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false> *)(v3 + 256)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false> *const)(v3 + 224));
      std::get<0ul,unsigned int const,data::GachaRuleExcelConfig>(__in);
      gacha_rule_config = std::get<1ul,unsigned int const,data::GachaRuleExcelConfig>(__in);
      if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_rule_config->gacha_guarantee_type);
      }
      switch ( gacha_rule_config->gacha_guarantee_type )
      {
        case GACHA_GUARANTEE_SPECIFIED_COUNT:
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
          }
          if ( gacha_rule_config->gacha_guarantee_times )
          {
            if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
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
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                102);
              v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                     (common::milog::MiLogStream *const)(v3 + 608),
                     (const char (*)[22])byte_1AD747E0);
              v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v9,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])byte_1AD74860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              v2 = -1;
              v8 = 0;
            }
            else
            {
              v11 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              if ( !common::tools::StringUtils::strToNum<unsigned int>(v11, &gacha_rule_config->gacha_guarantee_item, 1) )
                goto LABEL_241;
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
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                107);
              v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 672),
                      (const char (*)[22])byte_1AD747E0);
              v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v12,
                      &gacha_rule_config->gacha_rule_id);
              v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v13,
                      (const char (*)[23])byte_1AD748A0);
              v15 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, v15);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
              v2 = -1;
              v8 = 0;
            }
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
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "rewriteGachaRuleConfig",
              97);
            v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                   (common::milog::MiLogStream *const)(v3 + 544),
                   (const char (*)[22])byte_1AD747E0);
            v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v6,
                   &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v7, (const char (*)[23])byte_1AD74820);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            v2 = -1;
            v8 = 0;
          }
          break;
        case GACHA_GUARANTEE_LOOP_COUNT:
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
          }
          if ( gacha_rule_config->gacha_guarantee_times )
          {
            if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
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
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                121);
              v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 800),
                      (const char (*)[22])byte_1AD747E0);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v20, (const char (*)[19])byte_1AD74860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
              *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v18 = 0;
            }
            else
            {
              v21 = ((v3 + 352) >> 3) + 2147450880;
              *(_WORD *)v21 = 0;
              *(_BYTE *)(v21 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 352));
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 48);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 928),
                ":",
                (const std::allocator<char> *)(v3 + 48));
              *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 32);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 864),
                ",",
                (const std::allocator<char> *)(v3 + 32));
              v22 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              v23 = common::tools::StringUtils::splitToList<unsigned int>(
                      v22,
                      (const std::string *)(v3 + 864),
                      (const std::string *)(v3 + 928),
                      2u,
                      (std::vector<unsigned int> *)(v3 + 352),
                      0) != 0;
              std::string::~string((void *)(v3 + 864));
              *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 32);
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
              std::string::~string((void *)(v3 + 928));
              *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 48);
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
              if ( v23 )
              {
                *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  127);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 992),
                        (const char (*)[16])byte_1AD748E0);
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        &gacha_rule_config->gacha_rule_id);
                v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        v25,
                        (const char (*)[23])byte_1AD748A0);
                v27 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v28 = 0;
              }
              else if ( (std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) & 1) != 0 )
              {
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  132);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1056),
                        (const char (*)[16])byte_1AD748E0);
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        &gacha_rule_config->gacha_rule_id);
                v31 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        v30,
                        (const char (*)[23])byte_1AD748A0);
                v32 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, v32);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v28 = 0;
              }
              else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) )
              {
                for ( idx = 0;
                      idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 352)) - 1;
                      idx += 2 )
                {
                  v37 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 352), idx);
                  v38 = v37;
                  if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v37);
                  }
                  gacha_item_parent_type = *v38;
                  v42 = idx + 1;
                  v39 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 352), v42);
                  v40 = v39;
                  v41 = *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000);
                  LOBYTE(v42) = v41 != 0;
                  if ( v41 != 0 && (char)(((unsigned __int8)v39 & 7) + 3) >= v41 )
                    __asan_report_load4(v39);
                  weight = *v40;
                  if ( !data::isValidGachaItemParentType(gacha_item_parent_type) || !gacha_item_parent_type )
                  {
                    *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1184, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1184),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "rewriteGachaRuleConfig",
                      146);
                    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1184),
                            (const char (*)[16])byte_1AD748E0);
                    v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v44,
                            &gacha_rule_config->gacha_rule_id);
                    v46 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                            v45,
                            (const char (*)[23])byte_1AD748A0);
                    v47 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, v47);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
                    *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v48 = 0;
                  }
                  else
                  {
                    *(_WORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
                    v49 = &`vtable for'data::GachaGuaranteeParentTypeWeight + 2;
                    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 288, v42);
                    *(_QWORD *)(v3 + 288) = v49;
                    if ( *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 296) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 296, v42);
                    }
                    *(_DWORD *)(v3 + 296) = 0;
                    if ( *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) != 0
                      && (char)(((v3 + 44) & 7) + 3) >= *(_BYTE *)(((v3 + 300) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store4(v3 + 300, (((_BYTE)v3 + 44) & 7u) + 3);
                    }
                    *(_DWORD *)(v3 + 300) = 0;
                    *(_DWORD *)(v3 + 296) = gacha_item_parent_type;
                    *(_DWORD *)(v3 + 300) = weight;
                    v50 = std::move<data::GachaGuaranteeParentTypeWeight &>((data::GachaGuaranteeParentTypeWeight *)(v3 + 288));
                    std::vector<data::GachaGuaranteeParentTypeWeight>::emplace_back<data::GachaGuaranteeParentTypeWeight>(
                      &gacha_rule_config->gacha_guarantee_parent_type_weight_vec,
                      v50,
                      v51);
                    data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight((data::GachaGuaranteeParentTypeWeight *const)(v3 + 288));
                    v48 = 1;
                  }
                  *(_WORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -1800;
                  if ( v48 != 1 )
                  {
                    v28 = 0;
                    goto LABEL_74;
                  }
                }
                v28 = 1;
              }
              else
              {
                *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1120, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1120),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  137);
                v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1120),
                        (const char (*)[16])byte_1AD748E0);
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        &gacha_rule_config->gacha_rule_id);
                v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v34,
                        (const char (*)[20])byte_1AD74920);
                v36 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, v36);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
                *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v28 = 0;
              }
LABEL_74:
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 352));
              v18 = v28 == 1;
            }
          }
          else
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
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "rewriteGachaRuleConfig",
              116);
            v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[22])byte_1AD747E0);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])byte_1AD74820);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v18 = 0;
          }
          v52 = ((v3 + 352) >> 3) + 2147450880;
          *(_WORD *)v52 = -1800;
          *(_BYTE *)(v52 + 2) = -8;
          if ( v18 )
            goto LABEL_241;
          v8 = 0;
          break;
        case GACHA_GUARANTEE_N_COUNT:
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
          }
          if ( gacha_rule_config->gacha_guarantee_times )
          {
            if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
            {
              *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1312, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1312),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                165);
              v56 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 1312),
                      (const char (*)[22])byte_1AD747E0);
              v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v56,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v57, (const char (*)[19])byte_1AD74860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
              *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v55 = 0;
            }
            else
            {
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 160, (((_BYTE)gacha_rule_config + 20) & 7u) + 3);
              *(_DWORD *)(v3 + 160) = 0;
              v58 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              v59 = (char *)(v3 + 160);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v58, (unsigned int *)(v3 + 160), 1) )
              {
                *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1376, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1376),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  171);
                v60 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 1376),
                        (const char (*)[22])byte_1AD747E0);
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        &gacha_rule_config->gacha_rule_id);
                v62 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        v61,
                        (const char (*)[23])byte_1AD748A0);
                v63 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, v63);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
                *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v55 = 0;
              }
              else
              {
                v64 = *(unsigned __int8 *)(((v3 + 160) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v64 != 0 && (char)v64 <= 3 )
                  __asan_report_load4(v3 + 160);
                if ( !data::isValidGachaItemParentType(*(_DWORD *)(v3 + 160)) )
                {
                  *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1440, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1440),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GachaExcelConfig.cpp",
                    "rewriteGachaRuleConfig",
                    176);
                  v65 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          (common::milog::MiLogStream *const)(v3 + 1440),
                          (const char (*)[22])byte_1AD747E0);
                  v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v65,
                          &gacha_rule_config->gacha_rule_id);
                  v67 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          v66,
                          (const char (*)[35])byte_1AD74960);
                  v68 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v67, v68);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
                  *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v55 = 0;
                }
                else
                {
                  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v3 + 160);
                  }
                  v69 = *(_DWORD *)(v3 + 160);
                  v70 = *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type >> 3)
                                 + 0x7FFF8000);
                  if ( v70 != 0 && (char)((((_BYTE)gacha_rule_config + 116) & 7) + 3) >= v70 )
                  {
                    LOBYTE(v59) = v70 != 0;
                    __asan_report_store4(&gacha_rule_config->gacha_guarantee_item_parent_type, v59);
                  }
                  gacha_rule_config->gacha_guarantee_item_parent_type = v69;
                  v55 = 1;
                }
              }
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1248, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1248),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "rewriteGachaRuleConfig",
              160);
            v53 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 1248),
                    (const char (*)[22])byte_1AD747E0);
            v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v53,
                    &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v54, (const char (*)[23])byte_1AD74820);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
            *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v55 = 0;
          }
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( v55 == 1 )
            goto LABEL_241;
          v8 = 0;
          break;
        case GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS:
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
          }
          if ( gacha_rule_config->gacha_guarantee_times )
          {
            if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
            {
              *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1568, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1568),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                191);
              v74 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 1568),
                      (const char (*)[22])byte_1AD747E0);
              v75 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v74,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v75, (const char (*)[19])byte_1AD74860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
              *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v73 = 0;
            }
            else
            {
              v76 = ((v3 + 416) >> 3) + 2147450880;
              *(_WORD *)v76 = 0;
              *(_BYTE *)(v76 + 2) = 0;
              std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 416));
              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 80);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 1696),
                ":",
                (const std::allocator<char> *)(v3 + 80));
              *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 64);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 1632),
                ",",
                (const std::allocator<char> *)(v3 + 64));
              v77 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              v78 = (std::string *)(v3 + 1632);
              v79 = common::tools::StringUtils::split(
                      v77,
                      (const std::string *)(v3 + 1632),
                      (const std::string *)(v3 + 1696),
                      3u,
                      (std::vector<std::string> *)(v3 + 416),
                      0) != 0;
              std::string::~string((void *)(v3 + 1632));
              *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 64);
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
              std::string::~string((void *)(v3 + 1696));
              *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 80);
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
              if ( v79 )
              {
                *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1760, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1760),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  197);
                v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1760),
                        (const char (*)[16])byte_1AD748E0);
                v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v80,
                        &gacha_rule_config->gacha_rule_id);
                v82 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        v81,
                        (const char (*)[23])byte_1AD748A0);
                v83 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v82, v83);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
                *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v84 = 0;
              }
              else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 416)) % 3 )
              {
                *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1824) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1824, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1824),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  202);
                v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1824),
                        (const char (*)[16])byte_1AD748E0);
                v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v85,
                        &gacha_rule_config->gacha_rule_id);
                v87 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        v86,
                        (const char (*)[23])byte_1AD748A0);
                v88 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v87, v88);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
                *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v84 = 0;
              }
              else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 416)) )
              {
                for ( idx_0 = 0;
                      idx_0 < std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 416)) - 1;
                      idx_0 += 3 )
                {
                  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 176, v78);
                  }
                  *(_DWORD *)(v3 + 176) = 0;
                  v93 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 416), idx_0);
                  if ( common::tools::StringUtils::strToNum<unsigned int>(v93, (unsigned int *)(v3 + 176), 0) )
                  {
                    *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1952) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1952, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1952),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "rewriteGachaRuleConfig",
                      215);
                    v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1952),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            v94,
                            (const char (*)[16])byte_1AD748E0);
                    v96 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v95,
                            &gacha_rule_config->gacha_rule_id);
                    v97 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                            v96,
                            (const char (*)[23])byte_1AD748A0);
                    v78 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v97, v78);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
                    *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v98 = 0;
                  }
                  else
                  {
                    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
                    v99 = *(unsigned __int8 *)(((v3 + 192) >> 3) + 0x7FFF8000);
                    if ( (_BYTE)v99 != 0 && (char)v99 <= 3 )
                      __asan_report_store4(v3 + 192, v3 + 176);
                    *(_DWORD *)(v3 + 192) = 0;
                    v100 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 416), idx_0 + 1);
                    v101 = (char *)(v3 + 192);
                    if ( common::tools::StringUtils::strToNum<unsigned int>(v100, (unsigned int *)(v3 + 192), 0) )
                    {
                      *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 2016) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 2016, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 2016),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/GachaExcelConfig.cpp",
                        "rewriteGachaRuleConfig",
                        221);
                      v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 2016),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               v102,
                               (const char (*)[16])byte_1AD748E0);
                      v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v103,
                               &gacha_rule_config->gacha_rule_id);
                      v105 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                               v104,
                               (const char (*)[23])byte_1AD748A0);
                      v78 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, v78);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2016));
                      *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v98 = 0;
                    }
                    else
                    {
                      v106 = *(unsigned __int8 *)(((v3 + 176) >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v106 != 0 && (char)v106 <= 3 )
                        __asan_report_load4(v3 + 176);
                      if ( !data::isValidGachaItemParentType(*(_DWORD *)(v3 + 176)) )
                        goto LABEL_148;
                      if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(v3 + 176);
                      }
                      if ( *(_DWORD *)(v3 + 176) )
                        v107 = 0;
                      else
LABEL_148:
                        v107 = 1;
                      if ( v107 )
                      {
                        *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 2080) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 2080, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 2080),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/GachaExcelConfig.cpp",
                          "rewriteGachaRuleConfig",
                          226);
                        v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 2080),
                                 (const char (*)[16])byte_1AD748E0);
                        v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                 v108,
                                 &gacha_rule_config->gacha_rule_id);
                        v110 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                 v109,
                                 (const char (*)[23])byte_1AD748A0);
                        v78 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v110, v78);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2080));
                        *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v98 = 0;
                      }
                      else
                      {
                        v111 = ((v3 + 2976) >> 3) + 2147450880;
                        *(_DWORD *)v111 = 0;
                        *(_BYTE *)(v111 + 4) = 0;
                        data::GachaGuaranteeParentTypeWeightWithChilds::GachaGuaranteeParentTypeWeightWithChilds((data::GachaGuaranteeParentTypeWeightWithChilds *const)(v3 + 2976));
                        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v3 + 176);
                        }
                        v112 = *(_DWORD *)(v3 + 176);
                        v113 = *(_BYTE *)(((v3 + 2984) >> 3) + 0x7FFF8000);
                        if ( v113 != 0 && v113 <= 3 )
                        {
                          LOBYTE(v101) = v113 != 0;
                          __asan_report_store4(v3 + 2984, v101);
                        }
                        *(_DWORD *)(v3 + 2984) = v112;
                        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v3 + 192);
                        }
                        v114 = *(_DWORD *)(v3 + 192);
                        v115 = *(_BYTE *)(((v3 + 2988) >> 3) + 0x7FFF8000);
                        if ( v115 != 0 && (char)(((v3 - 84) & 7) + 3) >= v115 )
                        {
                          LOBYTE(v101) = v115 != 0;
                          __asan_report_store4(v3 + 2988, v101);
                        }
                        *(_DWORD *)(v3 + 2988) = v114;
                        *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v3 + 96);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v3 + 2144),
                          "&",
                          (const std::allocator<char> *)(v3 + 96));
                        v116 = std::vector<std::string>::operator[](
                                 (std::vector<std::string> *const)(v3 + 416),
                                 idx_0 + 2);
                        v117 = common::tools::StringUtils::splitToList<unsigned int>(
                                 v116,
                                 (const std::string *)(v3 + 2144),
                                 (std::vector<unsigned int> *)(v3 + 2992),
                                 0) != 0;
                        std::string::~string((void *)(v3 + 2144));
                        *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v3 + 96);
                        *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                        if ( v117 )
                        {
                          *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 2208) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 2208, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 2208),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/GachaExcelConfig.cpp",
                            "rewriteGachaRuleConfig",
                            234);
                          v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 2208),
                                   (const char (*)[16])byte_1AD748E0);
                          v119 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                   v118,
                                   &gacha_rule_config->gacha_rule_id);
                          v120 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                   v119,
                                   (const char (*)[23])byte_1AD748A0);
                          v78 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v120, v78);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2208));
                          *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v121 = 0;
                        }
                        else
                        {
                          v122 = std::move<data::GachaGuaranteeParentTypeWeightWithChilds &>((data::GachaGuaranteeParentTypeWeightWithChilds *)(v3 + 2976));
                          std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::emplace_back<data::GachaGuaranteeParentTypeWeightWithChilds>(
                            &gacha_rule_config->gacha_guarantee_parent_type_weight_childs_vec,
                            v122,
                            v123);
                          *(_WORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
                          v124 = &`vtable for'data::GachaGuaranteeParentTypeWeight + 2;
                          if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
                            __asan_report_store8(v3 + 320, v122);
                          *(_QWORD *)(v3 + 320) = v124;
                          if ( *(_BYTE *)(((v3 + 328) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 328) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(v3 + 328, v122);
                          }
                          *(_DWORD *)(v3 + 328) = 0;
                          if ( *(_BYTE *)(((v3 + 332) >> 3) + 0x7FFF8000) != 0
                            && (char)(((v3 + 76) & 7) + 3) >= *(_BYTE *)(((v3 + 332) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store4(v3 + 332, (((_BYTE)v3 + 76) & 7u) + 3);
                          }
                          *(_DWORD *)(v3 + 332) = 0;
                          if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v3 + 176);
                          }
                          *(_DWORD *)(v3 + 328) = *(_DWORD *)(v3 + 176);
                          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v3 + 192);
                          }
                          *(_DWORD *)(v3 + 332) = *(_DWORD *)(v3 + 192);
                          v78 = (std::string *)std::move<data::GachaGuaranteeParentTypeWeight &>((data::GachaGuaranteeParentTypeWeight *)(v3 + 320));
                          std::vector<data::GachaGuaranteeParentTypeWeight>::emplace_back<data::GachaGuaranteeParentTypeWeight>(
                            &gacha_rule_config->gacha_guarantee_parent_type_weight_vec,
                            (data::GachaGuaranteeParentTypeWeight *)v78,
                            v125);
                          data::GachaGuaranteeParentTypeWeight::~GachaGuaranteeParentTypeWeight((data::GachaGuaranteeParentTypeWeight *const)(v3 + 320));
                          v121 = 1;
                        }
                        data::GachaGuaranteeParentTypeWeightWithChilds::~GachaGuaranteeParentTypeWeightWithChilds((data::GachaGuaranteeParentTypeWeightWithChilds *const)(v3 + 2976));
                        v98 = v121 == 1;
                      }
                    }
                  }
                  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                  v126 = ((v3 + 2976) >> 3) + 2147450880;
                  *(_DWORD *)v126 = -117901064;
                  *(_BYTE *)(v126 + 4) = -8;
                  *(_WORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -1800;
                  if ( !v98 )
                  {
                    v84 = 0;
                    goto LABEL_182;
                  }
                }
                v84 = 1;
              }
              else
              {
                *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1888, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1888),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  207);
                v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1888),
                        (const char (*)[16])byte_1AD748E0);
                v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v89,
                        &gacha_rule_config->gacha_rule_id);
                v91 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v90,
                        (const char (*)[20])byte_1AD74920);
                v92 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v91, v92);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
                *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v84 = 0;
              }
LABEL_182:
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 416));
              v73 = v84 == 1;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1504, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1504),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "rewriteGachaRuleConfig",
              186);
            v71 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 1504),
                    (const char (*)[22])byte_1AD747E0);
            v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v71,
                    &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v72, (const char (*)[23])byte_1AD74820);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
            *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v73 = 0;
          }
          v127 = ((v3 + 416) >> 3) + 2147450880;
          *(_WORD *)v127 = -1800;
          *(_BYTE *)(v127 + 2) = -8;
          if ( v73 )
            goto LABEL_241;
          v8 = 0;
          break;
        case GACHA_GUARANTEE_N_COUNT_WITH_CHILDS:
          if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
          }
          if ( gacha_rule_config->gacha_guarantee_times )
          {
            if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
            {
              *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2336) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2336, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2336),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "rewriteGachaRuleConfig",
                254);
              v131 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                       (common::milog::MiLogStream *const)(v3 + 2336),
                       (const char (*)[22])byte_1AD747E0);
              v132 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v131,
                       &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v132, (const char (*)[19])byte_1AD74860);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2336));
              *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v130 = 0;
            }
            else
            {
              v133 = ((v3 + 480) >> 3) + 2147450880;
              *(_WORD *)v133 = 0;
              *(_BYTE *)(v133 + 2) = 0;
              std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 480));
              *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 2464),
                ":",
                (const std::allocator<char> *)(v3 + 128));
              *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 112);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 2400),
                ",",
                (const std::allocator<char> *)(v3 + 112));
              v134 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
              v135 = common::tools::StringUtils::split(
                       v134,
                       (const std::string *)(v3 + 2400),
                       (const std::string *)(v3 + 2464),
                       2u,
                       (std::vector<std::string> *)(v3 + 480),
                       0) != 0;
              std::string::~string((void *)(v3 + 2400));
              *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 112);
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
              std::string::~string((void *)(v3 + 2464));
              *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 128);
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( v135 )
              {
                *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2528) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2528, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2528),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  260);
                v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2528),
                         (const char (*)[16])byte_1AD748E0);
                v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v136,
                         &gacha_rule_config->gacha_rule_id);
                v138 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                         v137,
                         (const char (*)[23])byte_1AD748A0);
                v139 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v138, v139);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
                *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v140 = 0;
              }
              else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v3 + 480)) == 2 )
              {
                *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 208, v3 + 2400);
                *(_DWORD *)(v3 + 208) = 0;
                v145 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 480), 0LL);
                v146 = (char *)(v3 + 208);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v145, (unsigned int *)(v3 + 208), 0) )
                {
                  *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 2656) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 2656, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 2656),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GachaExcelConfig.cpp",
                    "rewriteGachaRuleConfig",
                    271);
                  v147 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2656),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v148 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           v147,
                           (const char (*)[16])byte_1AD748E0);
                  v149 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v148,
                           &gacha_rule_config->gacha_rule_id);
                  v150 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                           v149,
                           (const char (*)[23])byte_1AD748A0);
                  v151 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v150, v151);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2656));
                  *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v140 = 0;
                }
                else
                {
                  v152 = *(unsigned __int8 *)(((v3 + 208) >> 3) + 0x7FFF8000);
                  if ( (_BYTE)v152 != 0 && (char)v152 <= 3 )
                    __asan_report_load4(v3 + 208);
                  if ( !data::isValidGachaItemParentType(*(_DWORD *)(v3 + 208)) )
                    goto LABEL_215;
                  if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(v3 + 208);
                  }
                  if ( *(_DWORD *)(v3 + 208) )
                    v153 = 0;
                  else
LABEL_215:
                    v153 = 1;
                  if ( v153 )
                  {
                    *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2720) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2720, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2720),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "rewriteGachaRuleConfig",
                      276);
                    v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 2720),
                             (const char (*)[16])byte_1AD748E0);
                    v155 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                             v154,
                             &gacha_rule_config->gacha_rule_id);
                    v156 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                             v155,
                             (const char (*)[23])byte_1AD748A0);
                    v157 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v156, v157);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
                    *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v140 = 0;
                  }
                  else
                  {
                    v158 = ((v3 + 3056) >> 3) + 2147450880;
                    *(_DWORD *)v158 = 0;
                    *(_BYTE *)(v158 + 4) = 0;
                    data::GachaGuaranteeParentTypeWithChilds::GachaGuaranteeParentTypeWithChilds((data::GachaGuaranteeParentTypeWithChilds *const)(v3 + 3056));
                    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v3 + 208);
                    }
                    v159 = *(_DWORD *)(v3 + 208);
                    v160 = *(_BYTE *)(((v3 + 3064) >> 3) + 0x7FFF8000);
                    if ( v160 != 0 && v160 <= 3 )
                    {
                      LOBYTE(v146) = v160 != 0;
                      __asan_report_store4(v3 + 3064, v146);
                    }
                    *(_DWORD *)(v3 + 3064) = v159;
                    *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v3 + 144);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v3 + 2784),
                      "&",
                      (const std::allocator<char> *)(v3 + 144));
                    v161 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v3 + 480), 1uLL);
                    v162 = common::tools::StringUtils::splitToList<unsigned int>(
                             v161,
                             (const std::string *)(v3 + 2784),
                             (std::vector<unsigned int> *)(v3 + 3072),
                             0) != 0;
                    std::string::~string((void *)(v3 + 2784));
                    *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v3 + 144);
                    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                    if ( v162 )
                    {
                      *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 2848) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 2848, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 2848),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/GachaExcelConfig.cpp",
                        "rewriteGachaRuleConfig",
                        283);
                      v163 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 2848),
                               (const char (*)[16])byte_1AD748E0);
                      v164 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v163,
                               &gacha_rule_config->gacha_rule_id);
                      v165 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                               v164,
                               (const char (*)[23])byte_1AD748A0);
                      v166 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v165, v166);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2848));
                      *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v167 = 0;
                    }
                    else
                    {
                      v168 = (char *)(v3 + 3056);
                      data::GachaGuaranteeParentTypeWithChilds::operator=(
                        &gacha_rule_config->gacha_guarantee_item_parent_type_childs,
                        (const data::GachaGuaranteeParentTypeWithChilds *)(v3 + 3056));
                      if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(v3 + 208);
                      }
                      v169 = *(_DWORD *)(v3 + 208);
                      v170 = *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type >> 3)
                                      + 0x7FFF8000);
                      if ( v170 != 0 && (char)((((_BYTE)gacha_rule_config + 116) & 7) + 3) >= v170 )
                      {
                        LOBYTE(v168) = v170 != 0;
                        __asan_report_store4(&gacha_rule_config->gacha_guarantee_item_parent_type, v168);
                      }
                      gacha_rule_config->gacha_guarantee_item_parent_type = v169;
                      v167 = 1;
                    }
                    data::GachaGuaranteeParentTypeWithChilds::~GachaGuaranteeParentTypeWithChilds((data::GachaGuaranteeParentTypeWithChilds *const)(v3 + 3056));
                    v140 = v167 == 1;
                  }
                }
              }
              else
              {
                *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2592) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2592, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2592),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "rewriteGachaRuleConfig",
                  265);
                v141 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2592),
                         (const char (*)[16])byte_1AD748E0);
                v142 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v141,
                         &gacha_rule_config->gacha_rule_id);
                v143 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                         v142,
                         (const char (*)[23])byte_1AD748A0);
                v144 = std::vector<std::string>::operator[](&gacha_rule_config->gacha_guarantee_params, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v143, v144);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2592));
                *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v140 = 0;
              }
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 480));
              v130 = v140;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2272) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2272, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2272),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "rewriteGachaRuleConfig",
              249);
            v128 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                     (common::milog::MiLogStream *const)(v3 + 2272),
                     (const char (*)[22])byte_1AD747E0);
            v129 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v128,
                     &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v129, (const char (*)[23])byte_1AD74820);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2272));
            *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v130 = 0;
          }
          v171 = ((v3 + 480) >> 3) + 2147450880;
          *(_WORD *)v171 = -1800;
          *(_BYTE *)(v171 + 2) = -8;
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          v172 = ((v3 + 3056) >> 3) + 2147450880;
          *(_DWORD *)v172 = -117901064;
          *(_BYTE *)(v172 + 4) = -8;
          if ( v130 )
          {
LABEL_241:
            std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false> *const)(v3 + 224));
            continue;
          }
          v8 = 0;
          break;
        default:
          *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2912) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2912, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2912),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "rewriteGachaRuleConfig",
            292);
          v173 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                   (common::milog::MiLogStream *const)(v3 + 2912),
                   (const char (*)[22])byte_1AD747E0);
          v174 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v173,
                   &gacha_rule_config->gacha_rule_id);
          common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v174, (const char (*)[22])byte_1AD74A00);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2912));
          v2 = -1;
          v8 = 0;
          break;
      }
    }
    else
    {
      v8 = 1;
    }
    break;
  }
  if ( v8 == 1 )
    v2 = 0;
  if ( v183 == (char *)v3 )
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8164) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862744) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450968 - (((_DWORD)v5 + 2147450976) & 0xFFFFFFF8) + 276) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8170) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8178) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8180) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 3136LL, v183);
  }
  return v2;
};

// Line 302: range 000000001443AF20-000000001443CD1B
int32_t __cdecl GachaExcelConfigMgr::rewriteGachaProbRuleConfig(
        GachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  data::GachaParentProbRuleConfig *v7; // rsi
  data::GachaItemParentType *p_gacha_item_parent_type; // rax
  data::GachaParentProbRuleConfig *M_current; // rcx
  char *v10; // rsi
  bool v11; // al
  unsigned __int64 v12; // rax
  uint32_t v13; // ecx
  char v14; // al
  __int64 v15; // rsi
  data::GachaItemParentType gacha_item_parent_type; // ecx
  char v17; // dl
  __int64 v18; // rsi
  uint32_t round_table_priority; // ecx
  char v20; // al
  uint32_t base_prob; // ecx
  char v22; // dl
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool is_guaranteed; // cl
  char v26; // al
  unsigned __int64 v27; // rax
  std::pair<std::_Rb_tree_const_iterator<data::GachaItemType>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  __int64 v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  __int64 v36; // rax
  int v37; // edx
  uint32_t v38; // ecx
  __int64 v39; // rsi
  uint32_t v40; // ecx
  char v41; // al
  __int64 v42; // rsi
  __int64 v43; // rdx
  int v44; // edx
  int v45; // edx
  const char *v46; // rsi
  uint32_t *p_base_prob; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // r14
  __int64 v52; // rsi
  __int64 v53; // rax
  common::milog::MiLogStream *v54; // rax
  int v55; // edx
  float v56; // xmm1_4
  int v57; // edi
  float GachaGuaranteeIncreaseCoef; // xmm1_4
  __int64 v59; // rsi
  int v60; // edx
  char *v61; // rsi
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // r14
  __int64 v65; // rsi
  __int64 v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  const char *v72; // rsi
  common::milog::MiLogStream *v73; // rcx
  char v74; // al
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  data::GachaParentProbRuleConfig *__last; // [rsp+8h] [rbp-518h]
  data::GachaItemParentType parent_type; // [rsp+2Ch] [rbp-4F4h]
  data::GachaProbRuleConfigVec *__for_range; // [rsp+30h] [rbp-4F0h]
  const ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+38h] [rbp-4E8h]
  std::map<unsigned int,std::vector<data::GachaProbRuleConfig>> *__for_range_0; // [rsp+40h] [rbp-4E0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::reference v87; // [rsp+48h] [rbp-4D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *gacha_prob_rule_id; // [rsp+50h] [rbp-4D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *gacha_prob_rule_vec; // [rsp+58h] [rbp-4C8h]
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::mapped_type *parent_prob_rule_vec; // [rsp+60h] [rbp-4C0h]
  const data::GachaProbRuleConfig *prob_rule_config_0; // [rsp+70h] [rbp-4B0h]
  data::GachaParentProbRuleConfig *parent_rule_config; // [rsp+78h] [rbp-4A8h]
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>> *__for_range_2; // [rsp+80h] [rbp-4A0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::reference __in; // [rsp+88h] [rbp-498h]
  const unsigned int *gacha_prob_rule_id_0; // [rsp+90h] [rbp-490h]
  std::tuple_element<1,std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *__for_range_3; // [rsp+A0h] [rbp-480h]
  data::GachaParentProbRuleConfig *parent_rule_config_0; // [rsp+A8h] [rbp-478h]
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>> *__for_range_4; // [rsp+B0h] [rbp-470h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::reference v99; // [rsp+B8h] [rbp-468h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *gacha_prob_rule_id_1; // [rsp+C0h] [rbp-460h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *__for_range_5; // [rsp+D0h] [rbp-450h]
  const data::GachaParentProbRuleConfig *parent_rule_config_1; // [rsp+D8h] [rbp-448h]
  data::GachaProbRuleConfig *prob_rule_config; // [rsp+E0h] [rbp-440h]
  std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::mapped_type *prob_rule_vec; // [rsp+E8h] [rbp-438h]
  char v105[1072]; // [rsp+F0h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v105;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 48 8 15 __for_begin:303 80 8 13 __for_end:303 112 8 15 __for_begin:311 144 8 13 __for_end:311"
                        " 176 8 15 __for_begin:314 208 8 13 __for_end:314 240 8 8 iter:317 272 8 9 <unknown> 304 8 9 <unk"
                        "nown> 336 8 9 <unknown> 368 8 15 __for_begin:352 400 8 13 __for_end:352 432 8 15 __for_begin:354"
                        " 464 8 13 __for_end:354 496 8 9 <unknown> 528 8 15 __for_begin:370 560 8 13 __for_end:370 592 8 "
                        "15 __for_begin:372 624 8 13 __for_end:372 656 8 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown"
                        "> 816 32 9 <unknown> 880 104 22 parent_rule_config:324";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::rewriteGachaProbRuleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
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
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
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
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862746] = -219021312;
  v5[536862747] = 62194;
  v5[536862750] = -218103808;
  v5[536862751] = -202116109;
  __for_range = &this->gacha_prob_rule_config_vec;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 48) = std::vector<data::GachaProbRuleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 80) = std::vector<data::GachaProbRuleConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !__gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 80)) )
      break;
    prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 48));
    prob_rule_vec = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::operator[](
                      &this->gacha_prob_rule_map,
                      &prob_rule_config->gacha_prob_rule_id);
    std::vector<data::GachaProbRuleConfig>::emplace_back<data::GachaProbRuleConfig&>(
      prob_rule_vec,
      prob_rule_config,
      prob_rule_config);
    __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 48));
  }
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  const_value_config_mgr = &txt_config_mgr->const_value_config_mgr;
  __for_range_0 = &this->gacha_prob_rule_map;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, v6);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::iterator *)(v3 + 112) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, v6);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::iterator *)(v3 + 144) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::end(__for_range_0);
  while ( 1 )
  {
    v7 = (data::GachaParentProbRuleConfig *)(v3 + 144);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 112),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 144)) )
      break;
    v87 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > > *const)(v3 + 112));
    gacha_prob_rule_id = std::get<0ul,unsigned int const,std::vector<data::GachaProbRuleConfig>>(v87);
    gacha_prob_rule_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::GachaProbRuleConfig>>(v87);
    parent_prob_rule_vec = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::operator[](
                             &this->gacha_parent_prob_rule_map,
                             gacha_prob_rule_id);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, gacha_prob_rule_id);
    *(std::vector<data::GachaProbRuleConfig>::const_iterator *)(v3 + 176) = std::vector<data::GachaProbRuleConfig>::begin(gacha_prob_rule_vec);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, gacha_prob_rule_id);
    *(std::vector<data::GachaProbRuleConfig>::const_iterator *)(v3 + 208) = std::vector<data::GachaProbRuleConfig>::end(gacha_prob_rule_vec);
    while ( 1 )
    {
      v7 = (data::GachaParentProbRuleConfig *)(v3 + 208);
      if ( !__gnu_cxx::operator!=<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 176),
              (const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 208)) )
        break;
      prob_rule_config_0 = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 176));
      p_gacha_item_parent_type = &prob_rule_config_0->gacha_item_parent_type;
      if ( *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gacha_item_parent_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(p_gacha_item_parent_type);
      }
      parent_type = prob_rule_config_0->gacha_item_parent_type;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      __last = std::vector<data::GachaParentProbRuleConfig>::end(parent_prob_rule_vec)._M_current;
      M_current = std::vector<data::GachaParentProbRuleConfig>::begin(parent_prob_rule_vec)._M_current;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, (((_BYTE)prob_rule_config_0 + 12) & 7u) + 3);
      *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 240) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::rewriteGachaProbRuleConfig(TxtConfigMgr &)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#1}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)M_current, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__last, (GachaExcelConfigMgr::rewriteGachaProbRuleConfig::<lambda(const auto:25&)>)parent_type);
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, __last);
      *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 272) = std::vector<data::GachaParentProbRuleConfig>::end(parent_prob_rule_vec);
      v10 = (char *)(v3 + 272);
      v11 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 240),
              (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 272));
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v11 )
      {
        v12 = ((v3 + 880) >> 3) + 2147450880;
        *(_DWORD *)v12 = 0;
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(v12 + 8) = 0;
        *(_BYTE *)(v12 + 12) = 0;
        data::GachaParentProbRuleConfig::GachaParentProbRuleConfig((data::GachaParentProbRuleConfig *const)(v3 + 880));
        if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&prob_rule_config_0->gacha_prob_rule_id);
        }
        v13 = prob_rule_config_0->gacha_prob_rule_id;
        v14 = *(_BYTE *)(((v3 + 880) >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v10) = v14 != 0;
          __asan_report_store4(v3 + 880, v10);
        }
        *(_DWORD *)(v3 + 880) = v13;
        v15 = (((_BYTE)prob_rule_config_0 + 12) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)prob_rule_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_item_parent_type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&prob_rule_config_0->gacha_item_parent_type);
        }
        gacha_item_parent_type = prob_rule_config_0->gacha_item_parent_type;
        v17 = *(_BYTE *)(((v3 + 884) >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((v3 + 116) & 7) + 3) >= v17 )
        {
          LOBYTE(v15) = v17 != 0;
          __asan_report_store4(v3 + 884, v15);
        }
        *(_DWORD *)(v3 + 884) = gacha_item_parent_type;
        std::set<data::GachaItemType>::insert(
          (std::set<data::GachaItemType> *const)(v3 + 888),
          &prob_rule_config_0->gacha_item_type);
        std::vector<data::GachaProbRuleConfig>::emplace_back<data::GachaProbRuleConfig const&>(
          (std::vector<data::GachaProbRuleConfig> *const)(v3 + 936),
          prob_rule_config_0,
          (const data::GachaProbRuleConfig *)(v3 + 936));
        v18 = (((_BYTE)prob_rule_config_0 + 20) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->round_table_priority >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)prob_rule_config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->round_table_priority >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&prob_rule_config_0->round_table_priority);
        }
        round_table_priority = prob_rule_config_0->round_table_priority;
        v20 = *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000);
        if ( v20 != 0 && v20 <= 3 )
        {
          LOBYTE(v18) = v20 != 0;
          __asan_report_store4(v3 + 960, v18);
        }
        *(_DWORD *)(v3 + 960) = round_table_priority;
        if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->base_prob >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->base_prob >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&prob_rule_config_0->base_prob);
        }
        base_prob = prob_rule_config_0->base_prob;
        v22 = *(_BYTE *)(((v3 + 964) >> 3) + 0x7FFF8000);
        if ( v22 != 0 && (char)(((v3 - 60) & 7) + 3) >= v22 )
        {
          LOBYTE(v18) = v22 != 0;
          __asan_report_store4(v3 + 964, v18);
        }
        *(_DWORD *)(v3 + 964) = base_prob;
        v23 = ((_BYTE)prob_rule_config_0 + 28) & 7;
        v24 = (*(_BYTE *)(((unsigned __int64)&prob_rule_config_0->is_guaranteed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->is_guaranteed >> 3) + 0x7FFF8000));
        if ( (_BYTE)v24 )
          __asan_report_load1(&prob_rule_config_0->is_guaranteed, v23, v24);
        is_guaranteed = prob_rule_config_0->is_guaranteed;
        v26 = *(_BYTE *)(((v3 + 968) >> 3) + 0x7FFF8000);
        if ( v26 < 0 )
        {
          LOBYTE(v23) = v26 != 0;
          __asan_report_store1(v3 + 968, v23, v3 + 968);
        }
        *(_BYTE *)(v3 + 968) = is_guaranteed;
        v7 = std::move<data::GachaParentProbRuleConfig &>((data::GachaParentProbRuleConfig *)(v3 + 880));
        std::vector<data::GachaParentProbRuleConfig>::emplace_back<data::GachaParentProbRuleConfig>(
          parent_prob_rule_vec,
          v7,
          v7);
        data::GachaParentProbRuleConfig::~GachaParentProbRuleConfig((data::GachaParentProbRuleConfig *const)(v3 + 880));
        v27 = ((v3 + 880) >> 3) + 2147450880;
        *(_DWORD *)v27 = -117901064;
        *(_DWORD *)(v27 + 4) = -117901064;
        *(_DWORD *)(v27 + 8) = -117901064;
        *(_BYTE *)(v27 + 12) = -8;
LABEL_80:
        v37 = 1;
        goto LABEL_81;
      }
      parent_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 240));
      v28 = std::set<data::GachaItemType>::emplace<data::GachaItemType const&>(
              &parent_rule_config->gacha_item_type_set,
              &prob_rule_config_0->gacha_item_type,
              &prob_rule_config_0->gacha_item_type);
      if ( v28.second )
      {
        std::vector<data::GachaProbRuleConfig>::emplace_back<data::GachaProbRuleConfig const&>(
          &parent_rule_config->gacha_item_type_config_vec,
          prob_rule_config_0,
          (const data::GachaProbRuleConfig *)&parent_rule_config->gacha_item_type_config_vec);
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config->round_table_priority >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&parent_rule_config->round_table_priority >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&parent_rule_config->round_table_priority);
        }
        v38 = parent_rule_config->round_table_priority;
        if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->round_table_priority >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)prob_rule_config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->round_table_priority >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&prob_rule_config_0->round_table_priority);
        }
        parent_rule_config->round_table_priority = v38 + prob_rule_config_0->round_table_priority;
        v39 = (((_BYTE)parent_rule_config + 84) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config->base_prob >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)parent_rule_config + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config->base_prob >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&parent_rule_config->base_prob);
        }
        v40 = parent_rule_config->base_prob;
        v41 = *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->base_prob >> 3) + 0x7FFF8000);
        LOBYTE(v39) = v41 != 0;
        if ( v41 != 0 && v41 <= 3 )
          __asan_report_load4(&prob_rule_config_0->base_prob);
        parent_rule_config->base_prob = v40 + prob_rule_config_0->base_prob;
        if ( *(char *)(((unsigned __int64)&parent_rule_config->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&parent_rule_config->is_guaranteed, v39, &parent_rule_config->is_guaranteed);
        if ( parent_rule_config->is_guaranteed )
          goto LABEL_75;
        v42 = ((_BYTE)prob_rule_config_0 + 28) & 7;
        v43 = (*(_BYTE *)(((unsigned __int64)&prob_rule_config_0->is_guaranteed >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v42 >= *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->is_guaranteed >> 3) + 0x7FFF8000));
        if ( (_BYTE)v43 )
          __asan_report_load1(&prob_rule_config_0->is_guaranteed, v42, v43);
        if ( prob_rule_config_0->is_guaranteed )
LABEL_75:
          v7 = (data::GachaParentProbRuleConfig *)1;
        else
          v7 = 0LL;
        if ( *(char *)(((unsigned __int64)&parent_rule_config->is_guaranteed >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&parent_rule_config->is_guaranteed, v7, &parent_rule_config->is_guaranteed);
        parent_rule_config->is_guaranteed = (char)v7;
        goto LABEL_80;
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "rewriteGachaProbRuleConfig",
        340);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 688),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v29, (const char (*)[23])byte_1AD74CC0);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, gacha_prob_rule_id);
      v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v31, (const char (*)[21])byte_1AD74D00);
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      v33 = (__int64)data::enumValToStr(parent_type, (__int64)byte_1AD74D00);
      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
        v33 = __asan_report_store8(v3 + 304, byte_1AD74D00);
      *(_QWORD *)(v3 + 304) = v33;
      v34 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v32, (const char *const *)(v3 + 304));
      v35 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v34, (const char (*)[29])byte_1AD74D40);
      *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&prob_rule_config_0->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&prob_rule_config_0->gacha_item_type);
      }
      v36 = (__int64)data::enumValToStr(prob_rule_config_0->gacha_item_type, (__int64)byte_1AD74D40);
      if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
        v36 = __asan_report_store8(v3 + 336, byte_1AD74D40);
      *(_QWORD *)(v3 + 336) = v36;
      v7 = (data::GachaParentProbRuleConfig *)(v3 + 336);
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v35, (const char *const *)(v3 + 336));
      *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
      *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v37 = 0;
LABEL_81:
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( v37 != 1 )
      {
        v44 = 0;
        goto LABEL_85;
      }
      __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 176));
    }
    v44 = 1;
LABEL_85:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v44 != 1 )
    {
      v45 = 0;
      goto LABEL_89;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > > *const)(v3 + 112));
  }
  v45 = 1;
LABEL_89:
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  if ( v45 == 1 )
  {
    __for_range_2 = &this->gacha_parent_prob_rule_map;
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, v7);
    *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 368) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 400, v7);
    *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 400) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::end(__for_range_2);
    while ( 1 )
    {
      v46 = (const char *)(v3 + 400);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 368),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 400)) )
        break;
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 368));
      gacha_prob_rule_id_0 = std::get<0ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(__in);
      __for_range_3 = std::get<1ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(__in);
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 432, v46);
      *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 432) = std::vector<data::GachaParentProbRuleConfig>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 464, v46);
      *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 464) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_3);
      while ( 1 )
      {
        v46 = (const char *)(v3 + 464);
        if ( !__gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 432),
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 464)) )
        {
          v55 = 1;
          goto LABEL_122;
        }
        parent_rule_config_0 = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 432));
        p_base_prob = &parent_rule_config_0->base_prob;
        if ( *(_BYTE *)(((unsigned __int64)p_base_prob >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_base_prob & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_base_prob >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_base_prob);
        }
        if ( !parent_rule_config_0->base_prob )
          break;
        v56 = 10000.0 * ConstValueExcelConfigMgr::getGachaGuaranteeStartCoef(const_value_config_mgr);
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->base_prob >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)parent_rule_config_0 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->base_prob >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&parent_rule_config_0->base_prob);
        }
        v57 = (int)(float)((float)(v56 / (float)(int)parent_rule_config_0->base_prob) + 1.0);
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->start_guarantee_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)parent_rule_config_0 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->start_guarantee_count >> 3)
                                                                              + 0x7FFF8000) )
        {
          v57 = (_DWORD)parent_rule_config_0 + 92;
          __asan_report_store4(
            &parent_rule_config_0->start_guarantee_count,
            (((_BYTE)parent_rule_config_0 + 92) & 7u) + 3);
        }
        parent_rule_config_0->start_guarantee_count = v57;
        GachaGuaranteeIncreaseCoef = ConstValueExcelConfigMgr::getGachaGuaranteeIncreaseCoef(const_value_config_mgr);
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->base_prob >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)parent_rule_config_0 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->base_prob >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&parent_rule_config_0->base_prob);
        }
        v59 = (unsigned int)(int)(float)((float)(int)parent_rule_config_0->base_prob * GachaGuaranteeIncreaseCoef);
        if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->inc_guarantee_prob >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->inc_guarantee_prob >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&parent_rule_config_0->inc_guarantee_prob, v59);
        }
        parent_rule_config_0->inc_guarantee_prob = v59;
        __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 432));
      }
      *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 752, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 752),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "rewriteGachaProbRuleConfig",
        358);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 752),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v48, (const char (*)[22])byte_1AD74D80);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, gacha_prob_rule_id_0);
      v51 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v50, (const char (*)[18])byte_1AD74DC0);
      *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      v52 = (((_BYTE)parent_rule_config_0 + 4) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)parent_rule_config_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config_0->gacha_item_parent_type >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&parent_rule_config_0->gacha_item_parent_type);
      }
      v53 = (__int64)data::enumValToStr(parent_rule_config_0->gacha_item_parent_type, v52);
      if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
        v53 = __asan_report_store8(v3 + 496, v52);
      *(_QWORD *)(v3 + 496) = v53;
      v54 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v51, (const char *const *)(v3 + 496));
      v46 = byte_1AD74E00;
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v54, (const char (*)[17])byte_1AD74E00);
      *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
      *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v55 = 0;
LABEL_122:
      *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
      if ( v55 != 1 )
      {
        v60 = 0;
        goto LABEL_126;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 368));
    }
    v60 = 1;
LABEL_126:
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v60 == 1 )
    {
      __for_range_4 = &this->gacha_parent_prob_rule_map;
      *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 528, v46);
      *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 528) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::begin(__for_range_4);
      *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 560, v46);
      *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 560) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::end(__for_range_4);
      while ( 1 )
      {
        v61 = (char *)(v3 + 560);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 528),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 560)) )
          break;
        v99 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 528));
        gacha_prob_rule_id_1 = std::get<0ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(v99);
        __for_range_5 = std::get<1ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(v99);
        *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 592, v61);
        *(std::vector<data::GachaParentProbRuleConfig>::const_iterator *)(v3 + 592) = std::vector<data::GachaParentProbRuleConfig>::begin(__for_range_5);
        *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 624, v61);
        *(std::vector<data::GachaParentProbRuleConfig>::const_iterator *)(v3 + 624) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_5);
        while ( __gnu_cxx::operator!=<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 592),
                  (const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 624)) )
        {
          parent_rule_config_1 = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 592));
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
            2u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "rewriteGachaProbRuleConfig",
            374);
          v62 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)(v3 + 816),
                  (const char (*)[24])byte_1AD74E40);
          v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, gacha_prob_rule_id_1);
          v64 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v63, (const char (*)[17])byte_1AD74E80);
          *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
          v65 = (((_BYTE)parent_rule_config_1 + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&parent_rule_config_1->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)parent_rule_config_1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&parent_rule_config_1->gacha_item_parent_type >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&parent_rule_config_1->gacha_item_parent_type);
          }
          v66 = (__int64)data::enumValToStr(parent_rule_config_1->gacha_item_parent_type, v65);
          if ( *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) )
            v66 = __asan_report_store8(v3 + 656, v65);
          *(_QWORD *)(v3 + 656) = v66;
          v67 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v64,
                  (const char *const *)(v3 + 656));
          v68 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v67, (const char (*)[15])byte_1AD74EC0);
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v68,
                  &parent_rule_config_1->base_prob);
          v70 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v69, (const char (*)[18])byte_1AD74F00);
          v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v70,
                  &parent_rule_config_1->round_table_priority);
          v72 = byte_1AD74F40;
          v73 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v71, (const char (*)[15])byte_1AD74F40);
          v74 = *(_BYTE *)(((unsigned __int64)&parent_rule_config_1->is_guaranteed >> 3) + 0x7FFF8000);
          if ( v74 < 0 )
          {
            LOBYTE(v72) = v74 != 0;
            __asan_report_load1(&parent_rule_config_1->is_guaranteed, v72, &parent_rule_config_1->is_guaranteed);
          }
          v75 = common::milog::MiLogStream::operator<<(v73, parent_rule_config_1->is_guaranteed);
          v76 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v75, (const char (*)[21])byte_1AD74F80);
          v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v76,
                  &parent_rule_config_1->start_guarantee_count);
          v78 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v77, (const char (*)[23])byte_1AD74FC0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v78,
            &parent_rule_config_1->inc_guarantee_prob);
          *(_BYTE *)(((v3 + 656) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 816));
          *(_DWORD *)(((v3 + 816) >> 3) + 0x7FFF8000) = -117901064;
          __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 592));
        }
        *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 528));
      }
      v2 = 0;
    }
  }
  if ( v105 == (char *)v3 )
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
  return v2;
};

// Line 317: range 000000001472200A-00000000147220A0
bool __cdecl GachaExcelConfigMgr::rewriteGachaProbRuleConfig::_lambda_const_auto_25___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::rewriteGachaProbRuleConfig::<lambda(const auto:25&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_parent_type == __closure->__parent_type;
};

// Line 385: range 000000001443CD1C-000000001443CECD
int32_t __cdecl GachaExcelConfigMgr::rewriteGachaNewbieConfig(
        GachaExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::GachaNewbieDataConfigVec *__for_range; // [rsp+10h] [rbp-90h]
  data::GachaNewbieDataConfig *gacha_newbie_config; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (__gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *)v3;
  }
  v2->_M_current = (data::GachaNewbieDataConfig *)1102416563;
  v2[1]._M_current = (data::GachaNewbieDataConfig *)"2 32 8 15 __for_begin:386 64 8 13 __for_end:386";
  v2[2]._M_current = (data::GachaNewbieDataConfig *)GachaExcelConfigMgr::rewriteGachaNewbieConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->gacha_newbie_data_config_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_current = std::vector<data::GachaNewbieDataConfig>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_current = std::vector<data::GachaNewbieDataConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>(v2 + 4, v2 + 8) )
  {
    gacha_newbie_config = __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>::operator*(v2 + 4);
    common::tools::MiscUtils::removeEmptyElement<data::GachaNewbieUpConfig,unsigned int data::GachaNewbieUpConfig::*>(
      &gacha_newbie_config->gacha_up_config_vec,
      (unsigned int *)8);
    __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>::operator++(v2 + 4);
  }
  result = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (data::GachaNewbieDataConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 394: range 000000001443CECE-000000001443D866
int32_t __cdecl GachaExcelConfigMgr::checkGachaPoolConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  uint32_t pool_root_id; // ecx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // edx
  int32_t result; // eax
  ItemExcelConfigMgr *item_config_mgr; // [rsp+18h] [rbp-1D8h]
  data::GachaPoolExcelConfigVec *__for_range; // [rsp+20h] [rbp-1D0h]
  data::GachaPoolExcelConfig *gacha_pool_config; // [rsp+28h] [rbp-1C8h]
  std::set<unsigned int> *pool_item_set; // [rsp+30h] [rbp-1C0h]
  const data::ItemConfig *item_config_ptr; // [rsp+38h] [rbp-1B8h]
  char v27[432]; // [rsp+40h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 11 pool_id:401 48 8 15 __for_begin:399 80 8 13 __for_end:399 112 32 9 <unknown> 176 32 9 "
                        "<unknown> 240 32 9 <unknown> 304 48 17 pool_item_map:397";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaPoolConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
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
  v5[536862731] = -202116109;
  item_config_mgr = &txt_config_mgr->item_config_mgr;
  std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 304));
  __for_range = &this->gacha_pool_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 48) = std::vector<data::GachaPoolExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 80) = std::vector<data::GachaPoolExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !__gnu_cxx::operator!=<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 48),
            (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 80)) )
      break;
    gacha_pool_config = __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 48));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->pool_root_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_pool_config->pool_root_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_pool_config->pool_root_id);
    }
    pool_root_id = gacha_pool_config->pool_root_id;
    v8 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(v3 + 32, v6);
    }
    *(_DWORD *)(v3 + 32) = pool_root_id;
    pool_item_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                      (std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 304),
                      (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&gacha_pool_config->item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_pool_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_pool_config->item_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_pool_config->item_id);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(item_config_mgr, gacha_pool_config->item_id);
    if ( item_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&item_config_ptr->item_type);
      }
      if ( item_config_ptr->item_type == ITEM_MATERIAL || item_config_ptr->item_type == ITEM_WEAPON )
      {
        if ( std::set<unsigned int>::count(pool_item_set, &gacha_pool_config->item_id) )
        {
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaPoolConfig",
            418);
          v17 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[37])byte_1AD75200);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  &gacha_pool_config->pool_root_id);
          v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])byte_1AD740E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &gacha_pool_config->item_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
        else
        {
          std::set<unsigned int>::insert(pool_item_set, &gacha_pool_config->item_id);
          v12 = 1;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaPoolConfig",
          412);
        v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[10])byte_1AD75180);
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &gacha_pool_config->pool_root_id);
        v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])byte_1AD740E0);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &gacha_pool_config->item_id);
        common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v16, (const char (*)[29])byte_1AD751C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaPoolConfig",
        406);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[40])byte_1AD75120);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &gacha_pool_config->pool_root_id);
      v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])byte_1AD740E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &gacha_pool_config->item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v20 = 0;
      goto LABEL_36;
    }
    __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 48));
  }
  v20 = 1;
LABEL_36:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v20 == 1 )
    v2 = 0;
  std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 304));
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 429: range 000000001443D868-00000000144413F2
int32_t __cdecl GachaExcelConfigMgr::checkGachaRuleConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 v17; // rsi
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  _BOOL4 v20; // eax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  __int64 v29; // rax
  int v30; // eax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  __int64 v43; // rsi
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  _BOOL4 v46; // eax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  unsigned __int64 v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // r14
  __int64 v53; // rax
  _BOOL4 v54; // eax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  __int64 v58; // rax
  data::GachaItemParentType *p_gacha_item_parent_type; // rsi
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  unsigned __int64 v62; // rax
  char *v63; // rsi
  unsigned int *v64; // rax
  int *v65; // rdx
  int v66; // ecx
  char v67; // al
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  __int64 v71; // rax
  int v72; // edx
  unsigned __int64 v73; // rdx
  int v74; // edx
  unsigned __int64 v75; // rdx
  __int64 v76; // rsi
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  _BOOL4 v79; // eax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  unsigned __int64 v87; // rax
  char *v88; // rsi
  unsigned int *v89; // rax
  int *v90; // rdx
  int v91; // ecx
  char v92; // al
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // r14
  __int64 v96; // rax
  int v97; // edx
  unsigned __int64 v98; // rdx
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  _BOOL4 v102; // [rsp+Ch] [rbp-A74h]
  _BOOL4 v103; // [rsp+Ch] [rbp-A74h]
  _BOOL4 v104; // [rsp+Ch] [rbp-A74h]
  _BOOL4 v105; // [rsp+Ch] [rbp-A74h]
  data::GachaRuleExcelConfigMap *__for_range; // [rsp+20h] [rbp-A60h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::reference v107; // [rsp+28h] [rbp-A58h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GachaRuleExcelConfig> >::type *gacha_rule_config; // [rsp+38h] [rbp-A48h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+40h] [rbp-A40h]
  const std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> *__for_range_1; // [rsp+48h] [rbp-A38h]
  const data::GachaGuaranteeParentTypeWeightWithChilds *item_parent_type_weight_childs; // [rsp+50h] [rbp-A30h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-A28h]
  const std::vector<data::GachaGuaranteeParentTypeWeight> *__for_range_0; // [rsp+60h] [rbp-A20h]
  const data::GachaGuaranteeParentTypeWeight *item_parent_type_weight; // [rsp+68h] [rbp-A18h]
  char v115[2576]; // [rsp+70h] [rbp-A10h] BYREF

  v3 = (unsigned __int64)v115;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2528LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "47 48 4 19 gacha_item_type:546 64 4 19 gacha_item_type:582 80 8 15 __for_begin:431 112 8 13 __fo"
                        "r_end:431 144 8 15 __for_begin:477 176 8 13 __for_end:477 208 8 9 <unknown> 240 8 9 <unknown> 27"
                        "2 8 15 __for_begin:525 304 8 13 __for_end:525 336 8 9 <unknown> 368 8 9 <unknown> 400 8 15 __for"
                        "_begin:546 432 8 13 __for_end:546 464 8 9 <unknown> 496 8 15 __for_begin:582 528 8 13 __for_end:"
                        "582 560 8 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown"
                        "> 848 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknow"
                        "n> 1168 32 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 9 <un"
                        "known> 1488 32 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744 32 9"
                        " <unknown> 1808 32 9 <unknown> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <unknown> 2064 "
                        "32 9 <unknown> 2128 48 16 priority_set:430 2208 48 30 gacha_item_parent_type_set:476 2288 48 30 "
                        "gacha_item_parent_type_set:524 2368 48 23 gacha_item_type_set:545 2448 48 23 gacha_item_type_set:581";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaRuleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
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
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862729] = -234881024;
  v5[536862730] = 62194;
  v5[536862730] = -234881024;
  v5[536862731] = 62194;
  v5[536862731] = -234881024;
  v5[536862732] = 62194;
  v5[536862732] = -234881024;
  v5[536862733] = 62194;
  v5[536862733] = -234881024;
  v5[536862734] = 62194;
  v5[536862734] = -234881024;
  v5[536862735] = 62194;
  v5[536862735] = -234881024;
  v5[536862736] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = 62194;
  v5[536862737] = -234881024;
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
  v5[536862751] = -219021312;
  v5[536862752] = 62194;
  v5[536862753] = -219021312;
  v5[536862754] = 62194;
  v5[536862755] = -219021312;
  v5[536862756] = 62194;
  v5[536862757] = -219021312;
  v5[536862758] = 62194;
  v5[536862759] = -219021312;
  v5[536862760] = 62194;
  v5[536862761] = -219021312;
  v5[536862762] = 62194;
  v5[536862763] = -219021312;
  v5[536862764] = 62194;
  v5[536862765] = -219021312;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862771] = -219021312;
  v5[536862772] = 62194;
  v5[536862773] = -219021312;
  v5[536862774] = 62194;
  v5[536862775] = -219021312;
  v5[536862776] = 62194;
  v5[536862777] = -219021312;
  v5[536862778] = 62194;
  v5[536862779] = -219021312;
  v5[536862780] = 62194;
  v5[536862781] = -219021312;
  v5[536862782] = 62194;
  v5[536862783] = -219021312;
  v5[536862784] = 62194;
  v5[536862785] = -219021312;
  v5[536862786] = 62194;
  v5[536862788] = -218959118;
  v5[536862790] = -219021312;
  v5[536862791] = 62194;
  v5[536862793] = -218959118;
  v5[536862795] = -219021312;
  v5[536862796] = 62194;
  v5[536862798] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2128));
  __for_range = &this->gacha_rule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::GachaRuleExcelConfig>::end(__for_range);
  while ( 2 )
  {
    if ( std::__detail::operator!=<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false> *)(v3 + 80),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false> *)(v3 + 112)) )
    {
      v107 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false> *const)(v3 + 80));
      std::get<0ul,unsigned int const,data::GachaRuleExcelConfig>(v107);
      gacha_rule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GachaRuleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GachaRuleExcelConfig>(v107);
      v6 = std::set<unsigned int>::emplace<unsigned int const&>(
             (std::set<unsigned int> *const)(v3 + 2128),
             &gacha_rule_config->priority,
             &gacha_rule_config->priority);
      if ( v6.second )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_rule_config->gacha_guarantee_type);
        }
        switch ( gacha_rule_config->gacha_guarantee_type )
        {
          case GACHA_GUARANTEE_SPECIFIED_COUNT:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            if ( gacha_rule_config->gacha_guarantee_times )
            {
              if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
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
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  449);
                v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 720),
                        (const char (*)[22])byte_1AD747E0);
                v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v12,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v13, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
                *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&gacha_rule_config->gacha_guarantee_item);
                }
                if ( GachaExcelConfigMgr::getGachaItemType(this, gacha_rule_config->gacha_guarantee_item) )
                  goto LABEL_204;
                *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 784, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 784),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  454);
                v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 784),
                        (const char (*)[22])byte_1AD747E0);
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v14,
                        &gacha_rule_config->gacha_rule_id);
                v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        v15,
                        (const char (*)[45])byte_1AD75720);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  &gacha_rule_config->gacha_guarantee_item);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
                *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 656, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 656),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaRuleConfig",
                444);
              v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 656),
                      (const char (*)[22])byte_1AD747E0);
              v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v10,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v11, (const char (*)[23])byte_1AD74820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
              *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v9 = 0;
            }
            break;
          case GACHA_GUARANTEE_LOOP_COUNT:
            v17 = (((_BYTE)gacha_rule_config + 20) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            if ( gacha_rule_config->gacha_guarantee_times )
            {
              if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
              {
                *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 912) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 943) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 912, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 912),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  468);
                v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 912),
                        (const char (*)[22])byte_1AD747E0);
                v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v21,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v22, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
                *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v20 = 0;
              }
              else if ( std::vector<data::GachaGuaranteeParentTypeWeight>::empty(&gacha_rule_config->gacha_guarantee_parent_type_weight_vec) )
              {
                *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 976, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 976),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  473);
                v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 976),
                        (const char (*)[22])byte_1AD747E0);
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v24, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
                *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v20 = 0;
              }
              else
              {
                v25 = ((v3 + 2208) >> 3) + 2147450880;
                *(_DWORD *)v25 = 0;
                *(_WORD *)(v25 + 4) = 0;
                std::set<data::GachaItemParentType>::set((std::set<data::GachaItemParentType> *const)(v3 + 2208));
                __for_range_0 = &gacha_rule_config->gacha_guarantee_parent_type_weight_vec;
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 144, v17);
                *(std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator *)(v3 + 144) = std::vector<data::GachaGuaranteeParentTypeWeight>::begin(__for_range_0);
                *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 176, v17);
                *(std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator *)(v3 + 176) = std::vector<data::GachaGuaranteeParentTypeWeight>::end(__for_range_0);
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>(
                          (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v3 + 144),
                          (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v3 + 176)) )
                  {
                    v30 = 1;
                    goto LABEL_73;
                  }
                  item_parent_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v3 + 144));
                  if ( std::set<data::GachaItemParentType>::count(
                         (const std::set<data::GachaItemParentType> *const)(v3 + 2208),
                         &item_parent_type_weight->gacha_item_parent_type) )
                  {
                    *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1040) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1040, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1040),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "checkGachaRuleConfig",
                      481);
                    v26 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            (common::milog::MiLogStream *const)(v3 + 1040),
                            (const char (*)[22])byte_1AD747E0);
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v26,
                            &gacha_rule_config->gacha_rule_id);
                    v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            v27,
                            (const char (*)[27])byte_1AD75780);
                    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&item_parent_type_weight->gacha_item_parent_type);
                    }
                    v29 = (__int64)data::enumValToStr(
                                     item_parent_type_weight->gacha_item_parent_type,
                                     (__int64)byte_1AD75780);
                    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
                      v29 = __asan_report_store8(v3 + 208, byte_1AD75780);
                    *(_QWORD *)(v3 + 208) = v29;
                    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v28,
                      (const char *const *)(v3 + 208));
                    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
                    *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v30 = 0;
                    goto LABEL_73;
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->weight >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)item_parent_type_weight + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->weight >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load4(&item_parent_type_weight->weight);
                  }
                  if ( !item_parent_type_weight->weight )
                    break;
                  std::set<data::GachaItemParentType>::insert(
                    (std::set<data::GachaItemParentType> *const)(v3 + 2208),
                    &item_parent_type_weight->gacha_item_parent_type);
                  __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v3 + 144));
                }
                *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1104) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1135) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1104, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1104),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  486);
                v31 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        (common::milog::MiLogStream *const)(v3 + 1104),
                        (const char (*)[24])byte_1AD757C0);
                v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        &gacha_rule_config->gacha_rule_id);
                v33 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        v32,
                        (const char (*)[25])byte_1AD75800);
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&item_parent_type_weight->gacha_item_parent_type);
                }
                v34 = (__int64)data::enumValToStr(
                                 item_parent_type_weight->gacha_item_parent_type,
                                 (__int64)byte_1AD75800);
                if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
                  v34 = __asan_report_store8(v3 + 240, byte_1AD75800);
                *(_QWORD *)(v3 + 240) = v34;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v33,
                  (const char *const *)(v3 + 240));
                *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
                *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v30 = 0;
LABEL_73:
                *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
                v102 = v30 == 1;
                std::set<data::GachaItemParentType>::~set((std::set<data::GachaItemParentType> *const)(v3 + 2208));
                v20 = v102;
              }
            }
            else
            {
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
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaRuleConfig",
                463);
              v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 848),
                      (const char (*)[22])byte_1AD747E0);
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v18,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v19, (const char (*)[23])byte_1AD74820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
              *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v20 = 0;
            }
            v35 = ((v3 + 2208) >> 3) + 2147450880;
            *(_DWORD *)v35 = -117901064;
            *(_WORD *)(v35 + 4) = -1800;
            if ( v20 )
              goto LABEL_204;
            v9 = 0;
            break;
          case GACHA_GUARANTEE_N_COUNT:
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            if ( gacha_rule_config->gacha_guarantee_times )
            {
              if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
              {
                *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1232, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1232),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  502);
                v38 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 1232),
                        (const char (*)[22])byte_1AD747E0);
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v38,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v39, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
                *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type >> 3)
                              + 0x7FFF8000) != 0
                  && (char)((((_BYTE)gacha_rule_config + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type >> 3)
                                                                                    + 0x7FFF8000) )
                {
                  __asan_report_load4(&gacha_rule_config->gacha_guarantee_item_parent_type);
                }
                if ( gacha_rule_config->gacha_guarantee_item_parent_type )
                  goto LABEL_204;
                *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1296, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1296),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  507);
                v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 1296),
                        (const char (*)[22])byte_1AD747E0);
                v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v40,
                        &gacha_rule_config->gacha_rule_id);
                v42 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        v41,
                        (const char (*)[49])byte_1AD75840);
                common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                  v42,
                  &gacha_rule_config->gacha_guarantee_item_parent_type);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
                *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1168) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1199) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1168, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1168),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaRuleConfig",
                497);
              v36 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 1168),
                      (const char (*)[22])byte_1AD747E0);
              v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v36,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v37, (const char (*)[23])byte_1AD74820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
              *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v9 = 0;
            }
            break;
          case GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS:
            v43 = (((_BYTE)gacha_rule_config + 20) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            if ( gacha_rule_config->gacha_guarantee_times )
            {
              if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
              {
                *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1424) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1455) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1424, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1424),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  521);
                v47 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 1424),
                        (const char (*)[22])byte_1AD747E0);
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v48, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
                *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v46 = 0;
              }
              else
              {
                v49 = ((v3 + 2288) >> 3) + 2147450880;
                *(_DWORD *)v49 = 0;
                *(_WORD *)(v49 + 4) = 0;
                std::set<data::GachaItemParentType>::set((std::set<data::GachaItemParentType> *const)(v3 + 2288));
                __for_range_1 = &gacha_rule_config->gacha_guarantee_parent_type_weight_childs_vec;
                *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 272, v43);
                *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v3 + 272) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::begin(__for_range_1);
                *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 304, v43);
                *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v3 + 304) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(__for_range_1);
                while ( __gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>(
                          (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v3 + 272),
                          (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v3 + 304)) )
                {
                  item_parent_type_weight_childs = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v3 + 272));
                  if ( std::set<data::GachaItemParentType>::count(
                         (const std::set<data::GachaItemParentType> *const)(v3 + 2288),
                         &item_parent_type_weight_childs->gacha_item_parent_type) )
                  {
                    *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1488) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1519) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1488, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1488),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "checkGachaRuleConfig",
                      529);
                    v50 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            (common::milog::MiLogStream *const)(v3 + 1488),
                            (const char (*)[22])byte_1AD747E0);
                    v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v50,
                            &gacha_rule_config->gacha_rule_id);
                    v52 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            v51,
                            (const char (*)[27])byte_1AD75780);
                    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&item_parent_type_weight_childs->gacha_item_parent_type);
                    }
                    v53 = (__int64)data::enumValToStr(
                                     item_parent_type_weight_childs->gacha_item_parent_type,
                                     (__int64)byte_1AD75780);
                    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
                      v53 = __asan_report_store8(v3 + 336, byte_1AD75780);
                    *(_QWORD *)(v3 + 336) = v53;
                    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v52,
                      (const char *const *)(v3 + 336));
                    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
                    *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v54 = 0;
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->weight >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)item_parent_type_weight_childs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->weight >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(&item_parent_type_weight_childs->weight);
                    }
                    if ( item_parent_type_weight_childs->weight )
                    {
                      p_gacha_item_parent_type = &item_parent_type_weight_childs->gacha_item_parent_type;
                      std::set<data::GachaItemParentType>::insert(
                        (std::set<data::GachaItemParentType> *const)(v3 + 2288),
                        &item_parent_type_weight_childs->gacha_item_parent_type);
                      if ( std::vector<unsigned int>::empty(&item_parent_type_weight_childs->item_type_vec) )
                      {
                        *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1616) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1647) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1616, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1616),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/GachaExcelConfig.cpp",
                          "checkGachaRuleConfig",
                          541);
                        v60 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                (common::milog::MiLogStream *const)(v3 + 1616),
                                (const char (*)[22])byte_1AD747E0);
                        v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v60,
                                &gacha_rule_config->gacha_rule_id);
                        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          v61,
                          (const char (*)[23])byte_1AD758A0);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
                        *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v54 = 0;
                      }
                      else
                      {
                        v62 = ((v3 + 2368) >> 3) + 2147450880;
                        *(_DWORD *)v62 = 0;
                        *(_WORD *)(v62 + 4) = 0;
                        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2368));
                        __for_range_2 = &item_parent_type_weight_childs->item_type_vec;
                        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v3 + 400, p_gacha_item_parent_type);
                        *(std::vector<unsigned int>::const_iterator *)(v3 + 400) = std::vector<unsigned int>::begin(__for_range_2);
                        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v3 + 432, p_gacha_item_parent_type);
                        *(std::vector<unsigned int>::const_iterator *)(v3 + 432) = std::vector<unsigned int>::end(__for_range_2);
                        while ( 1 )
                        {
                          v63 = (char *)(v3 + 432);
                          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 400),
                                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 432)) )
                          {
                            v72 = 1;
                            goto LABEL_150;
                          }
                          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                          v64 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
                          v65 = (int *)v64;
                          if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                            && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3)
                                                                                  + 0x7FFF8000) )
                          {
                            __asan_report_load4(v64);
                          }
                          v66 = *v65;
                          v67 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
                          if ( v67 != 0 && v67 <= 3 )
                          {
                            LOBYTE(v63) = v67 != 0;
                            __asan_report_store4(v3 + 48, v63);
                          }
                          *(_DWORD *)(v3 + 48) = v66;
                          if ( std::set<unsigned int>::count(
                                 (const std::set<unsigned int> *const)(v3 + 2368),
                                 (const std::set<unsigned int>::key_type *)(v3 + 48)) )
                          {
                            break;
                          }
                          std::set<unsigned int>::insert(
                            (std::set<unsigned int> *const)(v3 + 2368),
                            (const std::set<unsigned int>::value_type *)(v3 + 48));
                          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
                        }
                        *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v3 + 1680) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1711) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 1680, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 1680),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/GachaExcelConfig.cpp",
                          "checkGachaRuleConfig",
                          550);
                        v68 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                                (common::milog::MiLogStream *const)(v3 + 1680),
                                (const char (*)[22])byte_1AD747E0);
                        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v68,
                                &gacha_rule_config->gacha_rule_id);
                        v70 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                v69,
                                (const char (*)[30])byte_1AD758E0);
                        *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                      + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                      + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&item_parent_type_weight_childs->gacha_item_parent_type);
                        }
                        v71 = (__int64)data::enumValToStr(
                                         item_parent_type_weight_childs->gacha_item_parent_type,
                                         (__int64)byte_1AD758E0);
                        if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
                          v71 = __asan_report_store8(v3 + 464, byte_1AD758E0);
                        *(_QWORD *)(v3 + 464) = v71;
                        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                          v70,
                          (const char *const *)(v3 + 464));
                        *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1680));
                        *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v72 = 0;
LABEL_150:
                        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
                        v103 = v72 == 1;
                        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2368));
                        v54 = v103;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 1552, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 1552),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/GachaExcelConfig.cpp",
                        "checkGachaRuleConfig",
                        534);
                      v55 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                              (common::milog::MiLogStream *const)(v3 + 1552),
                              (const char (*)[24])byte_1AD757C0);
                      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v55,
                              &gacha_rule_config->gacha_rule_id);
                      v57 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                              v56,
                              (const char (*)[25])byte_1AD75800);
                      *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                    + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                                    + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&item_parent_type_weight_childs->gacha_item_parent_type);
                      }
                      v58 = (__int64)data::enumValToStr(
                                       item_parent_type_weight_childs->gacha_item_parent_type,
                                       (__int64)byte_1AD75800);
                      if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
                        v58 = __asan_report_store8(v3 + 368, byte_1AD75800);
                      *(_QWORD *)(v3 + 368) = v58;
                      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                        v57,
                        (const char *const *)(v3 + 368));
                      *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
                      *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v54 = 0;
                    }
                  }
                  v73 = ((v3 + 2368) >> 3) + 2147450880;
                  *(_DWORD *)v73 = -117901064;
                  *(_WORD *)(v73 + 4) = -1800;
                  if ( !v54 )
                  {
                    v74 = 0;
                    goto LABEL_155;
                  }
                  __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v3 + 272));
                }
                v74 = 1;
LABEL_155:
                *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
                v104 = v74 == 1;
                std::set<data::GachaItemParentType>::~set((std::set<data::GachaItemParentType> *const)(v3 + 2288));
                v46 = v104;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1360) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1391) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1360, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1360),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaRuleConfig",
                516);
              v44 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 1360),
                      (const char (*)[22])byte_1AD747E0);
              v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v44,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v45, (const char (*)[23])byte_1AD74820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
              *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v46 = 0;
            }
            v75 = ((v3 + 2288) >> 3) + 2147450880;
            *(_DWORD *)v75 = -117901064;
            *(_WORD *)(v75 + 4) = -1800;
            if ( v46 )
              goto LABEL_204;
            v9 = 0;
            break;
          case GACHA_GUARANTEE_N_COUNT_WITH_CHILDS:
            v76 = (((_BYTE)gacha_rule_config + 20) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)gacha_rule_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_times >> 3)
                                                                               + 0x7FFF8000) )
            {
              __asan_report_load4(&gacha_rule_config->gacha_guarantee_times);
            }
            if ( gacha_rule_config->gacha_guarantee_times )
            {
              if ( std::vector<std::string>::empty(&gacha_rule_config->gacha_guarantee_params) )
              {
                *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1808) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1808, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1808),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaRuleConfig",
                  567);
                v80 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        (common::milog::MiLogStream *const)(v3 + 1808),
                        (const char (*)[22])byte_1AD747E0);
                v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v80,
                        &gacha_rule_config->gacha_rule_id);
                common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v81, (const char (*)[19])byte_1AD74860);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1808));
                *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v79 = 0;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                              + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                              + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
                }
                if ( gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type )
                {
                  if ( std::vector<unsigned int>::empty(&gacha_rule_config->gacha_guarantee_item_parent_type_childs.item_type_vec) )
                  {
                    *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 1936) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 1967) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 1936, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 1936),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "checkGachaRuleConfig",
                      578);
                    v85 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            (common::milog::MiLogStream *const)(v3 + 1936),
                            (const char (*)[22])byte_1AD747E0);
                    v86 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v85,
                            &gacha_rule_config->gacha_rule_id);
                    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v86,
                      (const char (*)[23])byte_1AD758A0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1936));
                    *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v79 = 0;
                  }
                  else
                  {
                    v87 = ((v3 + 2448) >> 3) + 2147450880;
                    *(_DWORD *)v87 = 0;
                    *(_WORD *)(v87 + 4) = 0;
                    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2448));
                    __for_range_3 = &gacha_rule_config->gacha_guarantee_item_parent_type_childs.item_type_vec;
                    *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 496, v76);
                    *(std::vector<unsigned int>::const_iterator *)(v3 + 496) = std::vector<unsigned int>::begin(__for_range_3);
                    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 528, v76);
                    *(std::vector<unsigned int>::const_iterator *)(v3 + 528) = std::vector<unsigned int>::end(__for_range_3);
                    while ( 1 )
                    {
                      v88 = (char *)(v3 + 528);
                      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 496),
                              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 528)) )
                      {
                        v97 = 1;
                        goto LABEL_198;
                      }
                      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                      v89 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 496));
                      v90 = (int *)v89;
                      if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v89 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v89);
                      }
                      v91 = *v90;
                      v92 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
                      if ( v92 != 0 && v92 <= 3 )
                      {
                        LOBYTE(v88) = v92 != 0;
                        __asan_report_store4(v3 + 64, v88);
                      }
                      *(_DWORD *)(v3 + 64) = v91;
                      if ( std::set<unsigned int>::count(
                             (const std::set<unsigned int> *const)(v3 + 2448),
                             (const std::set<unsigned int>::key_type *)(v3 + 64)) )
                      {
                        break;
                      }
                      std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v3 + 2448),
                        (const std::set<unsigned int>::value_type *)(v3 + 64));
                      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 496));
                    }
                    *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 2000) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 2031) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 2000, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 2000),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/GachaExcelConfig.cpp",
                      "checkGachaRuleConfig",
                      586);
                    v93 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                            (common::milog::MiLogStream *const)(v3 + 2000),
                            (const char (*)[22])byte_1AD747E0);
                    v94 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v93,
                            &gacha_rule_config->gacha_rule_id);
                    v95 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            v94,
                            (const char (*)[30])byte_1AD758E0);
                    *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                                  + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
                    }
                    v96 = (__int64)data::enumValToStr(
                                     gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type,
                                     (__int64)byte_1AD758E0);
                    if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
                      v96 = __asan_report_store8(v3 + 560, byte_1AD758E0);
                    *(_QWORD *)(v3 + 560) = v96;
                    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                      v95,
                      (const char *const *)(v3 + 560));
                    *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2000));
                    *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v97 = 0;
LABEL_198:
                    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
                    v105 = v97 == 1;
                    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2448));
                    v79 = v105;
                  }
                }
                else
                {
                  *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 1872) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 1872, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 1872),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/GachaExcelConfig.cpp",
                    "checkGachaRuleConfig",
                    572);
                  v82 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                          (common::milog::MiLogStream *const)(v3 + 1872),
                          (const char (*)[22])byte_1AD747E0);
                  v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v82,
                          &gacha_rule_config->gacha_rule_id);
                  v84 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          v83,
                          (const char (*)[49])byte_1AD75840);
                  common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
                    v84,
                    &gacha_rule_config->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1872));
                  *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v79 = 0;
                }
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1744) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 1775) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1744, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1744),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaRuleConfig",
                562);
              v77 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      (common::milog::MiLogStream *const)(v3 + 1744),
                      (const char (*)[22])byte_1AD747E0);
              v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v77,
                      &gacha_rule_config->gacha_rule_id);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v78, (const char (*)[23])byte_1AD74820);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1744));
              *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v79 = 0;
            }
            v98 = ((v3 + 2448) >> 3) + 2147450880;
            *(_DWORD *)v98 = -117901064;
            *(_WORD *)(v98 + 4) = -1800;
            if ( v79 )
            {
LABEL_204:
              std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRuleExcelConfig>,false,false> *const)(v3 + 80));
              continue;
            }
            v9 = 0;
            break;
          default:
            *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2064) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 79) & 7) >= *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2064, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2064),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "checkGachaRuleConfig",
              596);
            v99 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    (common::milog::MiLogStream *const)(v3 + 2064),
                    (const char (*)[22])byte_1AD747E0);
            v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v99,
                     &gacha_rule_config->gacha_rule_id);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v100, (const char (*)[22])byte_1AD74A00);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2064));
            *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v9 = 0;
            break;
        }
      }
      else
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
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaRuleConfig",
          435);
        v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               (common::milog::MiLogStream *const)(v3 + 592),
               (const char (*)[22])byte_1AD747E0);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v7,
               &gacha_rule_config->gacha_rule_id);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])byte_1AD756E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
    }
    else
    {
      v9 = 1;
    }
    break;
  }
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
    v2 = 0;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2128));
  if ( v115 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8104) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 268) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8110) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8118) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8120) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8128) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8130) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8138) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2528LL, v115);
  }
  return v2;
};

// Line 606: range 00000000144413F4-0000000014442CB6
int32_t __cdecl GachaExcelConfigMgr::checkGachaProbRuleConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *p_round_table_priority; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  uint32_t base_prob; // ecx
  std::pair<std::_Rb_tree_const_iterator<data::GachaItemType>,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  GachaExcelConfigMgr *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v35; // edx
  char *v36; // rsi
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  uint32_t *p_base_prob; // rax
  uint32_t v40; // ecx
  std::pair<std::_Rb_tree_const_iterator<data::GachaItemParentType>,bool> v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  int v58; // eax
  int v60; // [rsp+Ch] [rbp-524h]
  int v61; // [rsp+Ch] [rbp-524h]
  std::map<unsigned int,std::vector<data::GachaProbRuleConfig>> *__for_range; // [rsp+20h] [rbp-510h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::reference v63; // [rsp+28h] [rbp-508h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *gacha_prob_rule_id; // [rsp+30h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *gacha_prob_rule_vec; // [rsp+38h] [rbp-4F8h]
  const data::GachaProbRuleConfig *gacha_prob_rule_config; // [rsp+48h] [rbp-4E8h]
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>> *__for_range_1; // [rsp+50h] [rbp-4E0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::reference v68; // [rsp+58h] [rbp-4D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *gacha_prob_rule_id_0; // [rsp+60h] [rbp-4D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *gacha_parent_prob_rule_vec; // [rsp+68h] [rbp-4C8h]
  const data::GachaParentProbRuleConfig *gacha_parent_prob_rule_config; // [rsp+78h] [rbp-4B8h]
  char v72[1200]; // [rsp+80h] [rbp-4B0h] BYREF

  v3 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1152LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "23 32 4 14 total_prob:609 48 4 14 total_prob:645 64 8 15 __for_begin:607 96 8 13 __for_end:607 1"
                        "28 8 15 __for_begin:612 160 8 13 __for_end:612 192 8 9 <unknown> 224 8 9 <unknown> 256 8 15 __fo"
                        "r_begin:643 288 8 13 __for_end:643 320 8 15 __for_begin:648 352 8 13 __for_end:648 384 32 9 <unk"
                        "nown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unkn"
                        "own> 768 32 9 <unknown> 832 48 17 item_type_set:610 912 48 16 priority_set:611 992 48 24 item_pa"
                        "rent_type_set:646 1072 48 16 priority_set:647";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaProbRuleConfig;
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
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -219021312;
  v5[536862748] = 62194;
  v5[536862750] = -218959118;
  v5[536862752] = -219021312;
  v5[536862753] = 62194;
  v5[536862755] = -202116109;
  __for_range = &this->gacha_prob_rule_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::end(__for_range);
  while ( 1 )
  {
    p_round_table_priority = (const char *)(v3 + 96);
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 64),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 96)) )
      break;
    v63 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > > *const)(v3 + 64));
    gacha_prob_rule_id = std::get<0ul,unsigned int const,std::vector<data::GachaProbRuleConfig>>(v63);
    gacha_prob_rule_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::GachaProbRuleConfig>>(v63);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, p_round_table_priority);
    *(_DWORD *)(v3 + 32) = 0;
    v7 = ((v3 + 832) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    std::set<data::GachaItemType>::set((std::set<data::GachaItemType> *const)(v3 + 832));
    v8 = ((v3 + 912) >> 3) + 2147450880;
    *(_DWORD *)v8 = 0;
    *(_WORD *)(v8 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 912));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_round_table_priority);
    *(std::vector<data::GachaProbRuleConfig>::const_iterator *)(v3 + 128) = std::vector<data::GachaProbRuleConfig>::begin(gacha_prob_rule_vec);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_round_table_priority);
    *(std::vector<data::GachaProbRuleConfig>::const_iterator *)(v3 + 160) = std::vector<data::GachaProbRuleConfig>::end(gacha_prob_rule_vec);
    while ( 1 )
    {
      p_round_table_priority = (const char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 160)) )
      {
        v16 = 1;
        goto LABEL_46;
      }
      gacha_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->base_prob >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->base_prob >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_prob_rule_config->base_prob);
      }
      base_prob = gacha_prob_rule_config->base_prob;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      *(_DWORD *)(v3 + 32) += base_prob;
      v10 = std::set<data::GachaItemType>::emplace<data::GachaItemType const&>(
              (std::set<data::GachaItemType> *const)(v3 + 832),
              &gacha_prob_rule_config->gacha_item_type,
              &gacha_prob_rule_config->gacha_item_type);
      if ( !v10.second )
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
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaProbRuleConfig",
          618);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v11, (const char (*)[22])byte_1AD75BA0);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                &gacha_prob_rule_config->gacha_prob_rule_id);
        v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1AD75BE0);
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
        }
        v15 = (__int64)data::enumValToStr(gacha_prob_rule_config->gacha_item_type, (__int64)byte_1AD75BE0);
        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 192, byte_1AD75BE0);
        *(_QWORD *)(v3 + 192) = v15;
        p_round_table_priority = (const char *)(v3 + 192);
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 192));
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
        goto LABEL_46;
      }
      v17 = std::set<unsigned int>::emplace<unsigned int const&>(
              (std::set<unsigned int> *const)(v3 + 912),
              &gacha_prob_rule_config->round_table_priority,
              &gacha_prob_rule_config->round_table_priority);
      if ( !v17.second )
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
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaProbRuleConfig",
          624);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v18, (const char (*)[22])byte_1AD75BA0);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                &gacha_prob_rule_config->gacha_prob_rule_id);
        v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v20, (const char (*)[30])byte_1AD75C20);
        p_round_table_priority = (const char *)&gacha_prob_rule_config->round_table_priority;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v21,
          &gacha_prob_rule_config->round_table_priority);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
        goto LABEL_46;
      }
      v22 = this;
      if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
      }
      if ( !data::GachaExcelConfigMgrBase::findGachaTokenDropConfig(
              v22,
              (unsigned int)gacha_prob_rule_config->gacha_item_type) )
        break;
      __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig const*,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 128));
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
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "checkGachaProbRuleConfig",
      630);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 512),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v24 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v23, (const char (*)[22])byte_1AD75BA0);
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v24,
            &gacha_prob_rule_config->gacha_prob_rule_id);
    v26 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v25, (const char (*)[23])byte_1AD75C60);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
    }
    v27 = (__int64)data::enumValToStr(gacha_prob_rule_config->gacha_item_type, (__int64)byte_1AD75C60);
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      v27 = __asan_report_store8(v3 + 224, byte_1AD75C60);
    *(_QWORD *)(v3 + 224) = v27;
    v28 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)(v3 + 224));
    p_round_table_priority = byte_1AD75CA0;
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v28, (const char (*)[24])byte_1AD75CA0);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
    *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_46:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 == 1 )
    {
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      if ( *(_DWORD *)(v3 + 32) == 10000 )
      {
        v60 = 1;
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
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaProbRuleConfig",
          638);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v29, (const char (*)[22])byte_1AD75BA0);
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, gacha_prob_rule_id);
        v32 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v31, (const char (*)[39])byte_1AD75CE0);
        p_round_table_priority = (const char *)(v3 + 32);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v60 = 0;
      }
    }
    else
    {
      v60 = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 912));
    std::set<data::GachaItemType>::~set((std::set<data::GachaItemType> *const)(v3 + 832));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    v33 = ((v3 + 832) >> 3) + 2147450880;
    *(_DWORD *)v33 = -117901064;
    *(_WORD *)(v33 + 4) = -1800;
    v34 = ((v3 + 912) >> 3) + 2147450880;
    *(_DWORD *)v34 = -117901064;
    *(_WORD *)(v34 + 4) = -1800;
    if ( v60 != 1 )
    {
      v35 = 0;
      goto LABEL_59;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > > *const)(v3 + 64));
  }
  v35 = 1;
LABEL_59:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v35 == 1 )
  {
    __for_range_1 = &this->gacha_parent_prob_rule_map;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_round_table_priority);
    *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 256) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, p_round_table_priority);
    *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::iterator *)(v3 + 288) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::end(__for_range_1);
    while ( 1 )
    {
      v36 = (char *)(v3 + 288);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 256),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 288)) )
        break;
      v68 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 256));
      gacha_prob_rule_id_0 = std::get<0ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(v68);
      gacha_parent_prob_rule_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::type *)std::get<1ul,unsigned int const,std::vector<data::GachaParentProbRuleConfig>>(v68);
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 48, v36);
      *(_DWORD *)(v3 + 48) = 0;
      v37 = ((v3 + 992) >> 3) + 2147450880;
      *(_DWORD *)v37 = 0;
      *(_WORD *)(v37 + 4) = 0;
      std::set<data::GachaItemParentType>::set((std::set<data::GachaItemParentType> *const)(v3 + 992));
      v38 = ((v3 + 1072) >> 3) + 2147450880;
      *(_DWORD *)v38 = 0;
      *(_WORD *)(v38 + 4) = 0;
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1072));
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, v36);
      *(std::vector<data::GachaParentProbRuleConfig>::const_iterator *)(v3 + 320) = std::vector<data::GachaParentProbRuleConfig>::begin(gacha_parent_prob_rule_vec);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v36);
      *(std::vector<data::GachaParentProbRuleConfig>::const_iterator *)(v3 + 352) = std::vector<data::GachaParentProbRuleConfig>::end(gacha_parent_prob_rule_vec);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 320),
                (const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 352)) )
        {
          v46 = 1;
          goto LABEL_88;
        }
        gacha_parent_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 320));
        p_base_prob = &gacha_parent_prob_rule_config->base_prob;
        if ( *(_BYTE *)(((unsigned __int64)p_base_prob >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_base_prob & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_base_prob >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(p_base_prob);
        }
        v40 = gacha_parent_prob_rule_config->base_prob;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        *(_DWORD *)(v3 + 48) += v40;
        v41 = std::set<data::GachaItemParentType>::emplace<data::GachaItemParentType const&>(
                (std::set<data::GachaItemParentType> *const)(v3 + 992),
                &gacha_parent_prob_rule_config->gacha_item_parent_type,
                &gacha_parent_prob_rule_config->gacha_item_parent_type);
        if ( !v41.second )
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
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaProbRuleConfig",
            654);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 640),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v42, (const char (*)[22])byte_1AD75BA0);
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v43,
                  &gacha_parent_prob_rule_config->gacha_prob_rule_id);
          v45 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v44, (const char (*)[29])byte_1AD75D40);
          common::milog::MiLogStream::operator<<<data::GachaItemParentType,(data::GachaItemParentType*)0>(
            v45,
            &gacha_parent_prob_rule_config->gacha_item_parent_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
          *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v46 = 0;
          goto LABEL_88;
        }
        v47 = std::set<unsigned int>::emplace<unsigned int const&>(
                (std::set<unsigned int> *const)(v3 + 1072),
                &gacha_parent_prob_rule_config->round_table_priority,
                &gacha_parent_prob_rule_config->round_table_priority);
        if ( !v47.second )
          break;
        __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig const*,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 320));
      }
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaProbRuleConfig",
        660);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v48, (const char (*)[22])byte_1AD75BA0);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v49,
              &gacha_parent_prob_rule_config->gacha_prob_rule_id);
      v51 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v50, (const char (*)[29])byte_1AD75D80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v51,
        &gacha_parent_prob_rule_config->round_table_priority);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v46 = 0;
LABEL_88:
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( v46 == 1 )
      {
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( *(_DWORD *)(v3 + 48) == 10000 )
        {
          v61 = 1;
        }
        else
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
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaProbRuleConfig",
            667);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v52, (const char (*)[22])byte_1AD75BA0);
          v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, gacha_prob_rule_id_0);
          v55 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v54, (const char (*)[40])byte_1AD75DC0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
          *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v61 = 0;
        }
      }
      else
      {
        v61 = 0;
      }
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1072));
      std::set<data::GachaItemParentType>::~set((std::set<data::GachaItemParentType> *const)(v3 + 992));
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      v56 = ((v3 + 992) >> 3) + 2147450880;
      *(_DWORD *)v56 = -117901064;
      *(_WORD *)(v56 + 4) = -1800;
      v57 = ((v3 + 1072) >> 3) + 2147450880;
      *(_DWORD *)v57 = -117901064;
      *(_WORD *)(v57 + 4) = -1800;
      if ( v61 != 1 )
      {
        v58 = 0;
        goto LABEL_101;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 256));
    }
    v58 = 1;
LABEL_101:
    if ( v58 == 1 )
      v2 = 0;
  }
  if ( v72 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 144) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1152LL, v72);
  }
  return v2;
};

// Line 676: range 0000000014442CB8-0000000014448BD1
int32_t __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL4 v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t ten_cost_item_num; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t first_ten_cost_item_num; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned __int64 v26; // rax
  uint32_t gacha_prob_rule_id; // esi
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  _BOOL4 v30; // r15d
  common::milog::MiLogStream *v31; // rax
  _BOOL4 v32; // edx
  unsigned __int64 v33; // rax
  data::GachaItemType gacha_item_type; // r8d
  uint32_t gacha_pool_id; // edi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // r14
  __int64 v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  int v42; // r15d
  uint32_t *p_weight; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  __int64 v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  unsigned __int64 v50; // rax
  int v51; // edx
  unsigned __int64 v52; // rax
  uint32_t v53; // esi
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  _BOOL4 v56; // r15d
  const char *v57; // rsi
  data::GachaItemParentType *p_gacha_item_parent_type; // rax
  common::milog::MiLogStream *v59; // rax
  int v60; // edx
  const char *p_prob; // rsi
  common::milog::MiLogStream *v62; // rax
  _BOOL4 v63; // eax
  data::GachaParentProbRuleConfig *M_current; // rcx
  bool v65; // al
  common::milog::MiLogStream *v66; // rax
  __int64 v67; // rsi
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  unsigned __int64 v70; // rax
  unsigned int *v71; // rax
  int *v72; // rdx
  int v73; // ecx
  char v74; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  int v78; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  uint32_t v82; // esi
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  data::GachaItemType v87; // edx
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // r14
  __int64 v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // r14
  __int64 v97; // rax
  _BOOL4 v98; // r15d
  unsigned __int64 v99; // rdx
  int v100; // edx
  unsigned __int64 v101; // rax
  char *v102; // rsi
  unsigned int *v103; // rax
  int *v104; // rdx
  int v105; // ecx
  char v106; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  int v110; // eax
  const data::GachaExcelConfigMgrBase *v111; // rdx
  __int64 v112; // rsi
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  uint32_t gacha_guarantee_item; // esi
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  char *v122; // rsi
  data::GachaParentProbRuleConfig *v123; // rcx
  bool v124; // al
  common::milog::MiLogStream *v125; // rax
  int v126; // edx
  char *v127; // rsi
  char *p_gacha_prob_rule_id; // rsi
  unsigned int *v129; // rax
  int *v130; // rdx
  int v131; // ecx
  char v132; // al
  data::GachaItemType v133; // edx
  __int64 v134; // rsi
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  int v137; // eax
  data::GachaProbRuleConfig *v138; // r15
  data::GachaProbRuleConfig *v139; // rcx
  bool v140; // al
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  int v143; // eax
  data::GachaParentProbRuleConfig *v144; // rcx
  bool v145; // al
  common::milog::MiLogStream *v146; // rax
  data::GachaParentProbRuleConfig *v147; // rcx
  bool v148; // al
  common::milog::MiLogStream *v149; // rax
  data::GachaParentProbRuleConfig *v150; // rcx
  char *v151; // rsi
  bool v152; // al
  common::milog::MiLogStream *v153; // rax
  char *v154; // rsi
  unsigned int *v155; // rax
  int *v156; // rdx
  int v157; // ecx
  char v158; // al
  data::GachaItemParentType v159; // r15d
  data::GachaItemType v160; // edx
  __int64 v161; // rsi
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  int v164; // eax
  data::GachaProbRuleConfig *v165; // r15
  data::GachaProbRuleConfig *v166; // rcx
  bool v167; // al
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  _BOOL4 v170; // r15d
  unsigned __int64 v171; // rdx
  unsigned __int64 v172; // rdx
  unsigned __int64 v173; // rdx
  int v174; // eax
  data::GachaParentProbRuleConfig *__last; // [rsp+0h] [rbp-1050h]
  data::GachaParentProbRuleConfig *__lasta; // [rsp+0h] [rbp-1050h]
  GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:28&)> __lastb; // [rsp+0h] [rbp-1050h]
  data::GachaParentProbRuleConfig *__lastc; // [rsp+0h] [rbp-1050h]
  data::GachaParentProbRuleConfig *__lastd; // [rsp+0h] [rbp-1050h]
  data::GachaParentProbRuleConfig *__laste; // [rsp+0h] [rbp-1050h]
  GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:32&)> __lastf; // [rsp+0h] [rbp-1050h]
  uint32_t total_weight; // [rsp+24h] [rbp-102Ch]
  data::GachaItemParentType gacha_item_parent_type; // [rsp+28h] [rbp-1028h]
  data::GachaItemParentType gacha_item_parent_type_0; // [rsp+2Ch] [rbp-1024h]
  ItemExcelConfigMgr *item_config_mgr; // [rsp+30h] [rbp-1020h]
  GachaExcelConfigMgr *gacha_config_mgr; // [rsp+38h] [rbp-1018h]
  data::GachaNewbieDataConfigVec *__for_range; // [rsp+40h] [rbp-1010h]
  const data::GachaNewbieDataConfig *gacha_newbie_config; // [rsp+48h] [rbp-1008h]
  std::vector<data::GachaProbRuleConfig> *__for_range_0; // [rsp+50h] [rbp-1000h]
  const data::GachaProbRuleConfig *gacha_prob_rule_config; // [rsp+58h] [rbp-FF8h]
  std::vector<data::GachaPoolExcelConfig> *__for_range_1; // [rsp+60h] [rbp-FF0h]
  const data::GachaPoolExcelConfig *gacha_item_config; // [rsp+68h] [rbp-FE8h]
  std::vector<data::GachaParentProbRuleConfig> *__for_range_2; // [rsp+70h] [rbp-FE0h]
  const data::GachaParentProbRuleConfig *gacha_parent_prob_rule_config; // [rsp+78h] [rbp-FD8h]
  const std::vector<data::GachaNewbieUpConfig> *__for_range_3; // [rsp+80h] [rbp-FD0h]
  const data::GachaNewbieUpConfig *gacha_up_config; // [rsp+88h] [rbp-FC8h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+90h] [rbp-FC0h]
  const data::GachaPoolExcelConfig *gacha_item_config_ptr; // [rsp+98h] [rbp-FB8h]
  const std::vector<unsigned int> *__for_range_5; // [rsp+A0h] [rbp-FB0h]
  const data::GachaRuleExcelConfig *rule_config_ptr; // [rsp+A8h] [rbp-FA8h]
  const std::vector<unsigned int> *__for_range_9; // [rsp+B0h] [rbp-FA0h]
  const std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> *__for_range_7; // [rsp+B8h] [rbp-F98h]
  const data::GachaGuaranteeParentTypeWeightWithChilds *item_parent_type_weight_childs; // [rsp+C0h] [rbp-F90h]
  const std::vector<unsigned int> *__for_range_8; // [rsp+C8h] [rbp-F88h]
  const std::vector<data::GachaGuaranteeParentTypeWeight> *__for_range_6; // [rsp+D0h] [rbp-F80h]
  const data::GachaGuaranteeParentTypeWeight *item_parent_type_weight; // [rsp+D8h] [rbp-F78h]
  char v210[3952]; // [rsp+E0h] [rbp-F70h] BYREF

  v3 = (unsigned __int64)v210;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(3904LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "83 32 4 11 item_id:802 48 4 17 gacha_rule_id:836 64 4 19 gacha_item_type:877 80 4 19 gacha_item_"
                        "type:925 96 8 15 __for_begin:686 128 8 13 __for_end:686 160 8 15 __for_begin:739 192 8 13 __for_"
                        "end:739 224 8 9 <unknown> 256 8 15 __for_begin:754 288 8 13 __for_end:754 320 8 9 <unknown> 352 "
                        "8 15 __for_begin:772 384 8 13 __for_end:772 416 8 15 __for_begin:781 448 8 13 __for_end:781 480 "
                        "8 9 <unknown> 512 8 9 <unknown> 544 8 15 __for_begin:802 576 8 13 __for_end:802 608 8 9 <unknown"
                        "> 640 8 9 <unknown> 672 8 15 __for_begin:836 704 8 13 __for_end:836 736 8 15 __for_begin:860 768"
                        " 8 13 __for_end:860 800 8 9 <unknown> 832 8 9 <unknown> 864 8 15 __for_begin:874 896 8 13 __for_"
                        "end:874 928 8 15 __for_begin:877 960 8 13 __for_end:877 992 8 9 <unknown> 1024 8 9 <unknown> 105"
                        "6 8 9 <unknown> 1088 8 9 <unknown> 1120 8 9 <unknown> 1152 8 9 <unknown> 1184 8 9 <unknown> 1216"
                        " 8 9 <unknown> 1248 8 15 __for_begin:925 1280 8 13 __for_end:925 1312 8 9 <unknown> 1344 8 9 <un"
                        "known> 1376 24 23 gacha_prob_rule_vec:733 1440 24 18 gacha_pool_vec:746 1504 24 30 gacha_parent_"
                        "prob_rule_vec:766 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown"
                        "> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unk"
                        "nown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 "
                        "<unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 3"
                        "2 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 30"
                        "40 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown"
                        "> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unk"
                        "nown> 3680 32 9 <unknown> 3744 48 15 item_id_set:801 3824 48 18 gacha_rule_set:835";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaNewbieConfig;
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
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862737] = -218959360;
  v5[536862738] = -218959360;
  v5[536862739] = -218959360;
  v5[536862740] = -218959360;
  v5[536862741] = -218959360;
  v5[536862742] = -218959360;
  v5[536862743] = -218959360;
  v5[536862744] = -218959360;
  v5[536862745] = -218959360;
  v5[536862746] = -218959360;
  v5[536862747] = -218959360;
  v5[536862748] = -218959360;
  v5[536862749] = -218959360;
  v5[536862750] = -218959360;
  v5[536862751] = -218959360;
  v5[536862752] = -218959360;
  v5[536862753] = -218959360;
  v5[536862754] = -218959360;
  v5[536862755] = -218959360;
  v5[536862756] = -218959360;
  v5[536862757] = -218959360;
  v5[536862758] = -218959360;
  v5[536862759] = -218959360;
  v5[536862760] = -218959360;
  v5[536862761] = -218959360;
  v5[536862762] = -218959360;
  v5[536862763] = -234881024;
  v5[536862764] = -218959118;
  v5[536862765] = -234881024;
  v5[536862766] = -218959118;
  v5[536862767] = -234881024;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862776] = -218959118;
  v5[536862778] = -218959118;
  v5[536862780] = -218959118;
  v5[536862782] = -218959118;
  v5[536862784] = -218959118;
  v5[536862786] = -218959118;
  v5[536862788] = -218959118;
  v5[536862790] = -218959118;
  v5[536862792] = -218959118;
  v5[536862794] = -218959118;
  v5[536862796] = -218959118;
  v5[536862798] = -218959118;
  v5[536862800] = -218959118;
  v5[536862802] = -218959118;
  v5[536862804] = -218959118;
  v5[536862806] = -218959118;
  v5[536862808] = -218959118;
  v5[536862810] = -218959118;
  v5[536862812] = -218959118;
  v5[536862814] = -218959118;
  v5[536862816] = -218959118;
  v5[536862818] = -218959118;
  v5[536862820] = -218959118;
  v5[536862822] = -218959118;
  v5[536862824] = -218959118;
  v5[536862826] = -218959118;
  v5[536862828] = -218959118;
  v5[536862830] = -218959118;
  v5[536862832] = -218959118;
  v5[536862834] = -218959118;
  v5[536862836] = -218959118;
  v5[536862838] = -219021312;
  v5[536862839] = 62194;
  v5[536862841] = -202116109;
  if ( std::vector<data::GachaNewbieDataConfig>::size(&this->gacha_newbie_data_config_vec) > 1 )
  {
    if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 1568, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 1568),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "checkGachaNewbieConfig",
      680);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 1568),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v6, (const char (*)[31])byte_1AD76580);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
    v2 = -1;
    goto LABEL_407;
  }
  item_config_mgr = &txt_config_mgr->item_config_mgr;
  gacha_config_mgr = &txt_config_mgr->gacha_config_mgr;
  __for_range = &this->gacha_newbie_data_config_vec;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::GachaNewbieDataConfig>::iterator *)(v3 + 96) = std::vector<data::GachaNewbieDataConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::vector<data::GachaNewbieDataConfig>::iterator *)(v3 + 128) = std::vector<data::GachaNewbieDataConfig>::end(__for_range);
  while ( 2 )
  {
    if ( !__gnu_cxx::operator!=<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *)(v3 + 96),
            (const __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *)(v3 + 128)) )
    {
      v174 = 1;
      goto LABEL_405;
    }
    gacha_newbie_config = __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->single_cost_item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(item_config_mgr, gacha_newbie_config->single_cost_item_id) )
    {
      *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1632) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1632, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1632),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        690);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 1632),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v7, (const char (*)[52])byte_1AD765C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        &gacha_newbie_config->single_cost_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
      *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->single_cost_item_num);
    }
    if ( !gacha_newbie_config->single_cost_item_num )
    {
      *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1696) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1727) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1696, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1696),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        695);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1696),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v10, (const char (*)[58])byte_1AD76620);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        &gacha_newbie_config->single_cost_item_num);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
      *(_DWORD *)(((v3 + 1696) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->ten_cost_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->ten_cost_item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(item_config_mgr, gacha_newbie_config->ten_cost_item_id) )
    {
      *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1760) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 1791) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1760, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1760),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        700);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1760),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v12, (const char (*)[52])byte_1AD76680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v13,
        &gacha_newbie_config->ten_cost_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
      *(_DWORD *)(((v3 + 1760) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->ten_cost_item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->ten_cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->ten_cost_item_num);
    }
    if ( !gacha_newbie_config->ten_cost_item_num )
      goto LABEL_38;
    ten_cost_item_num = gacha_newbie_config->ten_cost_item_num;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->single_cost_item_num);
    }
    if ( ten_cost_item_num <= gacha_newbie_config->single_cost_item_num )
    {
LABEL_38:
      *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1824) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1855) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1824, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1824),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        705);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1824),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v15, (const char (*)[58])byte_1AD766E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v16,
        &gacha_newbie_config->ten_cost_item_num);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
      *(_DWORD *)(((v3 + 1824) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->first_ten_cost_item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->first_ten_cost_item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->first_ten_cost_item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(item_config_mgr, gacha_newbie_config->first_ten_cost_item_id) )
    {
      *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1888) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1919) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1888, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1888),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        710);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1888),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v17, (const char (*)[58])byte_1AD76740);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v18,
        &gacha_newbie_config->first_ten_cost_item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
      *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->first_ten_cost_item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->first_ten_cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->first_ten_cost_item_num);
    }
    if ( !gacha_newbie_config->first_ten_cost_item_num )
      goto LABEL_53;
    first_ten_cost_item_num = gacha_newbie_config->first_ten_cost_item_num;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->single_cost_item_num >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->single_cost_item_num);
    }
    if ( first_ten_cost_item_num <= gacha_newbie_config->single_cost_item_num )
    {
LABEL_53:
      *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1952) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 1983) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1952, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1952),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        715);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1952),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v20, (const char (*)[64])byte_1AD767A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v21,
        &gacha_newbie_config->first_ten_cost_item_num);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
      *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_times_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_times_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->gacha_times_limit);
    }
    if ( !gacha_newbie_config->gacha_times_limit )
    {
      *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2016) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2047) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2016, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2016),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        720);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2016),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v22, (const char (*)[44])byte_1AD76800);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2016));
      *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gacha_newbie_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&gacha_newbie_config->gacha_pool_id);
    }
    if ( !GachaExcelConfigMgr::isGachaPoolValid(gacha_config_mgr, gacha_newbie_config->gacha_pool_id) )
    {
      *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2080) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2111) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2080, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2080),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        725);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2080),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v23, (const char (*)[40])byte_1AD76860);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &gacha_newbie_config->gacha_pool_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2080));
      *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
    }
    if ( !gacha_newbie_config->gacha_prob_rule_id )
    {
      *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2144) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2175) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2144, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2144),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        730);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2144),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v25, (const char (*)[37])byte_1AD768C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2144));
      *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
      goto LABEL_401;
    }
    v26 = ((v3 + 1376) >> 3) + 2147450880;
    *(_WORD *)v26 = 0;
    *(_BYTE *)(v26 + 2) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
    }
    gacha_prob_rule_id = gacha_newbie_config->gacha_prob_rule_id;
    if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1399) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 1399) >> 3) + 0x7FFF8000) )
    {
      gacha_prob_rule_id = 24;
      __asan_report_store_n(v3 + 1376, 24LL);
    }
    GachaExcelConfigMgr::findGachaProbRuleVec(
      (std::vector<data::GachaProbRuleConfig> *)(v3 + 1376),
      gacha_config_mgr,
      gacha_prob_rule_id);
    if ( std::vector<data::GachaProbRuleConfig>::empty((const std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376)) )
    {
      *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2208),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        736);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2208),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v28, (const char (*)[48])byte_1AD76920);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v29,
        &gacha_newbie_config->gacha_prob_rule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2208));
      *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v30 = 0;
      goto LABEL_400;
    }
    __for_range_0 = (std::vector<data::GachaProbRuleConfig> *)(v3 + 1376);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, gacha_config_mgr);
    *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 160) = std::vector<data::GachaProbRuleConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, gacha_config_mgr);
    *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 192) = std::vector<data::GachaProbRuleConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 192)) )
    {
      gacha_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
      }
      if ( gacha_prob_rule_config->gacha_item_type )
      {
        v33 = ((v3 + 1440) >> 3) + 2147450880;
        *(_WORD *)v33 = 0;
        *(_BYTE *)(v33 + 2) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
        }
        gacha_item_type = gacha_prob_rule_config->gacha_item_type;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_newbie_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_newbie_config->gacha_pool_id);
        }
        gacha_pool_id = gacha_newbie_config->gacha_pool_id;
        if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 73) & 7) >= *(_BYTE *)(((v3 + 1463) >> 3) + 0x7FFF8000) )
        {
          gacha_pool_id = v3 + 1440;
          __asan_report_store_n(v3 + 1440, 24LL);
        }
        GachaExcelConfigMgr::findGachaPool(
          (std::vector<data::GachaPoolExcelConfig> *)(v3 + 1440),
          gacha_config_mgr,
          gacha_pool_id,
          gacha_item_type);
        if ( std::vector<data::GachaPoolExcelConfig>::empty((const std::vector<data::GachaPoolExcelConfig> *const)(v3 + 1440)) )
        {
          *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2336) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2367) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2336, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2336),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaNewbieConfig",
            749);
          v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2336),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v37 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v36, (const char (*)[43])byte_1AD769E0);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
          }
          v38 = (__int64)data::enumValToStr(gacha_prob_rule_config->gacha_item_type, (__int64)byte_1AD769E0);
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            v38 = __asan_report_store8(v3 + 224, byte_1AD769E0);
          *(_QWORD *)(v3 + 224) = v38;
          v39 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v37,
                  (const char *const *)(v3 + 224));
          v40 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v39, (const char (*)[14])byte_1AD76A40);
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  &gacha_newbie_config->gacha_pool_id);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v41, (const char (*)[10])byte_1AD76A80);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2336));
          *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v42 = 0;
        }
        else
        {
          total_weight = 0;
          __for_range_1 = (std::vector<data::GachaPoolExcelConfig> *)(v3 + 1440);
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 256, gacha_config_mgr);
          *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 256) = std::vector<data::GachaPoolExcelConfig>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 288, gacha_config_mgr);
          *(std::vector<data::GachaPoolExcelConfig>::iterator *)(v3 + 288) = std::vector<data::GachaPoolExcelConfig>::end(__for_range_1);
          while ( __gnu_cxx::operator!=<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 256),
                    (const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *)(v3 + 288)) )
          {
            gacha_item_config = __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 256));
            p_weight = &gacha_item_config->weight;
            if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(p_weight);
            }
            total_weight += gacha_item_config->weight;
            __gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig *,std::vector<data::GachaPoolExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaPoolExcelConfig*,std::vector<data::GachaPoolExcelConfig> > *const)(v3 + 256));
          }
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
          if ( total_weight )
          {
            v42 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2400) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2431) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2400, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2400),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "checkGachaNewbieConfig",
              760);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2400),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    v44,
                    (const char (*)[43])byte_1AD769E0);
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
            }
            v46 = (__int64)data::enumValToStr(gacha_prob_rule_config->gacha_item_type, (__int64)byte_1AD769E0);
            if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
              v46 = __asan_report_store8(v3 + 320, byte_1AD769E0);
            *(_QWORD *)(v3 + 320) = v46;
            v47 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v45,
                    (const char *const *)(v3 + 320));
            v48 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v47,
                    (const char (*)[14])byte_1AD76A40);
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v48,
                    &gacha_newbie_config->gacha_pool_id);
            common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v49, (const char (*)[14])byte_1AD76AC0);
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2400));
            *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v42 = 0;
          }
        }
        std::vector<data::GachaPoolExcelConfig>::~vector((std::vector<data::GachaPoolExcelConfig> *const)(v3 + 1440));
        v32 = v42 == 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2272) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2303) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2272, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2272),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          743);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 2272),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v31, (const char (*)[49])byte_1AD76980);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2272));
        *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v32 = 0;
      }
      v50 = ((v3 + 1440) >> 3) + 2147450880;
      *(_WORD *)v50 = -1800;
      *(_BYTE *)(v50 + 2) = -8;
      if ( !v32 )
      {
        v51 = 0;
        goto LABEL_131;
      }
      __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v3 + 160));
    }
    v51 = 1;
LABEL_131:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v51 != 1 )
    {
      v30 = 0;
      goto LABEL_400;
    }
    v52 = ((v3 + 1504) >> 3) + 2147450880;
    *(_WORD *)v52 = 0;
    *(_BYTE *)(v52 + 2) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
    }
    v53 = gacha_newbie_config->gacha_prob_rule_id;
    if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 1527) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 23) & 7) >= *(_BYTE *)(((v3 + 1527) >> 3) + 0x7FFF8000) )
    {
      v53 = 24;
      __asan_report_store_n(v3 + 1504, 24LL);
    }
    GachaExcelConfigMgr::findGachaParentProbRuleVec(
      (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 1504),
      gacha_config_mgr,
      v53);
    if ( std::vector<data::GachaParentProbRuleConfig>::empty((const std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504)) )
    {
      *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 2464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 2464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 2464),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        769);
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 2464),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v55 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v54, (const char (*)[48])byte_1AD76920);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v55,
        &gacha_newbie_config->gacha_prob_rule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2464));
      *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v56 = 0;
      goto LABEL_399;
    }
    __for_range_2 = (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 1504);
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 352, gacha_config_mgr);
    *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 352) = std::vector<data::GachaParentProbRuleConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 384, gacha_config_mgr);
    *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 384) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range_2);
    while ( 1 )
    {
      v57 = (const char *)(v3 + 384);
      if ( !__gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
              (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 352),
              (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 384)) )
      {
        v60 = 1;
        goto LABEL_155;
      }
      gacha_parent_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 352));
      p_gacha_item_parent_type = &gacha_parent_prob_rule_config->gacha_item_parent_type;
      if ( *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gacha_item_parent_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3)
                                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(p_gacha_item_parent_type);
      }
      if ( gacha_parent_prob_rule_config->gacha_item_parent_type == GACHA_ITEM_PARENT_INVALID )
        break;
      __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v3 + 352));
    }
    *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 2528) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2559) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 2528, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 2528),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "checkGachaNewbieConfig",
      776);
    v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 2528),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v57 = byte_1AD76980;
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v59, (const char (*)[49])byte_1AD76980);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
    *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v60 = 0;
LABEL_155:
    *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
    if ( v60 != 1 )
    {
      v56 = 0;
      goto LABEL_399;
    }
    __for_range_3 = &gacha_newbie_config->gacha_up_config_vec;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v57);
    *(std::vector<data::GachaNewbieUpConfig>::const_iterator *)(v3 + 416) = std::vector<data::GachaNewbieUpConfig>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 448, v57);
    *(std::vector<data::GachaNewbieUpConfig>::const_iterator *)(v3 + 448) = std::vector<data::GachaNewbieUpConfig>::end(__for_range_3);
    while ( 1 )
    {
      p_prob = (const char *)(v3 + 448);
      if ( !__gnu_cxx::operator!=<data::GachaNewbieUpConfig const*,std::vector<data::GachaNewbieUpConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *)(v3 + 416),
              (const __gnu_cxx::__normal_iterator<const data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *)(v3 + 448)) )
        break;
      gacha_up_config = __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig const*,std::vector<data::GachaNewbieUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *const)(v3 + 416));
      if ( *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gacha_up_config->item_parent_type);
      }
      if ( gacha_up_config->item_parent_type )
      {
        *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 512, p_prob);
        *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 512) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        __last = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
        M_current = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
        if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 480, p_prob);
        *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 480) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#1}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)M_current, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__last, (GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:26&)>)gacha_up_config);
        v65 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 480),
                (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 512));
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
        if ( v65 )
        {
          *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaNewbieConfig",
            793);
          v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          p_prob = byte_1AD76B60;
          common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v66, (const char (*)[63])byte_1AD76B60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2656));
          *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v63 = 0;
        }
        else
        {
          v67 = (((_BYTE)gacha_up_config + 12) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&gacha_up_config->prob >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gacha_up_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_up_config->prob >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4(&gacha_up_config->prob);
          }
          if ( gacha_up_config->prob && gacha_up_config->prob <= 0x3E8 )
          {
            v70 = ((v3 + 3744) >> 3) + 2147450880;
            *(_DWORD *)v70 = 0;
            *(_WORD *)(v70 + 4) = 0;
            std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 3744));
            __for_range_4 = &gacha_up_config->item_list;
            *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 544, v67);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 544) = std::vector<unsigned int>::begin(__for_range_4);
            *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 576, v67);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 576) = std::vector<unsigned int>::end(__for_range_4);
            while ( 1 )
            {
              p_prob = (const char *)(v3 + 576);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 544),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 576)) )
              {
                v78 = 1;
                goto LABEL_230;
              }
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
              v71 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 544));
              v72 = (int *)v71;
              if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v71);
              }
              v73 = *v72;
              v74 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
              if ( v74 != 0 && v74 <= 3 )
              {
                LOBYTE(p_prob) = v74 != 0;
                __asan_report_store4(v3 + 32, p_prob);
              }
              *(_DWORD *)(v3 + 32) = v73;
              v75 = std::set<unsigned int>::emplace<unsigned int &>(
                      (std::set<unsigned int> *const)(v3 + 3744),
                      (unsigned int *)(v3 + 32),
                      (unsigned int *)(v3 + 32));
              if ( !v75.second )
              {
                *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2784) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 2815) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2784, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2784),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaNewbieConfig",
                  806);
                v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2784),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v77 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v76,
                        (const char (*)[47])byte_1AD76C20);
                p_prob = (const char *)(v3 + 32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v77,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2784));
                *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v78 = 0;
                goto LABEL_230;
              }
              p_item_config_mgr = &txt_config_mgr->item_config_mgr;
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *(_DWORD *)(v3 + 32)) )
              {
                *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2848) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2879) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2848, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2848),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaNewbieConfig",
                  812);
                v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2848),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v81 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                        v80,
                        (const char (*)[50])byte_1AD76C80);
                p_prob = (const char *)(v3 + 32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v81,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2848));
                *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v78 = 0;
                goto LABEL_230;
              }
              if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 32);
              v82 = *(_DWORD *)(v3 + 32);
              if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)gacha_newbie_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3)
                                                                                   + 0x7FFF8000) )
              {
                __asan_report_load4(&gacha_newbie_config->gacha_pool_id);
              }
              gacha_item_config_ptr = GachaExcelConfigMgr::findGachaItemInPool(
                                        gacha_config_mgr,
                                        gacha_newbie_config->gacha_pool_id,
                                        v82);
              if ( !gacha_item_config_ptr )
              {
                *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 2912) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 2943) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 2912, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 2912),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/GachaExcelConfig.cpp",
                  "checkGachaNewbieConfig",
                  819);
                v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 2912),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v84 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                        v83,
                        (const char (*)[62])byte_1AD76CE0);
                v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v84,
                        &gacha_newbie_config->gacha_pool_id);
                v86 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v85,
                        (const char (*)[10])" item_id:");
                p_prob = (const char *)(v3 + 32);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v86,
                  (const unsigned int *)(v3 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2912));
                *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v78 = 0;
                goto LABEL_230;
              }
              if ( *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr->gacha_item_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gacha_item_config_ptr->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gacha_item_config_ptr->gacha_item_type);
              }
              v87 = gacha_item_config_ptr->gacha_item_type;
              if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
              }
              gacha_item_parent_type = GachaExcelConfigMgr::getGachaItemParentType(
                                         gacha_config_mgr,
                                         gacha_newbie_config->gacha_prob_rule_id,
                                         v87);
              if ( *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&gacha_up_config->item_parent_type);
              }
              if ( gacha_item_parent_type != gacha_up_config->item_parent_type )
                break;
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 544));
            }
            *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2976) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 3007) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3007) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2976, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2976),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "checkGachaNewbieConfig",
              827);
            v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2976),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v89 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                    v88,
                    (const char (*)[73])byte_1AD76D80);
            v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v89,
                    &gacha_newbie_config->gacha_pool_id);
            v91 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v90, (const char (*)[10])" item_id:");
            v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v91,
                    (const unsigned int *)(v3 + 32));
            v93 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v92,
                    (const char (*)[19])" item_parent_type:");
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
            v94 = (__int64)data::enumValToStr(gacha_item_parent_type, (__int64)" item_parent_type:");
            if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
              v94 = __asan_report_store8(v3 + 608, " item_parent_type:");
            *(_QWORD *)(v3 + 608) = v94;
            v95 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                    v93,
                    (const char *const *)(v3 + 608));
            v96 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v95,
                    (const char (*)[11])byte_1AD76E40);
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_up_config->item_parent_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_up_config->item_parent_type);
            }
            v97 = (__int64)data::enumValToStr(
                             (data::GachaItemParentType)gacha_up_config->item_parent_type,
                             (__int64)byte_1AD76E40);
            if ( *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) )
              v97 = __asan_report_store8(v3 + 640, byte_1AD76E40);
            *(_QWORD *)(v3 + 640) = v97;
            p_prob = (const char *)(v3 + 640);
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v96, (const char *const *)(v3 + 640));
            *(_BYTE *)(((v3 + 640) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2976));
            *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v78 = 0;
LABEL_230:
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
            v98 = v78 == 1;
            std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 3744));
            v63 = v98;
          }
          else
          {
            *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2720) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 2751) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2720, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2720),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/GachaExcelConfig.cpp",
              "checkGachaNewbieConfig",
              798);
            v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2720),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v69 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                    v68,
                    (const char (*)[52])byte_1AD76BC0);
            p_prob = (const char *)&gacha_up_config->prob;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, &gacha_up_config->prob);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
            *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v63 = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 2592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 2623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 2592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 2592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          785);
        v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 2592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        p_prob = byte_1AD76B00;
        common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v62, (const char (*)[60])byte_1AD76B00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2592));
        *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v63 = 0;
      }
      v99 = ((v3 + 3744) >> 3) + 2147450880;
      *(_DWORD *)v99 = -117901064;
      *(_WORD *)(v99 + 4) = -1800;
      if ( !v63 )
      {
        v100 = 0;
        goto LABEL_235;
      }
      __gnu_cxx::__normal_iterator<data::GachaNewbieUpConfig const*,std::vector<data::GachaNewbieUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaNewbieUpConfig*,std::vector<data::GachaNewbieUpConfig> > *const)(v3 + 416));
    }
    v100 = 1;
LABEL_235:
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
    if ( v100 != 1 )
    {
      v56 = 0;
      goto LABEL_399;
    }
    v101 = ((v3 + 3824) >> 3) + 2147450880;
    *(_DWORD *)v101 = 0;
    *(_WORD *)(v101 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 3824));
    __for_range_5 = &gacha_newbie_config->gacha_guarantee_rule_list;
    *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 672, p_prob);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 672) = std::vector<unsigned int>::begin(__for_range_5);
    *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 704, p_prob);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 704) = std::vector<unsigned int>::end(__for_range_5);
    while ( 1 )
    {
      v102 = (char *)(v3 + 704);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 672),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 704)) )
      {
        v110 = 1;
        goto LABEL_398;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v103 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 672));
      v104 = (int *)v103;
      if ( *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v103 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v103 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v103);
      }
      v105 = *v104;
      v106 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v106 != 0 && v106 <= 3 )
      {
        LOBYTE(v102) = v106 != 0;
        __asan_report_store4(v3 + 48, v102);
      }
      *(_DWORD *)(v3 + 48) = v105;
      v107 = std::set<unsigned int>::emplace<unsigned int &>(
               (std::set<unsigned int> *const)(v3 + 3824),
               (unsigned int *)(v3 + 48),
               (unsigned int *)(v3 + 48));
      if ( !v107.second )
      {
        *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3040) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3071) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3040, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3040),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          840);
        v108 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3040),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v109 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v108, (const char (*)[56])byte_1AD76E80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3040));
        *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v110 = 0;
        goto LABEL_398;
      }
      v111 = gacha_config_mgr;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v112 = *(unsigned int *)(v3 + 48);
      rule_config_ptr = data::GachaExcelConfigMgrBase::findGachaRuleExcelConfig(v111, v112);
      if ( !rule_config_ptr )
      {
        *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3104) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3135) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 3135) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3104, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3104),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          846);
        v113 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3104),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v114 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v113, (const char (*)[56])byte_1AD76E80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3104));
        *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v110 = 0;
        goto LABEL_398;
      }
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
      }
      if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_SPECIFIED_COUNT )
      {
        if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&rule_config_ptr->gacha_guarantee_item);
        }
        gacha_guarantee_item = rule_config_ptr->gacha_guarantee_item;
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gacha_newbie_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_pool_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&gacha_newbie_config->gacha_pool_id);
        }
        if ( !GachaExcelConfigMgr::findGachaItemInPool(
                gacha_config_mgr,
                gacha_newbie_config->gacha_pool_id,
                gacha_guarantee_item) )
        {
          *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 3168) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 3199) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3199) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 3168, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 3168),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaNewbieConfig",
            853);
          v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 3168),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v117 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                   v116,
                   (const char (*)[66])byte_1AD76EE0);
          v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v117,
                   &gacha_newbie_config->gacha_pool_id);
          v119 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v118, (const char (*)[10])" rule_id:");
          v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v119,
                   (const unsigned int *)(v3 + 48));
          v121 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v120, (const char (*)[10])" item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v121,
            &rule_config_ptr->gacha_guarantee_item);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3168));
          *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v110 = 0;
          goto LABEL_398;
        }
        goto LABEL_396;
      }
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
      }
      if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT )
      {
        __for_range_6 = &rule_config_ptr->gacha_guarantee_parent_type_weight_vec;
        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 736, v112);
        *(std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator *)(v3 + 736) = std::vector<data::GachaGuaranteeParentTypeWeight>::begin(__for_range_6);
        *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 768, v112);
        *(std::vector<data::GachaGuaranteeParentTypeWeight>::const_iterator *)(v3 + 768) = std::vector<data::GachaGuaranteeParentTypeWeight>::end(__for_range_6);
        while ( 1 )
        {
          v122 = (char *)(v3 + 768);
          if ( !__gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>(
                  (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v3 + 736),
                  (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *)(v3 + 768)) )
          {
            v126 = 1;
            goto LABEL_287;
          }
          item_parent_type_weight = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v3 + 736));
          *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 832, v122);
          *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 832) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
          *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
          __lasta = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
          v123 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
          if ( *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 800, v122);
          *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 800) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#2}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v123, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lasta, (GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:27&)>)item_parent_type_weight);
          v124 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                   (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 800),
                   (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 832));
          *(_BYTE *)(((v3 + 800) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 832) >> 3) + 0x7FFF8000) = -8;
          if ( v124 )
            break;
          __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeight const*,std::vector<data::GachaGuaranteeParentTypeWeight>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeight*,std::vector<data::GachaGuaranteeParentTypeWeight> > *const)(v3 + 736));
        }
        *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          867);
        v125 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3232),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v125, (const char (*)[68])byte_1AD76FA0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3232));
        *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v126 = 0;
LABEL_287:
        *(_BYTE *)(((v3 + 736) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 768) >> 3) + 0x7FFF8000) = -8;
        if ( v126 != 1 )
        {
          v110 = 0;
          goto LABEL_398;
        }
        goto LABEL_396;
      }
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
      }
      if ( rule_config_ptr->gacha_guarantee_type == GACHA_GUARANTEE_LOOP_COUNT_WITH_CHILDS )
      {
        __for_range_7 = &rule_config_ptr->gacha_guarantee_parent_type_weight_childs_vec;
        *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 864, v112);
        *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v3 + 864) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::begin(__for_range_7);
        *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 896, v112);
        *(std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::const_iterator *)(v3 + 896) = std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>::end(__for_range_7);
        while ( 1 )
        {
          v127 = (char *)(v3 + 896);
          if ( !__gnu_cxx::operator!=<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>(
                  (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v3 + 864),
                  (const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *)(v3 + 896)) )
          {
            v143 = 1;
            goto LABEL_340;
          }
          item_parent_type_weight_childs = __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator*((const __gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v3 + 864));
          if ( *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&item_parent_type_weight_childs->gacha_item_parent_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&item_parent_type_weight_childs->gacha_item_parent_type);
          }
          gacha_item_parent_type_0 = item_parent_type_weight_childs->gacha_item_parent_type;
          __for_range_8 = &item_parent_type_weight_childs->item_type_vec;
          *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 928, v127);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 928) = std::vector<unsigned int>::begin(__for_range_8);
          *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 960, v127);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 960) = std::vector<unsigned int>::end(__for_range_8);
          while ( 1 )
          {
            p_gacha_prob_rule_id = (char *)(v3 + 960);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 928),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 960)) )
            {
              v137 = 1;
              goto LABEL_328;
            }
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
            v129 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 928));
            v130 = (int *)v129;
            if ( *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v129 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v129 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v129);
            }
            v131 = *v130;
            v132 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
            if ( v132 != 0 && v132 <= 3 )
            {
              LOBYTE(p_gacha_prob_rule_id) = v132 != 0;
              __asan_report_store4(v3 + 64, p_gacha_prob_rule_id);
            }
            *(_DWORD *)(v3 + 64) = v131;
            v133 = *(_DWORD *)(v3 + 64);
            if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
            }
            v134 = gacha_newbie_config->gacha_prob_rule_id;
            if ( gacha_item_parent_type_0 != GachaExcelConfigMgr::getGachaItemParentType(this, v134, v133) )
            {
              *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 3296) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 3327) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3327) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 3296, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 3296),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/GachaExcelConfig.cpp",
                "checkGachaNewbieConfig",
                881);
              v135 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 3296),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v136 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
                       v135,
                       (const char (*)[98])byte_1AD77020);
              p_gacha_prob_rule_id = (char *)&gacha_newbie_config->gacha_prob_rule_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v136,
                &gacha_newbie_config->gacha_prob_rule_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3296));
              *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v137 = 0;
              goto LABEL_328;
            }
            *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 1024, v134);
            *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 1024) = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376));
            *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            __lastb.__gacha_item_type = *(_DWORD *)(v3 + 64);
            v138 = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376))._M_current;
            v139 = std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376))._M_current;
            if ( *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 992, v134);
            *(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 992) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>> const&)#3}>((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v139, (__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v138, __lastb);
            v140 = __gnu_cxx::operator==<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
                     (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 992),
                     (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 1024));
            *(_BYTE *)(((v3 + 992) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -8;
            if ( v140 )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 928));
          }
          *(_DWORD *)(((v3 + 3360) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 3360) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 3391) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 3391) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 3360, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 3360),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaNewbieConfig",
            890);
          v141 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 3360),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v142 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                   v141,
                   (const char (*)[74])byte_1AD770C0);
          p_gacha_prob_rule_id = (char *)(v3 + 64);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v142, (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3360));
          *(_DWORD *)(((v3 + 3360) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v137 = 0;
LABEL_328:
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 928) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 960) >> 3) + 0x7FFF8000) = -8;
          if ( v137 != 1 )
          {
            v143 = 0;
            goto LABEL_340;
          }
          *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 1088, p_gacha_prob_rule_id);
          *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 1088) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
          *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
          __lastc = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
          v144 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
          if ( *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 1056, p_gacha_prob_rule_id);
          *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1056) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#4}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v144, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lastc, (GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:29&)>)item_parent_type_weight_childs);
          v145 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
                   (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1056),
                   (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1088));
          *(_BYTE *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -8;
          if ( v145 )
            break;
          __gnu_cxx::__normal_iterator<data::GachaGuaranteeParentTypeWeightWithChilds const*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds>>::operator++((__gnu_cxx::__normal_iterator<const data::GachaGuaranteeParentTypeWeightWithChilds*,std::vector<data::GachaGuaranteeParentTypeWeightWithChilds> > *const)(v3 + 864));
        }
        *(_DWORD *)(((v3 + 3424) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3424) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3455) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3455) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3424, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3424),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          899);
        v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3424),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v146, (const char (*)[70])byte_1AD77140);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3424));
        *(_DWORD *)(((v3 + 3424) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v143 = 0;
LABEL_340:
        *(_BYTE *)(((v3 + 864) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 896) >> 3) + 0x7FFF8000) = -8;
        if ( v143 != 1 )
        {
          v110 = 0;
          goto LABEL_398;
        }
        goto LABEL_396;
      }
      if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
      }
      if ( rule_config_ptr->gacha_guarantee_type != GACHA_GUARANTEE_N_COUNT )
        break;
      *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1152, v112);
      *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 1152) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
      *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
      __lastd = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
      v147 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
      if ( *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1120, v112);
      *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1120) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#5}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v147, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__lastd, (GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:30&)>)rule_config_ptr);
      v148 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
               (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1120),
               (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1152));
      *(_BYTE *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -8;
      if ( v148 )
      {
        *(_DWORD *)(((v3 + 3488) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 3488) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 3519) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3519) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 3488, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 3488),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GachaExcelConfig.cpp",
          "checkGachaNewbieConfig",
          911);
        v149 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 3488),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v149, (const char (*)[71])byte_1AD771C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3488));
        *(_DWORD *)(((v3 + 3488) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v110 = 0;
        goto LABEL_398;
      }
LABEL_396:
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 672));
    }
    if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rule_config_ptr->gacha_guarantee_type);
    }
    if ( rule_config_ptr->gacha_guarantee_type != GACHA_GUARANTEE_N_COUNT_WITH_CHILDS )
      goto LABEL_396;
    *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 1216, v112);
    *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v3 + 1216) = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
    *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
    __laste = std::vector<data::GachaParentProbRuleConfig>::end((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
    v150 = std::vector<data::GachaParentProbRuleConfig>::begin((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504))._M_current;
    if ( *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 1184, v112);
    *(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1184) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>> const&)#6}>((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)v150, (__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> >)__laste, (GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:31&)>)rule_config_ptr);
    v151 = (char *)(v3 + 1216);
    v152 = __gnu_cxx::operator==<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
             (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1184),
             (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v3 + 1216));
    *(_BYTE *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -8;
    if ( !v152 )
    {
      __for_range_9 = &rule_config_ptr->gacha_guarantee_item_parent_type_childs.item_type_vec;
      *(_BYTE *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1248) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1248, v151);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 1248) = std::vector<unsigned int>::begin(__for_range_9);
      *(_BYTE *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 1280) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 1280, v151);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 1280) = std::vector<unsigned int>::end(__for_range_9);
      while ( 1 )
      {
        v154 = (char *)(v3 + 1280);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 1248),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 1280)) )
        {
          v164 = 1;
          goto LABEL_394;
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v155 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 1248));
        v156 = (int *)v155;
        if ( *(_BYTE *)(((unsigned __int64)v155 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v155 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v155 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v155);
        }
        v157 = *v156;
        v158 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v158 != 0 && v158 <= 3 )
        {
          LOBYTE(v154) = v158 != 0;
          __asan_report_store4(v3 + 80, v154);
        }
        *(_DWORD *)(v3 + 80) = v157;
        if ( *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                      + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                      + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
        }
        v159 = rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type;
        v160 = *(_DWORD *)(v3 + 80);
        if ( *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&gacha_newbie_config->gacha_prob_rule_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&gacha_newbie_config->gacha_prob_rule_id);
        }
        v161 = gacha_newbie_config->gacha_prob_rule_id;
        if ( v159 != GachaExcelConfigMgr::getGachaItemParentType(this, v161, v160) )
        {
          *(_DWORD *)(((v3 + 3616) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 3616) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 3647) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 3647) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 3616, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 3616),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GachaExcelConfig.cpp",
            "checkGachaNewbieConfig",
            929);
          v162 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 3616),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v163 = common::milog::MiLogStream::operator<<<char [98],(char *[98])0>(
                   v162,
                   (const char (*)[98])byte_1AD77020);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v163,
            &gacha_newbie_config->gacha_prob_rule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3616));
          *(_DWORD *)(((v3 + 3616) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v164 = 0;
          goto LABEL_394;
        }
        *(_BYTE *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 1344) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 1344, v161);
        *(std::vector<data::GachaProbRuleConfig>::iterator *)(v3 + 1344) = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376));
        *(_BYTE *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 80);
        __lastf.__gacha_item_type = *(_DWORD *)(v3 + 80);
        v165 = std::vector<data::GachaProbRuleConfig>::end((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376))._M_current;
        v166 = std::vector<data::GachaProbRuleConfig>::begin((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376))._M_current;
        if ( *(_BYTE *)(((v3 + 1312) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 1312, v161);
        *(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 1312) = std::find_if<__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>,GachaExcelConfigMgr::checkGachaNewbieConfig(TxtConfigMgr const&)::{lambda(__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>> const&)#7}>((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v166, (__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> >)v165, __lastf);
        v167 = __gnu_cxx::operator==<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
                 (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 1312),
                 (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v3 + 1344));
        *(_BYTE *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -8;
        if ( v167 )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 1248));
      }
      *(_DWORD *)(((v3 + 3680) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 3680) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 3711) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 3711) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 3680, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 3680),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaNewbieConfig",
        938);
      v168 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 3680),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v169 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v168, (const char (*)[74])byte_1AD770C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v169, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3680));
      *(_DWORD *)(((v3 + 3680) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v164 = 0;
LABEL_394:
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -8;
      if ( v164 != 1 )
      {
        v110 = 0;
        goto LABEL_398;
      }
      goto LABEL_396;
    }
    *(_DWORD *)(((v3 + 3552) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 3552) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 3583) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3583) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 3552, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 3552),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GachaExcelConfig.cpp",
      "checkGachaNewbieConfig",
      922);
    v153 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 3552),
             (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(v153, (const char (*)[71])byte_1AD771C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3552));
    *(_DWORD *)(((v3 + 3552) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v110 = 0;
LABEL_398:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 672) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 704) >> 3) + 0x7FFF8000) = -8;
    v170 = v110 == 1;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 3824));
    v56 = v170;
LABEL_399:
    std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 1504));
    v30 = v56;
LABEL_400:
    std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v3 + 1376));
    v9 = v30;
LABEL_401:
    v171 = ((v3 + 1376) >> 3) + 2147450880;
    *(_WORD *)v171 = -1800;
    *(_BYTE *)(v171 + 2) = -8;
    v172 = ((v3 + 1504) >> 3) + 2147450880;
    *(_WORD *)v172 = -1800;
    *(_BYTE *)(v172 + 2) = -8;
    v173 = ((v3 + 3824) >> 3) + 2147450880;
    *(_DWORD *)v173 = -117901064;
    *(_WORD *)(v173 + 4) = -1800;
    if ( v9 )
    {
      __gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig *,std::vector<data::GachaNewbieDataConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaNewbieDataConfig*,std::vector<data::GachaNewbieDataConfig> > *const)(v3 + 96));
      continue;
    }
    break;
  }
  v174 = 0;
LABEL_405:
  if ( v174 == 1 )
    v2 = 0;
LABEL_407:
  if ( v210 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80BC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 196) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF81E0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862772) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147451080 - (((_DWORD)v5 + 2147451088) & 0xFFFFFFF8) + 288) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 3904LL, v210);
  }
  return v2;
};

// Line 788: range 000000001472217A-000000001472222F
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_26___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:26&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaNewbieUpConfig *gacha_up_config; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  gacha_up_config = __closure->__gacha_up_config;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__gacha_up_config->item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__gacha_up_config->item_parent_type);
  return gacha_item_parent_type == gacha_up_config->item_parent_type;
};

// Line 862: range 0000000014722308-00000000147223BD
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_27___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:27&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaGuaranteeParentTypeWeight *item_parent_type_weight; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  item_parent_type_weight = __closure->__item_parent_type_weight;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__item_parent_type_weight->gacha_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__item_parent_type_weight->gacha_item_parent_type);
  return gacha_item_parent_type == item_parent_type_weight->gacha_item_parent_type;
};

// Line 885: range 0000000014722496-0000000014722524
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_28___::operator()_data::GachaProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:28&)> *const __closure,
        const data::GachaProbRuleConfig *o)
{
  data::GachaItemType gacha_item_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_type);
  }
  gacha_item_type = o->gacha_item_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_type == __closure->__gacha_item_type;
};

// Line 894: range 00000000147225FE-00000000147226B3
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_29___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:29&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaGuaranteeParentTypeWeightWithChilds *item_parent_type_weight_childs; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  item_parent_type_weight_childs = __closure->__item_parent_type_weight_childs;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__item_parent_type_weight_childs->gacha_item_parent_type >> 3)
                + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__item_parent_type_weight_childs->gacha_item_parent_type);
  return gacha_item_parent_type == item_parent_type_weight_childs->gacha_item_parent_type;
};

// Line 906: range 000000001472278C-0000000014722849
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_30___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:30&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaRuleExcelConfig *rule_config_ptr; // rdx
  char v4; // cl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rule_config_ptr = __closure->__rule_config_ptr;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && (char)(((LOBYTE(__closure->__rule_config_ptr) + 116) & 7) + 3) >= v4 )
    __asan_report_load4(&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type);
  return gacha_item_parent_type == rule_config_ptr->gacha_guarantee_item_parent_type;
};

// Line 917: range 0000000014722922-00000000147229DD
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_31___::operator()_data::GachaParentProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:31&)> *const __closure,
        const data::GachaParentProbRuleConfig *o)
{
  data::GachaItemParentType gacha_item_parent_type; // esi
  const data::GachaRuleExcelConfig *rule_config_ptr; // rax
  char v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)o + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&o->gacha_item_parent_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&o->gacha_item_parent_type);
  }
  gacha_item_parent_type = o->gacha_item_parent_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rule_config_ptr = __closure->__rule_config_ptr;
  v4 = *(_BYTE *)(((unsigned __int64)&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type >> 3)
                + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
    __asan_report_load4(&__closure->__rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type);
  return gacha_item_parent_type == rule_config_ptr->gacha_guarantee_item_parent_type_childs.gacha_item_parent_type;
};

// Line 933: range 0000000014722AB6-0000000014722B44
bool __cdecl GachaExcelConfigMgr::checkGachaNewbieConfig::_lambda_const_auto_32___::operator()_data::GachaProbRuleConfig_(
        const GachaExcelConfigMgr::checkGachaNewbieConfig::<lambda(const auto:32&)> *const __closure,
        const data::GachaProbRuleConfig *o)
{
  data::GachaItemType gacha_item_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&o->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&o->gacha_item_type);
  }
  gacha_item_type = o->gacha_item_type;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return gacha_item_type == __closure->__gacha_item_type;
};

// Line 951: range 0000000014448BD2-000000001444903F
int32_t __cdecl GachaExcelConfigMgr::checkGachaTokenDropConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_token_drop_id; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  int32_t result; // eax
  data::GachaTokenDropConfigMap *__for_range; // [rsp+10h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<const data::GachaItemType,data::GachaTokenDropConfig>,false,false>::reference v16; // [rsp+18h] [rbp-108h]
  std::tuple_element<0,std::pair<const data::GachaItemType,data::GachaTokenDropConfig> >::type *gacha_item_type; // [rsp+20h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::GachaItemType,data::GachaTokenDropConfig> >::type *gacha_token_drop_config; // [rsp+28h] [rbp-F8h]
  char v19[240]; // [rsp+30h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:952 64 8 13 __for_end:952 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaTokenDropConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->gacha_token_drop_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<data::GachaItemType,data::GachaTokenDropConfig>::iterator *)(v3 + 32) = std::unordered_map<data::GachaItemType,data::GachaTokenDropConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::GachaItemType,data::GachaTokenDropConfig>::iterator *)(v3 + 64) = std::unordered_map<data::GachaItemType,data::GachaTokenDropConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<data::GachaItemType const,data::GachaTokenDropConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::GachaItemType,data::GachaTokenDropConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::GachaItemType,data::GachaTokenDropConfig>,false> *)(v3 + 64)) )
    {
      v13 = 1;
      goto LABEL_26;
    }
    v16 = std::__detail::_Node_iterator<std::pair<data::GachaItemType const,data::GachaTokenDropConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::GachaItemType,data::GachaTokenDropConfig>,false,false> *const)(v3 + 32));
    gacha_item_type = std::get<0ul,data::GachaItemType const,data::GachaTokenDropConfig>(v16);
    gacha_token_drop_config = (std::tuple_element<1,const std::pair<const data::GachaItemType,data::GachaTokenDropConfig> >::type *)std::get<1ul,data::GachaItemType const,data::GachaTokenDropConfig>(v16);
    p_token_drop_id = &gacha_token_drop_config->token_drop_id;
    if ( *(_BYTE *)(((unsigned __int64)p_token_drop_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_token_drop_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_token_drop_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_token_drop_id);
    }
    if ( gacha_token_drop_config->token_drop_id
      && (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            gacha_token_drop_config->token_drop_id,
                            ITEM_LIMIT_GACHA_TOKEN_DROP) != 1 )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<data::GachaItemType const,data::GachaTokenDropConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::GachaItemType,data::GachaTokenDropConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/GachaExcelConfig.cpp",
    "checkGachaTokenDropConfig",
    956);
  v8 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[72])byte_1AD772E0);
  v9 = ((unsigned __int8)gacha_item_type & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)gacha_item_type >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)gacha_item_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_item_type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(gacha_item_type);
  }
  v10 = (__int64)data::enumValToStr(*gacha_item_type, v9);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8(v3 + 96, v9);
  *(_QWORD *)(v3 + 96) = v10;
  v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v3 + 96));
  v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" drop_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &gacha_token_drop_config->token_drop_id);
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v13 = 0;
LABEL_26:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
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

// Line 965: range 0000000014449040-0000000014449890
int32_t __cdecl GachaExcelConfigMgr::checkGachaWishConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  data::GachaWishConfigMap *__for_range; // [rsp+10h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaWishConfig>,false,false>::reference v17; // [rsp+18h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GachaWishConfig> >::type *gacha_type; // [rsp+20h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GachaWishConfig> >::type *wish_config; // [rsp+28h] [rbp-198h]
  char v20[400]; // [rsp+30h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:966 64 8 13 __for_end:966 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaWishConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  __for_range = &this->gacha_wish_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaWishConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GachaWishConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaWishConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GachaWishConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GachaWishConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaWishConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaWishConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_30;
    }
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaWishConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaWishConfig>,false,false> *const)(v3 + 32));
    gacha_type = std::get<0ul,unsigned int const,data::GachaWishConfig>(v17);
    wish_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GachaWishConfig> >::type *)std::get<1ul,unsigned int const,data::GachaWishConfig>(v17);
    if ( *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gacha_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gacha_type);
    }
    if ( !GachaExcelConfigMgr::isSupportWish(this, *gacha_type) )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaWishConfig",
        971);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v6, (const char (*)[48])byte_1AD77420);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&wish_config->wish_parent_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)wish_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&wish_config->wish_parent_type >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&wish_config->wish_parent_type);
    }
    if ( wish_config->wish_parent_type != GACHA_ITEM_PARENT_S5 )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaWishConfig",
        976);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1AD77480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&wish_config->wish_max_progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&wish_config->wish_max_progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&wish_config->wish_max_progress);
    }
    if ( !wish_config->wish_max_progress )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaWishConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaWishConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/GachaExcelConfig.cpp",
    "checkGachaWishConfig",
    981);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])"gacha_type:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, gacha_type);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v13, (const char (*)[24])byte_1AD77520);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_30:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
  {
    if ( std::unordered_map<unsigned int,data::GachaWishConfig>::empty(&this->gacha_wish_config_map) )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaWishConfig",
        989);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v14, (const char (*)[32])byte_1AD77560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 997: range 0000000014449892-000000001444A7FC
int32_t __cdecl GachaExcelConfigMgr::checkGachaRestrictConfig(
        GachaExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  uint32_t general_limit_count; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  uint32_t minors_limit_count; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  uint32_t v20; // ecx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  const std::map<data::GachaType,std::pair<std::string,std::string >> *v23; // rax
  std::map<data::GachaType,std::pair<std::string,std::string >>::size_type v24; // r14
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  data::GachaRestrictConfigMap *__for_range; // [rsp+10h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRestrictConfig>,false,false>::reference v28; // [rsp+18h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GachaRestrictConfig> >::type *gacha_type; // [rsp+20h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GachaRestrictConfig> >::type *restrict_config; // [rsp+28h] [rbp-298h]
  char v31[656]; // [rsp+30h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 8 15 __for_begin:998 64 8 13 __for_end:998 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <"
                        "unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::checkGachaRestrictConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->gacha_restrict_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRestrictConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GachaRestrictConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GachaRestrictConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GachaRestrictConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GachaRestrictConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRestrictConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GachaRestrictConfig>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_60;
    }
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRestrictConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRestrictConfig>,false,false> *const)(v3 + 32));
    gacha_type = std::get<0ul,unsigned int const,data::GachaRestrictConfig>(v28);
    restrict_config = (std::tuple_element<1,const std::pair<unsigned int const,data::GachaRestrictConfig> >::type *)std::get<1ul,unsigned int const,data::GachaRestrictConfig>(v28);
    if ( *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gacha_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gacha_type);
    }
    if ( !data::isValidGachaType(*gacha_type) )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1002);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])byte_1AD776C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)gacha_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)gacha_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(gacha_type);
    }
    if ( *gacha_type == 100 )
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1008);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v9, (const char (*)[37])byte_1AD77700);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->general_limit_count);
    }
    if ( !restrict_config->general_limit_count )
    {
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1014);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v10, (const char (*)[49])byte_1AD77760);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->general_limit_count);
    }
    general_limit_count = restrict_config->general_limit_count;
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->general_display_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&restrict_config->general_display_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&restrict_config->general_display_count);
    }
    if ( general_limit_count < restrict_config->general_display_count )
    {
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1020);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(v13, (const char (*)[75])byte_1AD777C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->minors_limit_count);
    }
    if ( !restrict_config->minors_limit_count )
    {
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1026);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v15, (const char (*)[52])byte_1AD77840);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->minors_limit_count);
    }
    minors_limit_count = restrict_config->minors_limit_count;
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->minors_display_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&restrict_config->minors_display_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&restrict_config->minors_display_count);
    }
    if ( minors_limit_count < restrict_config->minors_display_count )
    {
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1032);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v18, (const char (*)[81])byte_1AD778A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, gacha_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v8 = 0;
      goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->general_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->general_limit_count);
    }
    v20 = restrict_config->general_limit_count;
    if ( *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)restrict_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&restrict_config->minors_limit_count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&restrict_config->minors_limit_count);
    }
    if ( v20 < restrict_config->minors_limit_count )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRestrictConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GachaRestrictConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/GachaExcelConfig.cpp",
    "checkGachaRestrictConfig",
    1038);
  v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v21, (const char (*)[60])byte_1AD77920);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, gacha_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v8 = 0;
LABEL_60:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
  {
    v23 = data::getGachaTypeEnumMap[abi:cxx11]();
    v24 = std::map<data::GachaType,std::pair<std::string,std::string>>::size(v23);
    if ( v24 == std::unordered_map<unsigned int,data::GachaRestrictConfig>::size(&this->gacha_restrict_config_map) + 1 )
    {
      v2 = 0;
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
        "./src/txt_data_manual/GachaExcelConfig.cpp",
        "checkGachaRestrictConfig",
        1045);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v25, (const char (*)[25])byte_1AD77980);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      v2 = -1;
    }
  }
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 1053: range 000000001444A7FE-000000001444A9F9
__int64 __fastcall GachaExcelConfigMgr::getGachaItemType(const GachaExcelConfigMgr *const this, __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::GachaItemType> *p_gacha_item_type_map; // rdx
  std::map<unsigned int,data::GachaItemType> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaItemType> >::pointer v8; // rdx
  data::GachaItemType *p_second; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 item_id:1052 64 8 9 iter:1054 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GachaExcelConfigMgr::getGachaItemType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_gacha_item_type_map = &this->gacha_item_type_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::map<unsigned int,data::GachaItemType>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::GachaItemType>::find(
                                                                               p_gacha_item_type_map,
                                                                               (const std::map<unsigned int,data::GachaItemType>::key_type *)(v2 + 48));
  v6 = &this->gacha_item_type_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::GachaItemType>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::GachaItemType>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaItemType> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaItemType> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaItemType>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaItemType> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = (unsigned int)v8->second;
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

// Line 1066: range 000000001444A9FA-000000001444ABA2
_BOOL8 __fastcall GachaExcelConfigMgr::isGachaPoolValid(const GachaExcelConfigMgr *const this, __int64 gacha_pool_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>> *p_gacha_pool_type_map; // rdx
  std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>> *v6; // rdx
  _BOOL8 result; // rax
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 gacha_pool_id:1065 64 8 9 iter:1067 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GachaExcelConfigMgr::isGachaPoolValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gacha_pool_id;
  p_gacha_pool_type_map = &this->gacha_pool_type_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gacha_pool_id);
  *(std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::find(p_gacha_pool_type_map, (const std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::key_type *)(v2 + 48));
  v6 = &this->gacha_pool_type_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::end(v6);
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> > >::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> > >::_Self *)(v2 + 96));
  if ( v8 == (char *)v2 )
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

// Line 1079: range 000000001444ABA4-000000001444AE96
const data::GachaPoolExcelConfig *__fastcall GachaExcelConfigMgr::findGachaItemInPool(
        const GachaExcelConfigMgr *const this,
        __int64 pool_id,
        uint32_t item_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>> *p_gacha_pool_item_map; // rdx
  std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>> *v7; // rdx
  bool v8; // al
  const data::GachaPoolExcelConfig *result; // rax
  bool v10; // al
  std::map<unsigned int,data::GachaPoolExcelConfig> *gacha_item_map; // [rsp+18h] [rbp-E8h]
  char v13[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 pool_id:1078 48 4 12 item_id:1078 64 8 14 pool_iter:1080 96 8 9 <unknown> 128 8 20 gac"
                        "ha_item_iter:1087 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::findGachaItemInPool;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = pool_id;
  *(_DWORD *)(v3 + 48) = item_id;
  p_gacha_pool_item_map = &this->gacha_pool_item_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, pool_id);
  *(std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::find(p_gacha_pool_item_map, (const std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::key_type *)(v3 + 32));
  v7 = &this->gacha_pool_item_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,data::GachaPoolExcelConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::GachaPoolExcelConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::GachaPoolExcelConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    gacha_item_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::GachaPoolExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,data::GachaPoolExcelConfig> > > *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,data::GachaPoolExcelConfig>::const_iterator *)(v3 + 128) = std::map<unsigned int,data::GachaPoolExcelConfig>::find(
                                                                                         gacha_item_map,
                                                                                         (const std::map<unsigned int,data::GachaPoolExcelConfig>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,data::GachaPoolExcelConfig>::const_iterator *)(v3 + 160) = std::map<unsigned int,data::GachaPoolExcelConfig>::end(gacha_item_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaPoolExcelConfig> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaPoolExcelConfig> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaPoolExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::GachaPoolExcelConfig> > *const)(v3 + 128))->second;
  }
  if ( v13 == (char *)v3 )
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

// Line 1100: range 000000001444AE98-000000001444B23F
std::vector<data::GachaPoolExcelConfig> *__fastcall GachaExcelConfigMgr::findGachaPool(
        std::vector<data::GachaPoolExcelConfig> *retstr,
        const GachaExcelConfigMgr *const this,
        uint32_t gacha_pool_id,
        data::GachaItemType item_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>> *p_gacha_pool_type_map; // rdx
  std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>> *v8; // rdx
  bool v9; // al
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<const data::GachaItemType,std::vector<data::GachaPoolExcelConfig> > >::pointer v11; // rax
  std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> *type_map; // [rsp+28h] [rbp-128h]
  char v16[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 32 4 18 gacha_pool_id:1099 48 4 14 item_type:1099 64 8 14 pool_iter:1102 96 8 9 <unknown> 128 "
                        "8 14 type_iter:1108 160 8 9 <unknown> 192 24 11 result:1101";
  *(_QWORD *)(v4 + 16) = GachaExcelConfigMgr::findGachaPool;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218103808;
  v6[536862727] = -202116109;
  *(_DWORD *)(v4 + 32) = gacha_pool_id;
  *(_DWORD *)(v4 + 48) = item_type;
  std::vector<data::GachaPoolExcelConfig>::vector((std::vector<data::GachaPoolExcelConfig> *const)(v4 + 192));
  p_gacha_pool_type_map = &this->gacha_pool_type_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, this);
  *(std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::const_iterator *)(v4 + 64) = std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::find(p_gacha_pool_type_map, (const std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::key_type *)(v4 + 32));
  v8 = &this->gacha_pool_type_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 32);
  *(std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::const_iterator *)(v4 + 96) = std::map<unsigned int,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>::end(v8);
  v9 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> > >::_Self *)(v4 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> > >::_Self *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    goto LABEL_9;
  type_map = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>> > > *const)(v4 + 64))->second;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 96);
  *(std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::const_iterator *)(v4 + 128) = std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::find(type_map, (const std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::key_type *)(v4 + 48));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v4 + 48);
  *(std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::const_iterator *)(v4 + 160) = std::map<data::GachaItemType,std::vector<data::GachaPoolExcelConfig>>::end(type_map);
  v10 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<const data::GachaItemType,std::vector<data::GachaPoolExcelConfig> > >::_Self *)(v4 + 128),
          (const std::_Rb_tree_const_iterator<std::pair<const data::GachaItemType,std::vector<data::GachaPoolExcelConfig> > >::_Self *)(v4 + 160));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
LABEL_9:
    std::vector<data::GachaPoolExcelConfig>::vector(retstr, (std::vector<data::GachaPoolExcelConfig> *)(v4 + 192));
  }
  else
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<data::GachaItemType const,std::vector<data::GachaPoolExcelConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GachaItemType,std::vector<data::GachaPoolExcelConfig> > > *const)(v4 + 128));
    std::vector<data::GachaPoolExcelConfig>::vector(retstr, &v11->second);
  }
  std::vector<data::GachaPoolExcelConfig>::~vector((std::vector<data::GachaPoolExcelConfig> *const)(v4 + 192));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1121: range 000000001444B240-000000001444B4AC
std::vector<data::GachaProbRuleConfig> *__fastcall GachaExcelConfigMgr::findGachaProbRuleVec(
        std::vector<data::GachaProbRuleConfig> *retstr,
        const GachaExcelConfigMgr *const this,
        uint32_t gacha_prob_rule_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::vector<data::GachaProbRuleConfig>> *p_gacha_prob_rule_map; // rdx
  std::map<unsigned int,std::vector<data::GachaProbRuleConfig>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::pointer v9; // rax
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 gacha_prob_rule_id:1120 64 8 9 iter:1123 96 8 9 <unknown> 128 24 11 result:1122";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::findGachaProbRuleVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = gacha_prob_rule_id;
  std::vector<data::GachaProbRuleConfig>::vector((std::vector<data::GachaProbRuleConfig> *const)(v3 + 128));
  p_gacha_prob_rule_map = &this->gacha_prob_rule_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::find(
                                                                                                  p_gacha_prob_rule_map,
                                                                                                  (const std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::key_type *)(v3 + 48));
  v7 = &this->gacha_prob_rule_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::GachaProbRuleConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::vector<data::GachaProbRuleConfig>::vector(retstr, (std::vector<data::GachaProbRuleConfig> *)(v3 + 128));
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaProbRuleConfig> > > *const)(v3 + 64));
    std::vector<data::GachaProbRuleConfig>::vector(retstr, &v9->second);
  }
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v3 + 128));
  if ( v12 == (char *)v3 )
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
  return retstr;
};

// Line 1136: range 000000001444B4AE-000000001444B8A6
std::vector<data::GachaProbRuleConfig> *__cdecl GachaExcelConfigMgr::findGachaProbRuleVec(
        std::vector<data::GachaProbRuleConfig> *retstr,
        const GachaExcelConfigMgr *const this,
        uint32_t gacha_prob_rule_id,
        data::GachaItemParentType item_parent_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::GachaItemParentType *p_gacha_item_parent_type; // rax
  int v8; // edx
  std::vector<data::GachaParentProbRuleConfig> *__for_range; // [rsp+20h] [rbp-110h]
  const data::GachaParentProbRuleConfig *parent_prob_rule_config; // [rsp+28h] [rbp-108h]
  char v14[256]; // [rsp+30h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 8 16 __for_begin:1139 64 8 14 __for_end:1139 96 24 11 result:1137 160 24 32 parent_prob_rul"
                        "e_config_vec:1138";
  *(_QWORD *)(v4 + 16) = GachaExcelConfigMgr::findGachaProbRuleVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  std::vector<data::GachaProbRuleConfig>::vector((std::vector<data::GachaProbRuleConfig> *const)(v4 + 96));
  if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 - 96 + 23) & 7) >= *(_BYTE *)(((v4 + 183) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 160, 24LL);
  }
  GachaExcelConfigMgr::findGachaParentProbRuleVec(
    (std::vector<data::GachaParentProbRuleConfig> *)(v4 + 160),
    this,
    gacha_prob_rule_id);
  __for_range = (std::vector<data::GachaParentProbRuleConfig> *)(v4 + 160);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, this);
  *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 32) = std::vector<data::GachaParentProbRuleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, this);
  *(std::vector<data::GachaParentProbRuleConfig>::iterator *)(v4 + 64) = std::vector<data::GachaParentProbRuleConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 32),
            (const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *)(v4 + 64)) )
  {
    parent_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v4 + 32));
    p_gacha_item_parent_type = &parent_prob_rule_config->gacha_item_parent_type;
    if ( *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gacha_item_parent_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gacha_item_parent_type >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(p_gacha_item_parent_type);
    }
    if ( item_parent_type == parent_prob_rule_config->gacha_item_parent_type )
    {
      std::vector<data::GachaProbRuleConfig>::vector(retstr, &parent_prob_rule_config->gacha_item_type_config_vec);
      v8 = 0;
      goto LABEL_18;
    }
    __gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig *,std::vector<data::GachaParentProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaParentProbRuleConfig*,std::vector<data::GachaParentProbRuleConfig> > *const)(v4 + 32));
  }
  v8 = 1;
LABEL_18:
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 == 1 )
    std::vector<data::GachaProbRuleConfig>::vector(retstr, (std::vector<data::GachaProbRuleConfig> *)(v4 + 96));
  std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v4 + 160));
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v4 + 96));
  if ( v14 == (char *)v4 )
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
  return retstr;
};

// Line 1151: range 000000001444B8A8-000000001444BB14
std::vector<data::GachaParentProbRuleConfig> *__fastcall GachaExcelConfigMgr::findGachaParentProbRuleVec(
        std::vector<data::GachaParentProbRuleConfig> *retstr,
        const GachaExcelConfigMgr *const this,
        uint32_t gacha_prob_rule_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>> *p_gacha_parent_prob_rule_map; // rdx
  std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>> *v7; // rdx
  bool v8; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::pointer v9; // rax
  char v12[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 23 gacha_prob_rule_id:1150 64 8 9 iter:1153 96 8 9 <unknown> 128 24 11 result:1152";
  *(_QWORD *)(v3 + 16) = GachaExcelConfigMgr::findGachaParentProbRuleVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = gacha_prob_rule_id;
  std::vector<data::GachaParentProbRuleConfig>::vector((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 128));
  p_gacha_parent_prob_rule_map = &this->gacha_parent_prob_rule_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::find(p_gacha_parent_prob_rule_map, (const std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::key_type *)(v3 + 48));
  v7 = &this->gacha_parent_prob_rule_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::const_iterator *)(v3 + 96) = std::map<unsigned int,std::vector<data::GachaParentProbRuleConfig>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::vector<data::GachaParentProbRuleConfig>::vector(
      retstr,
      (std::vector<data::GachaParentProbRuleConfig> *)(v3 + 128));
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::GachaParentProbRuleConfig> > > *const)(v3 + 64));
    std::vector<data::GachaParentProbRuleConfig>::vector(retstr, &v9->second);
  }
  std::vector<data::GachaParentProbRuleConfig>::~vector((std::vector<data::GachaParentProbRuleConfig> *const)(v3 + 128));
  if ( v12 == (char *)v3 )
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
  return retstr;
};

// Line 1165: range 000000001444BB16-000000001444BE4F
data::GachaItemParentType __cdecl GachaExcelConfigMgr::getGachaItemParentType(
        const GachaExcelConfigMgr *const this,
        uint32_t gacha_prob_rule_id,
        data::GachaItemType gacha_item_type)
{
  data::GachaItemParentType gacha_item_parent_type; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int v7; // edx
  data::GachaItemParentType result; // eax
  std::vector<data::GachaProbRuleConfig> *__for_range; // [rsp+10h] [rbp-E0h]
  const data::GachaProbRuleConfig *gacha_prob_rule_config; // [rsp+18h] [rbp-D8h]
  char v12[208]; // [rsp+20h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 16 __for_begin:1167 64 8 14 __for_end:1167 96 24 31 gacha_prob_rule_config_vec:1166";
  *(_QWORD *)(v4 + 16) = GachaExcelConfigMgr::getGachaItemParentType;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 119) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 24LL);
  }
  GachaExcelConfigMgr::findGachaProbRuleVec(
    (std::vector<data::GachaProbRuleConfig> *)(v4 + 96),
    this,
    gacha_prob_rule_id);
  __for_range = (std::vector<data::GachaProbRuleConfig> *)(v4 + 96);
  if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 32, this);
  *(std::vector<data::GachaProbRuleConfig>::iterator *)(v4 + 32) = std::vector<data::GachaProbRuleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, this);
  *(std::vector<data::GachaProbRuleConfig>::iterator *)(v4 + 64) = std::vector<data::GachaProbRuleConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>(
            (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 32),
            (const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *)(v4 + 64)) )
    {
      v7 = 1;
      goto LABEL_20;
    }
    gacha_prob_rule_config = __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&gacha_prob_rule_config->gacha_item_type);
    }
    if ( gacha_item_type == gacha_prob_rule_config->gacha_item_type )
      break;
    __gnu_cxx::__normal_iterator<data::GachaProbRuleConfig *,std::vector<data::GachaProbRuleConfig>>::operator++((__gnu_cxx::__normal_iterator<data::GachaProbRuleConfig*,std::vector<data::GachaProbRuleConfig> > *const)(v4 + 32));
  }
  if ( *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_parent_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)gacha_prob_rule_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gacha_prob_rule_config->gacha_item_parent_type >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(&gacha_prob_rule_config->gacha_item_parent_type);
  }
  gacha_item_parent_type = gacha_prob_rule_config->gacha_item_parent_type;
  v7 = 0;
LABEL_20:
  *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 == 1 )
    gacha_item_parent_type = GACHA_ITEM_PARENT_INVALID;
  std::vector<data::GachaProbRuleConfig>::~vector((std::vector<data::GachaProbRuleConfig> *const)(v4 + 96));
  result = gacha_item_parent_type;
  if ( v12 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1178: range 000000001444BE50-000000001444BE8D
const data::GachaNewbieDataConfig *__cdecl GachaExcelConfigMgr::findGachaNewbieDataConfig(
        const GachaExcelConfigMgr *const this)
{
  if ( std::vector<data::GachaNewbieDataConfig>::empty(&this->gacha_newbie_data_config_vec) )
    return 0LL;
  else
    return std::vector<data::GachaNewbieDataConfig>::at(&this->gacha_newbie_data_config_vec, 0LL);
};

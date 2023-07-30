// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/CatalogExcelConfig.cpp

// Line 18: range 0000000013A47396-0000000013A47579
int32_t __cdecl CatalogExcelConfigMgr::rewriteConfig(CatalogExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = CatalogExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( CatalogExcelConfigMgr::rewritecAranaraCollectionExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/CatalogExcelConfig.cpp",
      "rewriteConfig",
      21);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"rewritecAranaraCollectionExcelConfig failed");
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

// Line 28: range 0000000013A4757A-0000000013A47FD4
int32_t __cdecl CatalogExcelConfigMgr::rewritecAranaraCollectionExcelConfig(
        CatalogExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_collection_type_2_id_vec_map; // rcx
  data::AranaraCollectionType *p_aranara_collection_type; // rax
  __int64 aranara_collection_type; // rsi
  std::vector<unsigned int> *v10; // rax
  data::CatalogType *p_type; // rax
  __int64 v12; // rsi
  data::CatalogType type; // ecx
  char v14; // al
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  std::set<unsigned int> *v20; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v21; // rax
  unsigned int *v22; // r8
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // eax
  int32_t result; // eax
  data::AranaraCollectionExcelConfigMap *__for_range; // [rsp+18h] [rbp-218h]
  data::CatalogExcelConfigMap *__for_range_0; // [rsp+20h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CatalogExcelConfig>,false,false>::reference v33; // [rsp+28h] [rbp-208h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CatalogExcelConfig> >::type *catalog_config; // [rsp+38h] [rbp-1F8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+40h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false,false>::reference v36; // [rsp+48h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::AranaraCollectionExcelConfig> >::type *collection; // [rsp+58h] [rbp-1D8h]
  char v38[464]; // [rsp+60h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 9 <unknown> 64 4 15 catalog_type:35 80 4 13 watcher_id:36 96 8 14 __for_begin:29 128 8 1"
                        "2 __for_end:29 160 8 14 __for_begin:33 192 8 12 __for_end:33 224 8 14 __for_begin:36 256 8 12 __"
                        "for_end:36 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = CatalogExcelConfigMgr::rewritecAranaraCollectionExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->aranara_collection_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AranaraCollectionExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::AranaraCollectionExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::AranaraCollectionExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::AranaraCollectionExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false> *)(v3 + 128)) )
      break;
    v36 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::AranaraCollectionExcelConfig>(v36);
    collection = (std::tuple_element<1,const std::pair<unsigned int const,data::AranaraCollectionExcelConfig> >::type *)std::get<1ul,unsigned int const,data::AranaraCollectionExcelConfig>(v36);
    p_collection_type_2_id_vec_map = &this->collection_type_2_id_vec_map_;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    p_aranara_collection_type = &collection->aranara_collection_type;
    if ( *(_BYTE *)(((unsigned __int64)p_aranara_collection_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)collection + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_aranara_collection_type >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(p_aranara_collection_type);
    }
    aranara_collection_type = (unsigned int)collection->aranara_collection_type;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, aranara_collection_type);
    *(_DWORD *)(v3 + 48) = aranara_collection_type;
    v10 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            p_collection_type_2_id_vec_map,
            (std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    std::vector<unsigned int>::emplace_back<unsigned int const&>(v10, &collection->id, (const unsigned int *)v10);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::AranaraCollectionExcelConfig>,false,false> *const)(v3 + 96));
  }
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->catalog_excel_config_map;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,data::CatalogExcelConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::CatalogExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v6);
  *(std::unordered_map<unsigned int,data::CatalogExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::CatalogExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CatalogExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CatalogExcelConfig>,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CatalogExcelConfig>,false> *)(v3 + 192)) )
  {
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CatalogExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CatalogExcelConfig>,false,false> *const)(v3 + 160));
    std::get<0ul,unsigned int const,data::CatalogExcelConfig>(v33);
    catalog_config = (std::tuple_element<1,const std::pair<unsigned int const,data::CatalogExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CatalogExcelConfig>(v33);
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    p_type = &catalog_config->type;
    v12 = (((_BYTE)catalog_config + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)catalog_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_type);
    }
    type = catalog_config->type;
    v14 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v14 != 0;
    if ( v14 != 0 && v14 <= 3 )
      __asan_report_store4(v3 + 64, v12);
    *(_DWORD *)(v3 + 64) = type;
    __for_range_1 = &catalog_config->sync_watcher_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v15 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v25 = 1;
        goto LABEL_45;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v3 + 80, v15);
      }
      *(_DWORD *)(v3 + 80) = v18;
      v20 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              &this->catalog_type_2_global_watcher_set_map_,
              (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 64));
      v21 = std::set<unsigned int>::insert(v20, (const std::set<unsigned int>::value_type *)(v3 + 80));
      if ( !v21.second )
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
          "./src/txt_data_manual/CatalogExcelConfig.cpp",
          "rewritecAranaraCollectionExcelConfig",
          40);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v23,
                (const char (*)[23])"duplicate watcher id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v25 = 0;
        goto LABEL_45;
      }
      v26 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
              &this->global_watcher_2_catalog_type_map_,
              (unsigned int *)(v3 + 80),
              (unsigned int *)(v3 + 64),
              (unsigned int *)&this->global_watcher_2_catalog_type_map_,
              v22);
      if ( !v26.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
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
      "./src/txt_data_manual/CatalogExcelConfig.cpp",
      "rewritecAranaraCollectionExcelConfig",
      45);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v28 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v27,
            (const char (*)[23])"duplicate watcher id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
    *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v25 = 0;
LABEL_45:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v29 = 0;
      goto LABEL_49;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CatalogExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CatalogExcelConfig>,false,false> *const)(v3 + 160));
  }
  v29 = 1;
LABEL_49:
  if ( v29 == 1 )
    v2 = 0;
  result = v2;
  if ( v38 == (char *)v3 )
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

// Line 54: range 0000000013A47FD6-0000000013A481ED
const std::vector<unsigned int> *__fastcall CatalogExcelConfigMgr::getCollectionIdVecByType(
        const CatalogExcelConfigMgr *const this,
        std::vector<unsigned int> *collection_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_collection_type_2_id_vec_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 collection_type:53 64 8 7 iter:56 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CatalogExcelConfigMgr::getCollectionIdVecByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)collection_type;
  if ( !(_BYTE)`guard variable for'CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)::empty_vec
    && __cxa_guard_acquire(&`guard variable for'CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)::empty_vec) )
  {
    std::vector<unsigned int>::vector(&CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)const::empty_vec);
    __cxa_guard_release(&`guard variable for'CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)::empty_vec);
    collection_type = &CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)const::empty_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)const::empty_vec,
      &_dso_handle);
  }
  p_collection_type_2_id_vec_map = &this->collection_type_2_id_vec_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, collection_type);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_collection_type_2_id_vec_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->collection_type_2_id_vec_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &CatalogExcelConfigMgr::getCollectionIdVecByType(unsigned int)const::empty_vec;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 65: range 0000000013A481EE-0000000013A483E9
__int64 __fastcall CatalogExcelConfigMgr::getCatalogTypeByGlobalWatcherId(
        const CatalogExcelConfigMgr *const this,
        __int64 global_watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_global_watcher_2_catalog_type_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 20 global_watcher_id:64 64 8 7 iter:66 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = CatalogExcelConfigMgr::getCatalogTypeByGlobalWatcherId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = global_watcher_id;
  p_global_watcher_2_catalog_type_map = &this->global_watcher_2_catalog_type_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, global_watcher_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_global_watcher_2_catalog_type_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->global_watcher_2_catalog_type_map_;
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

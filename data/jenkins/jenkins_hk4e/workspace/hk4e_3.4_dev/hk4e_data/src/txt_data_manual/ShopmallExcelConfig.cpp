// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ShopmallExcelConfig.cpp

// Line 22: range 000000000CAE5956-000000000CAE727E
int32_t __cdecl ShopmallExcelConfigMgr::rewriteConfig(ShopmallExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ProductMcoinDetailConfigMap *p_product_mcoin_detail_config_map; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::pointer v6; // rdx
  data::ShopType *p_shop_type; // rax
  data::ShopType shop_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ProductCardDetailConfigMap *p_product_card_detail_config_map; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::pointer v12; // rdx
  data::ShopType *v13; // rax
  data::ShopType v14; // ecx
  char v15; // dl
  data::ProductConcertPackageDetailConfigMap *p_product_concert_package_detail_config_map; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::pointer v17; // rdx
  data::ShopType *v18; // rax
  data::ShopType v19; // ecx
  char v20; // al
  const char *v21; // rsi
  __int64 v22; // rsi
  uint32_t v23; // ecx
  char v24; // dl
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int *M_current; // r14
  unsigned int *v28; // rcx
  data::ShopmallEntranceExcelConfig *v29; // r14
  std::vector<data::ShopmallEntranceExcelConfig>::iterator v30; // rax
  ShopmallExcelConfigMgr::rewriteConfig::<lambda(const auto:25&, const auto:26&)> v31; // dl
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  HK4EDesignConfig *v40; // rax
  common::milog::MiLogStream *v42; // rax
  const std::string *v43; // rax
  TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-490h]
  int32_t ret; // [rsp+1Ch] [rbp-474h]
  data::ProductCardDetailConfigMap *__for_range; // [rsp+20h] [rbp-470h]
  data::ProductMcoinDetailConfigMap *__for_range_0; // [rsp+28h] [rbp-468h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::reference v49; // [rsp+30h] [rbp-460h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *config_id_0; // [rsp+38h] [rbp-458h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::reference __in; // [rsp+48h] [rbp-448h]
  uint32_t *config_id; // [rsp+50h] [rbp-440h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *config; // [rsp+58h] [rbp-438h]
  char v54[1072]; // [rsp+60h] [rbp-430h] BYREF

  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 48 1 11 cmp_func:85 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 8 14 __for_begin:"
                        "41 192 8 12 __for_end:41 224 8 14 __for_begin:64 256 8 12 __for_end:64 288 8 13 mcoin_func:68 32"
                        "0 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640"
                        " 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mcoin_product_shop_type, txt_config_mgr);
  }
  this->mcoin_product_shop_type = SHOP_TYPE_NONE;
  if ( !std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::empty(&this->product_mcoin_detail_config_map) )
  {
    p_product_mcoin_detail_config_map = &this->product_mcoin_detail_config_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, txt_config_mgr);
    *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::begin(p_product_mcoin_detail_config_map);
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 64));
    p_shop_type = &v6->second.shop_type;
    if ( *(_BYTE *)(((unsigned __int64)p_shop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_shop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_shop_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_shop_type);
    }
    shop_type = v6->second.shop_type;
    v9 = *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(txt_config_mgr) = v9 != 0;
      __asan_report_store4(&this->mcoin_product_shop_type, txt_config_mgr);
    }
    this->mcoin_product_shop_type = shop_type;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  }
  v10 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->card_product_shop_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_product_shop_type >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->card_product_shop_type, v10);
  }
  this->card_product_shop_type = SHOP_TYPE_NONE;
  if ( !std::unordered_map<unsigned int,data::ProductCardDetailConfig>::empty(&this->product_card_detail_config_map) )
  {
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_product_card_detail_config_map = &this->product_card_detail_config_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v10);
    *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(p_product_card_detail_config_map);
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 96));
    v13 = &v12->second.shop_type;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v14 = v12->second.shop_type;
    v15 = *(_BYTE *)(((unsigned __int64)&this->card_product_shop_type >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v15 != 0;
    if ( v15 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v15 )
      __asan_report_store4(&this->card_product_shop_type, v10);
    this->card_product_shop_type = v14;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->concert_product_shop_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->concert_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->concert_product_shop_type, v10);
  }
  this->concert_product_shop_type = SHOP_TYPE_NONE;
  if ( !std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::empty(&this->product_concert_package_detail_config_map) )
  {
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_product_concert_package_detail_config_map = &this->product_concert_package_detail_config_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v10);
    *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(p_product_concert_package_detail_config_map);
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 128));
    v18 = &v17->second.shop_type;
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v18);
    }
    v19 = v17->second.shop_type;
    v20 = *(_BYTE *)(((unsigned __int64)&this->concert_product_shop_type >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v20 != 0;
    if ( v20 != 0 && v20 <= 3 )
      __asan_report_store4(&this->concert_product_shop_type, v10);
    this->concert_product_shop_type = v19;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  }
  __for_range = &this->product_card_detail_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v10);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(__for_range);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v10);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range);
  while ( 1 )
  {
    v21 = (const char *)(v2 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 192)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 160));
    config_id = std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&config->card_product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->card_product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->card_product_type);
    }
    if ( config->card_product_type == CARD_PRODUCT_TYPE_HCOIN )
    {
      v22 = ((unsigned __int8)config_id & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      v23 = *config_id;
      v24 = *(_BYTE *)(((unsigned __int64)&this->hcoin_card_product_config_id >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v24 )
      {
        LOBYTE(v22) = v24 != 0;
        __asan_report_store4(&this->hcoin_card_product_config_id, v22);
      }
      this->hcoin_card_product_config_id = v23;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( ShopmallExcelConfigMgr::rewriteProductType(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      53);
    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = "rewriteProductType fails";
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v25, (const char (*)[25])"rewriteProductType fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteConfigIdTypeMap(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      60);
    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = "rewriteConfigIdTypeMap fails";
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v26,
      (const char (*)[29])"rewriteConfigIdTypeMap fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  }
  __for_range_0 = &this->product_mcoin_detail_config_map;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v21);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v21);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 256)) )
  {
    v49 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 224));
    config_id_0 = std::get<0ul,unsigned int const,data::ProductMcoinDetailConfig>(v49);
    std::get<1ul,unsigned int const,data::ProductMcoinDetailConfig>(v49);
    std::vector<unsigned int>::push_back(&this->sorted_mcoin_config_id_vec, config_id_0);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v2 + 256);
  *(_QWORD *)(v2 + 288) = this;
  M_current = std::vector<unsigned int>::end(&this->sorted_mcoin_config_id_vec)._M_current;
  v28 = std::vector<unsigned int>::begin(&this->sorted_mcoin_config_id_vec)._M_current;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 288);
  std::sort___gnu_cxx::__normal_iterator_unsigned_int__std::vector_unsigned_int____ShopmallExcelConfigMgr::rewriteConfig_TxtConfigMgr__::_lambda_const_auto_23__const_auto_24_____(
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v28,
    (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
    *(ShopmallExcelConfigMgr::rewriteConfig::<lambda(const auto:23&, const auto:24&)> *)(v2 + 288));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
  v29 = std::vector<data::ShopmallEntranceExcelConfig>::end(&this->shopmall_entrance_excel_config_vec)._M_current;
  v30._M_current = std::vector<data::ShopmallEntranceExcelConfig>::begin(&this->shopmall_entrance_excel_config_vec)._M_current;
  std::sort___gnu_cxx::__normal_iterator_data::ShopmallEntranceExcelConfig__std::vector_data::ShopmallEntranceExcelConfig____ShopmallExcelConfigMgr::rewriteConfig_TxtConfigMgr__::_lambda_const_auto_25__const_auto_26_____(
    v30,
    (__gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> >)v29,
    v31);
  if ( ShopmallExcelConfigMgr::rewriteProductIdConfig(this) )
  {
    ret = -1;
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      94);
    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v32,
      (const char (*)[29])"rewriteProductIdConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteConfigProductInfoMap(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      100);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 512),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v33,
      (const char (*)[34])"rewriteConfigProductInfoMap fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteSaleConfig(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      105);
    v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v34, (const char (*)[24])"rewriteSaleConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteRecommendConfig(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      110);
    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v35,
      (const char (*)[29])"rewriteRecommendConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteConcertPackageDetailConfig(this) )
  {
    ret = -1;
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 704, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 704),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      115);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v36,
      (const char (*)[40])"rewriteConcertPackageDetailConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteAppleGiftCardDetailConfig(this) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      120);
    v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 768),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      v37,
      (const char (*)[39])"rewriteAppleGiftCardDetailConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewritePsnCompensationDetailConfig(this) )
  {
    ret = -1;
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 832, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 832),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      125);
    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 832),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v38,
      (const char (*)[41])"rewritePsnCompensationDetailConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
    *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( ShopmallExcelConfigMgr::rewriteEpicCatalogShieldConfig(this) )
  {
    ret = -1;
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 896, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 896),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      130);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 896),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      v39,
      (const char (*)[37])"rewriteEpicCatalogShieldConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
    *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
  }
  v40 = TxtConfigMgr::getConfig(txt_config_mgra);
  if ( HK4EDesignConfig::isAudit(v40) && ShopmallExcelConfigMgr::rewriteAuditProductConfig(this, txt_config_mgra) )
  {
    ret = -1;
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 960, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 960),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "rewriteConfig",
      137);
    v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 960),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      v42,
      (const char (*)[26])"rewriteAuditProduct fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
    *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
  }
  v43 = ConstValueExcelConfigMgr::getPointCardProductId[abi:cxx11](&txt_config_mgra->const_value_config_mgr);
  std::string::operator=(&this->point_card_product_id, v43);
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 68: range 000000000CDDFEE8-000000000CDE0283
bool __cdecl ShopmallExcelConfigMgr::rewriteConfig::_lambda_const_auto_23___const_auto_24___::operator()_unsigned_int_unsigned_int_(
        const ShopmallExcelConfigMgr::rewriteConfig::<lambda(const auto:23&, const auto:24&)> *const __closure,
        const unsigned int *lhs,
        const unsigned int *rhs)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductMcoinDetailConfigMap *p_product_mcoin_detail_config_map; // rdx
  data::ProductMcoinDetailConfigMap *v7; // rdx
  bool v8; // al
  bool result; // al
  data::ProductMcoinDetailConfigMap *v10; // rdx
  data::ProductMcoinDetailConfigMap *v11; // rdx
  bool v12; // al
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::pointer v13; // rdx
  uint32_t *p_seqence; // rax
  uint32_t seqence; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::pointer v16; // rdx
  uint32_t *v17; // rax
  char v19[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>::__node_type *)"4 32 8 11 lhs_iter:70 64 8 9 <unknown> 96 8 11 rhs_iter:75 128 8 9 <unknown>";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>::__node_type *)ShopmallExcelConfigMgr::rewriteConfig::_lambda_const_auto_23___const_auto_24___::operator()_unsigned_int_unsigned_int_;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_product_mcoin_detail_config_map = &__closure->__this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], lhs);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::find(
                   p_product_mcoin_detail_config_map,
                   lhs)._M_cur;
  v7 = &__closure->__this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], lhs);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(v7)._M_cur;
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(v3 + 4, v3 + 8);
  *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(((unsigned __int64)&v3[12] >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v10 = &__closure->__this->product_mcoin_detail_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v3[12] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[12], &v3[8]);
    v3[12]._M_cur = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::find(v10, rhs)._M_cur;
    *(_BYTE *)(((unsigned __int64)&v3[16] >> 3) + 0x7FFF8000) = 0;
    v11 = &__closure->__this->product_mcoin_detail_config_map;
    if ( *(_BYTE *)(((unsigned __int64)&v3[16] >> 3) + 0x7FFF8000) )
      __asan_report_store8(&v3[16], rhs);
    v3[16]._M_cur = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(v11)._M_cur;
    v12 = std::__detail::operator==<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
            v3 + 12,
            v3 + 16);
    *(_BYTE *)(((unsigned __int64)&v3[16] >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 1;
    }
    else
    {
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator->(v3 + 4);
      p_seqence = &v13->second.seqence;
      if ( *(_BYTE *)(((unsigned __int64)p_seqence >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_seqence & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_seqence >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_seqence);
      }
      seqence = v13->second.seqence;
      v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator->(v3 + 12);
      v17 = &v16->second.seqence;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      result = seqence > v16->second.seqence;
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 85: range 000000000CDE10AE-000000000CDE114D
bool __cdecl ShopmallExcelConfigMgr::rewriteConfig::_lambda_const_auto_25___const_auto_26___::operator()_data::ShopmallEntranceExcelConfig_data::ShopmallEntranceExcelConfig_(
        const ShopmallExcelConfigMgr::rewriteConfig::<lambda(const auto:25&, const auto:26&)> *const __closure,
        const data::ShopmallEntranceExcelConfig *lhs,
        const data::ShopmallEntranceExcelConfig *rhs)
{
  uint32_t order; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->order);
  }
  order = lhs->order;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->order);
  }
  return order > rhs->order;
};

// Line 148: range 000000000CAE7280-000000000CAE80F1
int32_t __cdecl ShopmallExcelConfigMgr::rewriteProductType(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  char *v7; // rsi
  char *v8; // rsi
  char *v9; // rsi
  char *v10; // rsi
  char *v11; // rsi
  int32_t result; // eax
  data::ProductMcoinDetailConfigMap *__for_range; // [rsp+10h] [rbp-340h]
  data::ProductCardDetailConfigMap *__for_range_0; // [rsp+18h] [rbp-338h]
  data::ProductPlayDetailConfigMap *__for_range_1; // [rsp+20h] [rbp-330h]
  data::ProductPS4PackageDetailConfigMap *__for_range_2; // [rsp+28h] [rbp-328h]
  data::ProductGoogleGiftCardDetailConfigMap *__for_range_3; // [rsp+30h] [rbp-320h]
  data::ProductConcertPackageDetailConfigMap *__for_range_4; // [rsp+38h] [rbp-318h]
  data::ProductAppleGiftCardDetailConfigMap *__for_range_5; // [rsp+40h] [rbp-310h]
  data::ProductPsnCompensationDetailConfigMap *__for_range_6; // [rsp+48h] [rbp-308h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::reference v21; // [rsp+50h] [rbp-300h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig> >::type *psn_compensation_config; // [rsp+60h] [rbp-2F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::reference v23; // [rsp+68h] [rbp-2E8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig> >::type *apple_gift_card_config; // [rsp+78h] [rbp-2D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::reference v25; // [rsp+80h] [rbp-2D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *concert_config; // [rsp+90h] [rbp-2C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::reference v27; // [rsp+98h] [rbp-2B8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig> >::type *google_gift_card_config; // [rsp+A8h] [rbp-2A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::reference v29; // [rsp+B0h] [rbp-2A0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPS4PackageDetailConfig> >::type *package_config; // [rsp+C0h] [rbp-290h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::reference v31; // [rsp+C8h] [rbp-288h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *play_config; // [rsp+D8h] [rbp-278h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::reference v33; // [rsp+E0h] [rbp-270h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *card_config; // [rsp+F0h] [rbp-260h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::reference __in; // [rsp+F8h] [rbp-258h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *mcoin_config; // [rsp+108h] [rbp-248h]
  char v37[576]; // [rsp+110h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 8 15 __for_begin:149 64 8 13 __for_end:149 96 8 15 __for_begin:155 128 8 13 __for_end:155 "
                        "160 8 15 __for_begin:160 192 8 13 __for_end:160 224 8 15 __for_begin:165 256 8 13 __for_end:165 "
                        "288 8 15 __for_begin:170 320 8 13 __for_end:170 352 8 15 __for_begin:175 384 8 13 __for_end:175 "
                        "416 8 15 __for_begin:180 448 8 13 __for_end:180 480 8 15 __for_begin:185 512 8 13 __for_end:185";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteProductType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -202116352;
  __for_range = &this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ProductMcoinDetailConfig>(__in);
    mcoin_config = std::get<1ul,unsigned int const,data::ProductMcoinDetailConfig>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mcoin_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&mcoin_config->product_type, v5);
    }
    mcoin_config->product_type = PRODUCT_TYPE_HCOIN;
    if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->original_product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&mcoin_config->original_product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&mcoin_config->original_product_type, v5);
    }
    mcoin_config->original_product_type = PRODUCT_TYPE_HCOIN;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->product_card_detail_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range_0);
  while ( 1 )
  {
    v6 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 128)) )
      break;
    v33 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 96));
    std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(v33);
    card_config = std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(v33);
    if ( *(_BYTE *)(((unsigned __int64)&card_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&card_config->product_type, v6);
    }
    card_config->product_type = PRODUCT_TYPE_CARD;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->product_play_detail_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v6);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v6);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(__for_range_1);
  while ( 1 )
  {
    v7 = (char *)(v2 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 192)) )
      break;
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 160));
    std::get<0ul,unsigned int const,data::ProductPlayDetailConfig>(v31);
    play_config = std::get<1ul,unsigned int const,data::ProductPlayDetailConfig>(v31);
    if ( *(_BYTE *)(((unsigned __int64)&play_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&play_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&play_config->product_type, v7);
    }
    play_config->product_type = PRODUCT_TYPE_PLAY;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  __for_range_2 = &this->product_ps4_package_detail_config_map;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v7);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v7);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(__for_range_2);
  while ( 1 )
  {
    v8 = (char *)(v2 + 256);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 256)) )
      break;
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 224));
    std::get<0ul,unsigned int const,data::ProductPS4PackageDetailConfig>(v29);
    package_config = std::get<1ul,unsigned int const,data::ProductPS4PackageDetailConfig>(v29);
    if ( *(_BYTE *)(((unsigned __int64)&package_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&package_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&package_config->product_type, v8);
    }
    package_config->product_type = PRODUCT_TYPE_PACKAGE;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->product_google_gift_card_detail_config_map;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v8);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v8);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(__for_range_3);
  while ( 1 )
  {
    v9 = (char *)(v2 + 320);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 320)) )
      break;
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 288));
    std::get<0ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(v27);
    google_gift_card_config = std::get<1ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(v27);
    if ( *(_BYTE *)(((unsigned __int64)&google_gift_card_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&google_gift_card_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&google_gift_card_config->product_type, v9);
    }
    google_gift_card_config->product_type = PRODUCT_TYPE_GOOGLE_GIFT_CARD;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 288));
  }
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  __for_range_4 = &this->product_concert_package_detail_config_map;
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 352, v9);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 384, v9);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 384) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range_4);
  while ( 1 )
  {
    v10 = (char *)(v2 + 384);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 352),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 384)) )
      break;
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 352));
    std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v25);
    concert_config = std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v25);
    if ( *(_BYTE *)(((unsigned __int64)&concert_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&concert_config->product_type, v10);
    }
    concert_config->product_type = PRODUCT_TYPE_CONCERT;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 352));
  }
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  __for_range_5 = &this->product_apple_gift_card_detail_config_map;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 416, v10);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::begin(__for_range_5);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, v10);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(__for_range_5);
  while ( 1 )
  {
    v11 = (char *)(v2 + 448);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 416),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 448)) )
      break;
    v23 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 416));
    std::get<0ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v23);
    apple_gift_card_config = std::get<1ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v23);
    if ( *(_BYTE *)(((unsigned __int64)&apple_gift_card_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&apple_gift_card_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&apple_gift_card_config->product_type, v11);
    }
    apple_gift_card_config->product_type = PRODUCT_TYPE_APPLE_GIFT_CARD;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 416));
  }
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  __for_range_6 = &this->product_psn_compensation_detail_config_map;
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 480, v11);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 480) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::begin(__for_range_6);
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 512, v11);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 512) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(__for_range_6);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 480),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 512)) )
  {
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 480));
    std::get<0ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(v21);
    psn_compensation_config = std::get<1ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(v21);
    if ( *(_BYTE *)(((unsigned __int64)&psn_compensation_config->product_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&psn_compensation_config->product_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&psn_compensation_config->product_type, v2 + 512);
    }
    psn_compensation_config->product_type = PRODUCT_TYPE_PSN_COMPENSATION;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 480));
  }
  result = 0;
  if ( v37 == (char *)v2 )
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

// Line 195: range 000000000CAE80F2-000000000CAE992A
int32_t __cdecl ShopmallExcelConfigMgr::rewriteConfigIdTypeMap(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  data::ProductType *p_product_type; // rdx
  data::ProductType *v7; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  data::ProductType *v13; // rdx
  data::ProductType *v14; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  char *v19; // rsi
  data::ProductType *v20; // rdx
  data::ProductType *v21; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  char *v26; // rsi
  data::ProductType *v27; // rdx
  data::ProductType *v28; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  char *v33; // rsi
  data::ProductType *v34; // rdx
  data::ProductType *v35; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  char *v40; // rsi
  data::ProductType *v41; // rdx
  data::ProductType *v42; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  char *v47; // rsi
  data::ProductType *v48; // rdx
  data::ProductType *v49; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rax
  data::ProductType *v54; // rdx
  data::ProductType *v55; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductType>,false,false>,bool> v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  int32_t ret; // [rsp+1Ch] [rbp-544h]
  data::ProductMcoinDetailConfigMap *__for_range; // [rsp+20h] [rbp-540h]
  data::ProductCardDetailConfigMap *__for_range_0; // [rsp+28h] [rbp-538h]
  data::ProductPlayDetailConfigMap *__for_range_1; // [rsp+30h] [rbp-530h]
  data::ProductPS4PackageDetailConfigMap *__for_range_2; // [rsp+38h] [rbp-528h]
  data::ProductGoogleGiftCardDetailConfigMap *__for_range_3; // [rsp+40h] [rbp-520h]
  data::ProductConcertPackageDetailConfigMap *__for_range_4; // [rsp+48h] [rbp-518h]
  data::ProductAppleGiftCardDetailConfigMap *__for_range_5; // [rsp+50h] [rbp-510h]
  data::ProductPsnCompensationDetailConfigMap *__for_range_6; // [rsp+58h] [rbp-508h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::reference v70; // [rsp+60h] [rbp-500h]
  const unsigned int *config_id_6; // [rsp+68h] [rbp-4F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::reference v72; // [rsp+78h] [rbp-4E8h]
  const unsigned int *config_id_5; // [rsp+80h] [rbp-4E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::reference v74; // [rsp+90h] [rbp-4D0h]
  const unsigned int *config_id_4; // [rsp+98h] [rbp-4C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::reference v76; // [rsp+A8h] [rbp-4B8h]
  const unsigned int *config_id_3; // [rsp+B0h] [rbp-4B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::reference v78; // [rsp+C0h] [rbp-4A0h]
  const unsigned int *config_id_2; // [rsp+C8h] [rbp-498h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::reference v80; // [rsp+D8h] [rbp-488h]
  const unsigned int *config_id_1; // [rsp+E0h] [rbp-480h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::reference v82; // [rsp+F0h] [rbp-470h]
  const unsigned int *config_id_0; // [rsp+F8h] [rbp-468h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::reference __in; // [rsp+108h] [rbp-458h]
  const unsigned int *config_id; // [rsp+110h] [rbp-450h]
  char v86[1088]; // [rsp+120h] [rbp-440h] BYREF

  v2 = (unsigned __int64)v86;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 8 15 __for_begin:200 64 8 13 __for_end:200 96 8 15 __for_begin:208 128 8 13 __for_end:208 "
                        "160 8 15 __for_begin:216 192 8 13 __for_end:216 224 8 15 __for_begin:224 256 8 13 __for_end:224 "
                        "288 8 15 __for_begin:232 320 8 13 __for_end:232 352 8 15 __for_begin:240 384 8 13 __for_end:240 "
                        "416 8 15 __for_begin:248 448 8 13 __for_end:248 480 8 15 __for_begin:256 512 8 13 __for_end:256 "
                        "544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 8"
                        "64 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteConfigIdTypeMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -202116109;
  ret = 0;
  std::unordered_map<unsigned int,data::ProductType>::clear(&this->config_id_type_map);
  __for_range = &this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductMcoinDetailConfig>(__in);
    p_product_type = &std::get<1ul,unsigned int const,data::ProductMcoinDetailConfig>(__in)->product_type;
    v8 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
           &this->config_id_type_map,
           config_id,
           p_product_type,
           (const unsigned int *)&this->config_id_type_map,
           v7);
    if ( !v8.second )
    {
      ret = -1;
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        205);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 544),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"config_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->product_card_detail_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range_0);
  while ( 1 )
  {
    v12 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 128)) )
      break;
    v82 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 96));
    config_id_0 = std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(v82);
    v13 = &std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(v82)->product_type;
    v15 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_0,
            v13,
            (const unsigned int *)&this->config_id_type_map,
            v14);
    if ( !v15.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        213);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])"config_id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, config_id_0);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->product_play_detail_config_map;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v12);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v12);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(__for_range_1);
  while ( 1 )
  {
    v19 = (char *)(v2 + 192);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 192)) )
      break;
    v80 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 160));
    config_id_1 = std::get<0ul,unsigned int const,data::ProductPlayDetailConfig>(v80);
    v20 = &std::get<1ul,unsigned int const,data::ProductPlayDetailConfig>(v80)->product_type;
    v22 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_1,
            v20,
            (const unsigned int *)&this->config_id_type_map,
            v21);
    if ( !v22.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        221);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])"config_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, config_id_1);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v25, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  __for_range_2 = &this->product_ps4_package_detail_config_map;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v19);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v19);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(__for_range_2);
  while ( 1 )
  {
    v26 = (char *)(v2 + 256);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 256)) )
      break;
    v78 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 224));
    config_id_2 = std::get<0ul,unsigned int const,data::ProductPS4PackageDetailConfig>(v78);
    v27 = &std::get<1ul,unsigned int const,data::ProductPS4PackageDetailConfig>(v78)->product_type;
    v29 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_2,
            v27,
            (const unsigned int *)&this->config_id_type_map,
            v28);
    if ( !v29.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        229);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])"config_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, config_id_2);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->product_google_gift_card_detail_config_map;
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v26);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v26);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(__for_range_3);
  while ( 1 )
  {
    v33 = (char *)(v2 + 320);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 288),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 320)) )
      break;
    v76 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 288));
    config_id_3 = std::get<0ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(v76);
    v34 = &std::get<1ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(v76)->product_type;
    v36 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_3,
            v34,
            (const unsigned int *)&this->config_id_type_map,
            v35);
    if ( !v36.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 800, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 800),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        237);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v38 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v37, (const char (*)[11])"config_id:");
      v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, config_id_3);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v39, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
      *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 288));
  }
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
  __for_range_4 = &this->product_concert_package_detail_config_map;
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 352, v33);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 384, v33);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 384) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range_4);
  while ( 1 )
  {
    v40 = (char *)(v2 + 384);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 352),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 384)) )
      break;
    v74 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 352));
    config_id_4 = std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v74);
    v41 = &std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v74)->product_type;
    v43 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_4,
            v41,
            (const unsigned int *)&this->config_id_type_map,
            v42);
    if ( !v43.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 864) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 895) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 864, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 864),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        245);
      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])"config_id:");
      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, config_id_4);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v46, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
      *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 352));
  }
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
  __for_range_5 = &this->product_apple_gift_card_detail_config_map;
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 416, v40);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::begin(__for_range_5);
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 448, v40);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(__for_range_5);
  while ( 1 )
  {
    v47 = (char *)(v2 + 448);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 416),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 448)) )
      break;
    v72 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 416));
    config_id_5 = std::get<0ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v72);
    v48 = &std::get<1ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v72)->product_type;
    v50 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_5,
            v48,
            (const unsigned int *)&this->config_id_type_map,
            v49);
    if ( !v50.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        253);
      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v51, (const char (*)[11])"config_id:");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, config_id_5);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v53, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 416));
  }
  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
  __for_range_6 = &this->product_psn_compensation_detail_config_map;
  *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 480, v47);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 480) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::begin(__for_range_6);
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 512, v47);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 512) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(__for_range_6);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 480),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 512)) )
  {
    v70 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 480));
    config_id_6 = std::get<0ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(v70);
    v54 = &std::get<1ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(v70)->product_type;
    v56 = std::unordered_map<unsigned int,data::ProductType>::emplace<unsigned int const&,data::ProductType&>(
            &this->config_id_type_map,
            config_id_6,
            v54,
            (const unsigned int *)&this->config_id_type_map,
            v55);
    if ( !v56.second )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteConfigIdTypeMap",
        261);
      v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v57, (const char (*)[11])"config_id:");
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, config_id_6);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v59, (const char (*)[10])byte_1A11C6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 480));
  }
  if ( v86 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 132) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v86);
  }
  return ret;
};

// Line 269: range 000000000CAE992C-000000000CAEB48B
int32_t __cdecl ShopmallExcelConfigMgr::rewriteConfigProductInfoMap(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v12; // rax
  std::string *p_psn_product_id; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v20; // rax
  std::string *p_epic_product_id; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v30; // rax
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v31; // rdx
  char *v32; // rsi
  unsigned int *v33; // rax
  int *v34; // rdx
  int v35; // ecx
  char v36; // al
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v37; // rax
  const std::string *v38; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >,bool> v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r14
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v51; // rax
  PlatformProductInfo *p_abroad_info; // rdx
  char *v53; // rsi
  unsigned int *v54; // rax
  int *v55; // rdx
  int v56; // ecx
  char v57; // al
  std::unordered_map<unsigned int,ConfigProductInfo>::mapped_type *v58; // rax
  const std::string *v59; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::string > >,bool> v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  data::ProductPS4PackageDetailConfigMap *p_product_ps4_package_detail_config_map; // rdx
  data::ProductPS4PackageDetailConfigMap *v67; // rdx
  bool v68; // al
  data::ProductGoogleGiftCardDetailConfigMap *p_product_google_gift_card_detail_config_map; // rdx
  data::ProductGoogleGiftCardDetailConfigMap *v70; // rdx
  bool v71; // al
  data::ProductAppleGiftCardDetailConfigMap *p_product_apple_gift_card_detail_config_map; // rdx
  data::ProductAppleGiftCardDetailConfigMap *v73; // rdx
  bool v74; // al
  data::ProductPsnCompensationDetailConfigMap *p_product_psn_compensation_detail_config_map; // rdx
  data::ProductPsnCompensationDetailConfigMap *v76; // rdx
  bool v77; // al
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rdx
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  int32_t ret; // [rsp+1Ch] [rbp-484h]
  data::ProductIdConfigMap *__for_range; // [rsp+20h] [rbp-480h]
  std::unordered_map<unsigned int,ConfigProductInfo> *__for_range_2; // [rsp+28h] [rbp-478h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false>::reference v94; // [rsp+30h] [rbp-470h]
  std::tuple_element<0,std::pair<unsigned int const,ConfigProductInfo> >::type *config_id; // [rsp+38h] [rbp-468h]
  std::tuple_element<1,const std::pair<unsigned int const,ConfigProductInfo> >::type *config_product_info; // [rsp+40h] [rbp-460h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::reference v97; // [rsp+48h] [rbp-458h]
  std::tuple_element<0,std::pair<const std::string,data::ProductIdConfig> >::type *product_id; // [rsp+50h] [rbp-450h]
  std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *product_config; // [rsp+58h] [rbp-448h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-440h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-438h]
  char v102[1072]; // [rsp+70h] [rbp-430h] BYREF

  v2 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(1024LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 32 4 17 platform_type:309 48 4 17 platform_type:334 64 8 15 __for_begin:271 96 8 13 __for_end"
                        ":271 128 8 15 __for_begin:309 160 8 13 __for_end:309 192 8 15 __for_begin:334 224 8 13 __for_end"
                        ":334 256 8 15 __for_begin:348 288 8 13 __for_end:348 320 8 9 <unknown> 352 8 9 <unknown> 384 8 9"
                        " <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 512 8 9 <unknown> 544 8 9 <unkn"
                        "own> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unkno"
                        "wn> 896 32 9 <unknown> 960 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteConfigProductInfoMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862739] = -218959118;
  v4[536862741] = -218959118;
  v4[536862743] = -218959118;
  v4[536862745] = -218959118;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -202116109;
  ret = 0;
  __for_range = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::ProductIdConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 96)) )
      break;
    v97 = std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
    product_id = std::get<0ul,std::string const,data::ProductIdConfig>(v97);
    product_config = (std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *)std::get<1ul,std::string const,data::ProductIdConfig>(v97);
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
        &this->config_2_product_map,
        &product_config->config_id);
      if ( (unsigned __int8)std::string::empty() != 1 )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "rewriteConfigProductInfoMap",
          279);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 576),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])"product_id:");
        v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
        v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" config_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &product_config->config_id);
        v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v10, (const char (*)[28])byte_1A11C9E0);
        v12 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                &this->config_2_product_map,
                &product_config->config_id);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &v12->psn_product_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      }
      p_psn_product_id = &std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                            &this->config_2_product_map,
                            &product_config->config_id)->psn_product_id;
      std::string::operator=(p_psn_product_id, product_id);
    }
    else if ( (unsigned __int8)std::string::empty() != 1 )
    {
      std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
        &this->config_2_product_map,
        &product_config->config_id);
      if ( (unsigned __int8)std::string::empty() != 1 )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "rewriteConfigProductInfoMap",
          290);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])"product_id:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, product_id);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" config_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &product_config->config_id);
        v19 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v18, (const char (*)[29])byte_1A11CA20);
        v20 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                &this->config_2_product_map,
                &product_config->config_id);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &v20->epic_product_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      }
      p_epic_product_id = &std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                             &this->config_2_product_map,
                             &product_config->config_id)->epic_product_id;
      std::string::operator=(p_epic_product_id, product_id);
    }
    else
    {
      v22 = ((_BYTE)product_config + 44) & 7;
      v23 = (*(_BYTE *)(((unsigned __int64)&product_config->is_internal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&product_config->is_internal >> 3) + 0x7FFF8000));
      if ( (_BYTE)v23 )
        __asan_report_load1(&product_config->is_internal, v22, v23);
      if ( product_config->is_internal )
      {
        if ( std::vector<unsigned int>::empty(&product_config->platform_type_list) )
        {
          std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
            &this->config_2_product_map,
            &product_config->config_id);
          if ( (unsigned __int8)std::string::empty() != 1 )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteConfigProductInfoMap",
              302);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v24,
                    (const char (*)[12])"product_id:");
            v26 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, product_id);
            v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v26,
                    (const char (*)[12])" config_id:");
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v27,
                    &product_config->config_id);
            v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    v28,
                    (const char (*)[40])byte_1A11CA60);
            v30 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                    &this->config_2_product_map,
                    &product_config->config_id);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v29,
              &v30->internal_info.common_product_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          }
          v31 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                  &this->config_2_product_map,
                  &product_config->config_id);
          std::string::operator=(v31, product_id);
        }
        else
        {
          __for_range_0 = &product_config->platform_type_list;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 128, v22);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 160, v22);
          *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
          while ( 1 )
          {
            v32 = (char *)(v2 + 160);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
              break;
            *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
            v33 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
            v34 = (int *)v33;
            if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v33);
            }
            v35 = *v34;
            v36 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
            if ( v36 != 0 && v36 <= 3 )
            {
              LOBYTE(v32) = v36 != 0;
              __asan_report_store4(v2 + 32, v32);
            }
            *(_DWORD *)(v2 + 32) = v35;
            v37 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                    &this->config_2_product_map,
                    &product_config->config_id);
            v39 = std::map<unsigned int,std::string>::emplace<unsigned int &,std::string const&>(
                    &v37->internal_info.platform_2_product_map,
                    (unsigned int *)(v2 + 32),
                    product_id,
                    (unsigned int *)&v37->internal_info.platform_2_product_map,
                    v38);
            if ( !v39.second )
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "rewriteConfigProductInfoMap",
                314);
              v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 768),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v40,
                      (const char (*)[12])"product_id:");
              v42 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v41, product_id);
              v43 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v42,
                      (const char (*)[18])" ,platform_type: ");
              v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v43,
                      (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v44, (const char (*)[11])byte_1A11CB00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
              *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
          }
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else if ( std::vector<unsigned int>::empty(&product_config->platform_type_list) )
      {
        std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
          &this->config_2_product_map,
          &product_config->config_id);
        if ( (unsigned __int8)std::string::empty() != 1 )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 832) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 863) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 832, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 832),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "rewriteConfigProductInfoMap",
            327);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v45, (const char (*)[12])"product_id:");
          v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, product_id);
          v48 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v47, (const char (*)[12])" config_id:");
          v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &product_config->config_id);
          v50 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v49, (const char (*)[38])byte_1A11CB40);
          v51 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                  &this->config_2_product_map,
                  &product_config->config_id);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, &v51->abroad_info.common_product_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        }
        p_abroad_info = &std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                           &this->config_2_product_map,
                           &product_config->config_id)->abroad_info;
        std::string::operator=(p_abroad_info, product_id);
      }
      else
      {
        __for_range_1 = &product_config->platform_type_list;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v22);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v22);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v53 = (char *)(v2 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v54 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
          v55 = (int *)v54;
          if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v54);
          }
          v56 = *v55;
          v57 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          if ( v57 != 0 && v57 <= 3 )
          {
            LOBYTE(v53) = v57 != 0;
            __asan_report_store4(v2 + 48, v53);
          }
          *(_DWORD *)(v2 + 48) = v56;
          v58 = std::unordered_map<unsigned int,ConfigProductInfo>::operator[](
                  &this->config_2_product_map,
                  &product_config->config_id);
          v60 = std::map<unsigned int,std::string>::emplace<unsigned int &,std::string const&>(
                  &v58->abroad_info.platform_2_product_map,
                  (unsigned int *)(v2 + 48),
                  product_id,
                  (unsigned int *)&v58->abroad_info.platform_2_product_map,
                  v59);
          if ( !v60.second )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 896, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 896),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteConfigProductInfoMap",
              339);
            v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v62 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v61,
                    (const char (*)[12])"product_id:");
            v63 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v62, product_id);
            v64 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v63,
                    (const char (*)[18])" ,platform_type: ");
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v64,
                    (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v65, (const char (*)[11])byte_1A11CB00);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      }
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_2 = &this->config_2_product_map;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, v5);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,ConfigProductInfo>::begin(__for_range_2);
  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 288, v5);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,ConfigProductInfo>::end(__for_range_2);
  while ( std::__detail::operator!=<std::pair<unsigned int const,ConfigProductInfo>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 256),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 288)) )
  {
    v94 = std::__detail::_Node_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false> *const)(v2 + 256));
    config_id = std::get<0ul,unsigned int const,ConfigProductInfo>(v94);
    config_product_info = (std::tuple_element<1,const std::pair<unsigned int const,ConfigProductInfo> >::type *)std::get<1ul,unsigned int const,ConfigProductInfo>(v94);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    p_product_ps4_package_detail_config_map = &this->product_ps4_package_detail_config_map;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, v2 + 288);
    *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::find(p_product_ps4_package_detail_config_map, config_id);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    v67 = &this->product_ps4_package_detail_config_map;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, config_id);
    *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(v67);
    v68 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 320),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 352));
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( !v68 )
    {
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      p_product_google_gift_card_detail_config_map = &this->product_google_gift_card_detail_config_map;
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 416, v2 + 352);
      *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::find(p_product_google_gift_card_detail_config_map, config_id);
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      v70 = &this->product_google_gift_card_detail_config_map;
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 384, config_id);
      *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 384) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(v70);
      v71 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 384),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 416));
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( !v71 )
      {
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        p_product_apple_gift_card_detail_config_map = &this->product_apple_gift_card_detail_config_map;
        if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 480, v2 + 416);
        *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 480) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::find(p_product_apple_gift_card_detail_config_map, config_id);
        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        v73 = &this->product_apple_gift_card_detail_config_map;
        if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 448, config_id);
        *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(v73);
        v74 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 448),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 480));
        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
        if ( !v74 )
        {
          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          p_product_psn_compensation_detail_config_map = &this->product_psn_compensation_detail_config_map;
          if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 544, v2 + 480);
          *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 544) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::find(p_product_psn_compensation_detail_config_map, config_id);
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          v76 = &this->product_psn_compensation_detail_config_map;
          if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 512, config_id);
          *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 512) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(v76);
          v77 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 512),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 544));
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
          if ( !v77
            && ((unsigned __int8)std::string::empty()
             || (unsigned __int8)std::string::empty()
             || (unsigned __int8)std::string::empty()
             || (unsigned __int8)std::string::empty()) )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 960, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 960),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteConfigProductInfoMap",
              375);
            v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 960),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v80 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v79, (const char (*)[11])"config_id:");
            v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, config_id);
            v82 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v81,
                    (const char (*)[17])byte_1A11CBA0);
            v83 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v82,
                    &config_product_info->internal_info.common_product_id);
            v84 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v83,
                    (const char (*)[14])byte_1A11CBE0);
            v85 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v84,
                    &config_product_info->abroad_info.common_product_id);
            v86 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v85,
                    (const char (*)[11])byte_1A11CC20);
            v87 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v86,
                    &config_product_info->psn_product_id);
            v88 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v87,
                    (const char (*)[12])byte_1A11CC60);
            v89 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v88,
                    &config_product_info->epic_product_id);
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v89, (const char (*)[7])byte_1A11CCA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false> *const)(v2 + 256));
  }
  if ( v102 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 128) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return ret;
};

// Line 387: range 000000000CAEB48C-000000000CAED830
int32_t __cdecl ShopmallExcelConfigMgr::rewriteAuditProductConfig(
        ShopmallExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  std::string *p_price_tier; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // edx
  unsigned __int64 v12; // rax
  uint32_t config_id; // ecx
  char v14; // al
  std::string *v15; // rsi
  data::ShopType mcoin_product_shop_type; // ecx
  char v17; // dl
  uint32_t AuditMcoinFromTier; // edx
  char v19; // al
  data::PriceTierConfig *v20; // rsi
  std::string *v21; // rsi
  data::ProductMcoinDetailConfig *v22; // r8
  data::ProductType product_type; // ecx
  char v24; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  int v30; // edx
  const char *v31; // rsi
  std::string *v32; // rsi
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  _BOOL4 v36; // edx
  unsigned __int64 v37; // rax
  uint32_t v38; // ecx
  char v39; // al
  std::string *v40; // rsi
  data::ShopType v41; // ecx
  char v42; // dl
  uint32_t v43; // edx
  char v44; // al
  data::PriceTierConfig *v45; // rsi
  std::string *v46; // rsi
  data::ProductMcoinDetailConfig *v47; // r8
  data::ProductType v48; // ecx
  char v49; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>,bool> v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  unsigned __int64 v54; // rax
  int v55; // edx
  const char *v56; // rsi
  std::string *v57; // rsi
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  _BOOL4 v61; // edx
  unsigned __int64 v62; // rax
  uint32_t v63; // ecx
  char v64; // al
  std::string *v65; // rsi
  data::ShopType v66; // ecx
  char v67; // dl
  uint32_t v68; // edx
  char v69; // al
  data::PriceTierConfig *v70; // rsi
  std::string *v71; // rsi
  data::ProductMcoinDetailConfig *v72; // r8
  data::ProductType v73; // ecx
  char v74; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>,bool> v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  unsigned __int64 v79; // rax
  int v80; // edx
  std::string *p_audit_display_tier; // rsi
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  _BOOL4 v85; // edx
  unsigned __int64 v86; // rax
  uint32_t v87; // ecx
  char v88; // al
  std::string *v89; // rsi
  data::ShopType v90; // ecx
  char v91; // dl
  uint32_t v92; // edx
  char v93; // al
  data::PriceTierConfig *v94; // rsi
  std::string *v95; // rsi
  data::ProductMcoinDetailConfig *v96; // r8
  data::ProductType v97; // ecx
  char v98; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>,bool> v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rax
  unsigned __int64 v103; // rax
  int v104; // edx
  common::milog::MiLogStream *v105; // rax
  int v107; // [rsp+Ch] [rbp-6C4h]
  int v108; // [rsp+Ch] [rbp-6C4h]
  int v109; // [rsp+Ch] [rbp-6C4h]
  int v110; // [rsp+Ch] [rbp-6C4h]
  data::ProductCardDetailConfigMap *__for_range; // [rsp+20h] [rbp-6B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::reference __in; // [rsp+28h] [rbp-6A8h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *card_config; // [rsp+38h] [rbp-698h]
  data::PriceTierConfig *tier_config_ptr; // [rsp+40h] [rbp-690h]
  data::ProductPlayDetailConfigMap *__for_range_0; // [rsp+48h] [rbp-688h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::reference v116; // [rsp+50h] [rbp-680h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *play_config; // [rsp+60h] [rbp-670h]
  data::PriceTierConfig *tier_config_ptr_0; // [rsp+68h] [rbp-668h]
  data::ProductConcertPackageDetailConfigMap *__for_range_1; // [rsp+70h] [rbp-660h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::reference v120; // [rsp+78h] [rbp-658h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *concert_config; // [rsp+88h] [rbp-648h]
  data::PriceTierConfig *tier_config_ptr_1; // [rsp+90h] [rbp-640h]
  data::ProductAppleGiftCardDetailConfigMap *__for_range_2; // [rsp+98h] [rbp-638h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::reference v124; // [rsp+A0h] [rbp-630h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig> >::type *apple_gift_card; // [rsp+B0h] [rbp-620h]
  data::PriceTierConfig *audit_display_tier_config_ptr; // [rsp+B8h] [rbp-618h]
  char v127[1552]; // [rsp+C0h] [rbp-610h] BYREF

  v3 = (unsigned __int64)v127;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1504LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "21 32 8 15 __for_begin:389 64 8 13 __for_end:389 96 8 15 __for_begin:417 128 8 13 __for_end:417 "
                        "160 8 15 __for_begin:445 192 8 13 __for_end:445 224 8 15 __for_begin:473 256 8 13 __for_end:473 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 6"
                        "08 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 120 16 mcoin_conf"
                        "ig:397 1024 120 16 mcoin_config:425 1184 120 16 mcoin_config:453 1344 120 16 mcoin_config:482";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::rewriteAuditProductConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862750] = -234881024;
  v5[536862751] = -218959118;
  v5[536862755] = -234881024;
  v5[536862756] = -218959118;
  v5[536862760] = -234881024;
  v5[536862761] = -218959118;
  v5[536862765] = -218103808;
  v5[536862766] = -202116109;
  __for_range = &this->product_card_detail_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v3 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(__in);
    card_config = std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(__in);
    p_price_tier = &card_config->price_tier;
    tier_config_ptr = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(this, &card_config->price_tier);
    if ( tier_config_ptr )
    {
      v12 = ((v3 + 864) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_WORD *)(v12 + 12) = 0;
      *(_BYTE *)(v12 + 14) = 0;
      data::ProductMcoinDetailConfig::ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 864));
      if ( *(_BYTE *)(((unsigned __int64)&card_config->config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config->config_id);
      }
      config_id = card_config->config_id;
      v14 = *(_BYTE *)(((v3 + 872) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(p_price_tier) = v14 != 0;
        __asan_report_store4(v3 + 872, p_price_tier);
      }
      *(_DWORD *)(v3 + 872) = config_id;
      v15 = &card_config->price_tier;
      std::string::operator=(v3 + 880, &card_config->price_tier);
      if ( *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 912) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 912, v15);
      *(_DWORD *)(v3 + 912) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->mcoin_product_shop_type);
      }
      mcoin_product_shop_type = this->mcoin_product_shop_type;
      v17 = *(_BYTE *)(((v3 + 916) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)(((v3 - 108) & 7) + 3) >= v17 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(v3 + 916, v15);
      }
      *(_DWORD *)(v3 + 916) = mcoin_product_shop_type;
      v20 = tier_config_ptr;
      AuditMcoinFromTier = ShopmallExcelConfigMgr::getAuditMcoinFromTier(this, tier_config_ptr);
      v19 = *(_BYTE *)(((v3 + 920) >> 3) + 0x7FFF8000);
      LOBYTE(v20) = v19 != 0;
      if ( v19 != 0 && v19 <= 3 )
        __asan_report_store4(v3 + 920, v20);
      *(_DWORD *)(v3 + 920) = AuditMcoinFromTier;
      if ( *(char *)(((v3 + 936) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 936, v20, v3 + 936);
      *(_BYTE *)(v3 + 936) = 1;
      v21 = &card_config->price_tier;
      std::string::operator=(v3 + 944, &card_config->price_tier);
      if ( *(_BYTE *)(((unsigned __int64)&card_config->product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config->product_type);
      }
      product_type = card_config->product_type;
      v24 = *(_BYTE *)(((v3 + 976) >> 3) + 0x7FFF8000);
      if ( v24 != 0 && v24 <= 3 )
      {
        LOBYTE(v21) = v24 != 0;
        __asan_report_store4(v3 + 976, v21);
      }
      *(_DWORD *)(v3 + 976) = product_type;
      v25 = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::emplace<unsigned int &,data::ProductMcoinDetailConfig&>(
              &this->product_mcoin_detail_config_map,
              (unsigned int *)(v3 + 872),
              (data::ProductMcoinDetailConfig *)(v3 + 864),
              (unsigned int *)&this->product_mcoin_detail_config_map,
              v22);
      if ( !v25.second )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "rewriteAuditProductConfig",
          409);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])"config_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v27,
                (const unsigned int *)(v3 + 872));
        v6 = byte_1A11CF40;
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v28, (const char (*)[25])byte_1A11CF40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v107 = 0;
      }
      else
      {
        v6 = (const char *)(v3 + 872);
        std::vector<unsigned int>::push_back(
          &this->sorted_mcoin_config_id_vec,
          (const std::vector<unsigned int>::value_type *)(v3 + 872));
        v107 = 1;
      }
      data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 864));
      v11 = v107 == 1;
    }
    else
    {
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteAuditProductConfig",
        394);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])"tier_name:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &card_config->price_tier);
      v6 = byte_1A117C40;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    v29 = ((v3 + 864) >> 3) + 2147450880;
    *(_DWORD *)v29 = -117901064;
    *(_DWORD *)(v29 + 4) = -117901064;
    *(_DWORD *)(v29 + 8) = -117901064;
    *(_WORD *)(v29 + 12) = -1800;
    *(_BYTE *)(v29 + 14) = -8;
    if ( !v11 )
    {
      v30 = 0;
      goto LABEL_42;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v3 + 32));
  }
  v30 = 1;
LABEL_42:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v30 == 1 )
  {
    std::unordered_map<unsigned int,data::ProductCardDetailConfig>::clear(&this->product_card_detail_config_map);
    __for_range_0 = &this->product_play_detail_config_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(__for_range_0);
    while ( 1 )
    {
      v31 = (const char *)(v3 + 128);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v3 + 128)) )
        break;
      v116 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v3 + 96));
      std::get<0ul,unsigned int const,data::ProductPlayDetailConfig>(v116);
      play_config = std::get<1ul,unsigned int const,data::ProductPlayDetailConfig>(v116);
      v32 = &play_config->price_tier;
      tier_config_ptr_0 = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(this, &play_config->price_tier);
      if ( tier_config_ptr_0 )
      {
        v37 = ((v3 + 1024) >> 3) + 2147450880;
        *(_DWORD *)v37 = 0;
        *(_DWORD *)(v37 + 4) = 0;
        *(_DWORD *)(v37 + 8) = 0;
        *(_WORD *)(v37 + 12) = 0;
        *(_BYTE *)(v37 + 14) = 0;
        data::ProductMcoinDetailConfig::ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1024));
        if ( *(_BYTE *)(((unsigned __int64)&play_config->config_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_config->config_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_config->config_id);
        }
        v38 = play_config->config_id;
        v39 = *(_BYTE *)(((v3 + 1032) >> 3) + 0x7FFF8000);
        if ( v39 != 0 && v39 <= 3 )
        {
          LOBYTE(v32) = v39 != 0;
          __asan_report_store4(v3 + 1032, v32);
        }
        *(_DWORD *)(v3 + 1032) = v38;
        v40 = &play_config->price_tier;
        std::string::operator=(v3 + 1040, &play_config->price_tier);
        if ( *(_BYTE *)(((v3 + 1072) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1072) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 1072, v40);
        *(_DWORD *)(v3 + 1072) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->mcoin_product_shop_type);
        }
        v41 = this->mcoin_product_shop_type;
        v42 = *(_BYTE *)(((v3 + 1076) >> 3) + 0x7FFF8000);
        if ( v42 != 0 && (char)(((v3 - 32 + 84) & 7) + 3) >= v42 )
        {
          LOBYTE(v40) = v42 != 0;
          __asan_report_store4(v3 + 1076, v40);
        }
        *(_DWORD *)(v3 + 1076) = v41;
        v45 = tier_config_ptr_0;
        v43 = ShopmallExcelConfigMgr::getAuditMcoinFromTier(this, tier_config_ptr_0);
        v44 = *(_BYTE *)(((v3 + 1080) >> 3) + 0x7FFF8000);
        LOBYTE(v45) = v44 != 0;
        if ( v44 != 0 && v44 <= 3 )
          __asan_report_store4(v3 + 1080, v45);
        *(_DWORD *)(v3 + 1080) = v43;
        if ( *(char *)(((v3 + 1096) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(v3 + 1096, v45, v3 + 1096);
        *(_BYTE *)(v3 + 1096) = 1;
        v46 = &play_config->price_tier;
        std::string::operator=(v3 + 1104, &play_config->price_tier);
        if ( *(_BYTE *)(((unsigned __int64)&play_config->product_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&play_config->product_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&play_config->product_type);
        }
        v48 = play_config->product_type;
        v49 = *(_BYTE *)(((v3 + 1136) >> 3) + 0x7FFF8000);
        if ( v49 != 0 && v49 <= 3 )
        {
          LOBYTE(v46) = v49 != 0;
          __asan_report_store4(v3 + 1136, v46);
        }
        *(_DWORD *)(v3 + 1136) = v48;
        v50 = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::emplace<unsigned int &,data::ProductMcoinDetailConfig&>(
                &this->product_mcoin_detail_config_map,
                (unsigned int *)(v3 + 1032),
                (data::ProductMcoinDetailConfig *)(v3 + 1024),
                (unsigned int *)&this->product_mcoin_detail_config_map,
                v47);
        if ( !v50.second )
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "rewriteAuditProductConfig",
            437);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v51, (const char (*)[11])"config_id:");
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  (const unsigned int *)(v3 + 1032));
          v31 = byte_1A11CF40;
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v53, (const char (*)[25])byte_1A11CF40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v108 = 0;
        }
        else
        {
          v31 = (const char *)(v3 + 1032);
          std::vector<unsigned int>::push_back(
            &this->sorted_mcoin_config_id_vec,
            (const std::vector<unsigned int>::value_type *)(v3 + 1032));
          v108 = 1;
        }
        data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1024));
        v36 = v108 == 1;
      }
      else
      {
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "rewriteAuditProductConfig",
          422);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])"tier_name:");
        v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &play_config->price_tier);
        v31 = byte_1A117C40;
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v35, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v36 = 0;
      }
      v54 = ((v3 + 1024) >> 3) + 2147450880;
      *(_DWORD *)v54 = -117901064;
      *(_DWORD *)(v54 + 4) = -117901064;
      *(_DWORD *)(v54 + 8) = -117901064;
      *(_WORD *)(v54 + 12) = -1800;
      *(_BYTE *)(v54 + 14) = -8;
      if ( !v36 )
      {
        v55 = 0;
        goto LABEL_81;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v3 + 96));
    }
    v55 = 1;
LABEL_81:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v55 == 1 )
    {
      std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::clear(&this->product_play_detail_config_map);
      __for_range_1 = &this->product_concert_package_detail_config_map;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v31);
      *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v31);
      *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range_1);
      while ( 1 )
      {
        v56 = (const char *)(v3 + 192);
        if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v3 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v3 + 192)) )
          break;
        v120 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v3 + 160));
        std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v120);
        concert_config = std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v120);
        v57 = &concert_config->price_tier;
        tier_config_ptr_1 = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(this, &concert_config->price_tier);
        if ( tier_config_ptr_1 )
        {
          v62 = ((v3 + 1184) >> 3) + 2147450880;
          *(_DWORD *)v62 = 0;
          *(_DWORD *)(v62 + 4) = 0;
          *(_DWORD *)(v62 + 8) = 0;
          *(_WORD *)(v62 + 12) = 0;
          *(_BYTE *)(v62 + 14) = 0;
          data::ProductMcoinDetailConfig::ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1184));
          if ( *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config->config_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config->config_id);
          }
          v63 = concert_config->config_id;
          v64 = *(_BYTE *)(((v3 + 1192) >> 3) + 0x7FFF8000);
          if ( v64 != 0 && v64 <= 3 )
          {
            LOBYTE(v57) = v64 != 0;
            __asan_report_store4(v3 + 1192, v57);
          }
          *(_DWORD *)(v3 + 1192) = v63;
          v65 = &concert_config->price_tier;
          std::string::operator=(v3 + 1200, &concert_config->price_tier);
          if ( *(_BYTE *)(((v3 + 1232) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1232) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 1232, v65);
          *(_DWORD *)(v3 + 1232) = 1;
          if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->mcoin_product_shop_type);
          }
          v66 = this->mcoin_product_shop_type;
          v67 = *(_BYTE *)(((v3 + 1236) >> 3) + 0x7FFF8000);
          if ( v67 != 0 && (char)(((v3 - 96 + 52) & 7) + 3) >= v67 )
          {
            LOBYTE(v65) = v67 != 0;
            __asan_report_store4(v3 + 1236, v65);
          }
          *(_DWORD *)(v3 + 1236) = v66;
          v70 = tier_config_ptr_1;
          v68 = ShopmallExcelConfigMgr::getAuditMcoinFromTier(this, tier_config_ptr_1);
          v69 = *(_BYTE *)(((v3 + 1240) >> 3) + 0x7FFF8000);
          LOBYTE(v70) = v69 != 0;
          if ( v69 != 0 && v69 <= 3 )
            __asan_report_store4(v3 + 1240, v70);
          *(_DWORD *)(v3 + 1240) = v68;
          if ( *(char *)(((v3 + 1256) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v3 + 1256, v70, v3 + 1256);
          *(_BYTE *)(v3 + 1256) = 1;
          v71 = &concert_config->price_tier;
          std::string::operator=(v3 + 1264, &concert_config->price_tier);
          if ( *(_BYTE *)(((unsigned __int64)&concert_config->product_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config->product_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config->product_type);
          }
          v73 = concert_config->product_type;
          v74 = *(_BYTE *)(((v3 + 1296) >> 3) + 0x7FFF8000);
          if ( v74 != 0 && v74 <= 3 )
          {
            LOBYTE(v71) = v74 != 0;
            __asan_report_store4(v3 + 1296, v71);
          }
          *(_DWORD *)(v3 + 1296) = v73;
          v75 = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::emplace<unsigned int &,data::ProductMcoinDetailConfig&>(
                  &this->product_mcoin_detail_config_map,
                  (unsigned int *)(v3 + 1192),
                  (data::ProductMcoinDetailConfig *)(v3 + 1184),
                  (unsigned int *)&this->product_mcoin_detail_config_map,
                  v72);
          if ( !v75.second )
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteAuditProductConfig",
              465);
            v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 608),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v77 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v76, (const char (*)[11])"config_id:");
            v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v77,
                    (const unsigned int *)(v3 + 1192));
            v56 = byte_1A11CF40;
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v78, (const char (*)[25])byte_1A11CF40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
            *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v109 = 0;
          }
          else
          {
            v56 = (const char *)(v3 + 1192);
            std::vector<unsigned int>::push_back(
              &this->sorted_mcoin_config_id_vec,
              (const std::vector<unsigned int>::value_type *)(v3 + 1192));
            v109 = 1;
          }
          data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1184));
          v61 = v109 == 1;
        }
        else
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "rewriteAuditProductConfig",
            450);
          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v59 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v58, (const char (*)[11])"tier_name:");
          v60 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v59, &concert_config->price_tier);
          v56 = byte_1A117C40;
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v60, (const char (*)[7])byte_1A117C40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v61 = 0;
        }
        v79 = ((v3 + 1184) >> 3) + 2147450880;
        *(_DWORD *)v79 = -117901064;
        *(_DWORD *)(v79 + 4) = -117901064;
        *(_DWORD *)(v79 + 8) = -117901064;
        *(_WORD *)(v79 + 12) = -1800;
        *(_BYTE *)(v79 + 14) = -8;
        if ( !v61 )
        {
          v80 = 0;
          goto LABEL_120;
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v3 + 160));
      }
      v80 = 1;
LABEL_120:
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      if ( v80 == 1 )
      {
        std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::clear(&this->product_concert_package_detail_config_map);
        __for_range_2 = &this->product_apple_gift_card_detail_config_map;
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v56);
        *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v56);
        *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(__for_range_2);
        while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 224),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 256)) )
        {
          v124 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v3 + 224));
          std::get<0ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v124);
          apple_gift_card = std::get<1ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(v124);
          p_audit_display_tier = &apple_gift_card->audit_display_tier;
          audit_display_tier_config_ptr = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(
                                            this,
                                            &apple_gift_card->audit_display_tier);
          if ( audit_display_tier_config_ptr )
          {
            v86 = ((v3 + 1344) >> 3) + 2147450880;
            *(_DWORD *)v86 = 0;
            *(_DWORD *)(v86 + 4) = 0;
            *(_DWORD *)(v86 + 8) = 0;
            *(_WORD *)(v86 + 12) = 0;
            *(_BYTE *)(v86 + 14) = 0;
            data::ProductMcoinDetailConfig::ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1344));
            if ( *(_BYTE *)(((unsigned __int64)&apple_gift_card->config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&apple_gift_card->config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&apple_gift_card->config_id);
            }
            v87 = apple_gift_card->config_id;
            v88 = *(_BYTE *)(((v3 + 1352) >> 3) + 0x7FFF8000);
            if ( v88 != 0 && v88 <= 3 )
            {
              LOBYTE(p_audit_display_tier) = v88 != 0;
              __asan_report_store4(v3 + 1352, p_audit_display_tier);
            }
            *(_DWORD *)(v3 + 1352) = v87;
            v89 = &apple_gift_card->price_tier;
            std::string::operator=(v3 + 1360, &apple_gift_card->price_tier);
            if ( *(_BYTE *)(((v3 + 1392) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1392) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 1392, v89);
            *(_DWORD *)(v3 + 1392) = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->mcoin_product_shop_type);
            }
            v90 = this->mcoin_product_shop_type;
            v91 = *(_BYTE *)(((v3 + 1396) >> 3) + 0x7FFF8000);
            if ( v91 != 0 && (char)(((v3 + 116) & 7) + 3) >= v91 )
            {
              LOBYTE(v89) = v91 != 0;
              __asan_report_store4(v3 + 1396, v89);
            }
            *(_DWORD *)(v3 + 1396) = v90;
            v94 = audit_display_tier_config_ptr;
            v92 = ShopmallExcelConfigMgr::getAuditMcoinFromTier(this, audit_display_tier_config_ptr);
            v93 = *(_BYTE *)(((v3 + 1400) >> 3) + 0x7FFF8000);
            LOBYTE(v94) = v93 != 0;
            if ( v93 != 0 && v93 <= 3 )
              __asan_report_store4(v3 + 1400, v94);
            *(_DWORD *)(v3 + 1400) = v92;
            if ( *(char *)(((v3 + 1416) >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(v3 + 1416, v94, v3 + 1416);
            *(_BYTE *)(v3 + 1416) = 1;
            v95 = &apple_gift_card->audit_display_tier;
            std::string::operator=(v3 + 1424, &apple_gift_card->audit_display_tier);
            if ( *(_BYTE *)(((unsigned __int64)&apple_gift_card->product_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&apple_gift_card->product_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&apple_gift_card->product_type);
            }
            v97 = apple_gift_card->product_type;
            v98 = *(_BYTE *)(((v3 + 1456) >> 3) + 0x7FFF8000);
            if ( v98 != 0 && v98 <= 3 )
            {
              LOBYTE(v95) = v98 != 0;
              __asan_report_store4(v3 + 1456, v95);
            }
            *(_DWORD *)(v3 + 1456) = v97;
            v99 = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::emplace<unsigned int &,data::ProductMcoinDetailConfig&>(
                    &this->product_mcoin_detail_config_map,
                    (unsigned int *)(v3 + 1352),
                    (data::ProductMcoinDetailConfig *)(v3 + 1344),
                    (unsigned int *)&this->product_mcoin_detail_config_map,
                    v96);
            if ( !v99.second )
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "rewriteAuditProductConfig",
                494);
              v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 736),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v101 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v100,
                       (const char (*)[11])"config_id:");
              v102 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v101,
                       (const unsigned int *)(v3 + 1352));
              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v102, (const char (*)[25])byte_1A11CF40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v110 = 0;
            }
            else
            {
              std::vector<unsigned int>::push_back(
                &this->sorted_mcoin_config_id_vec,
                (const std::vector<unsigned int>::value_type *)(v3 + 1352));
              v110 = 1;
            }
            data::ProductMcoinDetailConfig::~ProductMcoinDetailConfig((data::ProductMcoinDetailConfig *const)(v3 + 1344));
            v85 = v110 == 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteAuditProductConfig",
              479);
            v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v83 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v82, (const char (*)[11])"tier_name:");
            v84 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                    v83,
                    &apple_gift_card->audit_display_tier);
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v84, (const char (*)[7])byte_1A117C40);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
            *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v85 = 0;
          }
          v103 = ((v3 + 1344) >> 3) + 2147450880;
          *(_DWORD *)v103 = -117901064;
          *(_DWORD *)(v103 + 4) = -117901064;
          *(_DWORD *)(v103 + 8) = -117901064;
          *(_WORD *)(v103 + 12) = -1800;
          *(_BYTE *)(v103 + 14) = -8;
          if ( !v85 )
          {
            v104 = 0;
            goto LABEL_159;
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v3 + 224));
        }
        v104 = 1;
LABEL_159:
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v104 == 1 )
        {
          std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::clear(&this->product_apple_gift_card_detail_config_map);
          if ( ShopmallExcelConfigMgr::rewriteConfigIdTypeMap(this) )
          {
            *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteAuditProductConfig",
              507);
            v105 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 800),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v105,
              (const char (*)[29])"rewriteConfigIdTypeMap fails");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
            v2 = -1;
          }
          else
          {
            v2 = 0;
          }
        }
      }
    }
  }
  if ( v127 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862748) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450984 - (((_DWORD)v5 + 2147450992) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1504LL, v127);
  }
  return v2;
};

// Line 514: range 000000000CAED832-000000000CAEDCAD
int32_t __cdecl ShopmallExcelConfigMgr::rewriteSaleConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 TimeByStr; // rsi
  uint32_t v6; // edi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int> *v10; // rdx
  int32_t result; // eax
  data::ShopmallGoodsSaleConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::reference __in; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int>::value_type *id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ShopmallGoodsSaleConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v17[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:516 64 8 13 __for_end:516 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteSaleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  __for_range = &this->shopmall_goods_sale_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::ShopmallGoodsSaleConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ShopmallGoodsSaleConfig>(__in);
    TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&config->discount_begin_time);
    if ( *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&config->discount_begin_timestamp, TimeByStr);
    }
    config->discount_begin_timestamp = TimeByStr;
    v6 = common::tools::TimeUtils::getTimeByStr(&config->discount_end_time);
    if ( *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3)
                                                             + 0x7FFF8000) )
    {
      v6 = (_DWORD)config + 100;
      __asan_report_store4(&config->discount_end_timestamp, (((_BYTE)config + 100) & 7u) + 3);
    }
    config->discount_end_timestamp = v6;
    if ( *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->discount_begin_timestamp);
    }
    if ( !config->discount_begin_timestamp || !config->discount_end_timestamp )
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
        3u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteSaleConfig",
        522);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])" invalid_time: ");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &config->discount_begin_time);
      v9 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v8, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &config->discount_end_time);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    v10 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->goods_id_to_sale_id_map,
            &config->goods_id);
    std::vector<unsigned int>::push_back(v10, id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 530: range 000000000CAEDCAE-000000000CAEE1B6
int32_t __cdecl ShopmallExcelConfigMgr::parsePlatformType(
        ShopmallExcelConfigMgr *const this,
        const std::string *platform_type_str,
        uint32_t *platform_type)
{
  common::milog::MiLogStream *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int v14; // edi
  const google::protobuf::EnumDescriptor *platform_type_desc_ptr; // [rsp+20h] [rbp-110h]
  const google::protobuf::EnumValueDescriptor *value_desc_ptr; // [rsp+28h] [rbp-108h]
  char v18[256]; // [rsp+30h] [rbp-100h] BYREF

  v3 = (common::milog::MiLogStream *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = (common::milog::MiLogStream *)v4;
  }
  v3->log_ = (common::milog::MiLog *)1102416563;
  v3->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v3->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ShopmallExcelConfigMgr::parsePlatformType;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  platform_type_desc_ptr = proto::PlatformType_descriptor();
  if ( platform_type_desc_ptr )
  {
    value_desc_ptr = google::protobuf::EnumDescriptor::FindValueByName(platform_type_desc_ptr, platform_type_str);
    if ( value_desc_ptr )
    {
      if ( google::protobuf::EnumValueDescriptor::number(value_desc_ptr) >= 0 )
      {
        v14 = google::protobuf::EnumValueDescriptor::number(value_desc_ptr);
        if ( *(_BYTE *)(((unsigned __int64)platform_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)platform_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          v14 = (int)platform_type;
          __asan_report_store4(platform_type, ((unsigned __int8)platform_type & 7u) + 3);
        }
        *platform_type = v14;
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&v3[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v3 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v3[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v3 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "parsePlatformType",
          547);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v3 + 5,
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v11,
                (const char (*)[38])"parsePlatformType platform_type_str: ");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, platform_type_str);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1A11D100);
        common::milog::MiLogStream::~MiLogStream(v3 + 5);
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v3[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "parsePlatformType",
        541);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v3 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v8,
             (const char (*)[38])"parsePlatformType platform_type_str: ");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, platform_type_str);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1A11D100);
      common::milog::MiLogStream::~MiLogStream(v3 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v3[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v3[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v3 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "parsePlatformType",
      534);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v6,
      (const char (*)[31])"platform_type_desc_ptr is null");
    common::milog::MiLogStream::~MiLogStream(v3 + 1);
    result = -1;
  }
  if ( v18 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v3->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 556: range 000000000CAEE1B8-000000000CAEEA32
int32_t __cdecl ShopmallExcelConfigMgr::rewriteRecommendConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int type; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::ShopmallRecommendConfigVec *__for_range; // [rsp+20h] [rbp-1A0h]
  data::ShopmallRecommendConfig *recommend_config; // [rsp+28h] [rbp-198h]
  std::vector<data::ShopmallRecommendCond> *__for_range_0; // [rsp+30h] [rbp-190h]
  data::ShopmallRecommendCond *cond; // [rsp+38h] [rbp-188h]
  char v22[384]; // [rsp+40h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:558 64 8 13 __for_end:558 96 8 15 __for_begin:562 128 8 13 __for_end:562 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteRecommendConfig;
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
  __for_range = &this->shopmall_recommend_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::vector<data::ShopmallRecommendConfig>::iterator *)(v2 + 32) = std::vector<data::ShopmallRecommendConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::vector<data::ShopmallRecommendConfig>::iterator *)(v2 + 64) = std::vector<data::ShopmallRecommendConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *)(v2 + 64)) )
  {
    recommend_config = __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *const)(v2 + 32));
    common::tools::MiscUtils::removeEmptyElement<data::ShopmallRecommendCond,data::ShopmallRecommendCondType data::ShopmallRecommendCond::*>(
      &recommend_config->cond_vec,
      (data::ShopmallRecommendCondType *)8);
    __for_range_0 = &recommend_config->cond_vec;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, 8LL);
    *(std::vector<data::ShopmallRecommendCond>::iterator *)(v2 + 96) = std::vector<data::ShopmallRecommendCond>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, 8LL);
    *(std::vector<data::ShopmallRecommendCond>::iterator *)(v2 + 128) = std::vector<data::ShopmallRecommendCond>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>(
              (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *)(v2 + 128)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      type = cond->type;
      if ( type <= 3 )
      {
        if ( type >= 2 )
        {
          TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&cond->param1_str);
          if ( *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->param1 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&cond->param1, TimeByStr);
          }
          cond->param1 = TimeByStr;
          if ( !cond->param1 )
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteRecommendConfig",
              588);
            v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v12,
                    (const char (*)[16])byte_1A11D260);
            v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &cond->param1_str);
            v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" type: ");
            common::milog::MiLogStream::operator<<<data::ShopmallRecommendCondType,(data::ShopmallRecommendCondType*)0>(
              v15,
              &cond->type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else if ( type )
        {
          if ( type == 1 && common::tools::StringUtils::strToNum<unsigned int>(&cond->param1_str, &cond->param1, 1) )
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "rewriteRecommendConfig",
              577);
            v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 224),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])byte_1A11D260);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &cond->param1_str);
            v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" type: ");
            common::milog::MiLogStream::operator<<<data::ShopmallRecommendCondType,(data::ShopmallRecommendCondType*)0>(
              v10,
              &cond->type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
            *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "rewriteRecommendConfig",
            569);
          v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])byte_1A11D220);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>::operator++((__gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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

// Line 599: range 000000000CAEEA34-000000000CAEF3B8
int32_t __cdecl ShopmallExcelConfigMgr::rewriteProductIdConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  const std::string *v10; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const std::string *v18; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::string >,false,true>,bool> v19; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  data::ProductIdConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::reference __in; // [rsp+28h] [rbp-1C8h]
  const std::string *product_id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,std::pair<const std::string,data::ProductIdConfig> >::type *product_config; // [rsp+38h] [rbp-1B8h]
  std::vector<std::string> *__for_range_0; // [rsp+40h] [rbp-1B0h]
  const std::string *platform_type_str; // [rsp+48h] [rbp-1A8h]
  char v34[416]; // [rsp+50h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 17 platform_type:609 64 8 15 __for_begin:601 96 8 13 __for_end:601 128 8 15 __for_begin:6"
                        "07 160 8 13 __for_end:607 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteProductIdConfig;
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
  __for_range = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::ProductIdConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
    product_id = std::get<0ul,std::string const,data::ProductIdConfig>(__in);
    product_config = std::get<1ul,std::string const,data::ProductIdConfig>(__in);
    std::vector<unsigned int>::clear(&product_config->platform_type_list);
    if ( !std::vector<std::string>::empty(&product_config->platform_type_str_list) )
    {
      __for_range_0 = &product_config->platform_type_str_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v5);
      *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v5);
      *(std::vector<std::string>::iterator *)(v2 + 160) = std::vector<std::string>::end(__for_range_0);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 160)) )
      {
        platform_type_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 128));
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 48, v2 + 160);
        *(_DWORD *)(v2 + 48) = 0;
        if ( ShopmallExcelConfigMgr::parsePlatformType(this, platform_type_str, (uint32_t *)(v2 + 48)) )
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "rewriteProductIdConfig",
            613);
          v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 192),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 v6,
                 (const char (*)[39])"parsePlatformType failed, product_id: ");
          v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
          v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                 v8,
                 (const char (*)[22])" ,platform_type_str: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, platform_type_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
          *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          std::vector<unsigned int>::push_back(
            &product_config->platform_type_list,
            (const std::vector<unsigned int>::value_type *)(v2 + 48));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    if ( (unsigned __int8)std::string::empty() != 1
      && (v11 = std::unordered_map<std::string,std::string>::emplace<std::string&,std::string const&>(
                  &this->entitlement_2_product_map,
                  &product_config->entitlement_id,
                  product_id,
                  (std::string *)&this->entitlement_2_product_map,
                  v10),
          !v11.second) )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteProductIdConfig",
        625);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])"product_id:");
      v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, product_id);
      v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v15, (const char (*)[25])byte_1A11D480);
      v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &product_config->entitlement_id);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])byte_1A11D4C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    else if ( (unsigned __int8)std::string::empty() != 1 )
    {
      v19 = std::unordered_map<std::string,std::string>::emplace<std::string&,std::string const&>(
              &this->catalog_item_2_product_map,
              &product_config->catalog_item_id,
              product_id,
              (std::string *)&this->catalog_item_2_product_map,
              v18);
      if ( !v19.second )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "rewriteProductIdConfig",
          634);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v21, (const char (*)[12])"product_id:");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, product_id);
        v24 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v23, (const char (*)[26])byte_1A11D500);
        v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, &product_config->catalog_item_id);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])byte_1A11D4C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
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

// Line 643: range 000000000CAEF3BA-000000000CAEF6B7
int32_t __cdecl ShopmallExcelConfigMgr::rewriteConcertPackageDetailConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 TimeByStr; // rsi
  uint32_t v6; // edi
  __int64 v7; // rsi
  int32_t result; // eax
  data::ProductConcertPackageDetailConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *concert_config; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>::__node_type *)"2 32 8 15 __for_begin:644 64 8 13 __for_end:644";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>::__node_type *)ShopmallExcelConfigMgr::rewriteConcertPackageDetailConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->product_concert_package_detail_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(__in);
    concert_config = std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(__in);
    TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&concert_config->begin_time);
    if ( *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&concert_config->begin_timestamp, TimeByStr);
    }
    concert_config->begin_timestamp = TimeByStr;
    v6 = common::tools::TimeUtils::getTimeByStr(&concert_config->end_time);
    if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                    + 0x7FFF8000) )
    {
      v6 = (_DWORD)concert_config + 164;
      __asan_report_store4(&concert_config->end_timestamp, (((_BYTE)concert_config - 92) & 7u) + 3);
    }
    concert_config->end_timestamp = v6;
    v7 = (unsigned int)common::tools::TimeUtils::getTimeByStr(&concert_config->delivery_end_time);
    if ( *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&concert_config->delivery_end_timestamp, v7);
    }
    concert_config->delivery_end_timestamp = v7;
    common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
      &concert_config->content_vec,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 657: range 000000000CAEF6B8-000000000CAEF896
int32_t __cdecl ShopmallExcelConfigMgr::rewriteAppleGiftCardDetailConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ProductAppleGiftCardDetailConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig> >::type *apple_gift_card; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>::__node_type *)"2 32 8 15 __for_begin:658 64 8 13 __for_end:658";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>::__node_type *)ShopmallExcelConfigMgr::rewriteAppleGiftCardDetailConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->product_apple_gift_card_detail_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(__in);
    apple_gift_card = std::get<1ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
      &apple_gift_card->content_vec,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 667: range 000000000CAEF898-000000000CAEFA76
int32_t __cdecl ShopmallExcelConfigMgr::rewritePsnCompensationDetailConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ProductPsnCompensationDetailConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig> >::type *psn_compensation_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>::__node_type *)"2 32 8 15 __for_begin:668 64 8 13 __for_end:668";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>::__node_type *)ShopmallExcelConfigMgr::rewritePsnCompensationDetailConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->product_psn_compensation_detail_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(__in);
    psn_compensation_config = std::get<1ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
      &psn_compensation_config->content_vec,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 677: range 000000000CAEFA78-000000000CAEFDE4
int32_t __cdecl ShopmallExcelConfigMgr::rewriteEpicCatalogShieldConfig(ShopmallExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::pair<std::__detail::_Node_iterator<std::string,true,true>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::EpicCatalogShieldConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false,false>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::EpicCatalogShieldConfig> >::type *epic_catalog_shield_config; // [rsp+38h] [rbp-C8h]
  char v14[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:679 64 8 13 __for_end:679 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::rewriteEpicCatalogShieldConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->epic_catalog_shield_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, v1);
  *(std::unordered_map<unsigned int,data::EpicCatalogShieldConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::EpicCatalogShieldConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, v1);
  *(std::unordered_map<unsigned int,data::EpicCatalogShieldConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::EpicCatalogShieldConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::EpicCatalogShieldConfig>(v12);
    epic_catalog_shield_config = (std::tuple_element<1,const std::pair<unsigned int const,data::EpicCatalogShieldConfig> >::type *)std::get<1ul,unsigned int const,data::EpicCatalogShieldConfig>(v12);
    v5 = std::unordered_set<std::string>::insert(
           &this->epic_shield_catalog_item_set,
           &epic_catalog_shield_config->catalog_item_id);
    if ( !v5.second )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "rewriteEpicCatalogShieldConfig",
        684);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v6, (const char (*)[26])byte_1A11D500);
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
             v7,
             &epic_catalog_shield_config->catalog_item_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])byte_1A11D660);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::EpicCatalogShieldConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v14 == (char *)v2 )
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

// Line 692: range 000000000CAEFDE6-000000000CAF0147
int32_t __cdecl ShopmallExcelConfigMgr::checkConfig(
        ShopmallExcelConfigMgr *const this,
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
  int retf; // [rsp+1Ch] [rbp-84h]
  int retg; // [rsp+1Ch] [rbp-84h]
  int reth; // [rsp+1Ch] [rbp-84h]
  int reti; // [rsp+1Ch] [rbp-84h]
  int retj; // [rsp+1Ch] [rbp-84h]
  int retk; // [rsp+1Ch] [rbp-84h]
  int retl; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v20[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = ShopmallExcelConfigMgr::checkEntraceConfig(this, txt_config_mgr);
  retb = ShopmallExcelConfigMgr::checkRechargeMcoinDetailConfig(this, txt_config_mgr) | reta;
  retc = ShopmallExcelConfigMgr::checkRechargeCardDetailConfig(this, txt_config_mgr) | retb;
  retd = ShopmallExcelConfigMgr::checkRechargePlayDetailConfig(this, txt_config_mgr) | retc;
  rete = ShopmallExcelConfigMgr::checkRecommendConfig(this, txt_config_mgr) | retd;
  retf = ShopmallExcelConfigMgr::checkTierConfig(this, txt_config_mgr) | rete;
  retg = ShopmallExcelConfigMgr::checkProductIdConfig(this, txt_config_mgr) | retf;
  reth = ShopmallExcelConfigMgr::checkRechargePS4PackageDetailConfig(this, txt_config_mgr) | retg;
  reti = ShopmallExcelConfigMgr::checkGoogleGiftCardDetailConfig(this, txt_config_mgr) | reth;
  retj = ShopmallExcelConfigMgr::checkSaleConfig(this, txt_config_mgr) | reti;
  retk = ShopmallExcelConfigMgr::checkConcertPackageDetailConfig(this, txt_config_mgr) | retj;
  retl = ShopmallExcelConfigMgr::checkAppleGiftCardDetailConfig(this, txt_config_mgr) | retk;
  ret = ShopmallExcelConfigMgr::checkPsnCompensationDetailConfig(this, txt_config_mgr) | retl;
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "checkConfig",
      710);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
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

// Line 716: range 000000000CAF0148-000000000CAF064E
int32_t __cdecl ShopmallExcelConfigMgr::checkEntraceConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::ShopmallEntranceExcelConfigVec *__for_range; // [rsp+20h] [rbp-110h]
  const data::ShopmallEntranceExcelConfig *shop_config; // [rsp+28h] [rbp-108h]
  char v13[256]; // [rsp+30h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:718 64 8 13 __for_end:718 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkEntraceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->shopmall_entrance_excel_config_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<data::ShopmallEntranceExcelConfig>::iterator *)(v2 + 32) = std::vector<data::ShopmallEntranceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::ShopmallEntranceExcelConfig>::iterator *)(v2 + 64) = std::vector<data::ShopmallEntranceExcelConfig>::end(__for_range);
  while ( __gnu_cxx::operator!=<data::ShopmallEntranceExcelConfig *,std::vector<data::ShopmallEntranceExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *)(v2 + 64)) )
  {
    shop_config = __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig *,std::vector<data::ShopmallEntranceExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&shop_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_config->id);
    }
    if ( shop_config->id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_config->shop_type);
      }
      if ( shop_config->shop_type == SHOP_TYPE_NONE )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkEntraceConfig",
          728);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])"shop_id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &shop_config->id);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])byte_1A11D800);
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkEntraceConfig",
        722);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])byte_1A11D780);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig *,std::vector<data::ShopmallEntranceExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 737: range 000000000CAF0650-000000000CAF166F
int32_t __cdecl ShopmallExcelConfigMgr::checkRechargeMcoinDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  data::ShopType mcoin_product_shop_type; // ecx
  char v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  uint32_t mcoin_num; // ecx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t v29; // ecx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  double v37; // xmm0_8
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-26Ch]
  data::ProductMcoinDetailConfigMap *__for_range; // [rsp+18h] [rbp-268h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::reference v46; // [rsp+20h] [rbp-260h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *config_id; // [rsp+28h] [rbp-258h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *mcoin_config; // [rsp+30h] [rbp-250h]
  data::PriceTierConfig *tier_config_ptr; // [rsp+38h] [rbp-248h]
  char v50[576]; // [rsp+40h] [rbp-240h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 15 __for_begin:739 64 8 13 __for_end:739 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRechargeMcoinDetailConfig;
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
  v4[536862736] = -202116109;
  ret = 0;
  __for_range = &this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v2 + 64)) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductMcoinDetailConfig>(v46);
    mcoin_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductMcoinDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductMcoinDetailConfig>(v46);
    v5 = mcoin_config;
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, mcoin_config) )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkRechargeMcoinDetailConfig",
        744);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])"config_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v8,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v9 = *(unsigned __int8 *)(((unsigned __int64)&this->mcoin_product_shop_type >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&this->mcoin_product_shop_type);
      mcoin_product_shop_type = this->mcoin_product_shop_type;
      v11 = *(_BYTE *)(((unsigned __int64)&mcoin_config->shop_type >> 3) + 0x7FFF8000);
      LOBYTE(v5) = v11 != 0;
      if ( v11 != 0 && (char)((((_BYTE)mcoin_config + 52) & 7) + 3) >= v11 )
        __asan_report_load4(&mcoin_config->shop_type);
      if ( mcoin_product_shop_type == mcoin_config->shop_type )
      {
        if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&mcoin_config->mcoin_num);
        }
        if ( mcoin_config->mcoin_num )
        {
          if ( *(char *)(((unsigned __int64)&mcoin_config->is_audit >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&mcoin_config->is_audit, v5, &mcoin_config->is_audit);
          if ( !mcoin_config->is_audit )
          {
            tier_config_ptr = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(this, &mcoin_config->price_tier);
            if ( tier_config_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&mcoin_config->mcoin_num);
              }
              mcoin_num = mcoin_config->mcoin_num;
              if ( *(_BYTE *)(((unsigned __int64)&tier_config_ptr->vip_point >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&tier_config_ptr->vip_point >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&tier_config_ptr->vip_point);
              }
              if ( mcoin_num == tier_config_ptr->vip_point )
              {
                if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&mcoin_config->mcoin_num);
                }
                v29 = mcoin_config->mcoin_num;
                if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_first >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_first >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&mcoin_config->mcoin_first);
                }
                if ( v29 == mcoin_config->mcoin_first )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_non_first >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)mcoin_config + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_non_first >> 3)
                                                                                + 0x7FFF8000) )
                  {
                    __asan_report_load4(&mcoin_config->mcoin_non_first);
                  }
                  *(float *)&v37 = (float)(int)mcoin_config->mcoin_non_first;
                  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&mcoin_config->mcoin_num >> 3) + 0x7FFF8000) <= 3 )
                  {
                    v37 = __asan_report_load4(&mcoin_config->mcoin_num);
                  }
                  if ( *(float *)&v37 > (float)((float)(int)mcoin_config->mcoin_num * 0.30000001) )
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
                      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                      "checkRechargeMcoinDetailConfig",
                      797);
                    v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 480),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v38,
                            (const char (*)[11])"config_id:");
                    v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, config_id);
                    v41 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            v40,
                            (const char (*)[45])byte_1A11DB40);
                    v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v41,
                            &mcoin_config->mcoin_non_first);
                    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v42, (const char (*)[8])byte_1A11DBA0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
                  }
                }
                else
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
                    "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                    "checkRechargeMcoinDetailConfig",
                    789);
                  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 416),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v30,
                          (const char (*)[11])"config_id:");
                  v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, config_id);
                  v33 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                          v32,
                          (const char (*)[30])byte_1A11DA20);
                  v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v33,
                          &mcoin_config->mcoin_num);
                  v35 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          v34,
                          (const char (*)[42])byte_1A11DAE0);
                  v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v35,
                          &mcoin_config->mcoin_first);
                  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v36,
                    (const char (*)[11])byte_1A11DAA0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
                  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
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
                  "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                  "checkRechargeMcoinDetailConfig",
                  780);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 352),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v22,
                        (const char (*)[11])"config_id:");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, config_id);
                v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        v24,
                        (const char (*)[30])byte_1A11DA20);
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        &mcoin_config->mcoin_num);
                v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v26,
                        (const char (*)[18])byte_1A11DA60);
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v27,
                        &tier_config_ptr->vip_point);
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])byte_1A11DAA0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
                *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkRechargeMcoinDetailConfig",
                772);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 288),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v18,
                      (const char (*)[11])"tier_name:");
              v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &mcoin_config->price_tier);
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])byte_1A117C40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
              *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
        }
        else
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkRechargeMcoinDetailConfig",
            760);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])"config_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v17, (const char (*)[20])byte_1A11D9E0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRechargeMcoinDetailConfig",
          751);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"config_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, config_id);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v14, (const char (*)[32])byte_1A11D9A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v2 + 32));
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

// Line 806: range 000000000CAF1670-000000000CAF2F16
int32_t __cdecl ShopmallExcelConfigMgr::checkRechargeCardDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v14; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v24; // rdx
  MaterialExcelConfigMgr *v25; // rcx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  data::ShopType card_product_shop_type; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rdx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  int32_t ret; // [rsp+1Ch] [rbp-3D4h]
  data::ProductCardDetailConfigMap *__for_range; // [rsp+20h] [rbp-3D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::reference v53; // [rsp+28h] [rbp-3C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *config_id; // [rsp+30h] [rbp-3C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *card_config; // [rsp+38h] [rbp-3B8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-3B0h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-3A8h]
  const unsigned int *item_id_0; // [rsp+50h] [rbp-3A0h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_num_0; // [rsp+58h] [rbp-398h]
  const unsigned int *item_id; // [rsp+60h] [rbp-390h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_num; // [rsp+68h] [rbp-388h]
  char v62[896]; // [rsp+70h] [rbp-380h] BYREF

  v2 = (unsigned __int64)v62;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(864LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 8 15 __for_begin:808 64 8 13 __for_end:808 96 8 9 <unknown> 128 8 15 __for_begin:826 160 8"
                        " 13 __for_end:826 192 8 9 <unknown> 224 8 15 __for_begin:842 256 8 13 __for_end:842 288 32 9 <un"
                        "known> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRechargeCardDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
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
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -218959118;
  v4[536862746] = -202116109;
  ret = 0;
  __for_range = &this->product_card_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v2 + 64)) )
  {
    v53 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductCardDetailConfig>(v53);
    card_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductCardDetailConfig>(v53);
    v5 = card_config;
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, card_config) )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkRechargeCardDetailConfig",
        813);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])"config_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v8,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v9 = *(unsigned __int8 *)(((unsigned __int64)&card_config->days >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&card_config->days);
      if ( !card_config->days )
        goto LABEL_35;
      if ( *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config->card_product_type);
      }
      if ( card_config->card_product_type == CARD_PRODUCT_TYPE_HCOIN )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&card_config->mcoin_base);
        }
        if ( !card_config->mcoin_base )
          goto LABEL_35;
        v5 = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *)((((_BYTE)card_config + 68) & 7u) + 3);
        if ( *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config->hcoin_per_day);
        }
        if ( !card_config->hcoin_per_day )
          goto LABEL_35;
      }
      if ( *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->card_product_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config->card_product_type);
      }
      if ( card_config->card_product_type != CARD_PRODUCT_TYPE_RESIN )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&card_config->mcoin_base >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&card_config->mcoin_base);
      }
      if ( card_config->mcoin_base )
        goto LABEL_35;
      v5 = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductCardDetailConfig> >::type *)((((_BYTE)card_config + 68) & 7u) + 3);
      if ( *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)card_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->hcoin_per_day >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&card_config->hcoin_per_day);
      }
      if ( card_config->hcoin_per_day )
      {
LABEL_35:
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRechargeCardDetailConfig",
          822);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])"config_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v12, (const char (*)[40])byte_1A11DD80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      else
      {
LABEL_38:
        __for_range_0 = &card_config->base_item_map;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, v5);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v5);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 160) = std::map<unsigned int,unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v13 = (char *)(v2 + 160);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 160)) )
            break;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 128));
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 96, v13);
          if ( ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v14 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v14->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v14, 8LL);
          }
          *(std::pair<unsigned int const,unsigned int> *)(v2 + 96) = *v14;
          item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 96));
          item_num = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 96));
          p_material_config_mgr = &txt_config_mgr->material_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(item_id);
          }
          if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *item_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)item_num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(item_num);
            }
            if ( !*item_num )
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkRechargeCardDetailConfig",
                836);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      v20,
                      (const char (*)[40])byte_1A11DE40);
              v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, item_id);
              v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v22,
                      (const char (*)[12])" config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
              *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkRechargeCardDetailConfig",
              830);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v16,
                    (const char (*)[45])byte_1A11DDE0);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, item_id);
            v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v18,
                    (const char (*)[12])" config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
            *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 128));
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        __for_range_1 = &card_config->per_day_item_map;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v13);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v13);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 256) = std::map<unsigned int,unsigned int>::end(__for_range_1);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 224),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 256)) )
        {
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
          v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 224));
          if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 192, v2 + 256);
          if ( ((unsigned __int8)v24 & 7) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v24 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v24->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v24, 8LL);
          }
          *(std::pair<unsigned int const,unsigned int> *)(v2 + 192) = *v24;
          item_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 192));
          item_num_0 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v2 + 192));
          v25 = &txt_config_mgr->material_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(item_id_0);
          }
          if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(v25, *item_id_0) )
          {
            if ( *(_BYTE *)(((unsigned __int64)item_num_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)item_num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_num_0 >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(item_num_0);
            }
            if ( !*item_num_0 )
            {
              *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 608, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 608),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkRechargeCardDetailConfig",
                852);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                      v30,
                      (const char (*)[46])byte_1A11DF00);
              v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, item_id_0);
              v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v32,
                      (const char (*)[12])" config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
              *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkRechargeCardDetailConfig",
              846);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v26,
                    (const char (*)[45])byte_1A11DEA0);
            v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, item_id_0);
            v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v28,
                    (const char (*)[12])" config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
            *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 224));
        }
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( *(_BYTE *)(((unsigned __int64)&this->card_product_shop_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->card_product_shop_type >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->card_product_shop_type);
        }
        card_product_shop_type = this->card_product_shop_type;
        if ( *(_BYTE *)(((unsigned __int64)&card_config->shop_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config->shop_type >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config->shop_type);
        }
        if ( card_product_shop_type == card_config->shop_type )
        {
          if ( *(_BYTE *)(((unsigned __int64)&card_config->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&card_config->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&card_config->replace_mcoin_num);
          }
          if ( card_config->replace_mcoin_num )
          {
            if ( *(_BYTE *)(((unsigned __int64)&card_config->remind_mail_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&card_config->remind_mail_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&card_config->remind_mail_id);
            }
            if ( card_config->remind_mail_id
              && !data::MailExcelConfigMgrBase::findMailExcelConfig(
                    &txt_config_mgr->mail_config_mgr,
                    card_config->remind_mail_id) )
            {
              ret = -1;
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 800, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 800),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkRechargeCardDetailConfig",
                875);
              v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 800),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v45 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v44,
                      (const char (*)[11])"config_id:");
              v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, config_id);
              v47 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v46,
                      (const char (*)[23])byte_1A11E000);
              v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v47,
                      &card_config->remind_mail_id);
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v48, (const char (*)[16])byte_1A11E040);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
              *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkRechargeCardDetailConfig",
              869);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v38, (const char (*)[11])"config_id:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, config_id);
            v41 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v40,
                    (const char (*)[35])byte_1A11DF60);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    &card_config->replace_mcoin_num);
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])byte_1A11DFC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkRechargeCardDetailConfig",
            862);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 672),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])"config_id:");
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, config_id);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v37, (const char (*)[32])byte_1A11D9A0);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v2 + 32));
  }
  if ( v62 == (char *)v2 )
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

// Line 883: range 000000000CAF2F18-000000000CAF3CCC
int32_t __cdecl ShopmallExcelConfigMgr::checkRechargePlayDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::unordered_map<data::ProductPlayType,unsigned int>::mapped_type *v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  __gnu_cxx::__normal_iterator<data::ProductPlayType*,std::vector<data::ProductPlayType> >::reference v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  std::unordered_map<data::ProductPlayType,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2BCh]
  data::ProductPlayDetailConfigMap *__for_range; // [rsp+18h] [rbp-2B8h]
  std::vector<data::ProductPlayType> *__for_range_0; // [rsp+20h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::reference v30; // [rsp+28h] [rbp-2A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *config_id; // [rsp+30h] [rbp-2A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *play_config; // [rsp+38h] [rbp-298h]
  char v33[656]; // [rsp+40h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 4 9 <unknown> 48 4 9 <unknown> 64 4 9 <unknown> 80 4 8 type:908 96 8 15 __for_begin:886 12"
                        "8 8 13 __for_end:886 160 8 15 __for_begin:908 192 8 13 __for_end:908 224 8 9 <unknown> 256 24 24"
                        " only_one_product_vec:904 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 56 21 pla"
                        "y_type_num_map:885";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRechargePlayDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218103808;
  v4[536862738] = -202116109;
  ret = 0;
  std::unordered_map<data::ProductPlayType,unsigned int>::unordered_map((std::unordered_map<data::ProductPlayType,unsigned int> *const)(v2 + 512));
  __for_range = &this->product_play_detail_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v2 + 128)) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 96));
    config_id = std::get<0ul,unsigned int const,data::ProductPlayDetailConfig>(v30);
    play_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductPlayDetailConfig>(v30);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, play_config) )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkRechargePlayDetailConfig",
        891);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v8 = *(unsigned __int8 *)(((unsigned __int64)&play_config->play_type >> 3) + 0x7FFF8000);
      if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
        __asan_report_load4(&play_config->play_type);
      if ( play_config->play_type )
      {
        v12 = std::unordered_map<data::ProductPlayType,unsigned int>::operator[](
                (std::unordered_map<data::ProductPlayType,unsigned int> *const)(v2 + 512),
                &play_config->play_type);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        ++*v12;
      }
      else
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRechargePlayDetailConfig",
          897);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"config_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v11, (const char (*)[21])byte_1A11E200);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  v13 = ((v2 + 256) >> 3) + 2147450880;
  *(_WORD *)v13 = 0;
  *(_BYTE *)(v13 + 2) = 0;
  std::vector<data::ProductPlayType>::vector((std::vector<data::ProductPlayType> *const)(v2 + 256));
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v2 + 128);
  *(_DWORD *)(v2 + 32) = 1;
  std::vector<data::ProductPlayType>::push_back(
    (std::vector<data::ProductPlayType> *const)(v2 + 256),
    (std::vector<data::ProductPlayType>::value_type *)(v2 + 32));
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v2 + 32);
  *(_DWORD *)(v2 + 48) = 2;
  std::vector<data::ProductPlayType>::push_back(
    (std::vector<data::ProductPlayType> *const)(v2 + 256),
    (std::vector<data::ProductPlayType>::value_type *)(v2 + 48));
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64, v2 + 48);
  *(_DWORD *)(v2 + 64) = 3;
  v14 = (char *)(v2 + 64);
  std::vector<data::ProductPlayType>::push_back(
    (std::vector<data::ProductPlayType> *const)(v2 + 256),
    (std::vector<data::ProductPlayType>::value_type *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = (std::vector<data::ProductPlayType> *)(v2 + 256);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v14);
  *(std::vector<data::ProductPlayType>::iterator *)(v2 + 160) = std::vector<data::ProductPlayType>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v14);
  *(std::vector<data::ProductPlayType>::iterator *)(v2 + 192) = std::vector<data::ProductPlayType>::end(__for_range_0);
  while ( 1 )
  {
    v15 = (char *)(v2 + 192);
    if ( !__gnu_cxx::operator!=<data::ProductPlayType *,std::vector<data::ProductPlayType>>(
            (const __gnu_cxx::__normal_iterator<data::ProductPlayType*,std::vector<data::ProductPlayType> > *)(v2 + 160),
            (const __gnu_cxx::__normal_iterator<data::ProductPlayType*,std::vector<data::ProductPlayType> > *)(v2 + 192)) )
      break;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
    v16 = __gnu_cxx::__normal_iterator<data::ProductPlayType *,std::vector<data::ProductPlayType>>::operator*((const __gnu_cxx::__normal_iterator<data::ProductPlayType*,std::vector<data::ProductPlayType> > *const)(v2 + 160));
    v17 = (int *)v16;
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v16);
    }
    v18 = *v17;
    v19 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
    if ( v19 != 0 && v19 <= 3 )
    {
      LOBYTE(v15) = v19 != 0;
      __asan_report_store4(v2 + 80, v15);
    }
    *(_DWORD *)(v2 + 80) = v18;
    v20 = std::unordered_map<data::ProductPlayType,unsigned int>::operator[](
            (std::unordered_map<data::ProductPlayType,unsigned int> *const)(v2 + 512),
            (const std::unordered_map<data::ProductPlayType,unsigned int>::key_type *)(v2 + 80));
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    if ( *v21 > 1u )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkRechargePlayDetailConfig",
        912);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v22,
              (const char (*)[19])"product_play_type:");
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 80);
      v24 = (__int64)data::enumValToStr((data::ProductPlayType)*(_DWORD *)(v2 + 80), (__int64)"product_play_type:");
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
        v24 = __asan_report_store8(v2 + 224, "product_play_type:");
      *(_QWORD *)(v2 + 224) = v24;
      v25 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)(v2 + 224));
      common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v25, (const char (*)[20])byte_1A11E280);
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    }
    __gnu_cxx::__normal_iterator<data::ProductPlayType *,std::vector<data::ProductPlayType>>::operator++((__gnu_cxx::__normal_iterator<data::ProductPlayType*,std::vector<data::ProductPlayType> > *const)(v2 + 160));
  }
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  std::vector<data::ProductPlayType>::~vector((std::vector<data::ProductPlayType> *const)(v2 + 256));
  std::unordered_map<data::ProductPlayType,unsigned int>::~unordered_map((std::unordered_map<data::ProductPlayType,unsigned int> *const)(v2 + 512));
  result = ret;
  if ( v33 == (char *)v2 )
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

// Line 920: range 000000000CAF3CCE-000000000CAF475E
int32_t __cdecl ShopmallExcelConfigMgr::checkRechargePS4PackageDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1F4h]
  data::ProductPS4PackageDetailConfigMap *__for_range; // [rsp+20h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::reference __in; // [rsp+28h] [rbp-1E8h]
  const unsigned int *config_id; // [rsp+30h] [rbp-1E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPS4PackageDetailConfig> >::type *package_config; // [rsp+38h] [rbp-1D8h]
  std::vector<data::PackageContentConfig> *__for_range_0; // [rsp+40h] [rbp-1D0h]
  const data::PackageContentConfig *content; // [rsp+48h] [rbp-1C8h]
  char v32[448]; // [rsp+50h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 15 __for_begin:922 64 8 13 __for_end:922 96 8 15 __for_begin:938 128 8 13 __for_end:938 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRechargePS4PackageDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->product_ps4_package_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductPS4PackageDetailConfig>(__in);
    package_config = std::get<1ul,unsigned int const,data::ProductPS4PackageDetailConfig>(__in);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, package_config) )
    {
      ret = -1;
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkRechargePS4PackageDetailConfig",
        927);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
      v9 = *(unsigned __int8 *)(((unsigned __int64)&package_config->mail_config_id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&package_config->mail_config_id);
      if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, package_config->mail_config_id) )
      {
        common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
          &package_config->content_vec,
          (unsigned int *)8);
        __for_range_0 = &package_config->content_vec;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 96, 8LL);
        *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 96) = std::vector<data::PackageContentConfig>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, 8LL);
        *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 128) = std::vector<data::PackageContentConfig>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>(
                  (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 96),
                  (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 128)) )
        {
          content = __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
          p_item_config_mgr = &txt_config_mgr->item_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&content->material_id);
          }
          if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, content->material_id) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&content->material_num);
            }
            if ( !content->material_num )
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkRechargePS4PackageDetailConfig",
                949);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v19,
                      (const char (*)[11])"config_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
              v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v21,
                      (const char (*)[19])byte_1A11E420);
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &content->material_id);
              common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v23, (const char (*)[17])byte_1A11E4A0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
              *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkRechargePS4PackageDetailConfig",
              943);
            v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])"config_id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, config_id);
            v17 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v16,
                    (const char (*)[19])byte_1A11E420);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &content->material_id);
            common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1A11E460);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          }
          __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator++((__gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRechargePS4PackageDetailConfig",
          933);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])"config_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v12, (const char (*)[30])byte_1A11E3E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 958: range 000000000CAF4760-000000000CAF5381
int32_t __cdecl ShopmallExcelConfigMgr::checkGoogleGiftCardDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+18h] [rbp-238h]
  uint32_t item_type; // [rsp+1Ch] [rbp-234h]
  data::ProductGoogleGiftCardDetailConfigMap *__for_range; // [rsp+20h] [rbp-230h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::reference __in; // [rsp+28h] [rbp-228h]
  const unsigned int *config_id; // [rsp+30h] [rbp-220h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig> >::type *google_gift_card; // [rsp+38h] [rbp-218h]
  std::vector<data::PackageContentConfig> *__for_range_0; // [rsp+40h] [rbp-210h]
  const data::PackageContentConfig *material; // [rsp+48h] [rbp-208h]
  char v35[512]; // [rsp+50h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 15 __for_begin:960 64 8 13 __for_end:960 96 8 15 __for_begin:982 128 8 13 __for_end:982 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkGoogleGiftCardDetailConfig;
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
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->product_google_gift_card_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(__in);
    google_gift_card = std::get<1ul,unsigned int const,data::ProductGoogleGiftCardDetailConfig>(__in);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, google_gift_card) )
    {
      ret = -1;
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkGoogleGiftCardDetailConfig",
        965);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
      v9 = *(unsigned __int8 *)(((unsigned __int64)&google_gift_card->mail_config_id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&google_gift_card->mail_config_id);
      if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, google_gift_card->mail_config_id) )
      {
        common::tools::MiscUtils::removeEmptyElement<data::PackageContentConfig,unsigned int data::PackageContentConfig::*>(
          &google_gift_card->content_vec,
          (unsigned int *)8);
        if ( std::vector<data::PackageContentConfig>::empty(&google_gift_card->content_vec) )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 288, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 288),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkGoogleGiftCardDetailConfig",
            979);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v13, (const char (*)[47])byte_1A11E5E0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          __for_range_0 = &google_gift_card->content_vec;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 96, 8LL);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 96) = std::vector<data::PackageContentConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 128, 8LL);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 128) = std::vector<data::PackageContentConfig>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 96),
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 128)) )
          {
            material = __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
            p_item_config_mgr = &txt_config_mgr->item_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&material->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&material->material_id);
            }
            item_type = ItemExcelConfigMgr::getItemType(p_item_config_mgr, material->material_id);
            if ( item_type && item_type != 5 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&material->material_num >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)material + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material->material_num >> 3)
                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(&material->material_num);
              }
              if ( !material->material_num )
              {
                ret = -1;
                *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 416, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 416),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                  "checkGoogleGiftCardDetailConfig",
                  994);
                v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 416),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v21,
                        (const char (*)[11])"config_id:");
                v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, config_id);
                v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v23,
                        (const char (*)[19])byte_1A11E640);
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        &material->material_id);
                common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])byte_1A11E4A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
                *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkGoogleGiftCardDetailConfig",
                988);
              v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v16,
                      (const char (*)[11])"config_id:");
              v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, config_id);
              v19 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v18,
                      (const char (*)[19])byte_1A11E640);
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &material->material_id);
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1A11E680);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
              *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
            }
            __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator++((__gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
          }
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkGoogleGiftCardDetailConfig",
          971);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])"config_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v12, (const char (*)[30])byte_1A11E3E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1003: range 000000000CAF5382-000000000CAF5B7C
int32_t __cdecl ShopmallExcelConfigMgr::checkRechargeDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const data::ProductDetailConfig *detail_config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::unordered_map<unsigned int,ConfigProductInfo> *p_config_2_product_map; // rdx
  std::unordered_map<unsigned int,ConfigProductInfo> *v7; // rdx
  const std::unordered_map<unsigned int,ConfigProductInfo>::key_type *p_config_id; // rcx
  __int64 v9; // rsi
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  const data::ProductDetailConfig *detail_configa; // [rsp+0h] [rbp-1A0h]
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  char v24[384]; // [rsp+20h] [rbp-180h] BYREF

  detail_configa = detail_config;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 9 <unknown> 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRechargeDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&detail_config->config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&detail_config->config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&detail_config->config_id);
  }
  if ( !detail_config->config_id )
  {
    ret = -1;
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "checkRechargeDetailConfig",
      1008);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    detail_config = (const data::ProductDetailConfig *)byte_1A11E780;
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v5, (const char (*)[20])byte_1A11E780);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  p_config_2_product_map = &this->config_2_product_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, detail_config);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,ConfigProductInfo>::end(p_config_2_product_map);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  v7 = &this->config_2_product_map;
  p_config_id = &detail_configa->config_id;
  v9 = *(unsigned __int8 *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 )
    __asan_report_store8(v2 + 32, v9);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,ConfigProductInfo>::find(
                                                                                 v7,
                                                                                 p_config_id);
  v10 = std::__detail::operator==<std::pair<unsigned int const,ConfigProductInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 32),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 64));
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "checkRechargeDetailConfig",
      1013);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 160),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &detail_configa->config_id);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v12, (const char (*)[31])byte_1A11E7C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( (unsigned __int8)std::string::empty() )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "checkRechargeDetailConfig",
      1018);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])"config_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &detail_configa->config_id);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])byte_1A11E800);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  }
  if ( !data::ShopmallExcelConfigMgrBase::findPriceTierConfig(this, &detail_configa->price_tier) )
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
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "checkRechargeDetailConfig",
      1023);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])"config_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &detail_configa->config_id);
    v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])byte_1A11E840);
    v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &detail_configa->price_tier);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])byte_1A11E460);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
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

// Line 1029: range 000000000CAF5B7E-000000000CAF67BA
int32_t __cdecl ShopmallExcelConfigMgr::checkRecommendConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  std::unordered_map<unsigned int,ConfigProductInfo> *p_config_2_product_map; // rdx
  std::unordered_map<unsigned int,ConfigProductInfo> *v16; // rdx
  bool v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-2ACh]
  data::ShopmallRecommendConfigVec *__for_range; // [rsp+20h] [rbp-2A0h]
  data::ShopmallRecommendConfig *recommend_config; // [rsp+28h] [rbp-298h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-290h]
  std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-288h]
  std::vector<data::ShopmallRecommendCond> *__for_range_2; // [rsp+40h] [rbp-280h]
  const data::ShopmallRecommendCond *cond; // [rsp+48h] [rbp-278h]
  const unsigned int *config_id; // [rsp+50h] [rbp-270h]
  char v32[608]; // [rsp+60h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 13 goods_id:1042 64 8 16 __for_begin:1032 96 8 14 __for_end:1032 128 8 16 __for_begin:10"
                        "42 160 8 14 __for_end:1042 192 8 16 __for_begin:1053 224 8 14 __for_end:1053 256 8 9 <unknown> 2"
                        "88 8 9 <unknown> 320 8 16 __for_begin:1066 352 8 14 __for_end:1066 384 32 9 <unknown> 448 32 9 <"
                        "unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkRecommendConfig;
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
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  ret = 0;
  __for_range = &this->shopmall_recommend_config_vec;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<data::ShopmallRecommendConfig>::iterator *)(v2 + 64) = std::vector<data::ShopmallRecommendConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::vector<data::ShopmallRecommendConfig>::iterator *)(v2 + 96) = std::vector<data::ShopmallRecommendConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !__gnu_cxx::operator!=<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *)(v2 + 96)) )
      break;
    recommend_config = __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *const)(v2 + 64));
    __for_range_0 = &recommend_config->goods_id_vec;
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
      if ( !data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
              &txt_config_mgr->shop_config_mgr,
              *(unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRecommendConfig",
          1048);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])byte_1A11EA00);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])byte_1A11E460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &recommend_config->config_id_vec;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v6);
    *(std::vector<unsigned int>::iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, v6);
    *(std::vector<unsigned int>::iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v14 = (char *)(v2 + 224);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 192),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 224)) )
        break;
      config_id = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      p_config_2_product_map = &this->config_2_product_map;
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 288, v14);
      *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 288) = std::unordered_map<unsigned int,ConfigProductInfo>::end(p_config_2_product_map);
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      v16 = &this->config_2_product_map;
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 256, v14);
      *(std::unordered_map<unsigned int,ConfigProductInfo>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,ConfigProductInfo>::find(
                                                                                      v16,
                                                                                      config_id);
      v17 = std::__detail::operator==<std::pair<unsigned int const,ConfigProductInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 256),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v2 + 288));
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRecommendConfig",
          1058);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])byte_1A11EA40);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, config_id);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(v20, (const char (*)[31])byte_1A11E7C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v2 + 192));
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    common::tools::MiscUtils::removeEmptyElement<data::ShopmallRecommendCond,data::ShopmallRecommendCondType data::ShopmallRecommendCond::*>(
      &recommend_config->cond_vec,
      (data::ShopmallRecommendCondType *)8);
    __for_range_2 = &recommend_config->cond_vec;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, 8LL);
    *(std::vector<data::ShopmallRecommendCond>::iterator *)(v2 + 320) = std::vector<data::ShopmallRecommendCond>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, 8LL);
    *(std::vector<data::ShopmallRecommendCond>::iterator *)(v2 + 352) = std::vector<data::ShopmallRecommendCond>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>(
              (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *)(v2 + 320),
              (const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *)(v2 + 352)) )
    {
      cond = __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *const)(v2 + 320));
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->type);
      }
      if ( cond->type == SHOPMALL_RECOMMEND_COND_TYPE_NONE )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkRecommendConfig",
          1072);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v21, (const char (*)[25])byte_1A11D220);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::ShopmallRecommendCond *,std::vector<data::ShopmallRecommendCond>>::operator++((__gnu_cxx::__normal_iterator<data::ShopmallRecommendCond*,std::vector<data::ShopmallRecommendCond> > *const)(v2 + 320));
    }
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig *,std::vector<data::ShopmallRecommendConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ShopmallRecommendConfig*,std::vector<data::ShopmallRecommendConfig> > *const)(v2 + 64));
  }
  result = ret;
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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

// Line 1085: range 000000000CAF67BC-000000000CAF6B6C
int32_t __cdecl ShopmallExcelConfigMgr::checkTierConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::PriceTierConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::PriceTierConfig>,false,true>::reference v12; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<const std::string,data::PriceTierConfig> >::type *name; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<const std::string,data::PriceTierConfig> >::type *tier_config; // [rsp+38h] [rbp-C8h]
  char v15[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 16 __for_begin:1087 64 8 14 __for_end:1087 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkTierConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->price_tier_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<std::string,data::PriceTierConfig>::iterator *)(v2 + 32) = std::unordered_map<std::string,data::PriceTierConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::string,data::PriceTierConfig>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::PriceTierConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::PriceTierConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PriceTierConfig>,true> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::PriceTierConfig>,true> *)(v2 + 64)) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<std::string const,data::PriceTierConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::PriceTierConfig>,false,true> *const)(v2 + 32));
    name = std::get<0ul,std::string const,data::PriceTierConfig>(v12);
    tier_config = (std::tuple_element<1,const std::pair<const std::string,data::PriceTierConfig> >::type *)std::get<1ul,std::string const,data::PriceTierConfig>(v12);
    if ( *(_BYTE *)(((unsigned __int64)&tier_config->vip_point >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tier_config->vip_point >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tier_config->vip_point);
    }
    if ( !tier_config->vip_point && std::operator!=<char>(name, "None") )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkTierConfig",
        1092);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])"tier:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, name);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])byte_1A11EBA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::PriceTierConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::PriceTierConfig>,false,true> *const)(v2 + 32));
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

// Line 1100: range 000000000CAF6B6E-000000000CAF779E
int32_t __cdecl ShopmallExcelConfigMgr::checkProductIdConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const char *config_id; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  unsigned int *v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-24Ch]
  data::ProductIdConfigMap *__for_range; // [rsp+18h] [rbp-248h]
  std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::reference v32; // [rsp+20h] [rbp-240h]
  std::tuple_element<0,std::pair<const std::string,data::ProductIdConfig> >::type *product_id; // [rsp+28h] [rbp-238h]
  std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *product_id_config; // [rsp+30h] [rbp-230h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-228h]
  char v36[544]; // [rsp+40h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 4 18 platform_type:1139 64 8 16 __for_begin:1102 96 8 14 __for_end:1102 128 8 16 __for_beg"
                        "in:1139 160 8 14 __for_end:1139 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkProductIdConfig;
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
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<std::string,data::ProductIdConfig>::iterator *)(v2 + 96) = std::unordered_map<std::string,data::ProductIdConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 96)) )
  {
    v32 = std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
    product_id = std::get<0ul,std::string const,data::ProductIdConfig>(v32);
    product_id_config = (std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *)std::get<1ul,std::string const,data::ProductIdConfig>(v32);
    if ( *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&product_id_config->config_id);
    }
    config_id = (const char *)product_id_config->config_id;
    if ( ShopmallExcelConfigMgr::findConfigIdType(this, (uint32_t)config_id) == PRODUCT_TYPE_NONE )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkProductIdConfig",
        1107);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])"product_id:");
      v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, product_id);
      v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])byte_1A11ED00);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &product_id_config->config_id);
      config_id = byte_1A117C40;
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])byte_1A117C40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      if ( !std::vector<unsigned int>::empty(&product_id_config->platform_type_list) )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkProductIdConfig",
          1117);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])"product_id:");
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, product_id);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v13, (const char (*)[25])byte_1A11ED40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
      if ( (unsigned __int8)std::string::empty() != 1 )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkProductIdConfig",
          1124);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])"product_id:");
        v16 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, product_id);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v16, (const char (*)[28])byte_1A11ED80);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else if ( (unsigned __int8)std::string::empty() != 1 )
    {
      if ( !std::vector<unsigned int>::empty(&product_id_config->platform_type_list) )
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkProductIdConfig",
          1133);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])"product_id:");
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, product_id);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v19, (const char (*)[25])byte_1A11ED40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      __for_range_0 = &product_id_config->platform_type_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, config_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, config_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v20 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v21 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v22 = (int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = *v22;
        v24 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v24 != 0 && v24 <= 3 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(v2 + 48, v20);
        }
        *(_DWORD *)(v2 + 48) = v23;
        if ( TxtConfigMgr::isPsnPlatform(*(_DWORD *)(v2 + 48)) )
        {
          ret = -1;
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkProductIdConfig",
            1144);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  v25,
                  (const char (*)[35])"platform_type is psn, product_id: ");
          v27 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, product_id);
          v28 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v27,
                  (const char (*)[18])" ,platform_type: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 64));
  }
  result = ret;
  if ( v36 == (char *)v2 )
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

// Line 1154: range 000000000CAF77A0-000000000CAF87BE
int32_t __cdecl ShopmallExcelConfigMgr::checkSaleConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ShopExcelConfigMgr *p_shop_config_mgr; // rcx
  uint32_t *p_goods_id; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t begin_timestamp; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t end_timestamp; // ecx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t discount_begin_timestamp; // ecx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  uint32_t discount_hcoin; // ecx
  uint32_t discount_mcoin; // ecx
  uint32_t discount_scoin; // ecx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-22Ch]
  data::ShopmallGoodsSaleConfigMap *__for_range; // [rsp+18h] [rbp-228h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::reference v43; // [rsp+20h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ShopmallGoodsSaleConfig> >::type *config; // [rsp+30h] [rbp-210h]
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+38h] [rbp-208h]
  char v46[512]; // [rsp+40h] [rbp-200h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 16 __for_begin:1156 64 8 14 __for_end:1156 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkSaleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -202116109;
  ret = 0;
  __for_range = &this->shopmall_goods_sale_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopmallGoodsSaleConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false> *)(v2 + 64)) )
  {
    v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ShopmallGoodsSaleConfig>(v43);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ShopmallGoodsSaleConfig> >::type *)std::get<1ul,unsigned int const,data::ShopmallGoodsSaleConfig>(v43);
    p_shop_config_mgr = &txt_config_mgr->shop_config_mgr;
    p_goods_id = &config->goods_id;
    if ( *(_BYTE *)(((unsigned __int64)p_goods_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_goods_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_goods_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_goods_id);
    }
    goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(p_shop_config_mgr, config->goods_id);
    if ( goods_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&goods_config_ptr->begin_timestamp);
      }
      begin_timestamp = goods_config_ptr->begin_timestamp;
      if ( *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->discount_begin_timestamp);
      }
      if ( begin_timestamp <= config->discount_begin_timestamp )
      {
        if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->end_timestamp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)goods_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->end_timestamp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&goods_config_ptr->end_timestamp);
        }
        end_timestamp = goods_config_ptr->end_timestamp;
        if ( *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&config->discount_end_timestamp);
        }
        if ( end_timestamp >= config->discount_end_timestamp )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->discount_begin_timestamp);
          }
          discount_begin_timestamp = config->discount_begin_timestamp;
          if ( *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discount_end_timestamp >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&config->discount_end_timestamp);
          }
          if ( discount_begin_timestamp < config->discount_end_timestamp )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->discount_hcoin >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discount_hcoin >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&config->discount_hcoin);
            }
            if ( config->discount_hcoin )
              goto LABEL_52;
            if ( *(_BYTE *)(((unsigned __int64)&config->discount_mcoin >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->discount_mcoin >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->discount_mcoin);
            }
            if ( config->discount_mcoin )
              goto LABEL_52;
            if ( *(_BYTE *)(((unsigned __int64)&config->discount_scoin >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->discount_scoin >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->discount_scoin);
            }
            if ( config->discount_scoin )
            {
LABEL_52:
              if ( *(_BYTE *)(((unsigned __int64)&config->discount_hcoin >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->discount_hcoin >> 3)
                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&config->discount_hcoin);
              }
              discount_hcoin = config->discount_hcoin;
              if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_hcoin >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_hcoin >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&goods_config_ptr->cost_hcoin);
              }
              if ( discount_hcoin > goods_config_ptr->cost_hcoin )
                goto LABEL_67;
              if ( *(_BYTE *)(((unsigned __int64)&config->discount_mcoin >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->discount_mcoin >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->discount_mcoin);
              }
              discount_mcoin = config->discount_mcoin;
              if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_mcoin >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)goods_config_ptr + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_mcoin >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&goods_config_ptr->cost_mcoin);
              }
              if ( discount_mcoin > goods_config_ptr->cost_mcoin )
                goto LABEL_67;
              if ( *(_BYTE *)(((unsigned __int64)&config->discount_scoin >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&config->discount_scoin >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&config->discount_scoin);
              }
              discount_scoin = config->discount_scoin;
              if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_scoin >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)goods_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&goods_config_ptr->cost_scoin >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&goods_config_ptr->cost_scoin);
              }
              if ( discount_scoin > goods_config_ptr->cost_scoin )
              {
LABEL_67:
                ret = -1;
                *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 416, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 416),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                  "checkSaleConfig",
                  1196);
                v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 416),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v38 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v37,
                        (const char (*)[18])byte_1A11EF20);
                v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &config->goods_id);
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v39, (const char (*)[33])byte_1A11F120);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
                *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkSaleConfig",
                1188);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 352),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v31,
                      (const char (*)[18])byte_1A11EF20);
              v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->goods_id);
              common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v33, (const char (*)[22])byte_1A11F0E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
              *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
          {
            ret = -1;
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 288, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 288),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkSaleConfig",
              1180);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 288),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v25,
                    (const char (*)[18])byte_1A11EF20);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->goods_id);
            v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v27,
                    (const char (*)[15])byte_1A11EFA0);
            v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v28, &config->discount_begin_time);
            v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                    v29,
                    (const char (*)[22])byte_1A11F0A0);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &config->discount_end_time);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
            *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkSaleConfig",
            1174);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v18, (const char (*)[18])byte_1A11EF20);
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->goods_id);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])byte_1A11F020);
          v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &config->discount_end_time);
          v23 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v22, (const char (*)[22])byte_1A11F060);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &goods_config_ptr->end_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkSaleConfig",
          1168);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v11, (const char (*)[18])byte_1A11EF20);
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config->goods_id);
        v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])byte_1A11EFA0);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, &config->discount_begin_time);
        v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v15, (const char (*)[22])byte_1A11EFE0);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, &goods_config_ptr->begin_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkSaleConfig",
        1162);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])byte_1A11EF20);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->goods_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])byte_1A11EF60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopmallGoodsSaleConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 1204: range 000000000CAF87C0-000000000CAF9D55
int32_t __cdecl ShopmallExcelConfigMgr::checkConcertPackageDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  uint32_t begin_timestamp; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  uint32_t delivery_end_timestamp; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  __int64 mail_config_id; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  data::ShopType concert_product_shop_type; // ecx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  int32_t ret; // [rsp+1Ch] [rbp-374h]
  data::ProductConcertPackageDetailConfigMap *__for_range; // [rsp+20h] [rbp-370h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::reference v46; // [rsp+28h] [rbp-368h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *config_id; // [rsp+30h] [rbp-360h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *concert_config; // [rsp+38h] [rbp-358h]
  const std::vector<data::PackageContentConfig> *__for_range_0; // [rsp+40h] [rbp-350h]
  const data::PackageContentConfig *content; // [rsp+48h] [rbp-348h]
  char v51[832]; // [rsp+50h] [rbp-340h] BYREF

  v2 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 32 8 16 __for_begin:1206 64 8 14 __for_end:1206 96 8 16 __for_begin:1249 128 8 14 __for_end:1"
                        "249 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknow"
                        "n> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkConcertPackageDetailConfig;
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
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  ret = 0;
  __for_range = &this->product_concert_package_detail_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v2 + 64)) )
  {
    v46 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 32));
    config_id = std::get<0ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v46);
    concert_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductConcertPackageDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductConcertPackageDetailConfig>(v46);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, concert_config) )
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
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkConcertPackageDetailConfig",
        1211);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v8 = *(unsigned __int8 *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000);
      if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
        __asan_report_load4(&concert_config->begin_timestamp);
      if ( !concert_config->begin_timestamp )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(&concert_config->end_timestamp);
      }
      if ( !concert_config->end_timestamp )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&concert_config->delivery_end_timestamp);
      }
      if ( concert_config->delivery_end_timestamp )
      {
        if ( *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&concert_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&concert_config->begin_timestamp);
        }
        begin_timestamp = concert_config->begin_timestamp;
        if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(&concert_config->end_timestamp);
        }
        if ( begin_timestamp < concert_config->end_timestamp )
        {
          if ( *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&concert_config->delivery_end_timestamp >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&concert_config->delivery_end_timestamp);
          }
          delivery_end_timestamp = concert_config->delivery_end_timestamp;
          if ( *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)concert_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->end_timestamp >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&concert_config->end_timestamp);
          }
          if ( delivery_end_timestamp >= concert_config->end_timestamp )
          {
            p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&concert_config->mail_config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&concert_config->mail_config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&concert_config->mail_config_id);
            }
            mail_config_id = concert_config->mail_config_id;
            if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, mail_config_id) )
            {
              if ( std::vector<data::PackageContentConfig>::empty(&concert_config->content_vec) )
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
                  "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                  "checkConcertPackageDetailConfig",
                  1246);
                v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 480),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v23 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                        v22,
                        (const char (*)[47])byte_1A11F440);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
                *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
              }
              else
              {
                __for_range_0 = &concert_config->content_vec;
                *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 96, mail_config_id);
                *(std::vector<data::PackageContentConfig>::const_iterator *)(v2 + 96) = std::vector<data::PackageContentConfig>::begin(__for_range_0);
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 128, mail_config_id);
                *(std::vector<data::PackageContentConfig>::const_iterator *)(v2 + 128) = std::vector<data::PackageContentConfig>::end(__for_range_0);
                while ( __gnu_cxx::operator!=<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>(
                          (const __gnu_cxx::__normal_iterator<const data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 96),
                          (const __gnu_cxx::__normal_iterator<const data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 128)) )
                {
                  content = __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
                  p_item_config_mgr = &txt_config_mgr->item_config_mgr;
                  if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&content->material_id);
                  }
                  if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, content->material_id) )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load4(&content->material_num);
                    }
                    if ( !content->material_num )
                    {
                      ret = -1;
                      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 608, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 608),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                        "checkConcertPackageDetailConfig",
                        1260);
                      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 608),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v30,
                              (const char (*)[11])"config_id:");
                      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, config_id);
                      v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                              v32,
                              (const char (*)[19])byte_1A11E420);
                      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v33,
                              &content->material_id);
                      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v34,
                        (const char (*)[17])byte_1A11E4A0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
                      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
                    }
                  }
                  else
                  {
                    ret = -1;
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
                      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                      "checkConcertPackageDetailConfig",
                      1254);
                    v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 544),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v25,
                            (const char (*)[11])"config_id:");
                    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, config_id);
                    v28 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                            v27,
                            (const char (*)[19])byte_1A11E420);
                    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v28,
                            &content->material_id);
                    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                      v29,
                      (const char (*)[10])byte_1A11E460);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
                    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
                  }
                  __gnu_cxx::__normal_iterator<data::PackageContentConfig const*,std::vector<data::PackageContentConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 96));
                }
                *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
                if ( *(_BYTE *)(((unsigned __int64)&this->concert_product_shop_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->concert_product_shop_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->concert_product_shop_type);
                }
                concert_product_shop_type = this->concert_product_shop_type;
                if ( *(_BYTE *)(((unsigned __int64)&concert_config->shop_type >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)concert_config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&concert_config->shop_type >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4(&concert_config->shop_type);
                }
                if ( concert_product_shop_type == concert_config->shop_type )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&concert_config->replace_mcoin_num >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&concert_config->replace_mcoin_num >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&concert_config->replace_mcoin_num);
                  }
                  if ( !concert_config->replace_mcoin_num )
                  {
                    ret = -1;
                    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 736, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 736),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                      "checkConcertPackageDetailConfig",
                      1277);
                    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 736),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v40 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v39,
                            (const char (*)[11])"config_id:");
                    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, config_id);
                    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v41,
                      (const char (*)[44])byte_1A11F4A0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
                    *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
                  }
                }
                else
                {
                  ret = -1;
                  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 672, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 672),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                    "checkConcertPackageDetailConfig",
                    1269);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 672),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v37 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                          v36,
                          (const char (*)[11])"config_id:");
                  v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, config_id);
                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    v38,
                    (const char (*)[32])byte_1A11D9A0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
                  *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
            }
            else
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkConcertPackageDetailConfig",
                1238);
              v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 416),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v19,
                      (const char (*)[11])"config_id:");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v21, (const char (*)[30])byte_1A11E3E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
              *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
          else
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
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkConcertPackageDetailConfig",
              1231);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    v15,
                    (const char (*)[65])byte_1A11F3C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkConcertPackageDetailConfig",
            1225);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v12, (const char (*)[59])byte_1A11F360);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
LABEL_23:
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkConcertPackageDetailConfig",
          1219);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v9, (const char (*)[56])byte_1A11F300);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v2 + 32));
  }
  if ( v51 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return ret;
};

// Line 1285: range 000000000CAF9D56-000000000CAFAE0D
int32_t __cdecl ShopmallExcelConfigMgr::checkAppleGiftCardDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  int v9; // eax
  __int64 mail_config_id; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int32_t ret; // [rsp+14h] [rbp-32Ch]
  data::ProductAppleGiftCardDetailConfigMap *__for_range; // [rsp+18h] [rbp-328h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::reference __in; // [rsp+20h] [rbp-320h]
  const unsigned int *config_id; // [rsp+28h] [rbp-318h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig> >::type *apple_gift_card; // [rsp+30h] [rbp-310h]
  std::vector<data::PackageContentConfig> *__for_range_0; // [rsp+38h] [rbp-308h]
  data::PriceTierConfig *audit_display_tier_config_ptr; // [rsp+40h] [rbp-300h]
  const data::PackageContentConfig *content; // [rsp+48h] [rbp-2F8h]
  char v46[752]; // [rsp+50h] [rbp-2F0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(704LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 48 8 16 __for_begin:1287 80 8 14 __for_end:1287 112 8 16 __for_begin:1308 144 8 14 __for_end:"
                        "1308 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unkno"
                        "wn> 496 32 9 <unknown> 560 32 9 <unknown> 624 40 19 item_param_bin:1311";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkAppleGiftCardDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
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
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862738] = -219021312;
  v4[536862739] = 62194;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  ret = 0;
  __for_range = &this->product_apple_gift_card_detail_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v2 + 80)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 48));
    config_id = std::get<0ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(__in);
    apple_gift_card = std::get<1ul,unsigned int const,data::ProductAppleGiftCardDetailConfig>(__in);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, apple_gift_card) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkAppleGiftCardDetailConfig",
        1292);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
      v9 = *(unsigned __int8 *)(((unsigned __int64)&apple_gift_card->mail_config_id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&apple_gift_card->mail_config_id);
      mail_config_id = apple_gift_card->mail_config_id;
      if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, mail_config_id) )
      {
        if ( std::vector<data::PackageContentConfig>::empty(&apple_gift_card->content_vec) )
        {
          ret = -1;
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkAppleGiftCardDetailConfig",
            1305);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v14, (const char (*)[47])byte_1A11F660);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          __for_range_0 = &apple_gift_card->content_vec;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 112, mail_config_id);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 112) = std::vector<data::PackageContentConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 144, mail_config_id);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 144) = std::vector<data::PackageContentConfig>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 112),
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 144)) )
          {
            content = __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 112));
            v16 = ((v2 + 624) >> 3) + 2147450880;
            *(_DWORD *)v16 = 0;
            *(_BYTE *)(v16 + 4) = 0;
            proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v2 + 624));
            if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&content->material_id);
            }
            proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v2 + 624), content->material_id);
            if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&content->material_num);
            }
            proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v2 + 624), content->material_num);
            if ( TxtConfigMgr::checkItemParamBin(
                   txt_config_mgr,
                   (const proto::ItemParamBin *)(v2 + 624),
                   ITEM_LIMIT_UNLIMITED) )
            {
              ret = -1;
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkAppleGiftCardDetailConfig",
                1317);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 368),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v17,
                      (const char (*)[11])"config_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, config_id);
              v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v19,
                      (const char (*)[19])byte_1A11E420);
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &content->material_id);
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])byte_1A11F6C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
              *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            }
            proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v2 + 624));
            v22 = ((v2 + 624) >> 3) + 2147450880;
            *(_DWORD *)v22 = -117901064;
            *(_BYTE *)(v22 + 4) = -8;
            __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator++((__gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 112));
          }
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
          if ( (unsigned __int8)std::string::empty() )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 432, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ShopmallExcelConfig.cpp",
              "checkAppleGiftCardDetailConfig",
              1326);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])"config_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, config_id);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v25, (const char (*)[40])byte_1A11F700);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
            *(_DWORD *)(((v2 + 432) >> 3) + 0x7FFF8000) = -117901064;
          }
          else
          {
            audit_display_tier_config_ptr = data::ShopmallExcelConfigMgrBase::findPriceTierConfig(
                                              this,
                                              &apple_gift_card->audit_display_tier);
            if ( audit_display_tier_config_ptr )
            {
              if ( !ShopmallExcelConfigMgr::getAuditMcoinFromTier(this, audit_display_tier_config_ptr) )
              {
                ret = -1;
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 560) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 79) & 7) >= *(_BYTE *)(((v2 + 591) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 560, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 560),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                  "checkAppleGiftCardDetailConfig",
                  1339);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 560),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v31,
                        (const char (*)[11])"config_id:");
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, config_id);
                v34 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                        v33,
                        (const char (*)[30])byte_1A11F760);
                v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v34,
                        &apple_gift_card->audit_display_tier);
                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v35, (const char (*)[32])byte_1A11F7A0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 560));
                *(_DWORD *)(((v2 + 560) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
            {
              ret = -1;
              *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 496, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 496),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkAppleGiftCardDetailConfig",
                1333);
              v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v26,
                      (const char (*)[11])"config_id:");
              v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, config_id);
              v29 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v28,
                      (const char (*)[30])byte_1A11F760);
              v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                      v29,
                      &apple_gift_card->audit_display_tier);
              common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])byte_1A11E460);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
              *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = -117901064;
            }
          }
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 79) & 7) >= *(_BYTE *)(((v2 + 271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkAppleGiftCardDetailConfig",
          1298);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"config_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, config_id);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1A11E3E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v2 + 48));
  }
  if ( v46 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
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
  }
  return ret;
};

// Line 1348: range 000000000CAFAE0E-000000000CAFB9CD
int32_t __cdecl ShopmallExcelConfigMgr::checkPsnCompensationDetailConfig(
        ShopmallExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  MailExcelConfigMgr *p_mail_config_mgr; // rcx
  int v9; // eax
  __int64 mail_config_id; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  unsigned __int64 v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-264h]
  data::ProductPsnCompensationDetailConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::reference __in; // [rsp+28h] [rbp-258h]
  const unsigned int *config_id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig> >::type *psn_compensation_config; // [rsp+38h] [rbp-248h]
  std::vector<data::PackageContentConfig> *__for_range_0; // [rsp+40h] [rbp-240h]
  const data::PackageContentConfig *content; // [rsp+48h] [rbp-238h]
  char v32[560]; // [rsp+50h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 8 16 __for_begin:1350 80 8 14 __for_end:1350 112 8 16 __for_begin:1371 144 8 14 __for_end:1"
                        "371 176 32 9 <unknown> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 40 19 item_param_bin:1374";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::checkPsnCompensationDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862734] = -218103808;
  v4[536862735] = -202116109;
  ret = 0;
  __for_range = &this->product_psn_compensation_detail_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v2 + 80)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 48));
    config_id = std::get<0ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(__in);
    psn_compensation_config = std::get<1ul,unsigned int const,data::ProductPsnCompensationDetailConfig>(__in);
    if ( ShopmallExcelConfigMgr::checkRechargeDetailConfig(this, psn_compensation_config) )
    {
      ret = -1;
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 80 + 31) & 7) >= *(_BYTE *)(((v2 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopmallExcelConfig.cpp",
        "checkPsnCompensationDetailConfig",
        1355);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 176),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])"config_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, config_id);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v7,
        (const char (*)[33])" checkRechargeDetailConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
      *(_DWORD *)(((v2 + 176) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      p_mail_config_mgr = &txt_config_mgr->mail_config_mgr;
      v9 = *(unsigned __int8 *)(((unsigned __int64)&psn_compensation_config->mail_config_id >> 3) + 0x7FFF8000);
      if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
        __asan_report_load4(&psn_compensation_config->mail_config_id);
      mail_config_id = psn_compensation_config->mail_config_id;
      if ( data::MailExcelConfigMgrBase::findMailExcelConfig(p_mail_config_mgr, mail_config_id) )
      {
        if ( std::vector<data::PackageContentConfig>::empty(&psn_compensation_config->content_vec) )
        {
          ret = -1;
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
            "./src/txt_data_manual/ShopmallExcelConfig.cpp",
            "checkPsnCompensationDetailConfig",
            1368);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 304),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v14, (const char (*)[53])byte_1A11F920);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
          *(_DWORD *)(((v2 + 304) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          __for_range_0 = &psn_compensation_config->content_vec;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 112, mail_config_id);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 112) = std::vector<data::PackageContentConfig>::begin(__for_range_0);
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 144, mail_config_id);
          *(std::vector<data::PackageContentConfig>::iterator *)(v2 + 144) = std::vector<data::PackageContentConfig>::end(__for_range_0);
          while ( __gnu_cxx::operator!=<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>(
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 112),
                    (const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *)(v2 + 144)) )
          {
            content = __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 112));
            v16 = ((v2 + 432) >> 3) + 2147450880;
            *(_DWORD *)v16 = 0;
            *(_BYTE *)(v16 + 4) = 0;
            proto::ItemParamBin::ItemParamBin((proto::ItemParamBin *const)(v2 + 432));
            if ( *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&content->material_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&content->material_id);
            }
            proto::ItemParamBin::set_item_id((proto::ItemParamBin *const)(v2 + 432), content->material_id);
            if ( *(_BYTE *)(((unsigned __int64)&content->material_num >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)content + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&content->material_num >> 3)
                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&content->material_num);
            }
            proto::ItemParamBin::set_count((proto::ItemParamBin *const)(v2 + 432), content->material_num);
            if ( TxtConfigMgr::checkItemParamBin(
                   txt_config_mgr,
                   (const proto::ItemParamBin *)(v2 + 432),
                   ITEM_LIMIT_UNLIMITED) )
            {
              ret = -1;
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
                "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                "checkPsnCompensationDetailConfig",
                1380);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 368),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v17,
                      (const char (*)[11])"config_id:");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, config_id);
              v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v19,
                      (const char (*)[19])byte_1A11E420);
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &content->material_id);
              common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])byte_1A11F6C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
              *(_DWORD *)(((v2 + 368) >> 3) + 0x7FFF8000) = -117901064;
            }
            proto::ItemParamBin::~ItemParamBin((proto::ItemParamBin *const)(v2 + 432));
            v22 = ((v2 + 432) >> 3) + 2147450880;
            *(_DWORD *)v22 = -117901064;
            *(_BYTE *)(v22 + 4) = -8;
            __gnu_cxx::__normal_iterator<data::PackageContentConfig *,std::vector<data::PackageContentConfig>>::operator++((__gnu_cxx::__normal_iterator<data::PackageContentConfig*,std::vector<data::PackageContentConfig> > *const)(v2 + 112));
          }
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
        }
      }
      else
      {
        ret = -1;
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
          "./src/txt_data_manual/ShopmallExcelConfig.cpp",
          "checkPsnCompensationDetailConfig",
          1361);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 240),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"config_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, config_id);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v13, (const char (*)[30])byte_1A11E3E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
        *(_DWORD *)(((v2 + 240) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v2 + 48));
  }
  result = ret;
  if ( v32 == (char *)v2 )
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

// Line 1390: range 000000000CAFB9CE-000000000CAFBBC9
__int64 __fastcall ShopmallExcelConfigMgr::findConfigIdType(
        const ShopmallExcelConfigMgr *const this,
        __int64 config_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::ProductType> *p_config_id_type_map; // rdx
  std::unordered_map<unsigned int,data::ProductType> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductType>,false,false>::pointer v8; // rdx
  data::ProductType *p_second; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 config_id:1389 64 8 9 iter:1391 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::findConfigIdType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  p_config_id_type_map = &this->config_id_type_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, config_id);
  *(std::unordered_map<unsigned int,data::ProductType>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ProductType>::find(
                                                                                       p_config_id_type_map,
                                                                                       (const std::unordered_map<unsigned int,data::ProductType>::key_type *)(v2 + 48));
  v6 = &this->config_id_type_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::ProductType>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ProductType>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductType>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductType>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductType>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductType>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductType>,false,false> *const)(v2 + 64));
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

// Line 1400: range 000000000CAFBBCA-000000000CAFC017
const data::ProductDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::pointer v8; // rax
  const data::ProductDetailConfig *result; // rax
  common::milog::MiLogStream *v10; // rdx
  uint32_t config_id; // [rsp+18h] [rbp-C8h]
  char v12[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 iter:1401 64 8 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::findProductDetailConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v6 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v6);
  v7 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second.config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->second.config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v8->second.config_id);
    }
    config_id = v8->second.config_id;
    switch ( (unsigned int)ShopmallExcelConfigMgr::findConfigIdType(this, config_id) )
    {
      case 0u:
        result = 0LL;
        break;
      case 1u:
        result = data::ShopmallExcelConfigMgrBase::findProductMcoinDetailConfig(this, config_id);
        break;
      case 2u:
        result = data::ShopmallExcelConfigMgrBase::findProductCardDetailConfig(this, config_id);
        break;
      case 3u:
        result = data::ShopmallExcelConfigMgrBase::findProductPS4PackageDetailConfig(this, config_id);
        break;
      case 4u:
        result = data::ShopmallExcelConfigMgrBase::findProductPlayDetailConfig(this, config_id);
        break;
      case 5u:
        result = data::ShopmallExcelConfigMgrBase::findProductGoogleGiftCardDetailConfig(this, config_id);
        break;
      case 6u:
        result = data::ShopmallExcelConfigMgrBase::findProductConcertPackageDetailConfig(this, config_id);
        break;
      case 7u:
        result = data::ShopmallExcelConfigMgrBase::findProductAppleGiftCardDetailConfig(this, config_id);
        break;
      case 8u:
        result = data::ShopmallExcelConfigMgrBase::findProductPsnCompensationDetailConfig(this, config_id);
        break;
      default:
        result = 0LL;
        break;
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
      3u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "findProductDetailConfig",
      1430);
    v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 96),
            (const char (*)[32])"product_id_config_map not find ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, product_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0LL;
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

// Line 1435: range 000000000CAFC018-000000000CAFC2EE
const data::ProductMcoinDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductMcoinDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductMcoinDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductMcoinDetailConfigMap *p_product_mcoin_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductMcoinDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1436 64 8 9 <unknown> 96 8 10 iter2:1439 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductMcoinDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::find(
                                                                                                    &this->product_mcoin_detail_config_map,
                                                                                                    p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_mcoin_detail_config_map = &this->product_mcoin_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductMcoinDetailConfig>::end(p_product_mcoin_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductMcoinDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1449: range 000000000CAFC2F0-000000000CAFC5C6
const data::ProductCardDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductCardDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductCardDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductCardDetailConfigMap *p_product_card_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductCardDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1450 64 8 9 <unknown> 96 8 10 iter2:1453 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductCardDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::find(
                                                                                                   &this->product_card_detail_config_map,
                                                                                                   p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_card_detail_config_map = &this->product_card_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductCardDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductCardDetailConfig>::end(p_product_card_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductCardDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductCardDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductCardDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1463: range 000000000CAFC5C8-000000000CAFC8A4
const data::ProductPlayDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductPlayDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductPlayDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductPlayDetailConfigMap *p_product_play_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductPlayDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1464 64 8 9 <unknown> 96 8 10 iter2:1467 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductPlayDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::find(
                                                                                                   &this->product_play_detail_config_map,
                                                                                                   p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_play_detail_config_map = &this->product_play_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(p_product_play_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1477: range 000000000CAFC8A6-000000000CAFCB82
const data::ProductPS4PackageDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductPS4PackageDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductPS4PackageDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductPS4PackageDetailConfigMap *p_product_ps4_package_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductPS4PackageDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1478 64 8 9 <unknown> 96 8 10 iter2:1481 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductPS4PackageDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::find(&this->product_ps4_package_detail_config_map, p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_ps4_package_detail_config_map = &this->product_ps4_package_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(p_product_ps4_package_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1491: range 000000000CAFCB84-000000000CAFCE60
const data::ProductGoogleGiftCardDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductGoogleGiftCardDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductGoogleGiftCardDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductGoogleGiftCardDetailConfigMap *p_product_google_gift_card_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductGoogleGiftCardDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1492 64 8 9 <unknown> 96 8 10 iter2:1495 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductGoogleGiftCardDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::find(&this->product_google_gift_card_detail_config_map, p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_google_gift_card_detail_config_map = &this->product_google_gift_card_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(p_product_google_gift_card_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1505: range 000000000CAFCE62-000000000CAFD13E
const data::ProductConcertPackageDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductConcertPackageDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductConcertPackageDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductConcertPackageDetailConfigMap *p_product_concert_package_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductConcertPackageDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1506 64 8 9 <unknown> 96 8 10 iter2:1509 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductConcertPackageDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::find(&this->product_concert_package_detail_config_map, p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_concert_package_detail_config_map = &this->product_concert_package_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductConcertPackageDetailConfig>::end(p_product_concert_package_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductConcertPackageDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1519: range 000000000CAFD140-000000000CAFD41C
const data::ProductAppleGiftCardDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductAppleGiftCardDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductAppleGiftCardDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductAppleGiftCardDetailConfigMap *p_product_apple_gift_card_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductAppleGiftCardDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1520 64 8 9 <unknown> 96 8 10 iter2:1523 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductAppleGiftCardDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::find(&this->product_apple_gift_card_detail_config_map, p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_apple_gift_card_detail_config_map = &this->product_apple_gift_card_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(p_product_apple_gift_card_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1533: range 000000000CAFD41E-000000000CAFD6FA
const data::ProductPsnCompensationDetailConfig *__cdecl ShopmallExcelConfigMgr::findProductPsnCompensationDetailConfig(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  data::ProductPsnCompensationDetailConfig *p_second; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v7; // rdx
  bool v8; // al
  uint32_t *p_config_id; // rdx
  uint32_t *v10; // rsi
  data::ProductPsnCompensationDetailConfigMap *p_product_psn_compensation_detail_config_map; // rdx
  bool v12; // al
  int v13; // eax
  const data::ProductPsnCompensationDetailConfig *result; // rax
  char v15[208]; // [rsp+20h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 9 iter:1534 64 8 9 <unknown> 96 8 10 iter2:1537 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findProductPsnCompensationDetailConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v7 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v7);
  v8 = std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( !v8 )
    goto LABEL_17;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_config_id = &std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32))->second.config_id;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 64);
  v10 = p_config_id;
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::find(&this->product_psn_compensation_detail_config_map, p_config_id);
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
  p_product_psn_compensation_detail_config_map = &this->product_psn_compensation_detail_config_map;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v10);
  *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(p_product_psn_compensation_detail_config_map);
  v12 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v3 + 96),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false,false> *const)(v3 + 96))->second;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  if ( v13 == 1 )
LABEL_17:
    p_second = 0LL;
  result = p_second;
  if ( v15 == (char *)v3 )
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

// Line 1547: range 000000000CAFD6FC-000000000CAFDD47
ConfigProductInfo *__fastcall ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
        const ShopmallExcelConfigMgr *const this,
        _BOOL8 is_internal,
        uint32_t platform_type,
        bool is_epic,
        uint32_t config_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,ConfigProductInfo> *p_config_2_product_map; // rdx
  std::unordered_map<unsigned int,ConfigProductInfo> *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ConfigProductInfo *result; // rax
  const std::map<unsigned int,std::string> *p_platform_2_product_map; // rdx
  const std::map<unsigned int,std::string> *v16; // rdx
  bool v17; // al
  const std::map<unsigned int,std::string> *v18; // rdx
  const std::map<unsigned int,std::string> *v19; // rdx
  bool v20; // al
  bool is_internala; // [rsp+14h] [rbp-17Ch]
  ConfigProductInfo *product_info; // [rsp+28h] [rbp-168h]
  char v26[352]; // [rsp+30h] [rbp-160h] BYREF

  is_internala = is_internal;
  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(320LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "9 32 4 18 platform_type:1546 48 4 14 config_id:1546 64 8 9 iter:1548 96 8 9 <unknown> 128 8 18 i"
                        "nternal_iter:1567 160 8 9 <unknown> 192 8 16 abroad_iter:1575 224 8 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11];
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862729] = -202116109;
  *(_DWORD *)(v5 + 32) = platform_type;
  *(_DWORD *)(v5 + 48) = config_id;
  p_config_2_product_map = &this->config_2_product_map;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, is_internal);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,ConfigProductInfo>::find(
                                                                                       p_config_2_product_map,
                                                                                       (const std::unordered_map<unsigned int,ConfigProductInfo>::key_type *)(v5 + 48));
  v9 = &this->config_2_product_map;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, v5 + 48);
  *(std::unordered_map<unsigned int,ConfigProductInfo>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,ConfigProductInfo>::end(v9);
  v10 = (char *)(v5 + 96);
  v11 = std::__detail::operator==<std::pair<unsigned int const,ConfigProductInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ConfigProductInfo>,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v11 )
  {
    *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "findProductIdByConfigId",
      1551);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
            (common::milog::MiLogStream *const)(v5 + 256),
            (const char (*)[11])"config_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v13,
      (const char (*)[29])" not in config_2_product_map");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
    *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = -117901064;
    if ( !(_BYTE)`guard variable for'ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)::empty_str
      && __cxa_guard_acquire(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)::empty_str) )
    {
      std::string::basic_string(&ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)const::empty_str);
      __cxa_guard_release(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)::empty_str);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        &ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)const::empty_str,
        &_dso_handle);
    }
    result = (ConfigProductInfo *)&ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](bool,unsigned int,bool,unsigned int)const::empty_str;
  }
  else
  {
    product_info = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ConfigProductInfo>,false,false> *const)(v5 + 64))->second;
    if ( TxtConfigMgr::isPsnPlatform(*(_DWORD *)(v5 + 32)) )
    {
      result = (ConfigProductInfo *)&product_info->psn_product_id;
    }
    else if ( is_epic )
    {
      result = (ConfigProductInfo *)&product_info->epic_product_id;
    }
    else if ( is_internala )
    {
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      p_platform_2_product_map = &product_info->internal_info.platform_2_product_map;
      if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 128, v10);
      *(std::map<unsigned int,std::string>::const_iterator *)(v5 + 128) = std::map<unsigned int,std::string>::find(
                                                                            p_platform_2_product_map,
                                                                            (const std::map<unsigned int,std::string>::key_type *)(v5 + 32));
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
      v16 = &product_info->internal_info.platform_2_product_map;
      if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 160, v5 + 32);
      *(std::map<unsigned int,std::string>::const_iterator *)(v5 + 160) = std::map<unsigned int,std::string>::end(v16);
      v17 = std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v5 + 128),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v5 + 160));
      *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v17 )
        result = (ConfigProductInfo *)&std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > > *const)(v5 + 128))->second;
      else
        result = product_info;
    }
    else
    {
      *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
      v18 = &product_info->abroad_info.platform_2_product_map;
      if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 192, v10);
      *(std::map<unsigned int,std::string>::const_iterator *)(v5 + 192) = std::map<unsigned int,std::string>::find(
                                                                            v18,
                                                                            (const std::map<unsigned int,std::string>::key_type *)(v5 + 32));
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
      v19 = &product_info->abroad_info.platform_2_product_map;
      if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 224, v5 + 32);
      *(std::map<unsigned int,std::string>::const_iterator *)(v5 + 224) = std::map<unsigned int,std::string>::end(v19);
      v20 = std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v5 + 192),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > >::_Self *)(v5 + 224));
      *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v20 )
        result = (ConfigProductInfo *)&std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::string > > *const)(v5 + 192))->second;
      else
        result = (ConfigProductInfo *)&product_info->abroad_info;
    }
  }
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1585: range 000000000CAFDD48-000000000CAFDF46
const std::string *__cdecl ShopmallExcelConfigMgr::findProductIdByEntitlementId(
        const ShopmallExcelConfigMgr *const this,
        const std::string *entitlement_id)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,std::string> *p_entitlement_2_product_map; // rdx
  std::unordered_map<std::string,std::string> *v6; // rdx
  bool v7; // al
  const std::string *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)"2 32 8 9 iter:1586 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)ShopmallExcelConfigMgr::findProductIdByEntitlementId;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_entitlement_2_product_map = &this->entitlement_2_product_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], entitlement_id);
  v2[4]._M_cur = std::unordered_map<std::string,std::string>::find(p_entitlement_2_product_map, entitlement_id)._M_cur;
  v6 = &this->entitlement_2_product_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], entitlement_id);
  v2[8]._M_cur = std::unordered_map<std::string,std::string>::end(v6)._M_cur;
  v7 = std::__detail::operator!=<std::pair<std::string const,std::string>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::string>,false,true>::operator->(v2 + 4)->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)::empty_str
      && __cxa_guard_acquire(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)::empty_str) )
    {
      std::string::basic_string(&ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)const::empty_str);
      __cxa_guard_release(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)::empty_str);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        &ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)const::empty_str,
        &_dso_handle);
    }
    result = &ShopmallExcelConfigMgr::findProductIdByEntitlementId(std::string const&)const::empty_str;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1596: range 000000000CAFDF48-000000000CAFE146
const std::string *__cdecl ShopmallExcelConfigMgr::findProductIdByCatalogItemId(
        const ShopmallExcelConfigMgr *const this,
        const std::string *catalog_item_id)
{
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<std::string,std::string> *p_catalog_item_2_product_map; // rdx
  std::unordered_map<std::string,std::string> *v6; // rdx
  bool v7; // al
  const std::string *result; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<const std::string,std::string >,false,true> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)"2 32 8 9 iter:1597 64 8 9 <unknown>";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)ShopmallExcelConfigMgr::findProductIdByCatalogItemId;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_catalog_item_2_product_map = &this->catalog_item_2_product_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], catalog_item_id);
  v2[4]._M_cur = std::unordered_map<std::string,std::string>::find(p_catalog_item_2_product_map, catalog_item_id)._M_cur;
  v6 = &this->catalog_item_2_product_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], catalog_item_id);
  v2[8]._M_cur = std::unordered_map<std::string,std::string>::end(v6)._M_cur;
  v7 = std::__detail::operator!=<std::pair<std::string const,std::string>,true>(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = &std::__detail::_Node_const_iterator<std::pair<std::string const,std::string>,false,true>::operator->(v2 + 4)->second;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)::empty_str
      && __cxa_guard_acquire(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)::empty_str) )
    {
      std::string::basic_string(&ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)const::empty_str);
      __cxa_guard_release(&`guard variable for'ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)::empty_str);
      __cxa_atexit(
        (void (__fastcall *)(void *))&std::string::~string,
        &ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)const::empty_str,
        &_dso_handle);
    }
    result = &ShopmallExcelConfigMgr::findProductIdByCatalogItemId(std::string const&)const::empty_str;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::string,std::string >,true>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1607: range 000000000CAFE148-000000000CAFE2BC
bool __cdecl ShopmallExcelConfigMgr::isShieldCatalogItemId(
        const ShopmallExcelConfigMgr *const this,
        const std::string *catalog_item_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_set<std::string> *p_epic_shield_catalog_item_set; // rdx
  std::unordered_set<std::string> *v6; // rdx
  bool result; // al
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::isShieldCatalogItemId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  p_epic_shield_catalog_item_set = &this->epic_shield_catalog_item_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, catalog_item_id);
  *(std::unordered_set<std::string>::const_iterator *)(v2 + 64) = std::unordered_set<std::string>::find(
                                                                    p_epic_shield_catalog_item_set,
                                                                    catalog_item_id);
  v6 = &this->epic_shield_catalog_item_set;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, catalog_item_id);
  *(std::unordered_set<std::string>::const_iterator *)(v2 + 32) = std::unordered_set<std::string>::end(v6);
  result = std::__detail::operator!=<std::string,true>(
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 32),
             (const std::__detail::_Node_iterator_base<std::string,true> *)(v2 + 64));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 1613: range 000000000CAFE2BE-000000000CAFECFA
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl ShopmallExcelConfigMgr::findDisplayProductTierMap(
        const ShopmallExcelConfigMgr *const this,
        bool is_internal,
        uint32_t platform_type,
        bool is_epic,
        std::map<std::string,std::string> *product_map)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  ConfigProductInfo *v8; // rdx
  data::ProductPS4PackageDetailConfigMap *p_product_ps4_package_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::key_type *p_config_id; // rcx
  __int64 v11; // rsi
  const std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::key_type *v12; // rsi
  data::ProductPS4PackageDetailConfigMap *v13; // rdx
  bool v14; // al
  data::ProductGoogleGiftCardDetailConfigMap *p_product_google_gift_card_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::key_type *v16; // rcx
  __int64 v17; // rsi
  const std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::key_type *v18; // rsi
  data::ProductGoogleGiftCardDetailConfigMap *v19; // rdx
  bool v20; // al
  data::ProductAppleGiftCardDetailConfigMap *p_product_apple_gift_card_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::key_type *v22; // rcx
  __int64 v23; // rsi
  const std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::key_type *v24; // rsi
  data::ProductAppleGiftCardDetailConfigMap *v25; // rdx
  bool v26; // al
  data::ProductPsnCompensationDetailConfigMap *p_product_psn_compensation_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::key_type *v28; // rcx
  __int64 v29; // rsi
  const std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::key_type *v30; // rsi
  data::ProductPsnCompensationDetailConfigMap *v31; // rdx
  bool v32; // al
  const ShopmallExcelConfigMgr *v33; // rdx
  __int64 config_id; // rsi
  const std::string *v35; // r8
  const std::string *v36; // r8
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  int32_t result; // eax
  data::ProductIdConfigMap *__for_range; // [rsp+30h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::reference v45; // [rsp+38h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,data::ProductIdConfig> >::type *product_id; // [rsp+40h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *product_id_config; // [rsp+48h] [rbp-1D8h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+50h] [rbp-1D0h]
  const data::ProductDetailConfig *detail_config_ptr; // [rsp+58h] [rbp-1C8h]
  char v50[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v5 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(416LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 32 8 16 __for_begin:1615 64 8 14 __for_end:1615 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <u"
                        "nknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown"
                        "> 352 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ShopmallExcelConfigMgr::findDisplayProductTierMap;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -218959360;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862730] = -218959360;
  v7[536862732] = -202116109;
  TxtConfigMgr::isPsnPlatform(platform_type);
  __for_range = &this->product_id_config_map;
  if ( *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 32, is_internal);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v5 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, is_internal);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v5 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v5 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v5 + 64)) )
  {
    v45 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v5 + 32));
    product_id = std::get<0ul,std::string const,data::ProductIdConfig>(v45);
    product_id_config = (std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *)std::get<1ul,std::string const,data::ProductIdConfig>(v45);
    if ( *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&product_id_config->config_id);
    }
    v8 = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
           this,
           is_internal,
           platform_type,
           is_epic,
           product_id_config->config_id);
    if ( !std::operator!=<char>(&v8->internal_info.common_product_id, product_id) )
    {
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      p_product_ps4_package_detail_config_map = &this->product_ps4_package_detail_config_map;
      p_config_id = &product_id_config->config_id;
      v11 = *(unsigned __int8 *)(((v5 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v11 )
        __asan_report_store8(v5 + 128, v11);
      v12 = p_config_id;
      *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v5 + 128) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::find(p_product_ps4_package_detail_config_map, p_config_id);
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = 0;
      v13 = &this->product_ps4_package_detail_config_map;
      if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v5 + 96, v12);
      *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(v13);
      v14 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v5 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v5 + 128));
      *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v14 )
      {
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        p_product_google_gift_card_detail_config_map = &this->product_google_gift_card_detail_config_map;
        v16 = &product_id_config->config_id;
        v17 = *(unsigned __int8 *)(((v5 + 192) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v17 )
          __asan_report_store8(v5 + 192, v17);
        v18 = v16;
        *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v5 + 192) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::find(p_product_google_gift_card_detail_config_map, v16);
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
        v19 = &this->product_google_gift_card_detail_config_map;
        if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 160, v18);
        *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v5 + 160) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(v19);
        v20 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v5 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v5 + 192));
        *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !v20 )
        {
          *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
          p_product_apple_gift_card_detail_config_map = &this->product_apple_gift_card_detail_config_map;
          v22 = &product_id_config->config_id;
          v23 = *(unsigned __int8 *)(((v5 + 256) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v23 )
            __asan_report_store8(v5 + 256, v23);
          v24 = v22;
          *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v5 + 256) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::find(p_product_apple_gift_card_detail_config_map, v22);
          *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
          v25 = &this->product_apple_gift_card_detail_config_map;
          if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v5 + 224, v24);
          *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v5 + 224) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(v25);
          v26 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v5 + 224),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v5 + 256));
          *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( !v26 )
          {
            *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
            p_product_psn_compensation_detail_config_map = &this->product_psn_compensation_detail_config_map;
            v28 = &product_id_config->config_id;
            v29 = *(unsigned __int8 *)(((v5 + 320) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v29 )
              __asan_report_store8(v5 + 320, v29);
            v30 = v28;
            *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v5 + 320) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::find(p_product_psn_compensation_detail_config_map, v28);
            *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
            v31 = &this->product_psn_compensation_detail_config_map;
            if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v5 + 288, v30);
            *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v5 + 288) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(v31);
            v32 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v5 + 288),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v5 + 320));
            *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v5 + 320) >> 3) + 0x7FFF8000) = -8;
            if ( !v32 )
            {
              v33 = this;
              if ( *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&product_id_config->config_id);
              }
              config_id = product_id_config->config_id;
              mcoin_config_ptr = data::ShopmallExcelConfigMgrBase::findProductMcoinDetailConfig(v33, config_id);
              if ( mcoin_config_ptr )
              {
                if ( *(char *)(((unsigned __int64)&mcoin_config_ptr->is_audit >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&mcoin_config_ptr->is_audit, config_id, &mcoin_config_ptr->is_audit);
                if ( mcoin_config_ptr->is_audit )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->original_product_type >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&mcoin_config_ptr->original_product_type >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&mcoin_config_ptr->original_product_type);
                  }
                  if ( mcoin_config_ptr->original_product_type != PRODUCT_TYPE_APPLE_GIFT_CARD || platform_type != 7 )
                    std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                      product_map,
                      product_id,
                      &mcoin_config_ptr->audit_display_tier,
                      product_id,
                      v35);
                }
                else
                {
                  std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                    product_map,
                    product_id,
                    &mcoin_config_ptr->price_tier,
                    product_id,
                    v35);
                }
              }
              else
              {
                detail_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(this, product_id);
                if ( detail_config_ptr )
                {
                  std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                    product_map,
                    product_id,
                    &detail_config_ptr->price_tier,
                    product_id,
                    v36);
                }
                else
                {
                  *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v5 + 352) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) != 0
                    && (char)((v5 + 127) & 7) >= *(_BYTE *)(((v5 + 383) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v5 + 352, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v5 + 352),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                    "findDisplayProductTierMap",
                    1676);
                  v37 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          (common::milog::MiLogStream *const)(v5 + 352),
                          (const char (*)[25])"findProductDetailConfig ");
                  v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, product_id);
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v38, (const char (*)[7])" fails");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 352));
                  *(_DWORD *)(((v5 + 352) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
            }
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v5 + 32));
  }
  result = 0;
  if ( v50 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1683: range 000000000CAFECFC-000000000CAFF6F8
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl ShopmallExcelConfigMgr::findDisplayProductTierMap(
        const ShopmallExcelConfigMgr *const this,
        bool is_internal,
        std::map<std::string,std::string> *product_map)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool *p_is_internal; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  data::ProductPS4PackageDetailConfigMap *p_product_ps4_package_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::key_type *p_config_id; // rcx
  __int64 v12; // rsi
  const std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::key_type *v13; // rsi
  data::ProductPS4PackageDetailConfigMap *v14; // rdx
  bool v15; // al
  data::ProductGoogleGiftCardDetailConfigMap *p_product_google_gift_card_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::key_type *v17; // rcx
  __int64 v18; // rsi
  const std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::key_type *v19; // rsi
  data::ProductGoogleGiftCardDetailConfigMap *v20; // rdx
  bool v21; // al
  data::ProductAppleGiftCardDetailConfigMap *p_product_apple_gift_card_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::key_type *v23; // rcx
  __int64 v24; // rsi
  const std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::key_type *v25; // rsi
  data::ProductAppleGiftCardDetailConfigMap *v26; // rdx
  bool v27; // al
  data::ProductPsnCompensationDetailConfigMap *p_product_psn_compensation_detail_config_map; // rdx
  const std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::key_type *v29; // rcx
  __int64 v30; // rsi
  const std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::key_type *v31; // rsi
  data::ProductPsnCompensationDetailConfigMap *v32; // rdx
  bool v33; // al
  const ShopmallExcelConfigMgr *v34; // rdx
  __int64 config_id; // rsi
  const std::string *v36; // r8
  const std::string *v37; // r8
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  int32_t result; // eax
  data::ProductIdConfigMap *__for_range; // [rsp+20h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true>::reference v44; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const std::string,data::ProductIdConfig> >::type *product_id; // [rsp+30h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *product_id_config; // [rsp+38h] [rbp-1D8h]
  const data::ProductMcoinDetailConfig *mcoin_config_ptr; // [rsp+40h] [rbp-1D0h]
  const data::ProductDetailConfig *detail_config_ptr; // [rsp+48h] [rbp-1C8h]
  char v49[448]; // [rsp+50h] [rbp-1C0h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 8 16 __for_begin:1684 64 8 14 __for_end:1684 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <u"
                        "nknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unknown"
                        "> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopmallExcelConfigMgr::findDisplayProductTierMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862732] = -202116109;
  __for_range = &this->product_id_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, is_internal);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, is_internal);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v3 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ProductIdConfig>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v3 + 64)) )
  {
    v44 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32));
    product_id = std::get<0ul,std::string const,data::ProductIdConfig>(v44);
    product_id_config = (std::tuple_element<1,const std::pair<const std::string,data::ProductIdConfig> >::type *)std::get<1ul,std::string const,data::ProductIdConfig>(v44);
    p_is_internal = &product_id_config->is_internal;
    v7 = ((_BYTE)product_id_config + 44) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_internal >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_internal >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_internal, v7, v8);
    if ( is_internal == product_id_config->is_internal
      && (unsigned __int8)std::string::empty() == 1
      && (unsigned __int8)std::string::empty() == 1
      && std::vector<unsigned int>::empty(&product_id_config->platform_type_list) )
    {
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      p_product_ps4_package_detail_config_map = &this->product_ps4_package_detail_config_map;
      p_config_id = &product_id_config->config_id;
      v12 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 )
        __asan_report_store8(v3 + 128, v12);
      v13 = p_config_id;
      *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::find(p_product_ps4_package_detail_config_map, p_config_id);
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
      v14 = &this->product_ps4_package_detail_config_map;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v13);
      *(std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ProductPS4PackageDetailConfig>::end(v14);
      v15 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPS4PackageDetailConfig>,false> *)(v3 + 128));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v15 )
      {
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        p_product_google_gift_card_detail_config_map = &this->product_google_gift_card_detail_config_map;
        v17 = &product_id_config->config_id;
        v18 = *(unsigned __int8 *)(((v3 + 192) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v18 )
          __asan_report_store8(v3 + 192, v18);
        v19 = v17;
        *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::find(p_product_google_gift_card_detail_config_map, v17);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v20 = &this->product_google_gift_card_detail_config_map;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v19);
        *(std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::ProductGoogleGiftCardDetailConfig>::end(v20);
        v21 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v3 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductGoogleGiftCardDetailConfig>,false> *)(v3 + 192));
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
        if ( !v21 )
        {
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          p_product_apple_gift_card_detail_config_map = &this->product_apple_gift_card_detail_config_map;
          v23 = &product_id_config->config_id;
          v24 = *(unsigned __int8 *)(((v3 + 256) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v24 )
            __asan_report_store8(v3 + 256, v24);
          v25 = v23;
          *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::find(p_product_apple_gift_card_detail_config_map, v23);
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          v26 = &this->product_apple_gift_card_detail_config_map;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v25);
          *(std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::const_iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ProductAppleGiftCardDetailConfig>::end(v26);
          v27 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 224),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductAppleGiftCardDetailConfig>,false> *)(v3 + 256));
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( !v27 )
          {
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            p_product_psn_compensation_detail_config_map = &this->product_psn_compensation_detail_config_map;
            v29 = &product_id_config->config_id;
            v30 = *(unsigned __int8 *)(((v3 + 320) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v30 )
              __asan_report_store8(v3 + 320, v30);
            v31 = v29;
            *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::find(p_product_psn_compensation_detail_config_map, v29);
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            v32 = &this->product_psn_compensation_detail_config_map;
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 288, v31);
            *(std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::const_iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::ProductPsnCompensationDetailConfig>::end(v32);
            v33 = std::__detail::operator!=<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v3 + 288),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPsnCompensationDetailConfig>,false> *)(v3 + 320));
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
            if ( !v33 )
            {
              v34 = this;
              if ( *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&product_id_config->config_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&product_id_config->config_id);
              }
              config_id = product_id_config->config_id;
              mcoin_config_ptr = data::ShopmallExcelConfigMgrBase::findProductMcoinDetailConfig(v34, config_id);
              if ( mcoin_config_ptr )
              {
                if ( *(char *)(((unsigned __int64)&mcoin_config_ptr->is_audit >> 3) + 0x7FFF8000) < 0 )
                  __asan_report_load1(&mcoin_config_ptr->is_audit, config_id, &mcoin_config_ptr->is_audit);
                if ( mcoin_config_ptr->is_audit )
                  std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                    product_map,
                    product_id,
                    &mcoin_config_ptr->audit_display_tier,
                    product_id,
                    v36);
                else
                  std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                    product_map,
                    product_id,
                    &mcoin_config_ptr->price_tier,
                    product_id,
                    v36);
              }
              else
              {
                detail_config_ptr = ShopmallExcelConfigMgr::findProductDetailConfig(this, product_id);
                if ( detail_config_ptr )
                {
                  std::map<std::string,std::string>::emplace<std::string const&,std::string const&>(
                    product_map,
                    product_id,
                    &detail_config_ptr->price_tier,
                    product_id,
                    v37);
                }
                else
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
                    "./src/txt_data_manual/ShopmallExcelConfig.cpp",
                    "findDisplayProductTierMap",
                    1746);
                  v38 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          (common::milog::MiLogStream *const)(v3 + 352),
                          (const char (*)[25])"findProductDetailConfig ");
                  v39 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v38, product_id);
                  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v39, (const char (*)[7])" fails");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
                  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
            }
          }
        }
      }
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v3 + 32));
  }
  result = 0;
  if ( v49 == (char *)v3 )
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

// Line 1754: range 000000000CAFF6FA-000000000CAFF906
// local variable allocation has failed, the output may be wrong!
const data::ShopmallEntranceExcelConfig *__cdecl ShopmallExcelConfigMgr::findShopmallShopConfig(
        const ShopmallExcelConfigMgr *const this,
        uint32_t shop_type)
{
  const data::ShopmallEntranceExcelConfig *v2; // r14
  __gnu_cxx::__normal_iterator<const data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  const data::ShopmallEntranceExcelConfig *result; // rax
  data::ShopmallEntranceExcelConfigVec *__for_range; // [rsp+10h] [rbp-A0h]
  const data::ShopmallEntranceExcelConfig *shop_config; // [rsp+18h] [rbp-98h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (__gnu_cxx::__normal_iterator<const data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (__gnu_cxx::__normal_iterator<const data::ShopmallEntranceExcelConfig*,std::vector<data::ShopmallEntranceExcelConfig> > *)v4;
  }
  v3->_M_current = (const data::ShopmallEntranceExcelConfig *)1102416563;
  v3[1]._M_current = (const data::ShopmallEntranceExcelConfig *)"2 32 8 16 __for_begin:1755 64 8 14 __for_end:1755";
  v3[2]._M_current = (const data::ShopmallEntranceExcelConfig *)ShopmallExcelConfigMgr::findShopmallShopConfig;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  __for_range = &this->shopmall_entrance_excel_config_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], *(_QWORD *)&shop_type);
  v3[4]._M_current = std::vector<data::ShopmallEntranceExcelConfig>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], *(_QWORD *)&shop_type);
  v3[8]._M_current = std::vector<data::ShopmallEntranceExcelConfig>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>(
            v3 + 4,
            v3 + 8) )
  {
    shop_config = __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>::operator*(v3 + 4);
    if ( *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_config->shop_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_config->shop_type);
    }
    if ( shop_type == shop_config->shop_type )
    {
      v2 = shop_config;
      v6 = 0;
      goto LABEL_16;
    }
    __gnu_cxx::__normal_iterator<data::ShopmallEntranceExcelConfig const*,std::vector<data::ShopmallEntranceExcelConfig>>::operator++(v3 + 4);
  }
  v6 = 1;
LABEL_16:
  if ( v6 == 1 )
    v2 = 0LL;
  result = v2;
  if ( v10 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_current = (const data::ShopmallEntranceExcelConfig *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1766: range 000000000CAFF908-000000000CAFFDDF
std::string *__fastcall ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11](
        std::string *retstr,
        const ShopmallExcelConfigMgr *const this,
        bool is_internal,
        uint32_t platform_type,
        bool is_epic,
        data::ProductPlayType play_type)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  ConfigProductInfo *v10; // rax
  uint32_t dest_config_id; // [rsp+2Ch] [rbp-104h]
  data::ProductPlayDetailConfigMap *__for_range; // [rsp+30h] [rbp-100h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::reference v18; // [rsp+38h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *config_id; // [rsp+40h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *play_config; // [rsp+48h] [rbp-E8h]
  char v21[224]; // [rsp+50h] [rbp-E0h] BYREF

  v6 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 1 9 <unknown> 48 4 14 play_type:1765 64 8 16 __for_begin:1768 96 8 14 __for_end:1768 128 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ShopmallExcelConfigMgr::getFirstProductIdByPlayType[abi:cxx11];
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556927;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862725] = -202116109;
  *(_DWORD *)(v6 + 48) = play_type;
  dest_config_id = 0;
  __for_range = &this->product_play_detail_config_map;
  if ( *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 64, this);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::const_iterator *)(v6 + 64) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v6 + 96, this);
  *(std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::const_iterator *)(v6 + 96) = std::unordered_map<unsigned int,data::ProductPlayDetailConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v6 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false> *)(v6 + 96)) )
  {
    v18 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v6 + 64));
    config_id = std::get<0ul,unsigned int const,data::ProductPlayDetailConfig>(v18);
    play_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ProductPlayDetailConfig> >::type *)std::get<1ul,unsigned int const,data::ProductPlayDetailConfig>(v18);
    if ( *(_BYTE *)(((unsigned __int64)&play_config->play_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&play_config->play_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&play_config->play_type);
    }
    if ( play_config->play_type == *(_DWORD *)(v6 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(config_id);
      }
      dest_config_id = *config_id;
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ProductPlayDetailConfig>,false,false> *const)(v6 + 64));
  }
  *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( dest_config_id )
  {
    v10 = ShopmallExcelConfigMgr::findProductIdByConfigId[abi:cxx11](
            this,
            is_internal,
            platform_type,
            is_epic,
            dest_config_id);
    std::string::basic_string(retstr, v10);
  }
  else
  {
    *(_DWORD *)(((v6 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v6 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 - 97) & 7) >= *(_BYTE *)(((v6 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v6 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v6 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "getFirstProductIdByPlayType",
      1778);
    v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)(v6 + 128),
           (const char (*)[38])"find dest_config_id fails, play_type:");
    common::milog::MiLogStream::operator<<<data::ProductPlayType,(data::ProductPlayType*)0>(
      v9,
      (const data::ProductPlayType *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 128));
    *(_DWORD *)(((v6 + 128) >> 3) + 0x7FFF8000) = -117901064;
    *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v6 + 32);
    std::string::basic_string<std::allocator<char>>(retstr, byte_1A0D8BA0, (const std::allocator<char> *)(v6 + 32));
    std::allocator<char>::~allocator(v6 + 32);
  }
  if ( v21 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1785: range 000000000CAFFDE0-000000000CB001E0
const data::ShopmallGoodsSaleConfig *__fastcall ShopmallExcelConfigMgr::findShopmallGoodsSaleConfigByTime(
        const ShopmallExcelConfigMgr *const this,
        __int64 goods_id,
        uint32_t time)
{
  const data::ShopmallGoodsSaleConfig *v3; // r14
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_goods_id_to_sale_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  char *v9; // rsi
  bool v10; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  unsigned int *v12; // rdx
  int v13; // eax
  const data::ShopmallGoodsSaleConfig *result; // rax
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-100h]
  const data::ShopmallGoodsSaleConfig *config_ptr; // [rsp+28h] [rbp-F8h]
  char v18[240]; // [rsp+30h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 goods_id:1784 64 8 9 iter:1786 96 8 9 <unknown> 128 8 16 __for_begin:1791 160 8 14 __for_end:1791";
  *(_QWORD *)(v4 + 16) = ShopmallExcelConfigMgr::findShopmallGoodsSaleConfigByTime;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 48) = goods_id;
  p_goods_id_to_sale_id_map = &this->goods_id_to_sale_id_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, goods_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_goods_id_to_sale_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 48));
  v8 = &this->goods_id_to_sale_id_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::cend(v8);
  v9 = (char *)(v4 + 96);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    v3 = 0LL;
  }
  else
  {
    __for_range = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 64))->second;
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, v9);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 128) = std::vector<unsigned int>::begin(__for_range);
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, v9);
    *(std::vector<unsigned int>::const_iterator *)(v4 + 160) = std::vector<unsigned int>::end(__for_range);
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 160)) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 128));
      v12 = (unsigned int *)v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      config_ptr = data::ShopmallExcelConfigMgrBase::findShopmallGoodsSaleConfig(this, *v12);
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->discount_begin_timestamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->discount_begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->discount_begin_timestamp);
        }
        if ( time >= config_ptr->discount_begin_timestamp )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->discount_end_timestamp >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->discount_end_timestamp >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&config_ptr->discount_end_timestamp);
          }
          if ( time <= config_ptr->discount_end_timestamp )
          {
            v3 = config_ptr;
            v13 = 0;
            goto LABEL_28;
          }
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 128));
    }
    v13 = 1;
LABEL_28:
    if ( v13 == 1 )
      v3 = 0LL;
  }
  result = v3;
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1806: range 000000000CB001E2-000000000CB004D0
bool __cdecl ShopmallExcelConfigMgr::isPsProductType(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ProductIdConfigMap *p_product_id_config_map; // rdx
  data::ProductIdConfigMap *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rdx
  bool result; // al
  char v10[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 9 iter:1808 64 8 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopmallExcelConfigMgr::isPsProductType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  p_product_id_config_map = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,data::ProductIdConfig>::find(
                                                                                          p_product_id_config_map,
                                                                                          product_id);
  v6 = &this->product_id_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, product_id);
  *(std::unordered_map<std::string,data::ProductIdConfig>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ProductIdConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<std::string const,data::ProductIdConfig>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ProductIdConfig>,true> *)(v2 + 64));
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      3u,
      "./src/txt_data_manual/ShopmallExcelConfig.cpp",
      "isPsProductType",
      1811);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[28])"findProductIdConfig fails, ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, product_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ProductIdConfig>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ProductIdConfig>,false,true> *const)(v2 + 32));
    result = (unsigned __int8)std::string::empty() == 0;
  }
  if ( v10 == (char *)v2 )
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

// Line 1824: range 000000000CB004D2-000000000CB0053E
uint32_t __cdecl ShopmallExcelConfigMgr::getChargePlatformTypeByProductId(
        const ShopmallExcelConfigMgr *const this,
        const std::string *product_id)
{
  if ( std::operator==<char>(&this->point_card_product_id, product_id)
    || !ShopmallExcelConfigMgr::isPsProductType(this, product_id) )
  {
    return TxtConfigMgr::getPCMPlatformType();
  }
  else
  {
    return TxtConfigMgr::getPsnPlatformType();
  }
};

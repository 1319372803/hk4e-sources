// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ShopExcelConfig.cpp

// Line 21: range 000000000CADAC5C-000000000CADB0D1
int32_t __cdecl ShopExcelConfigMgr::checkConfig(ShopExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ShopExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ShopExcelConfigMgr::checkShopExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "checkConfig",
      24);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v5,
      (const char (*)[35])"[SHOP] checkShopExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ShopExcelConfigMgr::checkShopGoodsExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "checkConfig",
      30);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
      v7,
      (const char (*)[40])"[SHOP] checkShopGoodsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ShopExcelConfigMgr::checkShopRotateExcelConfig(this, txt_config_mgr) )
  {
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "checkConfig",
      36);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v8,
      (const char (*)[41])"[SHOP] checkShopRotateExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 44: range 000000000CADB0D2-000000000CADB3F6
int32_t __cdecl ShopExcelConfigMgr::rewriteConfig(ShopExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ShopExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ShopExcelConfigMgr::rewriteShopGoodsExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "rewriteConfig",
      47);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
      v5,
      (const char (*)[42])"[SHOP] rewriteShopGoodsExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ShopExcelConfigMgr::rewriteShopRotateExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "rewriteConfig",
      53);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      v7,
      (const char (*)[43])"[SHOP] rewriteShopRotateExcelConfig failed");
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

// Line 61: range 000000000CADB3F8-000000000CADBE7E
int32_t __cdecl ShopExcelConfigMgr::finalConfig(ShopExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rdi
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  data::ShopGoodsExcelConfigMap *p_shop_goods_excel_config_map; // rdx
  data::ShopGoodsExcelConfigMap *v21; // rdx
  char *v22; // rsi
  bool v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // r14d
  __int64 v28; // rax
  char v29; // dl
  uint32_t v30; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::pointer v31; // rdx
  char v32; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-1FCh]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v38; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *shop_type; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *goods_id_vec; // [rsp+30h] [rbp-1E0h]
  char v41[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 18 begin_timestamp:65 64 4 16 end_timestamp:66 80 4 11 goods_id:72 96 8 14 __for_begin:6"
                        "3 128 8 12 __for_end:63 160 8 14 __for_begin:72 192 8 12 __for_end:72 224 8 7 iter:74 256 8 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopExcelConfigMgr::finalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->goods_id_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 128)) )
      break;
    v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 96));
    shop_type = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v38);
    goods_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v38);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, v5);
    *(_DWORD *)(v2 + 48) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 64, v5);
    *(_DWORD *)(v2 + 64) = 0;
    p_activity_shop_config_mgr = &txt_config_mgr->activity_shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)shop_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)shop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)shop_type >> 3) + 0x7FFF8000) )
    {
      p_activity_shop_config_mgr = (ActivityShopExcelConfigMgr *)shop_type;
      __asan_report_load4(shop_type);
    }
    if ( !ActivityShopExcelConfigMgr::findAndOverrideActivityShopGoodsTime(
            p_activity_shop_config_mgr,
            txt_config_mgr,
            *shop_type,
            (uint32_t *)(v2 + 48),
            (uint32_t *)(v2 + 64)) )
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
        1u,
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "finalConfig",
        71);
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v2 + 288),
             (const char (*)[11])"shop_type:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, shop_type);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])" goods_id_vec:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int>(v9, goods_id_vec);
      v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v10,
              (const char (*)[18])" begin_timestamp:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" end_timestamp:");
      v14 = (char *)(v2 + 64);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v14);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::begin(goods_id_vec);
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 192, v14);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::end(goods_id_vec);
      while ( 1 )
      {
        v15 = (char *)(v2 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192)) )
          break;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        v16 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
        v17 = (int *)v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        v18 = *v17;
        v19 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
        LOBYTE(v15) = v19 != 0;
        if ( v19 != 0 && v19 <= 3 )
          __asan_report_store4(v2 + 80, v15);
        *(_DWORD *)(v2 + 80) = v18;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        p_shop_goods_excel_config_map = &this->shop_goods_excel_config_map;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v15);
        *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::find(
                                                                                                 p_shop_goods_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::key_type *)(v2 + 80));
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        v21 = &this->shop_goods_excel_config_map;
        if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 256, v2 + 80);
        *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::end(v21);
        v22 = (char *)(v2 + 256);
        v23 = std::__detail::operator==<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 224),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v2 + 256));
        *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v23 )
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
            "./src/txt_data_manual/ShopExcelConfig.cpp",
            "finalConfig",
            77);
          v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])"goods_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" not found");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else
        {
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v27 = *(_DWORD *)(v2 + 48);
          v28 = (__int64)std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v2 + 224));
          v29 = *(_BYTE *)(((unsigned __int64)(v28 + 184) >> 3) + 0x7FFF8000);
          if ( v29 != 0 && v29 <= 3 )
          {
            LOBYTE(v22) = v29 != 0;
            v28 = __asan_report_store4(v28 + 184, v22);
          }
          *(_DWORD *)(v28 + 184) = v27;
          if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 64);
          v30 = *(_DWORD *)(v2 + 64);
          v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v2 + 224));
          v32 = *(_BYTE *)(((unsigned __int64)&v31->second.end_timestamp >> 3) + 0x7FFF8000);
          if ( v32 != 0 && (char)((((_BYTE)v31 - 68) & 7) + 3) >= v32 )
          {
            LOBYTE(v22) = v32 != 0;
            __asan_report_store4(&v31->second.end_timestamp, v22);
          }
          v31->second.end_timestamp = v30;
        }
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 160));
      }
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 96));
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

// Line 89: range 000000000CADBE80-000000000CADC0B1
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl ShopExcelConfigMgr::getGoodsIdVecByShopType(
        const ShopExcelConfigMgr *const this,
        data::ShopType shop_type,
        std::vector<unsigned int> *goods_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_goods_id_map; // rcx
  char v7; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  bool v9; // al
  int32_t result; // eax
  std::vector<unsigned int> *p_second; // rdx
  data::ShopType shop_typea; // [rsp+14h] [rbp-ACh]
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  shop_typea = shop_type;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 9 <unknown> 64 8 7 iter:90 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::getGoodsIdVecByShopType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  p_goods_id_map = &this->goods_id_map;
  v7 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  LOBYTE(shop_type) = v7 != 0;
  if ( v7 != 0 && v7 <= 3 )
    __asan_report_store4(v3 + 48, *(_QWORD *)&shop_type);
  *(_DWORD *)(v3 + 48) = shop_typea;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, *(_QWORD *)&shop_type);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_goods_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->goods_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = -1;
  }
  else
  {
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64))->second;
    std::vector<unsigned int>::operator=(goods_id_vec, p_second);
    result = 0;
  }
  if ( v14 == (char *)v3 )
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
  return result;
};

// Line 102: range 000000000CADC0B2-000000000CADC436
__int64 __fastcall ShopExcelConfigMgr::getPreGoodsIdVecByShopType(
        const ShopExcelConfigMgr *const this,
        data::ShopType shop_type,
        std::vector<unsigned int> *pre_goods_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_pre_goods_id_map; // rcx
  __int64 v7; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v13; // rax
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 9 <unknown> 48 4 13 shop_type:101 64 8 8 iter:103 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::getPreGoodsIdVecByShopType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = shop_type;
  p_pre_goods_id_map = &this->pre_goods_id_map;
  v7 = *(unsigned int *)(v3 + 48);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, v7);
  *(_DWORD *)(v3 + 32) = v7;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v7);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_pre_goods_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  v8 = &this->pre_goods_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "getPreGoodsIdVecByShopType",
      106);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 128),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v10, (const char (*)[45])byte_1A119CA0);
    common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v11, (const data::ShopType *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(pre_goods_id_vec, &v13->second);
    result = 0LL;
  }
  if ( v15 == (char *)v3 )
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

// Line 115: range 000000000CADC438-000000000CADC758
__int64 __fastcall ShopExcelConfigMgr::getPreGoodsIdVecBySheetId(
        const ShopExcelConfigMgr *const this,
        __int64 sheet_id,
        std::vector<unsigned int> *pre_goods_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_pre_sheet_goods_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v12; // rax
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 sheet_id:114 64 8 8 iter:116 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::getPreGoodsIdVecBySheetId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = sheet_id;
  p_pre_sheet_goods_id_map = &this->pre_sheet_goods_id_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, sheet_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_pre_sheet_goods_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->pre_sheet_goods_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "getPreGoodsIdVecBySheetId",
      119);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v9, (const char (*)[35])byte_1A119DA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(pre_goods_id_vec, &v12->second);
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
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

// Line 128: range 000000000CADC75A-000000000CADCA7A
__int64 __fastcall ShopExcelConfigMgr::getItemIdVecByRotateId(
        const ShopExcelConfigMgr *const this,
        __int64 rotate_id,
        std::vector<unsigned int> *item_id_vec)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_rotate_item_id_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v12; // rax
  char v14[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 13 rotate_id:127 64 8 8 iter:129 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::getItemIdVecByRotateId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = rotate_id;
  p_rotate_item_id_map = &this->rotate_item_id_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, rotate_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_rotate_item_id_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->rotate_item_id_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "getItemIdVecByRotateId",
      132);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v9, (const char (*)[49])byte_1A119EA0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::operator=(item_id_vec, &v12->second);
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
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

// Line 141: range 000000000CADCBDA-000000000CADDB63
int32_t __cdecl ShopExcelConfigMgr::rewriteShopGoodsExcelConfig(
        ShopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  __int64 TimeByStr; // rsi
  uint32_t v8; // edi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int> *v12; // rdx
  __int64 v13; // rsi
  uint32_t secondary_sheet_id; // ecx
  char v15; // al
  std::vector<unsigned int> *v16; // rdx
  std::vector<unsigned int> *v17; // rdx
  common::milog::MiLogStream *p_choose_one_group_id; // rdi
  uint32_t v19; // edx
  int v20; // eax
  common::milog::MiLogStream *p_goods_id; // rdi
  uint32_t v22; // edx
  __int64 v23; // rcx
  int v24; // edx
  unsigned int *M_current; // r14
  unsigned int *v26; // rcx
  int32_t result; // eax
  data::ShopGoodsExcelConfigMap *__for_range; // [rsp+18h] [rbp-258h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-250h]
  const std::vector<unsigned int>::value_type *goods_id; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,std::pair<unsigned int const,data::ShopGoodsExcelConfig> >::type *shop_goods_excel_config; // [rsp+30h] [rbp-240h]
  std::set<unsigned int> *goods_set; // [rsp+38h] [rbp-238h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-230h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v35; // [rsp+48h] [rbp-228h]
  std::vector<unsigned int> *goods_vec; // [rsp+58h] [rbp-218h]
  char v37[528]; // [rsp+60h] [rbp-210h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 4 12 sheet_id:155 64 8 15 __for_begin:142 96 8 13 __for_end:142 128 8 12 cmp_func:187 160 "
                        "8 15 __for_begin:202 192 8 13 __for_end:202 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unkn"
                        "own> 416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::rewriteShopGoodsExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -202116109;
  __for_range = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v3 + 96)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v3 + 64));
    goods_id = std::get<0ul,unsigned int const,data::ShopGoodsExcelConfig>(__in);
    shop_goods_excel_config = std::get<1ul,unsigned int const,data::ShopGoodsExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &shop_goods_excel_config->cost_items,
      (unsigned int *)8);
    TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&shop_goods_excel_config->begin_time);
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&shop_goods_excel_config->begin_timestamp, TimeByStr);
    }
    shop_goods_excel_config->begin_timestamp = TimeByStr;
    v8 = common::tools::TimeUtils::getTimeByStr(&shop_goods_excel_config->end_time);
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3)
                                                                             + 0x7FFF8000) )
    {
      v8 = (_DWORD)shop_goods_excel_config + 180;
      __asan_report_store4(&shop_goods_excel_config->end_timestamp, (((_BYTE)shop_goods_excel_config - 76) & 7u) + 3);
    }
    shop_goods_excel_config->end_timestamp = v8;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->begin_timestamp);
    }
    if ( !shop_goods_excel_config->begin_timestamp || !shop_goods_excel_config->end_timestamp )
    {
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
        1u,
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "rewriteShopGoodsExcelConfig",
        151);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 224),
             (const char (*)[16])" invalid_time: ");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v9,
              &shop_goods_excel_config->begin_time);
      v11 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v10, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &shop_goods_excel_config->end_time);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    v12 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
            &this->goods_id_map,
            &shop_goods_excel_config->shop_type);
    std::vector<unsigned int>::push_back(v12, goods_id);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    v13 = (((_BYTE)shop_goods_excel_config - 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->secondary_sheet_id);
    }
    secondary_sheet_id = shop_goods_excel_config->secondary_sheet_id;
    v15 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(v3 + 48, v13);
    }
    *(_DWORD *)(v3 + 48) = secondary_sheet_id;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->precondition);
    }
    if ( shop_goods_excel_config->precondition != SHOP_PRECONDITION_REST && !*(_DWORD *)(v3 + 48) )
    {
      v16 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
              &this->pre_goods_id_map,
              &shop_goods_excel_config->shop_type);
      std::vector<unsigned int>::push_back(v16, goods_id);
    }
    v6 = (const char *)((((_BYTE)shop_goods_excel_config - 68) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->precondition);
    }
    if ( shop_goods_excel_config->precondition != SHOP_PRECONDITION_SHEET_REST )
    {
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( *(_DWORD *)(v3 + 48) )
      {
        v17 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->pre_sheet_goods_id_map,
                (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
        v6 = (const char *)goods_id;
        std::vector<unsigned int>::push_back(v17, goods_id);
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->choose_one_group_id);
    }
    if ( !shop_goods_excel_config->choose_one_group_id )
      goto LABEL_65;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->buy_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->buy_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->buy_limit);
    }
    if ( shop_goods_excel_config->buy_limit == 1 )
    {
      goods_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                    &this->n_choose_one_goods_set_map,
                    &shop_goods_excel_config->choose_one_group_id);
      if ( !std::set<unsigned int>::count(goods_set, &shop_goods_excel_config->goods_id) )
      {
        std::set<unsigned int>::insert(goods_set, &shop_goods_excel_config->goods_id);
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
          1u,
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "rewriteShopGoodsExcelConfig",
          182);
        if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_goods_excel_config->goods_id);
        }
        v23 = shop_goods_excel_config->goods_id;
        if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_goods_excel_config->choose_one_group_id);
        }
        v6 = "[TREASURE] choose one group %u goods %u";
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)(v3 + 416),
          "[TREASURE] choose one group %u goods %u",
          shop_goods_excel_config->choose_one_group_id,
          v23);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
LABEL_65:
        v20 = 1;
        goto LABEL_66;
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "rewriteShopGoodsExcelConfig",
        178);
      p_goods_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 352),
                     (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_goods_id = (common::milog::MiLogStream *)&shop_goods_excel_config->goods_id;
        __asan_report_load4(&shop_goods_excel_config->goods_id);
      }
      v22 = shop_goods_excel_config->goods_id;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_goods_id = (common::milog::MiLogStream *)&shop_goods_excel_config->choose_one_group_id;
        __asan_report_load4(&shop_goods_excel_config->choose_one_group_id);
      }
      v6 = aShopN_0;
      common::milog::MiLogStream::operator()(p_goods_id, aShopN_0, shop_goods_excel_config->choose_one_group_id, v22);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "rewriteShopGoodsExcelConfig",
        172);
      p_choose_one_group_id = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 288),
                                (const char (*)[16])"[CONFIG_ERROR] ");
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->goods_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_choose_one_group_id = (common::milog::MiLogStream *)&shop_goods_excel_config->goods_id;
        __asan_report_load4(&shop_goods_excel_config->goods_id);
      }
      v19 = shop_goods_excel_config->goods_id;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->choose_one_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        p_choose_one_group_id = (common::milog::MiLogStream *)&shop_goods_excel_config->choose_one_group_id;
        __asan_report_load4(&shop_goods_excel_config->choose_one_group_id);
      }
      v6 = aShopN;
      common::milog::MiLogStream::operator()(
        p_choose_one_group_id,
        aShopN,
        shop_goods_excel_config->choose_one_group_id,
        v19);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
    }
LABEL_66:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v20 != 1 )
    {
      v24 = 0;
      goto LABEL_70;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v3 + 64));
  }
  v24 = 1;
LABEL_70:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v24 == 1 )
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(_QWORD *)(v3 + 128) = this;
    __for_range_0 = &this->goods_id_map;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 192)) )
    {
      v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160));
      std::get<0ul,unsigned int const,std::vector<unsigned int>>(v35);
      goods_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v35);
      M_current = std::vector<unsigned int>::end(goods_vec)._M_current;
      v26 = std::vector<unsigned int>::begin(goods_vec)._M_current;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 128);
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,ShopExcelConfigMgr::rewriteShopGoodsExcelConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}>(
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v26,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
        *(ShopExcelConfigMgr::rewriteShopGoodsExcelConfig::<lambda(uint32_t, uint32_t)> *)(v3 + 128));
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 160));
    }
    v2 = 0;
  }
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 187: range 000000000CADCA7C-000000000CADCBD9
bool __cdecl ShopExcelConfigMgr::rewriteShopGoodsExcelConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const ShopExcelConfigMgr::rewriteShopGoodsExcelConfig::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t lhs,
        uint32_t rhs)
{
  uint32_t sort_level; // ecx
  data::ShopGoodsExcelConfig *lhs_goods_config_ptr; // [rsp+10h] [rbp-10h]
  data::ShopGoodsExcelConfig *rhs_goods_config_ptr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  lhs_goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(__closure->__this, lhs);
  if ( !lhs_goods_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rhs_goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(__closure->__this, rhs);
  if ( !rhs_goods_config_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&lhs_goods_config_ptr->sort_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs_goods_config_ptr->sort_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs_goods_config_ptr->sort_level);
  }
  sort_level = lhs_goods_config_ptr->sort_level;
  if ( *(_BYTE *)(((unsigned __int64)&rhs_goods_config_ptr->sort_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs_goods_config_ptr->sort_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs_goods_config_ptr->sort_level);
  }
  return sort_level < rhs_goods_config_ptr->sort_level
      || lhs_goods_config_ptr->sort_level == rhs_goods_config_ptr->sort_level && lhs < rhs;
};

// Line 211: range 000000000CADDC04-000000000CADE25C
int32_t __cdecl ShopExcelConfigMgr::rewriteShopRotateExcelConfig(
        ShopExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::vector<data::ShopRotateExcelConfig> *v6; // rdx
  data::ShopRotateExcelConfig *M_current; // r14
  std::vector<data::ShopRotateExcelConfig>::iterator v8; // rax
  ShopExcelConfigMgr::rewriteShopRotateExcelConfig::<lambda(const data::ShopRotateExcelConfig&, const data::ShopRotateExcelConfig&)> v9; // dl
  std::vector<unsigned int> *v10; // rax
  int32_t result; // eax
  data::ShopRotateExcelConfigMap *__for_range; // [rsp+10h] [rbp-1C0h]
  std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>> *__for_range_0; // [rsp+18h] [rbp-1B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig> >,false,false>::reference __in; // [rsp+20h] [rbp-1B0h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *rotate_id; // [rsp+28h] [rbp-1A8h]
  std::vector<data::ShopRotateExcelConfig> *rotate_excel_config_vec; // [rsp+30h] [rbp-1A0h]
  const data::ShopRotateExcelConfig *rotate_excel_config_0; // [rsp+40h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::reference v18; // [rsp+48h] [rbp-188h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ShopRotateExcelConfig> >::type *rotate_excel_config; // [rsp+58h] [rbp-178h]
  char v20[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:214 64 8 13 __for_end:214 96 8 15 __for_begin:219 128 8 13 __for_end:219 1"
                        "60 8 15 __for_begin:227 192 8 13 __for_end:227 224 56 31 tmp_rotate_excel_config_map:213";
  *(_QWORD *)(v2 + 16) = ShopExcelConfigMgr::rewriteShopRotateExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::unordered_map((std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>> *const)(v2 + 224));
  __for_range = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v2 + 64)) )
      break;
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::ShopRotateExcelConfig>(v18);
    rotate_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ShopRotateExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ShopRotateExcelConfig>(v18);
    v6 = std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::operator[](
           (std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>> *const)(v2 + 224),
           &rotate_excel_config->rotate_id);
    std::vector<data::ShopRotateExcelConfig>::push_back(v6, rotate_excel_config);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = (std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>> *)(v2 + 224);
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig> >,false> *)(v2 + 128)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig> >,false,false> *const)(v2 + 96));
    rotate_id = std::get<0ul,unsigned int const,std::vector<data::ShopRotateExcelConfig>>(__in);
    rotate_excel_config_vec = std::get<1ul,unsigned int const,std::vector<data::ShopRotateExcelConfig>>(__in);
    M_current = std::vector<data::ShopRotateExcelConfig>::end(rotate_excel_config_vec)._M_current;
    v8._M_current = std::vector<data::ShopRotateExcelConfig>::begin(rotate_excel_config_vec)._M_current;
    std::sort<__gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig *,std::vector<data::ShopRotateExcelConfig>>,ShopExcelConfigMgr::rewriteShopRotateExcelConfig(TxtConfigMgr &)::{lambda(data::ShopRotateExcelConfig const&,data::ShopRotateExcelConfig const&)#1}>(
      v8,
      (__gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig*,std::vector<data::ShopRotateExcelConfig> >)M_current,
      v9);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, M_current);
    *(std::vector<data::ShopRotateExcelConfig>::iterator *)(v2 + 160) = std::vector<data::ShopRotateExcelConfig>::begin(rotate_excel_config_vec);
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, M_current);
    *(std::vector<data::ShopRotateExcelConfig>::iterator *)(v2 + 192) = std::vector<data::ShopRotateExcelConfig>::end(rotate_excel_config_vec);
    while ( __gnu_cxx::operator!=<data::ShopRotateExcelConfig *,std::vector<data::ShopRotateExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig*,std::vector<data::ShopRotateExcelConfig> > *)(v2 + 160),
              (const __gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig*,std::vector<data::ShopRotateExcelConfig> > *)(v2 + 192)) )
    {
      rotate_excel_config_0 = __gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig *,std::vector<data::ShopRotateExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig*,std::vector<data::ShopRotateExcelConfig> > *const)(v2 + 160));
      v10 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](&this->rotate_item_id_map, rotate_id);
      std::vector<unsigned int>::push_back(v10, &rotate_excel_config_0->item_id);
      __gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig *,std::vector<data::ShopRotateExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ShopRotateExcelConfig*,std::vector<data::ShopRotateExcelConfig> > *const)(v2 + 160));
    }
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::ShopRotateExcelConfig> >,false,false> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>>::~unordered_map((std::unordered_map<unsigned int,std::vector<data::ShopRotateExcelConfig>> *const)(v2 + 224));
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 222: range 000000000CADDB64-000000000CADDC03
bool __cdecl ShopExcelConfigMgr::rewriteShopRotateExcelConfig(TxtConfigMgr &)::{lambda(data::ShopRotateExcelConfig const&,data::ShopRotateExcelConfig const&)#1}::operator()(
        const ShopExcelConfigMgr::rewriteShopRotateExcelConfig::<lambda(const data::ShopRotateExcelConfig&, const data::ShopRotateExcelConfig&)> *const __closure,
        const data::ShopRotateExcelConfig *lhs,
        const data::ShopRotateExcelConfig *rhs)
{
  uint32_t rotate_order; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->rotate_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->rotate_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->rotate_order);
  }
  rotate_order = lhs->rotate_order;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->rotate_order >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->rotate_order >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->rotate_order);
  }
  return rotate_order < rhs->rotate_order;
};

// Line 237: range 000000000CADE25E-000000000CADED1E
int32_t __cdecl ShopExcelConfigMgr::checkShopExcelConfig(
        ShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int32_t result; // eax
  data::ShopExcelConfigMap *__for_range; // [rsp+10h] [rbp-1F0h]
  std::__detail::_Node_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false>::reference v29; // [rsp+18h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const data::ShopType,data::ShopExcelConfig> >::type *shop_type; // [rsp+20h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<const data::ShopType,data::ShopExcelConfig> >::type *shop_excel_config; // [rsp+28h] [rbp-1D8h]
  char v32[464]; // [rsp+30h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:238 64 8 13 __for_end:238 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::checkShopExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->shop_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::ShopType,data::ShopExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<data::ShopType,data::ShopExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<data::ShopType const,data::ShopExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ShopType,data::ShopExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_50;
    }
    v29 = std::__detail::_Node_iterator<std::pair<data::ShopType const,data::ShopExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false> *const)(v3 + 32));
    shop_type = std::get<0ul,data::ShopType const,data::ShopExcelConfig>(v29);
    shop_excel_config = (std::tuple_element<1,const std::pair<const data::ShopType,data::ShopExcelConfig> >::type *)std::get<1ul,data::ShopType const,data::ShopExcelConfig>(v29);
    if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->open_state_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_excel_config->open_state_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_excel_config->open_state_type);
    }
    if ( shop_excel_config->open_state_type
      && !data::OpenStateExcelConfigMgrBase::findOpenStateConfig(
            &txt_config_mgr->open_state_config_mgr,
            (unsigned int)shop_excel_config->open_state_type) )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopExcelConfig",
        243);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v7, (const char (*)[53])byte_1A11A360);
      common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v8, shop_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_excel_config->refresh_type);
    }
    if ( shop_excel_config->refresh_type == SHOP_REFRESH_DAILY )
    {
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopExcelConfig",
        249);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v10, (const char (*)[49])byte_1A11A3C0);
      common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v11, shop_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v9 = 0;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_excel_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_excel_config->city_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_excel_config->city_id);
    }
    if ( shop_excel_config->city_id )
    {
      if ( !WorldAreaExcelConfigMgr::findCityConfig(&txt_config_mgr->world_area_config_mgr, shop_excel_config->city_id) )
      {
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopExcelConfig",
          257);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])"shop_type:");
        v14 = common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v13, shop_type);
        v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])byte_1A11A420);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &shop_excel_config->city_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1A117C40);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v9 = 0;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->scoin_discount_rate >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_excel_config->scoin_discount_rate >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_excel_config->scoin_discount_rate);
      }
      if ( shop_excel_config->scoin_discount_rate > 0x63 )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopExcelConfig",
          263);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])"shop_type:");
        v19 = common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v18, shop_type);
        v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])byte_1A11A420);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &shop_excel_config->city_id);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v21, (const char (*)[40])byte_1A11A460);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v2 = -1;
        v9 = 0;
        goto LABEL_50;
      }
      if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->scoin_discount_rate >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_excel_config->scoin_discount_rate >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_excel_config->scoin_discount_rate);
      }
      if ( shop_excel_config->scoin_discount_rate )
      {
        if ( *(_BYTE *)(((unsigned __int64)&shop_excel_config->city_discount_level >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&shop_excel_config->city_discount_level >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&shop_excel_config->city_discount_level);
        }
        if ( !shop_excel_config->city_discount_level )
          break;
      }
    }
    std::__detail::_Node_iterator<std::pair<data::ShopType const,data::ShopExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ShopType,data::ShopExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ShopExcelConfig.cpp",
    "checkShopExcelConfig",
    268);
  v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])"shop_type:");
  v24 = common::milog::MiLogStream::operator<<<data::ShopType,(data::ShopType*)0>(v23, shop_type);
  v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])byte_1A11A420);
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &shop_excel_config->city_id);
  common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v26, (const char (*)[47])byte_1A11A4C0);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v9 = 0;
LABEL_50:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
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

// Line 277: range 000000000CADED20-000000000CAE535B
int32_t __cdecl ShopExcelConfigMgr::checkShopGoodsExcelConfig(
        ShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  ActivityShopExcelConfigMgr *p_activity_shop_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t begin_timestamp; // ecx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  ActivityShopExcelConfigMgr *v15; // rcx
  char isActivityShop; // cl
  char v17; // al
  __int64 shop_type; // rsi
  char v19; // dl
  char v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  int v39; // eax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  char v48; // al
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rdx
  ShopExcelConfigMgr *v51; // rcx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  data::ShopRefreshType refresh_type; // ecx
  uint32_t refresh_param; // ecx
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  uint32_t min_player_level; // ecx
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rdx
  int v77; // eax
  const std::string *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  ShopExcelConfigMgr *v81; // rdx
  int v82; // eax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rdx
  _BOOL4 v87; // edx
  unsigned __int64 v88; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rdx
  unsigned __int64 v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rdx
  _BOOL4 v95; // edx
  unsigned __int64 v96; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rdx
  unsigned __int64 v100; // rax
  common::milog::MiLogStream *v101; // rax
  _BOOL4 v102; // edx
  unsigned __int64 v103; // rax
  const std::string *v104; // rax
  char *v105; // rsi
  common::milog::MiLogStream *v106; // rax
  char *v107; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v108; // rax
  int *v109; // rdx
  int v110; // ecx
  char v111; // al
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  int v114; // edx
  unsigned __int64 v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rdx
  _BOOL4 v118; // edx
  unsigned __int64 v119; // rax
  const std::string *v120; // rax
  char *v121; // rsi
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rdx
  char *v124; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v125; // rax
  int *v126; // rdx
  int v127; // ecx
  char v128; // al
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  int v132; // edx
  unsigned __int64 v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rdx
  int v136; // eax
  const std::string *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rdx
  GCGGrowthExcelConfigMgr *p_gcg_growth_config_mgr; // rcx
  int v141; // eax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rdx
  __int64 v146; // rsi
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rdx
  int v149; // eax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rdx
  GCGDeckExcelConfigMgr *p_gcg_deck_config_mgr; // rcx
  int v153; // eax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rdx
  uint32_t GCGCardProficiencyLimit; // ecx
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rdx
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rdx
  int v163; // eax
  const std::string *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rdx
  GCGDeckExcelConfigMgr *v167; // rcx
  int v168; // eax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rdx
  __int64 v173; // rsi
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rdx
  int v176; // eax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rdx
  GCGPlayingExcelConfigMgr *p_gcg_playing_config_mgr; // rcx
  int v180; // eax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rdx
  common::milog::MiLogStream *v185; // rax
  common::milog::MiLogStream *v186; // rdx
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rdx
  int v189; // eax
  const std::string *v190; // rax
  common::milog::MiLogStream *v191; // rax
  char v193; // [rsp+8h] [rbp-FC8h]
  int v194; // [rsp+8h] [rbp-FC8h]
  int v195; // [rsp+8h] [rbp-FC8h]
  bool v196; // [rsp+8h] [rbp-FC8h]
  _BOOL4 v197; // [rsp+8h] [rbp-FC8h]
  bool v198; // [rsp+8h] [rbp-FC8h]
  _BOOL4 v199; // [rsp+8h] [rbp-FC8h]
  std::vector<data::GCGChallengeReward>::size_type v200; // [rsp+8h] [rbp-FC8h]
  uint32_t sheet_id_0; // [rsp+28h] [rbp-FA8h]
  data::ShopGoodsExcelConfigMap *__for_range; // [rsp+30h] [rbp-FA0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::reference v204; // [rsp+38h] [rbp-F98h]
  std::tuple_element<0,std::pair<unsigned int const,data::ShopGoodsExcelConfig> >::type *goods_id; // [rsp+40h] [rbp-F90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ShopGoodsExcelConfig> >::type *shop_goods_excel_config; // [rsp+48h] [rbp-F88h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+50h] [rbp-F80h]
  const data::IdCountConfig *cost_item; // [rsp+58h] [rbp-F78h]
  data::ShopExcelConfig *shop_config_ptr; // [rsp+60h] [rbp-F70h]
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+68h] [rbp-F68h]
  std::vector<unsigned int> *__for_range_2; // [rsp+70h] [rbp-F60h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-F58h]
  char v213[3920]; // [rsp+80h] [rbp-F50h] BYREF

  v3 = (unsigned __int64)v213;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(3872LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "73 32 1 9 <unknown> 48 1 9 <unknown> 64 4 16 pre_goods_id:420 80 4 14 watcher_id:481 96 4 12 que"
                        "st_id:504 112 4 9 level:520 128 4 11 card_id:539 144 4 15 proficiency:540 160 4 11 card_id:564 1"
                        "76 4 12 level_id:583 192 4 19 challenge_count:584 208 4 17 region_day_id:609 224 8 15 __for_begi"
                        "n:278 256 8 13 __for_end:278 288 8 15 __for_begin:328 320 8 13 __for_end:328 352 8 15 __for_begi"
                        "n:481 384 8 13 __for_end:481 416 8 15 __for_begin:504 448 8 13 __for_end:504 480 24 20 pre_goods"
                        "_id_vec:442 544 24 20 pre_goods_id_vec:460 608 24 18 watcher_id_vec:475 672 24 16 quest_id_vec:4"
                        "98 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown"
                        "> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unk"
                        "nown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 "
                        "<unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 3"
                        "2 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 22"
                        "72 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown"
                        "> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unk"
                        "nown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 "
                        "<unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 3"
                        "2 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 38"
                        "08 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::checkShopGoodsExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -234556924;
  v5[536862725] = -234556924;
  v5[536862726] = -234556924;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -234881024;
  v5[536862736] = -218959118;
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862741] = -234881024;
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
  v5[536862838] = -218959118;
  v5[536862840] = -202116109;
  __for_range = &this->shop_goods_excel_config_map;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,data::ShopGoodsExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v3 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false> *)(v3 + 256)) )
    {
      v8 = 1;
      goto LABEL_442;
    }
    v204 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v3 + 224));
    goods_id = std::get<0ul,unsigned int const,data::ShopGoodsExcelConfig>(v204);
    shop_goods_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ShopGoodsExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ShopGoodsExcelConfig>(v204);
    v193 = std::string::empty();
    if ( v193 != (unsigned __int8)std::string::empty() )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        282);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 736),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v6, (const char (*)[50])byte_1A11AB80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &shop_goods_excel_config->goods_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    p_activity_shop_config_mgr = &txt_config_mgr->activity_shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->shop_type);
    }
    if ( (unsigned __int8)ActivityShopExcelConfigMgr::isActivityShop(
                            p_activity_shop_config_mgr,
                            shop_goods_excel_config->shop_type) != 1 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_goods_excel_config->begin_timestamp);
      }
      if ( !shop_goods_excel_config->begin_timestamp )
        goto LABEL_23;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->end_timestamp);
      }
      if ( !shop_goods_excel_config->end_timestamp )
      {
LABEL_23:
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          290);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v10, (const char (*)[53])byte_1A11ABE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &shop_goods_excel_config->goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_goods_excel_config->begin_timestamp);
      }
      begin_timestamp = shop_goods_excel_config->begin_timestamp;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->end_timestamp);
      }
      if ( begin_timestamp >= shop_goods_excel_config->end_timestamp )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          296);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v13, (const char (*)[56])byte_1A11AC40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &shop_goods_excel_config->goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
    }
    v15 = &txt_config_mgr->activity_shop_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->shop_type);
    }
    shop_type = shop_goods_excel_config->shop_type;
    isActivityShop = ActivityShopExcelConfigMgr::isActivityShop(v15, shop_type);
    v17 = *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000);
    LOBYTE(shop_type) = v17 != 0;
    if ( v17 != 0 && v17 <= 3 )
      __asan_report_load4(&shop_goods_excel_config->begin_timestamp);
    if ( shop_goods_excel_config->begin_timestamp )
      goto LABEL_43;
    v19 = *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3) + 0x7FFF8000);
    LOBYTE(shop_type) = v19 != 0;
    if ( v19 != 0 && (char)((((_BYTE)shop_goods_excel_config - 76) & 7) + 3) >= v19 )
      __asan_report_load4(&shop_goods_excel_config->end_timestamp);
    if ( shop_goods_excel_config->end_timestamp )
LABEL_43:
      v20 = 0;
    else
      v20 = 1;
    if ( v20 != isActivityShop )
    {
      *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 928, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 928),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        303);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 928),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [122],(char *[122])0>(v21, (const char (*)[122])byte_1A11ACA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, goods_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->item_id);
    }
    if ( !shop_goods_excel_config->item_id )
    {
      shop_type = (((_BYTE)shop_goods_excel_config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->rotate_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->rotate_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->rotate_id);
      }
      if ( !shop_goods_excel_config->rotate_id )
        goto LABEL_60;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->item_id);
    }
    if ( shop_goods_excel_config->item_id )
    {
      shop_type = (((_BYTE)shop_goods_excel_config + 20) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->rotate_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->rotate_id >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->rotate_id);
      }
      if ( shop_goods_excel_config->rotate_id )
      {
LABEL_60:
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          311);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(v23, (const char (*)[72])byte_1A11AD40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->item_id);
    }
    if ( shop_goods_excel_config->item_id )
    {
      shop_type = shop_goods_excel_config->item_id;
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, shop_type, ITEM_LIMIT_SHOP) )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          318);
        v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1056),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v26, (const char (*)[49])byte_1A11ADC0);
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, goods_id);
        v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])byte_1A11AE20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &shop_goods_excel_config->item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->item_count);
    }
    if ( !shop_goods_excel_config->item_count )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        324);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1120),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v30, (const char (*)[53])byte_1A11AE60);
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, goods_id);
      v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v32, (const char (*)[13])byte_1A11AE20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &shop_goods_excel_config->item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    __for_range_0 = &shop_goods_excel_config->cost_items;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, shop_type);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 288) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, shop_type);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 320) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 320)) )
      {
        v39 = 1;
        goto LABEL_106;
      }
      cost_item = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 288));
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cost_item->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, cost_item->id) )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          332);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v35, (const char (*)[55])byte_1A11AEC0);
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, goods_id);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v37, (const char (*)[16])byte_1A11AF20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &cost_item->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v39 = 0;
        goto LABEL_106;
      }
      if ( *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cost_item + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_item->count >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&cost_item->count);
      }
      if ( !cost_item->count )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          338);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v40, (const char (*)[59])byte_1A11AF60);
        v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, goods_id);
        v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v42, (const char (*)[16])byte_1A11AF20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &cost_item->id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
        *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v39 = 0;
        goto LABEL_106;
      }
      if ( *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cost_item->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cost_item->id);
      }
      if ( cost_item->id == 201 || cost_item->id == 202 )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 288));
    }
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
      "./src/txt_data_manual/ShopExcelConfig.cpp",
      "checkShopGoodsExcelConfig",
      344);
    v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 1312),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v45 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v44, (const char (*)[68])byte_1A11AFC0);
    v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, goods_id);
    v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v46, (const char (*)[16])byte_1A11AF20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &cost_item->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
    *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v39 = 0;
LABEL_106:
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v39 != 1 )
    {
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->item_id);
    }
    if ( shop_goods_excel_config->item_id != 106 )
    {
      if ( !std::vector<data::IdCountConfig>::empty(&shop_goods_excel_config->cost_items) )
        goto LABEL_122;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_scoin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_scoin >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->cost_scoin);
      }
      if ( shop_goods_excel_config->cost_scoin )
        goto LABEL_122;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_hcoin >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_hcoin >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_goods_excel_config->cost_hcoin);
      }
      if ( shop_goods_excel_config->cost_hcoin )
        goto LABEL_122;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_mcoin >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->cost_mcoin >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->cost_mcoin);
      }
      if ( shop_goods_excel_config->cost_mcoin )
LABEL_122:
        v48 = 0;
      else
        v48 = 1;
      if ( v48 )
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          354);
        v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1376),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v50 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v49, (const char (*)[50])byte_1A11B040);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
    }
    v51 = this;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->shop_type);
    }
    shop_config_ptr = data::ShopExcelConfigMgrBase::findShopExcelConfig(v51, shop_goods_excel_config->shop_type);
    if ( !shop_config_ptr )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        362);
      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1440),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v53 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v52, (const char (*)[44])byte_1A11B0A0);
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, goods_id);
      v55 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v54, (const char (*)[17])byte_1A11B100);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &shop_goods_excel_config->shop_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_config_ptr->refresh_type);
    }
    if ( shop_config_ptr->refresh_type )
    {
      refresh_type = shop_config_ptr->refresh_type;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&shop_goods_excel_config->refresh_type);
      }
      if ( refresh_type != shop_goods_excel_config->refresh_type )
        goto LABEL_144;
      if ( *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_config_ptr->refresh_param >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_config_ptr->refresh_param);
      }
      refresh_param = shop_config_ptr->refresh_param;
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->refresh_param);
      }
      if ( refresh_param != shop_goods_excel_config->refresh_param )
      {
LABEL_144:
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          368);
        v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1504),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v59 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(v58, (const char (*)[74])byte_1A11B140);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
        v2 = -1;
        v8 = 0;
        goto LABEL_442;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->refresh_type);
    }
    if ( shop_goods_excel_config->refresh_type == SHOP_REFRESH_NONE )
      goto LABEL_183;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->begin_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->begin_timestamp);
    }
    if ( !shop_goods_excel_config->begin_timestamp )
      goto LABEL_156;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->end_timestamp >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->end_timestamp);
    }
    if ( !shop_goods_excel_config->end_timestamp )
    {
LABEL_156:
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        377);
      v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1568),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v61 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(v60, (const char (*)[70])byte_1A11B1C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, goods_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->refresh_param);
    }
    if ( !shop_goods_excel_config->refresh_param )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        383);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1632),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v63 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v62, (const char (*)[44])byte_1A11B240);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, goods_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->refresh_type);
    }
    if ( shop_goods_excel_config->refresh_type != SHOP_REFRESH_MONTHLY )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->refresh_param);
    }
    if ( shop_goods_excel_config->refresh_param > 0x1C )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        391);
      v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1696),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v65 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v64, (const char (*)[59])byte_1A11B2A0);
      v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, goods_id);
      v67 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v66, (const char (*)[17])byte_1A11B300);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v67,
        &shop_goods_excel_config->refresh_param);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
LABEL_183:
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->min_player_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->min_player_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&shop_goods_excel_config->min_player_level);
    }
    min_player_level = shop_goods_excel_config->min_player_level;
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->max_player_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->max_player_level >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->max_player_level);
    }
    if ( min_player_level > shop_goods_excel_config->max_player_level )
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
        "./src/txt_data_manual/ShopExcelConfig.cpp",
        "checkShopGoodsExcelConfig",
        408);
      v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1824),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v74 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v73, (const char (*)[50])byte_1A11B3A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v74, &shop_goods_excel_config->goods_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1824));
      v2 = -1;
      v8 = 0;
      goto LABEL_442;
    }
    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&shop_goods_excel_config->precondition);
    }
    if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_SPECIFY )
    {
      if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
      {
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3);
        *(_DWORD *)(v3 + 64) = 0;
        v78 = std::vector<std::string>::operator[](&shop_goods_excel_config->precondition_param_list, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v78, (unsigned int *)(v3 + 64), 1) )
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
            "./src/txt_data_manual/ShopExcelConfig.cpp",
            "checkShopGoodsExcelConfig",
            423);
          v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1952),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v80 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v79,
                  (const char (*)[25])"[SHOP] strToNum failed: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, goods_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1952));
          *(_DWORD *)(((v3 + 1952) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v77 = 0;
        }
        else
        {
          v81 = this;
          v82 = *(unsigned __int8 *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v82 != 0 && (char)v82 <= 3 )
            __asan_report_load4(v3 + 64);
          if ( data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(v81, *(unsigned int *)(v3 + 64)) )
          {
            v77 = 1;
          }
          else
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
              "./src/txt_data_manual/ShopExcelConfig.cpp",
              "checkShopGoodsExcelConfig",
              428);
            v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2016),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v84 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v83,
                    (const char (*)[44])byte_1A11B4A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, goods_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2016));
            *(_DWORD *)(((v3 + 2016) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v77 = 0;
          }
        }
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
          "./src/txt_data_manual/ShopExcelConfig.cpp",
          "checkShopGoodsExcelConfig",
          417);
        v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1888),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v76 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v75,
                (const char (*)[50])"[SHOP] precondition_param_list.size less than 1: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v76, goods_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1888));
        *(_DWORD *)(((v3 + 1888) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v77 = 0;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v77 != 1 )
      {
        v8 = 0;
        goto LABEL_442;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&shop_goods_excel_config->precondition);
      }
      if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_REST )
      {
        if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_goods_excel_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_goods_excel_config->secondary_sheet_id);
        }
        if ( shop_goods_excel_config->secondary_sheet_id )
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
            "./src/txt_data_manual/ShopExcelConfig.cpp",
            "checkShopGoodsExcelConfig",
            438);
          v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 2080),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v86 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v85, (const char (*)[43])byte_1A11B500);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, goods_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2080));
          *(_DWORD *)(((v3 + 2080) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v87 = 0;
        }
        else
        {
          v88 = ((v3 + 480) >> 3) + 2147450880;
          *(_WORD *)v88 = 0;
          *(_BYTE *)(v88 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 480));
          if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)shop_goods_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->shop_type >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&shop_goods_excel_config->shop_type);
          }
          if ( (unsigned int)ShopExcelConfigMgr::getPreGoodsIdVecByShopType(
                               this,
                               (data::ShopType)shop_goods_excel_config->shop_type,
                               (std::vector<unsigned int> *)(v3 + 480))
            || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 480)) )
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
              "./src/txt_data_manual/ShopExcelConfig.cpp",
              "checkShopGoodsExcelConfig",
              446);
            v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2144),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v91 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v90,
                    (const char (*)[44])byte_1A11B4A0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, goods_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2144));
            *(_DWORD *)(((v3 + 2144) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v194 = 0;
          }
          else
          {
            v194 = 1;
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 480));
          v87 = v194 == 1;
        }
        v92 = ((v3 + 480) >> 3) + 2147450880;
        *(_WORD *)v92 = -1800;
        *(_BYTE *)(v92 + 2) = -8;
        if ( !v87 )
        {
          v8 = 0;
          goto LABEL_442;
        }
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&shop_goods_excel_config->precondition);
        }
        if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_SHEET_REST )
        {
          if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)shop_goods_excel_config - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->secondary_sheet_id >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&shop_goods_excel_config->secondary_sheet_id);
          }
          sheet_id_0 = shop_goods_excel_config->secondary_sheet_id;
          if ( sheet_id_0 )
          {
            v96 = ((v3 + 544) >> 3) + 2147450880;
            *(_WORD *)v96 = 0;
            *(_BYTE *)(v96 + 2) = 0;
            std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 544));
            if ( (unsigned int)ShopExcelConfigMgr::getPreGoodsIdVecBySheetId(
                                 this,
                                 sheet_id_0,
                                 (std::vector<unsigned int> *)(v3 + 544))
              || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 544)) )
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
                "./src/txt_data_manual/ShopExcelConfig.cpp",
                "checkShopGoodsExcelConfig",
                464);
              v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 2272),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v99 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      v98,
                      (const char (*)[44])byte_1A11B4A0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, goods_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2272));
              *(_DWORD *)(((v3 + 2272) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v195 = 0;
            }
            else
            {
              v195 = 1;
            }
            std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 544));
            v95 = v195 == 1;
          }
          else
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
              "./src/txt_data_manual/ShopExcelConfig.cpp",
              "checkShopGoodsExcelConfig",
              456);
            v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 2208),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v94 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    v93,
                    (const char (*)[46])byte_1A11B560);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, goods_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2208));
            *(_DWORD *)(((v3 + 2208) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v95 = 0;
          }
          v100 = ((v3 + 544) >> 3) + 2147450880;
          *(_WORD *)v100 = -1800;
          *(_BYTE *)(v100 + 2) = -8;
          if ( !v95 )
          {
            v8 = 0;
            goto LABEL_442;
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&shop_goods_excel_config->precondition);
          }
          if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_SHEET_FLEUR_FAIR_WATCHER_FINISH )
          {
            if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
            {
              v103 = ((v3 + 608) >> 3) + 2147450880;
              *(_WORD *)v103 = 0;
              *(_BYTE *)(v103 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 608));
              *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 32);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 2400),
                ",",
                (const std::allocator<char> *)(v3 + 32));
              v104 = std::vector<std::string>::operator[](&shop_goods_excel_config->precondition_param_list, 0LL);
              v105 = (char *)(v3 + 2400);
              v196 = common::tools::StringUtils::splitToList<unsigned int>(
                       v104,
                       (const std::string *)(v3 + 2400),
                       (std::vector<unsigned int> *)(v3 + 608),
                       0) != 0;
              std::string::~string((void *)(v3 + 2400));
              *(_DWORD *)(((v3 + 2400) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 32);
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
              if ( v196 )
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
                  "./src/txt_data_manual/ShopExcelConfig.cpp",
                  "checkShopGoodsExcelConfig",
                  478);
                v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2464),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  v106,
                  (const char (*)[26])"[SHOP] splitToList failed");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2464));
                *(_DWORD *)(((v3 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v197 = 0;
              }
              else
              {
                __for_range_1 = (std::vector<unsigned int> *)(v3 + 608);
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 352, v105);
                *(std::vector<unsigned int>::iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_1);
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 384, v105);
                *(std::vector<unsigned int>::iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_1);
                while ( 1 )
                {
                  v107 = (char *)(v3 + 384);
                  if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 352),
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 384)) )
                  {
                    v114 = 1;
                    goto LABEL_284;
                  }
                  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                  v108 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
                  v109 = (int *)v108;
                  if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v108 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v108);
                  }
                  v110 = *v109;
                  v111 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
                  if ( v111 != 0 && v111 <= 3 )
                  {
                    LOBYTE(v107) = v111 != 0;
                    __asan_report_store4(v3 + 80, v107);
                  }
                  *(_DWORD *)(v3 + 80) = v110;
                  if ( !WatcherExcelConfigMgr::findWatcherConfig(
                          &txt_config_mgr->watcher_config_mgr,
                          *(_DWORD *)(v3 + 80)) )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 352));
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
                  "./src/txt_data_manual/ShopExcelConfig.cpp",
                  "checkShopGoodsExcelConfig",
                  485);
                v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2528),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v113 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                         v112,
                         (const char (*)[38])byte_1A11B660);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v113,
                  (const unsigned int *)(v3 + 80));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2528));
                *(_DWORD *)(((v3 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v114 = 0;
LABEL_284:
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
                v197 = v114 == 1;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 608));
              v102 = v197;
            }
            else
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
                "./src/txt_data_manual/ShopExcelConfig.cpp",
                "checkShopGoodsExcelConfig",
                472);
              v101 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 2336),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                v101,
                (const char (*)[41])"precondition_param_list size less than 1");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2336));
              *(_DWORD *)(((v3 + 2336) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v102 = 0;
            }
            v115 = ((v3 + 608) >> 3) + 2147450880;
            *(_WORD *)v115 = -1800;
            *(_BYTE *)(v115 + 2) = -8;
            if ( !v102 )
            {
              v8 = 0;
              goto LABEL_442;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4(&shop_goods_excel_config->precondition);
            }
            if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_QUEST_FINISH_ANY
              || shop_goods_excel_config->precondition == SHOP_PRECONDITION_QUEST_FINISH_ALL )
            {
              if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
              {
                v119 = ((v3 + 672) >> 3) + 2147450880;
                *(_WORD *)v119 = 0;
                *(_BYTE *)(v119 + 2) = 0;
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 672));
                *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 48);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 2656),
                  ",",
                  (const std::allocator<char> *)(v3 + 48));
                v120 = std::vector<std::string>::operator[](&shop_goods_excel_config->precondition_param_list, 0LL);
                v121 = (char *)(v3 + 2656);
                v198 = common::tools::StringUtils::splitToList<unsigned int>(
                         v120,
                         (const std::string *)(v3 + 2656),
                         (std::vector<unsigned int> *)(v3 + 672),
                         0) != 0;
                std::string::~string((void *)(v3 + 2656));
                *(_DWORD *)(((v3 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 48);
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                if ( v198 )
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
                    "./src/txt_data_manual/ShopExcelConfig.cpp",
                    "checkShopGoodsExcelConfig",
                    501);
                  v122 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2720),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v123 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                           v122,
                           (const char (*)[62])byte_1A11B720);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v123, goods_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2720));
                  *(_DWORD *)(((v3 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v199 = 0;
                }
                else
                {
                  __for_range_2 = (std::vector<unsigned int> *)(v3 + 672);
                  *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 416, v121);
                  *(std::vector<unsigned int>::iterator *)(v3 + 416) = std::vector<unsigned int>::begin(__for_range_2);
                  *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v3 + 448, v121);
                  *(std::vector<unsigned int>::iterator *)(v3 + 448) = std::vector<unsigned int>::end(__for_range_2);
                  while ( 1 )
                  {
                    v124 = (char *)(v3 + 448);
                    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 416),
                            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 448)) )
                    {
                      v132 = 1;
                      goto LABEL_316;
                    }
                    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
                    v125 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 416));
                    v126 = (int *)v125;
                    if ( *(_BYTE *)(((unsigned __int64)v125 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v125 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v125 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v125);
                    }
                    v127 = *v126;
                    v128 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
                    if ( v128 != 0 && v128 <= 3 )
                    {
                      LOBYTE(v124) = v128 != 0;
                      __asan_report_store4(v3 + 96, v124);
                    }
                    *(_DWORD *)(v3 + 96) = v127;
                    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                            &txt_config_mgr->quest_config_mgr,
                            *(unsigned int *)(v3 + 96)) )
                      break;
                    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 416));
                  }
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
                    "./src/txt_data_manual/ShopExcelConfig.cpp",
                    "checkShopGoodsExcelConfig",
                    508);
                  v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2784),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v130 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                           v129,
                           (const char (*)[42])byte_1A11B780);
                  v131 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v130,
                           (const unsigned int *)(v3 + 96));
                  common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    v131,
                    (const char (*)[27])byte_1A11B7E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2784));
                  *(_DWORD *)(((v3 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v132 = 0;
LABEL_316:
                  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
                  v199 = v132 == 1;
                }
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 672));
                v118 = v199;
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
                  "./src/txt_data_manual/ShopExcelConfig.cpp",
                  "checkShopGoodsExcelConfig",
                  495);
                v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 2592),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v117 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                         v116,
                         (const char (*)[59])byte_1A11B6C0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v117, goods_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2592));
                *(_DWORD *)(((v3 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v118 = 0;
              }
              v133 = ((v3 + 672) >> 3) + 2147450880;
              *(_WORD *)v133 = -1800;
              *(_BYTE *)(v133 + 2) = -8;
              if ( !v118 )
              {
                v8 = 0;
                goto LABEL_442;
              }
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                       + 0x7FFF8000) )
              {
                __asan_report_load4(&shop_goods_excel_config->precondition);
              }
              if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_GCG_LEVEL )
              {
                if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
                {
                  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
                  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(v3 + 112, (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3);
                  }
                  *(_DWORD *)(v3 + 112) = 0;
                  v137 = std::vector<std::string>::operator[](&shop_goods_excel_config->precondition_param_list, 0LL);
                  if ( common::tools::StringUtils::strToNum<unsigned int>(v137, (unsigned int *)(v3 + 112), 1) )
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
                      "./src/txt_data_manual/ShopExcelConfig.cpp",
                      "checkShopGoodsExcelConfig",
                      523);
                    v138 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 2912),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v139 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                             v138,
                             (const char (*)[25])"[SHOP] strToNum failed: ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v139, goods_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2912));
                    *(_DWORD *)(((v3 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v136 = 0;
                  }
                  else
                  {
                    p_gcg_growth_config_mgr = &txt_config_mgr->gcg_growth_config_mgr;
                    v141 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
                    if ( (_BYTE)v141 != 0 && (char)v141 <= 3 )
                      __asan_report_load4(v3 + 112);
                    if ( data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(
                           p_gcg_growth_config_mgr,
                           *(unsigned int *)(v3 + 112)) )
                    {
                      v136 = 1;
                    }
                    else
                    {
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
                        "./src/txt_data_manual/ShopExcelConfig.cpp",
                        "checkShopGoodsExcelConfig",
                        528);
                      v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 2976),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v143 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                               v142,
                               (const char (*)[71])byte_1A11B820);
                      v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                               v143,
                               (const unsigned int *)(v3 + 112));
                      v145 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                               v144,
                               (const char (*)[12])byte_1A11B8A0);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v145, goods_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2976));
                      *(_DWORD *)(((v3 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v136 = 0;
                    }
                  }
                }
                else
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
                    "./src/txt_data_manual/ShopExcelConfig.cpp",
                    "checkShopGoodsExcelConfig",
                    517);
                  v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 2848),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v135 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                           v134,
                           (const char (*)[59])byte_1A11B6C0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v135, goods_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2848));
                  *(_DWORD *)(((v3 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v136 = 0;
                }
                *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
                if ( v136 != 1 )
                {
                  v8 = 0;
                  goto LABEL_442;
                }
              }
              else
              {
                v146 = (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3;
                if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                         + 0x7FFF8000) )
                {
                  __asan_report_load4(&shop_goods_excel_config->precondition);
                }
                if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_GCG_CARD_PROFICIENCY )
                {
                  if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) > 1 )
                  {
                    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 128, v146);
                    }
                    *(_DWORD *)(v3 + 128) = 0;
                    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 4;
                    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_store4(v3 + 144, v146);
                    }
                    *(_DWORD *)(v3 + 144) = 0;
                    if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
                           &shop_goods_excel_config->precondition_param_list,
                           (unsigned int *)(v3 + 128),
                           (unsigned int *)(v3 + 144),
                           (unsigned int *)&shop_goods_excel_config->precondition_param_list) )
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
                        "./src/txt_data_manual/ShopExcelConfig.cpp",
                        "checkShopGoodsExcelConfig",
                        543);
                      v150 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 3104),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v151 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                               v150,
                               (const char (*)[28])"[SHOP] strVecToNum failed: ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v151, goods_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3104));
                      *(_DWORD *)(((v3 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v149 = 0;
                    }
                    else
                    {
                      p_gcg_deck_config_mgr = &txt_config_mgr->gcg_deck_config_mgr;
                      v153 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
                      if ( (_BYTE)v153 != 0 && (char)v153 <= 3 )
                        __asan_report_load4(v3 + 128);
                      if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                             p_gcg_deck_config_mgr,
                             *(unsigned int *)(v3 + 128)) )
                      {
                        GCGCardProficiencyLimit = ConstValueExcelConfigMgr::getGCGCardProficiencyLimit(&txt_config_mgr->const_value_config_mgr);
                        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(v3 + 144);
                        }
                        if ( GCGCardProficiencyLimit >= *(_DWORD *)(v3 + 144) )
                        {
                          v149 = 1;
                        }
                        else
                        {
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
                            "./src/txt_data_manual/ShopExcelConfig.cpp",
                            "checkShopGoodsExcelConfig",
                            553);
                          v159 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 3232),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v160 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
                                   v159,
                                   (const char (*)[82])byte_1A11B9E0);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v160, goods_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3232));
                          *(_DWORD *)(((v3 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v149 = 0;
                        }
                      }
                      else
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
                          "./src/txt_data_manual/ShopExcelConfig.cpp",
                          "checkShopGoodsExcelConfig",
                          548);
                        v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 3168),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v155 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                                 v154,
                                 (const char (*)[58])byte_1A11B980);
                        v156 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                 v155,
                                 (const unsigned int *)(v3 + 128));
                        v157 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                 v156,
                                 (const char (*)[12])byte_1A11B8A0);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v157, goods_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3168));
                        *(_DWORD *)(((v3 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v149 = 0;
                      }
                    }
                  }
                  else
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
                      "./src/txt_data_manual/ShopExcelConfig.cpp",
                      "checkShopGoodsExcelConfig",
                      536);
                    v147 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 3040),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v148 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                             v147,
                             (const char (*)[59])byte_1A11B8E0);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v148, goods_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3040));
                    *(_DWORD *)(((v3 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v149 = 0;
                  }
                  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
                  if ( v149 != 1 )
                  {
                    v8 = 0;
                    goto LABEL_442;
                  }
                }
                else
                {
                  if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load4(&shop_goods_excel_config->precondition);
                  }
                  if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_GCG_HAS_CARD )
                  {
                    if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
                    {
                      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 4;
                      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(v3 + 160, (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3);
                      }
                      *(_DWORD *)(v3 + 160) = 0;
                      v164 = std::vector<std::string>::operator[](
                               &shop_goods_excel_config->precondition_param_list,
                               0LL);
                      if ( common::tools::StringUtils::strToNum<unsigned int>(v164, (unsigned int *)(v3 + 160), 1) )
                      {
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
                          "./src/txt_data_manual/ShopExcelConfig.cpp",
                          "checkShopGoodsExcelConfig",
                          567);
                        v165 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 3360),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v166 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                 v165,
                                 (const char (*)[25])"[SHOP] strToNum failed: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v166, goods_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3360));
                        *(_DWORD *)(((v3 + 3360) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v163 = 0;
                      }
                      else
                      {
                        v167 = &txt_config_mgr->gcg_deck_config_mgr;
                        v168 = *(unsigned __int8 *)(((v3 + 160) >> 3) + 0x7FFF8000);
                        if ( (_BYTE)v168 != 0 && (char)v168 <= 3 )
                          __asan_report_load4(v3 + 160);
                        if ( data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(
                               v167,
                               *(unsigned int *)(v3 + 160)) )
                        {
                          v163 = 1;
                        }
                        else
                        {
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
                            "./src/txt_data_manual/ShopExcelConfig.cpp",
                            "checkShopGoodsExcelConfig",
                            572);
                          v169 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 3424),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v170 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                                   v169,
                                   (const char (*)[58])byte_1A11B980);
                          v171 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                   v170,
                                   (const unsigned int *)(v3 + 160));
                          v172 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                   v171,
                                   (const char (*)[12])byte_1A11B8A0);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v172, goods_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3424));
                          *(_DWORD *)(((v3 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v163 = 0;
                        }
                      }
                    }
                    else
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
                        "./src/txt_data_manual/ShopExcelConfig.cpp",
                        "checkShopGoodsExcelConfig",
                        561);
                      v161 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                               (common::milog::MiLogStream *const)(v3 + 3296),
                               (const char (*)[16])"[CONFIG_ERROR] ");
                      v162 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                               v161,
                               (const char (*)[59])byte_1A11B6C0);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v162, goods_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3296));
                      *(_DWORD *)(((v3 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v163 = 0;
                    }
                    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                    if ( v163 != 1 )
                    {
                      v8 = 0;
                      goto LABEL_442;
                    }
                  }
                  else
                  {
                    v173 = (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3;
                    if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                             + 0x7FFF8000) )
                    {
                      __asan_report_load4(&shop_goods_excel_config->precondition);
                    }
                    if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_GCG_LEVEL_CHALLENGE_FINISHED )
                    {
                      if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) > 1 )
                      {
                        *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 4;
                        if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v3 + 176, v173);
                        }
                        *(_DWORD *)(v3 + 176) = 0;
                        *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 4;
                        if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_store4(v3 + 192, v173);
                        }
                        *(_DWORD *)(v3 + 192) = 0;
                        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
                               &shop_goods_excel_config->precondition_param_list,
                               (unsigned int *)(v3 + 176),
                               (unsigned int *)(v3 + 192),
                               (unsigned int *)&shop_goods_excel_config->precondition_param_list) )
                        {
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
                            "./src/txt_data_manual/ShopExcelConfig.cpp",
                            "checkShopGoodsExcelConfig",
                            587);
                          v177 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 3552),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v178 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                   v177,
                                   (const char (*)[28])"[SHOP] strVecToNum failed: ");
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v178, goods_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3552));
                          *(_DWORD *)(((v3 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v176 = 0;
                        }
                        else
                        {
                          p_gcg_playing_config_mgr = &txt_config_mgr->gcg_playing_config_mgr;
                          v180 = *(unsigned __int8 *)(((v3 + 176) >> 3) + 0x7FFF8000);
                          if ( (_BYTE)v180 != 0 && (char)v180 <= 3 )
                            __asan_report_load4(v3 + 176);
                          config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(
                                         p_gcg_playing_config_mgr,
                                         *(unsigned int *)(v3 + 176));
                          if ( config_ptr )
                          {
                            if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(v3 + 192);
                            }
                            v200 = *(unsigned int *)(v3 + 192);
                            if ( v200 <= std::vector<data::GCGChallengeReward>::size(&config_ptr->challenge_reward_list) )
                            {
                              v176 = 1;
                            }
                            else
                            {
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
                                "./src/txt_data_manual/ShopExcelConfig.cpp",
                                "checkShopGoodsExcelConfig",
                                598);
                              v185 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v3 + 3680),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v186 = common::milog::MiLogStream::operator<<<char [84],(char *[84])0>(
                                       v185,
                                       (const char (*)[84])byte_1A11BB20);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v186, goods_id);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3680));
                              *(_DWORD *)(((v3 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                              v2 = -1;
                              v176 = 0;
                            }
                          }
                          else
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
                              "./src/txt_data_manual/ShopExcelConfig.cpp",
                              "checkShopGoodsExcelConfig",
                              593);
                            v181 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 3616),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v182 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                                     v181,
                                     (const char (*)[65])byte_1A11BA60);
                            v183 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v182,
                                     (const unsigned int *)(v3 + 176));
                            v184 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                                     v183,
                                     (const char (*)[11])byte_1A11BAE0);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v184, goods_id);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3616));
                            *(_DWORD *)(((v3 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v176 = 0;
                          }
                        }
                      }
                      else
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
                          "./src/txt_data_manual/ShopExcelConfig.cpp",
                          "checkShopGoodsExcelConfig",
                          580);
                        v174 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                 (common::milog::MiLogStream *const)(v3 + 3488),
                                 (const char (*)[16])"[CONFIG_ERROR] ");
                        v175 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                 v174,
                                 (const char (*)[59])byte_1A11B8E0);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v175, goods_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3488));
                        *(_DWORD *)(((v3 + 3488) >> 3) + 0x7FFF8000) = -117901064;
                        v2 = -1;
                        v176 = 0;
                      }
                      *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( v176 != 1 )
                      {
                        v8 = 0;
                        goto LABEL_442;
                      }
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)shop_goods_excel_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->precondition >> 3)
                                                                                               + 0x7FFF8000) )
                      {
                        __asan_report_load4(&shop_goods_excel_config->precondition);
                      }
                      if ( shop_goods_excel_config->precondition == SHOP_PRECONDITION_DONE_TEASURE_SEELIE_REGION )
                      {
                        if ( std::vector<std::string>::size(&shop_goods_excel_config->precondition_param_list) )
                        {
                          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 4;
                          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_store4(v3 + 208, (((_BYTE)shop_goods_excel_config - 68) & 7u) + 3);
                          }
                          *(_DWORD *)(v3 + 208) = 0;
                          v190 = std::vector<std::string>::operator[](
                                   &shop_goods_excel_config->precondition_param_list,
                                   0LL);
                          if ( common::tools::StringUtils::strToNum<unsigned int>(v190, (unsigned int *)(v3 + 208), 1) )
                          {
                            *(_DWORD *)(((v3 + 3808) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v3 + 3808) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 3839) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 3839) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 3808, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 3808),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/ShopExcelConfig.cpp",
                              "checkShopGoodsExcelConfig",
                              612);
                            v191 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v3 + 3808),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              v191,
                              (const char (*)[37])"[SHOP] region_day_id strToNum failed");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3808));
                            *(_DWORD *)(((v3 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                            v2 = -1;
                            v189 = 0;
                          }
                          else
                          {
                            v189 = 1;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v3 + 3744) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v3 + 3744) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 3775) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 3775) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 3744, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 3744),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/ShopExcelConfig.cpp",
                            "checkShopGoodsExcelConfig",
                            606);
                          v187 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                   (common::milog::MiLogStream *const)(v3 + 3744),
                                   (const char (*)[16])"[CONFIG_ERROR] ");
                          v188 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                   v187,
                                   (const char (*)[59])byte_1A11B6C0);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v188, goods_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3744));
                          *(_DWORD *)(((v3 + 3744) >> 3) + 0x7FFF8000) = -117901064;
                          v2 = -1;
                          v189 = 0;
                        }
                        *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( v189 != 1 )
                        {
                          v8 = 0;
                          goto LABEL_442;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopGoodsExcelConfig>,false,false> *const)(v3 + 224));
  }
  if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&shop_goods_excel_config->refresh_type);
  }
  if ( shop_goods_excel_config->refresh_type != SHOP_REFRESH_WEEKLY )
    goto LABEL_183;
  if ( *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)shop_goods_excel_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&shop_goods_excel_config->refresh_param >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&shop_goods_excel_config->refresh_param);
  }
  if ( shop_goods_excel_config->refresh_param <= 7 )
    goto LABEL_183;
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
    "./src/txt_data_manual/ShopExcelConfig.cpp",
    "checkShopGoodsExcelConfig",
    399);
  v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 1760),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v69 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v68, (const char (*)[59])byte_1A11B340);
  v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, goods_id);
  v71 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v70, (const char (*)[17])byte_1A11B300);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, &shop_goods_excel_config->refresh_param);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1760));
  v2 = -1;
  v8 = 0;
LABEL_442:
  if ( v8 == 1 )
    v2 = 0;
  if ( v213 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B0) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C0) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D0) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80E0) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF81DC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862780) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147451112 - (((_DWORD)v5 + 2147451120) & 0xFFFFFFF8) + 252) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 3872LL, v213);
  }
  return v2;
};

// Line 622: range 000000000CAE535C-000000000CAE571D
int32_t __cdecl ShopExcelConfigMgr::checkShopRotateExcelConfig(
        ShopExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::ShopRotateExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ShopRotateExcelConfig> >::type *rotate_excel_config; // [rsp+28h] [rbp-D8h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:623 64 8 13 __for_end:623 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ShopExcelConfigMgr::checkShopRotateExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->shop_rotate_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ShopRotateExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_22;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::ShopRotateExcelConfig>(v14);
    rotate_excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ShopRotateExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ShopRotateExcelConfig>(v14);
    if ( *(_BYTE *)(((unsigned __int64)&rotate_excel_config->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&rotate_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&rotate_excel_config->item_id);
    }
    if ( !rotate_excel_config->item_id
      || !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, rotate_excel_config->item_id, ITEM_LIMIT_SHOP) )
    {
      break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ShopRotateExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ShopExcelConfig.cpp",
    "checkShopRotateExcelConfig",
    628);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v7, (const char (*)[64])byte_1A11BCA0);
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &rotate_excel_config->id);
  v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])byte_1A11AE20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &rotate_excel_config->item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_22:
  if ( v11 == 1 )
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

// Line 637: range 000000000CAE571E-000000000CAE58E7
const std::set<unsigned int> *__fastcall ShopExcelConfigMgr::queryNChooseOneGoodsSet(
        const ShopExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_n_choose_one_goods_set_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:636 64 8 8 iter:638 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ShopExcelConfigMgr::queryNChooseOneGoodsSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_n_choose_one_goods_set_map = &this->n_choose_one_goods_set_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_n_choose_one_goods_set_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->n_choose_one_goods_set_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v2 + 64))->second;
  else
    result = &this->EMPTY_SET;
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

// Line 647: range 000000000CAE58E8-000000000CAE5955
uint32_t __cdecl ShopExcelConfigMgr::getItemIdByGoodsId(const ShopExcelConfigMgr *const this, uint32_t goods_id)
{
  const data::ShopGoodsExcelConfig *goods_config_ptr; // [rsp+18h] [rbp-8h]

  goods_config_ptr = data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(this, goods_id);
  if ( !goods_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&goods_config_ptr->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&goods_config_ptr->item_id);
  }
  return goods_config_ptr->item_id;
};

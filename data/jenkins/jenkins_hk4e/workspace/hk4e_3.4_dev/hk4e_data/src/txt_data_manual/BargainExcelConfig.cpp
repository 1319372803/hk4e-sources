// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/BargainExcelConfig.cpp

// Line 18: range 0000000012E8AE3C-0000000012E8C47D
int32_t __cdecl BargainExcelConfigMgr::checkConfig(
        BargainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::vector<unsigned int>::size_type v8; // rax
  int v9; // eax
  std::vector<unsigned int>::reference v10; // rax
  unsigned int *v11; // rdx
  unsigned int v12; // r15d
  std::vector<unsigned int>::reference v13; // rax
  unsigned int *v14; // rdx
  char v15; // cl
  __int64 v16; // rsi
  common::milog::MiLogStream *v17; // rax
  char *v18; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::vector<unsigned int>::size_type v30; // rax
  std::vector<unsigned int>::reference v31; // rax
  unsigned int *v32; // rdx
  unsigned int v33; // r15d
  std::vector<unsigned int>::reference v34; // rax
  unsigned int *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  __int64 v37; // rsi
  std::vector<unsigned int>::reference v38; // rax
  uint32_t *v39; // rdx
  uint32_t v40; // ecx
  char v41; // dl
  common::milog::MiLogStream *v42; // rax
  char *v43; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int v50; // edx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int32_t result; // eax
  data::BargainExcelConfigMap *__for_range; // [rsp+28h] [rbp-3E8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-3E0h]
  std::tuple_element<1,std::pair<unsigned int const,data::BargainExcelConfig> >::type *config; // [rsp+40h] [rbp-3D0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-3C8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-3C0h]
  char v61[944]; // [rsp+60h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "19 32 4 10 talk_id:33 48 4 10 talk_id:69 64 8 14 __for_begin:19 96 8 12 __for_end:19 128 8 9 <un"
                        "known> 160 8 14 __for_begin:33 192 8 12 __for_end:33 224 8 9 <unknown> 256 8 14 __for_begin:69 2"
                        "88 8 12 __for_end:69 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>"
                        " 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = BargainExcelConfigMgr::checkConfig;
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
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -202116109;
  __for_range = &this->bargain_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::BargainExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::BargainExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::BargainExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::BargainExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::BargainExcelConfig>,false> *)(v3 + 96)) )
    {
      v9 = 1;
      goto LABEL_98;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::BargainExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::BargainExcelConfig>(__in);
    if ( std::vector<unsigned int>::size(&config->expected_value) != 2 )
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        23);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v6, (const char (*)[30])byte_1AAC03E0);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      v8 = std::vector<unsigned int>::size(&config->expected_value);
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8(v3 + 128, byte_1AAC03E0);
      *(_QWORD *)(v3 + 128) = v8;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 128));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    v10 = std::vector<unsigned int>::operator[](&config->expected_value, 0LL);
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v10);
    }
    v12 = *v11;
    v16 = 1LL;
    v13 = std::vector<unsigned int>::operator[](&config->expected_value, 1uLL);
    v14 = v13;
    v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v15 != 0;
    if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      __asan_report_load4(v13);
    if ( v12 > *v14 )
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        29);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v17, (const char (*)[34])byte_1AAC0420);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    __for_range_0 = &config->success_talk_id;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v16);
    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v16);
    *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v18 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v25 = 1;
        goto LABEL_41;
      }
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
      v20 = (int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      v22 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v18) = v22 != 0;
        __asan_report_store4(v3 + 32, v18);
      }
      *(_DWORD *)(v3 + 32) = v21;
      if ( *(_DWORD *)(v3 + 32) )
      {
        if ( !BargainExcelConfigMgr::isTalkIdValid(this, txt_config_mgr, *(_DWORD *)(v3 + 32)) )
          break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/BargainExcelConfig.cpp",
      "checkConfig",
      39);
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 448),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v23, (const char (*)[18])byte_1AAC0480);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
    *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v25 = 0;
LABEL_41:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v25 != 1 )
    {
      v9 = 0;
      goto LABEL_98;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->fail_talk_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->fail_talk_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->fail_talk_id);
    }
    if ( !BargainExcelConfigMgr::isTalkIdValid(this, txt_config_mgr, config->fail_talk_id) )
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        47);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v26, (const char (*)[18])byte_1AAC0480);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &config->fail_talk_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    if ( std::vector<unsigned int>::size(&config->random_mood) != 2 )
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        53);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v28, (const char (*)[33])byte_1AAC04C0);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      v30 = std::vector<unsigned int>::size(&config->random_mood);
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        v30 = __asan_report_store8(v3 + 224, byte_1AAC04C0);
      *(_QWORD *)(v3 + 224) = v30;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v29,
        (const unsigned __int64 *)(v3 + 224));
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    v31 = std::vector<unsigned int>::operator[](&config->random_mood, 0LL);
    v32 = v31;
    if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v31);
    }
    v33 = *v32;
    v34 = std::vector<unsigned int>::operator[](&config->random_mood, 1uLL);
    v35 = v34;
    if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v34);
    }
    if ( v33 > *v35 )
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        59);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 640),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v36, (const char (*)[37])byte_1AAC0520);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    v37 = 1LL;
    v38 = std::vector<unsigned int>::operator[](&config->random_mood, 1uLL);
    v39 = v38;
    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v38);
    }
    v40 = *v39;
    v41 = *(_BYTE *)(((unsigned __int64)&config->mood_upper_limit >> 3) + 0x7FFF8000);
    LOBYTE(v37) = v41 != 0;
    if ( v41 != 0 && (char)((((_BYTE)config + 100) & 7) + 3) >= v41 )
      __asan_report_load4(&config->mood_upper_limit);
    if ( v40 > config->mood_upper_limit )
    {
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
        "./src/txt_data_manual/BargainExcelConfig.cpp",
        "checkConfig",
        65);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v42, (const char (*)[37])byte_1AAC0580);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      v2 = -1;
      v9 = 0;
      goto LABEL_98;
    }
    __for_range_1 = &config->single_fail_talk_id;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v37);
    *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v37);
    *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v43 = (char *)(v3 + 288);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288)) )
      {
        v50 = 1;
        goto LABEL_88;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v44 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
      v45 = (int *)v44;
      if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v44);
      }
      v46 = *v45;
      v47 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v47 != 0 && v47 <= 3 )
      {
        LOBYTE(v43) = v47 != 0;
        __asan_report_store4(v3 + 48, v43);
      }
      *(_DWORD *)(v3 + 48) = v46;
      if ( *(_DWORD *)(v3 + 48) )
      {
        if ( !BargainExcelConfigMgr::isTalkIdValid(this, txt_config_mgr, *(_DWORD *)(v3 + 48)) )
          break;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 256));
    }
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
      "./src/txt_data_manual/BargainExcelConfig.cpp",
      "checkConfig",
      75);
    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 768),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v49 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v48, (const char (*)[18])byte_1AAC0480);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v50 = 0;
LABEL_88:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v50 != 1 )
    {
      v9 = 0;
      goto LABEL_98;
    }
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->item_id);
    }
    if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, config->item_id) )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::BargainExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/BargainExcelConfig.cpp",
    "checkConfig",
    84);
  v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 832),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v53 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v52, (const char (*)[18])byte_1AAC05E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &config->item_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
  v2 = -1;
  v9 = 0;
LABEL_98:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v61 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
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
  }
  return result;
};

// Line 93: range 0000000012E8C47E-0000000012E8C490
int32_t __cdecl BargainExcelConfigMgr::rewriteConfig(BargainExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 98: range 0000000012E8C492-0000000012E8C4D7
bool __cdecl BargainExcelConfigMgr::isTalkIdValid(
        const BargainExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t talk_id)
{
  return !talk_id
      || data::QuestExcelConfigMgrBase::findTalkExcelConfig(&txt_config_mgr->quest_config_mgr, talk_id) != 0LL;
};

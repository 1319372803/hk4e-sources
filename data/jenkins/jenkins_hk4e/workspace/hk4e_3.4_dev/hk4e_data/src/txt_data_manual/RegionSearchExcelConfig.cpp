// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/RegionSearchExcelConfig.cpp

// Line 18: range 00000000146384EC-00000000146398B7
int32_t __cdecl RegionSearchExcelConfigMgr::rewriteConfig(
        RegionSearchExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  std::set<unsigned int> *v7; // rax
  uint32_t *p_id; // rsi
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  std::set<unsigned int> *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // edx
  std::vector<int>::const_reference v19; // rax
  unsigned int *v20; // rdx
  __int64 v21; // rsi
  int v22; // edx
  unsigned __int64 v23; // rax
  const char *v24; // rsi
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *v25; // r15
  std::set<unsigned int> *v26; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int v31; // edx
  std::set<unsigned int> *v32; // rax
  char *v33; // rsi
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  bool v39; // al
  std::set<unsigned int> *v40; // r14
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v42; // rax
  data::RegionSearchCondExcelConfigMap *__for_range; // [rsp+28h] [rbp-478h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::reference v45; // [rsp+30h] [rbp-470h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchCondExcelConfig> >::type *search; // [rsp+40h] [rbp-460h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-458h]
  const std::vector<data::RegionSearchCond> *__for_range_1; // [rsp+50h] [rbp-450h]
  const data::RegionSearchCond *co; // [rsp+58h] [rbp-448h]
  data::RegionSearchExcelConfigMap *__for_range_2; // [rsp+60h] [rbp-440h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>::reference v51; // [rsp+68h] [rbp-438h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchExcelConfig> >::type *play; // [rsp+78h] [rbp-428h]
  std::unordered_map<unsigned int,std::set<unsigned int>> *__for_range_3; // [rsp+80h] [rbp-420h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::reference __in; // [rsp+88h] [rbp-418h]
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *region_id; // [rsp+90h] [rbp-410h]
  std::set<unsigned int> *__for_range_4; // [rsp+A0h] [rbp-400h]
  const std::set<unsigned int> *play_set; // [rsp+A8h] [rbp-3F8h]
  char v58[1008]; // [rsp+B0h] [rbp-3F0h] BYREF

  v3 = (unsigned __int64)v58;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(960LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "22 48 4 12 region_id:24 64 4 9 <unknown> 80 4 11 group_id:54 96 8 14 __for_begin:21 128 8 12 __f"
                        "or_end:21 160 8 14 __for_begin:24 192 8 12 __for_end:24 224 8 14 __for_begin:28 256 8 12 __for_e"
                        "nd:28 288 8 14 __for_begin:42 320 8 12 __for_end:42 352 8 14 __for_begin:52 384 8 12 __for_end:5"
                        "2 416 8 14 __for_begin:54 448 8 12 __for_end:54 480 8 7 iter:56 512 8 9 <unknown> 544 32 9 <unkn"
                        "own> 608 32 9 <unknown> 672 56 19 group_search_map:19 768 56 19 region_group_map:20 864 56 17 group_play_map:41";
  *(_QWORD *)(v3 + 16) = RegionSearchExcelConfigMgr::rewriteConfig;
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
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862733] = -218959360;
  v5[536862734] = -218959360;
  v5[536862735] = -218959360;
  v5[536862736] = -218959360;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -234881024;
  v5[536862743] = -218959118;
  v5[536862745] = -234881024;
  v5[536862746] = -218959118;
  v5[536862748] = -218103808;
  v5[536862749] = -202116109;
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 672));
  std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 768));
  __for_range = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v3 + 128)) )
      break;
    v45 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::RegionSearchCondExcelConfig>(v45);
    search = (std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchCondExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RegionSearchCondExcelConfig>(v45);
    v7 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
           (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 672),
           &search->group_id);
    p_id = &search->id;
    std::set<unsigned int>::insert(v7, &search->id);
    __for_range_0 = &search->region_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, p_id);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v9 = (char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v11 = (int *)v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      v12 = *v11;
      v13 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && v13 <= 3 )
      {
        LOBYTE(v9) = v13 != 0;
        __asan_report_store4(v3 + 48, v9);
      }
      *(_DWORD *)(v3 + 48) = v12;
      v14 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 768),
              (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
      std::set<unsigned int>::insert(v14, &search->group_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    __for_range_1 = &search->cond;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v9);
    *(std::vector<data::RegionSearchCond>::const_iterator *)(v3 + 224) = std::vector<data::RegionSearchCond>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v9);
    *(std::vector<data::RegionSearchCond>::const_iterator *)(v3 + 256) = std::vector<data::RegionSearchCond>::end(__for_range_1);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>(
              (const __gnu_cxx::__normal_iterator<const data::RegionSearchCond*,std::vector<data::RegionSearchCond> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<const data::RegionSearchCond*,std::vector<data::RegionSearchCond> > *)(v3 + 256)) )
      {
        v18 = 1;
        goto LABEL_41;
      }
      co = __gnu_cxx::__normal_iterator<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>::operator*((const __gnu_cxx::__normal_iterator<const data::RegionSearchCond*,std::vector<data::RegionSearchCond> > *const)(v3 + 224));
      if ( *(_BYTE *)(((unsigned __int64)&co->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&co->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&co->type);
      }
      if ( co->type == REGION_SEARCH_COND_ACTIVITY_COND )
        break;
LABEL_39:
      __gnu_cxx::__normal_iterator<data::RegionSearchCond const*,std::vector<data::RegionSearchCond>>::operator++((__gnu_cxx::__normal_iterator<const data::RegionSearchCond*,std::vector<data::RegionSearchCond> > *const)(v3 + 224));
    }
    if ( !std::vector<int>::empty(&co->param) )
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v19 = std::vector<int>::operator[](&co->param, 0LL);
      v20 = (unsigned int *)v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      v21 = *v20;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, v21);
      *(_DWORD *)(v3 + 64) = v21;
      std::set<unsigned int>::insert(&this->activity_cond_set, (std::set<unsigned int>::value_type *)(v3 + 64));
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      goto LABEL_39;
    }
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/RegionSearchExcelConfig.cpp",
      "rewriteConfig",
      34);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v15,
            (const char (*)[24])"region search logic id=");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &search->id);
    v6 = " activity cond param empty";
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v17,
      (const char (*)[27])" activity cond param empty");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v18 = 0;
LABEL_41:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v18 != 1 )
    {
      v22 = 0;
      goto LABEL_45;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v3 + 96));
  }
  v22 = 1;
LABEL_45:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v22 == 1 )
  {
    v23 = ((v3 + 864) >> 3) + 2147450880;
    *(_DWORD *)v23 = 0;
    *(_WORD *)(v23 + 4) = 0;
    *(_BYTE *)(v23 + 6) = 0;
    std::unordered_map<unsigned int,std::set<unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 864));
    __for_range_2 = &this->region_search_excel_config_map;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v6);
    *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::iterator *)(v3 + 288) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v6);
    *(std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::iterator *)(v3 + 320) = std::unordered_map<unsigned int,data::RegionSearchExcelConfig>::end(__for_range_2);
    while ( 1 )
    {
      v24 = (const char *)(v3 + 320);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v3 + 288),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false> *)(v3 + 320)) )
      {
        v31 = 1;
        goto LABEL_58;
      }
      v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false> *const)(v3 + 288));
      std::get<0ul,unsigned int const,data::RegionSearchExcelConfig>(v51);
      play = (std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RegionSearchExcelConfig>(v51);
      v25 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 672),
              &play->search_group_id);
      v26 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->play_search_map, &play->id);
      std::set<unsigned int>::operator=(v26, v25);
      v27 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->play_search_map, &play->id);
      if ( std::set<unsigned int>::empty(v27) )
        break;
      v32 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
              (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 864),
              &play->search_group_id);
      std::set<unsigned int>::insert(v32, &play->id);
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RegionSearchExcelConfig>,false,false> *const)(v3 + 288));
    }
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
      "./src/txt_data_manual/RegionSearchExcelConfig.cpp",
      "rewriteConfig",
      47);
    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 608),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v28, (const char (*)[17])"RegionSearch id=");
    v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &play->id);
    v24 = byte_1ADC9FC0;
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v30, (const char (*)[20])byte_1ADC9FC0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v31 = 0;
LABEL_58:
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v31 == 1 )
    {
      __for_range_3 = (std::unordered_map<unsigned int,std::set<unsigned int>> *)(v3 + 768);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v24);
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 352) = std::unordered_map<unsigned int,std::set<unsigned int>>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v24);
      *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 384) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(__for_range_3);
      while ( 1 )
      {
        v33 = (char *)(v3 + 384);
        if ( !std::__detail::operator!=<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 352),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 384)) )
          break;
        __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 352));
        region_id = std::get<0ul,unsigned int const,std::set<unsigned int>>(__in);
        __for_range_4 = std::get<1ul,unsigned int const,std::set<unsigned int>>(__in);
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 416, v33);
        *(std::set<unsigned int>::iterator *)(v3 + 416) = std::set<unsigned int>::begin(__for_range_4);
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 448, v33);
        *(std::set<unsigned int>::iterator *)(v3 + 448) = std::set<unsigned int>::end(__for_range_4);
        while ( 1 )
        {
          v34 = (char *)(v3 + 448);
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 416),
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 448)) )
            break;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v35 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 416));
          v36 = (int *)v35;
          if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v35);
          }
          v37 = *v36;
          v38 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          LOBYTE(v34) = v38 != 0;
          if ( v38 != 0 && v38 <= 3 )
            __asan_report_store4(v3 + 80, v34);
          *(_DWORD *)(v3 + 80) = v37;
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 480, v34);
          *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 480) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                               (std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 864),
                                                                                               (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 80));
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 512, v3 + 80);
          *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 512) = std::unordered_map<unsigned int,std::set<unsigned int>>::end((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 864));
          v39 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 480),
                  (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 512));
          *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
          if ( !v39 )
          {
            play_set = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 480))->second;
            v40 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->region_play_map, region_id);
            M_node = std::set<unsigned int>::end(play_set)._M_node;
            v42._M_node = std::set<unsigned int>::begin(play_set)._M_node;
            std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
              v40,
              v42,
              (std::_Rb_tree_const_iterator<unsigned int>)M_node);
          }
          *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 416));
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 352));
      }
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      v2 = 0;
    }
    std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 864));
  }
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 768));
  std::unordered_map<unsigned int,std::set<unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::set<unsigned int>> *const)(v3 + 672));
  if ( v58 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
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

// Line 69: range 00000000146398B8-00000000146398DC
int32_t __cdecl RegionSearchExcelConfigMgr::checkConfig(
        RegionSearchExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return RegionSearchExcelConfigMgr::checkRegionSearchConfig(this, txt_config_mgr);
};

// Line 74: range 00000000146398DE-0000000014639CDB
int32_t __cdecl RegionSearchExcelConfigMgr::checkRegionSearchConfig(
        const RegionSearchExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  RewardExcelConfigMgr *p_reward_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  int32_t result; // eax
  data::RegionSearchCondExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::reference v15; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RegionSearchCondExcelConfig> >::type *search_id; // [rsp+20h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchCondExcelConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v18[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 14 __for_begin:75 64 8 12 __for_end:75 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = RegionSearchExcelConfigMgr::checkRegionSearchConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->region_search_cond_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RegionSearchCondExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false> *)(v3 + 64)) )
    {
      v12 = 1;
      goto LABEL_21;
    }
    v15 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v3 + 32));
    search_id = std::get<0ul,unsigned int const,data::RegionSearchCondExcelConfig>(v15);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RegionSearchCondExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RegionSearchCondExcelConfig>(v15);
    if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->reward_id);
    }
    if ( config->reward_id )
    {
      p_reward_config_mgr = &txt_config_mgr->reward_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->reward_id);
      }
      if ( !data::RewardExcelConfigMgrBase::findRewardExcelConfig(p_reward_config_mgr, config->reward_id) )
        break;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RegionSearchCondExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/RegionSearchExcelConfig.cpp",
    "checkRegionSearchConfig",
    83);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         v7,
         (const char (*)[27])"[REGION_SEARCH] search_id=");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, search_id);
  v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" reward_id=");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->reward_id);
  common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" not found");
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v12 = 0;
LABEL_21:
  if ( v12 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 91: range 0000000014639CDC-0000000014639E9D
const std::set<unsigned int> *__fastcall RegionSearchExcelConfigMgr::findSearchSetByPlay(
        const RegionSearchExcelConfigMgr *const this,
        __int64 play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_play_search_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 10 play_id:90 64 8 7 iter:92 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RegionSearchExcelConfigMgr::findSearchSetByPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = play_id;
  p_play_search_map = &this->play_search_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, play_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_play_search_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->play_search_map;
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

// Line 101: range 0000000014639E9E-000000001463A05F
const std::set<unsigned int> *__fastcall RegionSearchExcelConfigMgr::findPlaySetByRegion(
        const RegionSearchExcelConfigMgr *const this,
        __int64 region_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_region_play_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 region_id:100 64 8 8 iter:102 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = RegionSearchExcelConfigMgr::findPlaySetByRegion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = region_id;
  p_region_play_map = &this->region_play_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, region_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_region_play_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->region_play_map;
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

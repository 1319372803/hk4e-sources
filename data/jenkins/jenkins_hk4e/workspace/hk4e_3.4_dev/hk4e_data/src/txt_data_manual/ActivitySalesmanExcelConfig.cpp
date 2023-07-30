// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySalesmanExcelConfig.cpp

// Line 19: range 0000000012E003D2-0000000012E0042D
int32_t __cdecl ActivitySalesmanExcelConfigMgr::rewriteConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( ActivitySalesmanExcelConfigMgr::rewriteSalesmanConfig(this, txt_config_mgr)
    || ActivitySalesmanExcelConfigMgr::rewriteSalesmanDailyConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 29: range 0000000012E0042E-0000000012E00489
int32_t __cdecl ActivitySalesmanExcelConfigMgr::checkConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( ActivitySalesmanExcelConfigMgr::checkSalesmanConfig(this, txt_config_mgr)
    || ActivitySalesmanExcelConfigMgr::checkSalesmanDailyConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 40: range 0000000012E0048A-0000000012E00A93
const data::ActivitySalesmanDailyExcelConfig *__fastcall ActivitySalesmanExcelConfigMgr::findDailyConfig(
        const ActivitySalesmanExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t daily_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  const data::ActivitySalesmanDailyExcelConfig *result; // rax
  std::vector<unsigned int>::size_type v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  const data::ActivitySalesmanExcelConfig *salesman_config_ptr; // [rsp+10h] [rbp-160h]
  const data::ActivitySalesmanDailyExcelConfig *daily_config_ptr; // [rsp+18h] [rbp-158h]
  char v27[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 18 daily_config_id:54 64 4 14 schedule_id:39 80 4 14 daily_index:39 96 32 9 <unknown> 160"
                        " 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySalesmanExcelConfigMgr::findDailyConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 64) = schedule_id;
  *(_DWORD *)(v3 + 80) = daily_index;
  salesman_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanExcelConfig(
                          this,
                          *(unsigned int *)(v3 + 64));
  if ( salesman_config_ptr )
  {
    v8 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
    if ( v8 < std::vector<unsigned int>::size(&salesman_config_ptr->daily_config_id_list) )
    {
      v14 = (unsigned int)(*(_DWORD *)(v3 + 80) - 1);
      v15 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &salesman_config_ptr->daily_config_id_list,
                                                                                                  v14);
      v16 = (int *)v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      v17 = *v16;
      v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v14) = v18 != 0;
        __asan_report_store4(v3 + 48, v14);
      }
      *(_DWORD *)(v3 + 48) = v17;
      daily_config_ptr = data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanDailyExcelConfig(
                           this,
                           *(unsigned int *)(v3 + 48));
      if ( daily_config_ptr )
      {
        result = daily_config_ptr;
      }
      else
      {
        if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "findDailyConfig",
          58);
        v19 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                (common::milog::MiLogStream *const)(v3 + 224),
                (const char (*)[60])"findActivitySalesmanDailyExcelConfig fail, daily_config_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" schedule_id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v3 + 64));
        v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" daily_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        result = 0LL;
      }
    }
    else
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
        3u,
        "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
        "findDailyConfig",
        50);
      v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[28])"invalid index, schedule_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 64));
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" daily_index:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 80));
      v13 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v12,
              (const char (*)[23])" daily_config_id_list:");
      common::milog::MiLogStream::operator<<<unsigned int>(v13, &salesman_config_ptr->daily_config_id_list);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      result = 0LL;
    }
  }
  else
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
      3u,
      "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
      "findDailyConfig",
      44);
    v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[51])"findActivitySalesmanExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = 0LL;
  }
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 67: range 0000000012E00A94-0000000012E00CFB
int32_t __cdecl ActivitySalesmanExcelConfigMgr::rewriteSalesmanConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  char v7; // al
  int32_t result; // eax
  data::ActivitySalesmanExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivitySalesmanExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v12[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:68 64 8 12 __for_end:68";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>::__node_type *)ActivitySalesmanExcelConfigMgr::rewriteSalesmanConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_salesman_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ActivitySalesmanExcelConfig>(__in);
    for ( config = std::get<1ul,unsigned int const,data::ActivitySalesmanExcelConfig>(__in);
          ;
          std::vector<unsigned int>::pop_back(&config->daily_config_id_list) )
    {
      if ( std::vector<unsigned int>::empty(&config->daily_config_id_list) )
        goto LABEL_16;
      v5 = std::vector<unsigned int>::back(&config->daily_config_id_list);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v5);
      }
      if ( *v6 )
LABEL_16:
        v7 = 0;
      else
        v7 = 1;
      if ( !v7 )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 79: range 0000000012E00CFC-0000000012E02DC4
int32_t __cdecl ActivitySalesmanExcelConfigMgr::checkSalesmanConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  char *v9; // rsi
  unsigned int *v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int v21; // eax
  __int64 v22; // rsi
  data::NewActivityType activity_type; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  char *v26; // rsi
  unsigned int *v27; // rax
  int *v28; // rdx
  int v29; // ecx
  char v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  unsigned __int64 v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  unsigned __int64 v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  int v57; // eax
  int v58; // eax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  std::vector<unsigned int>::size_type v65; // [rsp+0h] [rbp-5B0h]
  std::vector<unsigned int>::size_type v66; // [rsp+8h] [rbp-5A8h]
  bool v67; // [rsp+8h] [rbp-5A8h]
  int v68; // [rsp+8h] [rbp-5A8h]
  std::vector<float>::size_type v69; // [rsp+8h] [rbp-5A8h]
  std::vector<unsigned int>::size_type v70; // [rsp+8h] [rbp-5A8h]
  int32_t ret; // [rsp+20h] [rbp-590h]
  data::ItemLimitType item_limit_type; // [rsp+24h] [rbp-58Ch]
  data::ActivitySalesmanExcelConfigMap *__for_range; // [rsp+28h] [rbp-588h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::reference v75; // [rsp+30h] [rbp-580h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySalesmanExcelConfig> >::type *schedule_id; // [rsp+38h] [rbp-578h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySalesmanExcelConfig> >::type *config; // [rsp+40h] [rbp-570h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-568h]
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+50h] [rbp-560h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-558h]
  char v81[1360]; // [rsp+60h] [rbp-550h] BYREF

  v3 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1312LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "26 32 1 9 <unknown> 48 4 18 daily_config_id:89 64 4 13 reward_id:125 80 4 13 day_count:182 96 8 "
                        "14 __for_begin:81 128 8 12 __for_end:81 160 8 14 __for_begin:89 192 8 12 __for_end:89 224 8 15 _"
                        "_for_begin:125 256 8 13 __for_end:125 288 24 21 special_prob_list:168 352 32 9 <unknown> 416 32 "
                        "9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9"
                        " <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9"
                        " <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySalesmanExcelConfigMgr::checkSalesmanConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
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
  v5[536862760] = -202116109;
  ret = 0;
  __for_range = &this->activity_salesman_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::ActivitySalesmanExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false> *)(v3 + 128)) )
    {
      v21 = 1;
      goto LABEL_131;
    }
    v75 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false> *const)(v3 + 96));
    schedule_id = std::get<0ul,unsigned int const,data::ActivitySalesmanExcelConfig>(v75);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySalesmanExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySalesmanExcelConfig>(v75);
    v66 = std::vector<unsigned int>::size(&config->daily_config_id_list);
    v65 = std::vector<unsigned int>::size(&config->normal_reward_id_list);
    if ( v66 != v65 + std::vector<unsigned int>::size(&config->special_reward_id_list) )
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
        "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
        "checkSalesmanConfig",
        85);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 352),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v7, (const char (*)[82])byte_1AAA5800);
      v6 = (char *)schedule_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &config->daily_config_id_list;
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
      if ( !data::ActivitySalesmanExcelConfigMgrBase::findActivitySalesmanDailyExcelConfig(
              this,
              *(unsigned int *)(v3 + 48)) )
      {
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          93);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                v14,
                (const char (*)[60])"findActivitySalesmanDailyExcelConfig fail, daily_config_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    activity_config_ptr = NewActivityExcelConfigMgr::findActivityConfigPtrByScheduleId(
                            p_new_activity_config_mgr,
                            *schedule_id);
    if ( !activity_config_ptr )
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
        "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
        "checkSalesmanConfig",
        100);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
              v19,
              (const char (*)[55])"findActivityConfigPtrByScheduleId failed, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      v2 = -1;
      v21 = 0;
      goto LABEL_131;
    }
    v22 = (((_BYTE)activity_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)activity_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&activity_config_ptr->activity_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&activity_config_ptr->activity_type);
    }
    activity_type = activity_config_ptr->activity_type;
    if ( activity_type == NEW_ACTIVITY_SALESMAN )
    {
      item_limit_type = ITEM_LIMIT_ACTIVITY_SALESMAN;
    }
    else
    {
      if ( activity_type != NEW_ACTIVITY_SALESMAN_MP )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          118);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                v24,
                (const char (*)[39])"unexpected activity_type, schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        v2 = -1;
        v21 = 0;
        goto LABEL_131;
      }
      item_limit_type = ITEM_LIMIT_ACTIVITY_SALESMAN_MP;
    }
    __for_range_1 = &config->normal_reward_id_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v22);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v22);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v26 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
        break;
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v27 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v28 = (int *)v27;
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v27);
      }
      v29 = *v28;
      v30 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v30 != 0 && v30 <= 3 )
      {
        LOBYTE(v26) = v30 != 0;
        __asan_report_store4(v3 + 64, v26);
      }
      *(_DWORD *)(v3 + 64) = v29;
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              *(_DWORD *)(v3 + 64),
                              item_limit_type) != 1 )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          129);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v31,
                (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
        v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v32,
                (const unsigned int *)(v3 + 64));
        v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v33, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->special_reward.reward_type);
    }
    if ( config->special_reward.reward_type == SPECIAL_MATERIAL )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->special_reward.id);
      }
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, config->special_reward.id, item_limit_type) )
      {
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          139);
        v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v36 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v35,
                (const char (*)[44])"isItemAllowedByOutputControl fail, item_id:");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &config->special_reward.id);
        v38 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v37, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
        *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      goto LABEL_90;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->special_reward.reward_type);
    }
    if ( config->special_reward.reward_type == SPECIAL_REWARD )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->special_reward.id);
      }
      if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                              txt_config_mgr,
                              config->special_reward.id,
                              item_limit_type) != 1 )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          147);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 736),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                v39,
                (const char (*)[54])"isValidRewardIdAndMatchItemLimitType fail, reward_id:");
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &config->special_reward.id);
        v42 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v41, (const char (*)[14])" schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
        *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      goto LABEL_90;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->special_reward.reward_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->special_reward.reward_type);
    }
    if ( config->special_reward.reward_type != SPECIAL_DROP )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->special_reward.id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->special_reward.id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            config->special_reward.id,
                            item_limit_type) != 1 )
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
        "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
        "checkSalesmanConfig",
        155);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              v43,
              (const char (*)[52])"isValidDropIdAndMatchItemLimitType fail, reward_id:");
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &config->special_reward.id);
      v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v45, (const char (*)[14])" schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
LABEL_90:
    if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.obtain_method >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->special_reward.obtain_method >> 3)
                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&config->special_reward.obtain_method);
    }
    if ( config->special_reward.obtain_method )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->special_reward.obtain_method >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->special_reward.obtain_method >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_load4(&config->special_reward.obtain_method);
      }
      if ( config->special_reward.obtain_method != METHOD_DAY_ACCUMULATION )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          196);
        v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1248),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v63 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v62, (const char (*)[56])byte_1AAA5BE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
        v2 = -1;
        v21 = 0;
        goto LABEL_131;
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 80, (((_BYTE)config + 124) & 7u) + 3);
      *(_DWORD *)(v3 + 80) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &config->special_reward.obtain_param,
             (unsigned int *)(v3 + 80),
             1) )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          185);
        v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1120),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v56 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v55, (const char (*)[66])byte_1AAA5AE0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
        *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v57 = 0;
      }
      else
      {
        v58 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v58 != 0 && (char)v58 <= 3 )
          __asan_report_load4(v3 + 80);
        if ( !*(_DWORD *)(v3 + 80)
          || (v70 = *(unsigned int *)(v3 + 80), v70 > std::vector<unsigned int>::size(&config->daily_config_id_list)) )
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
            "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
            "checkSalesmanConfig",
            190);
          v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1184),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v61 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v60, (const char (*)[65])byte_1AAA5B60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v57 = 0;
        }
        else
        {
          v57 = 1;
        }
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v57 != 1 )
      {
        v21 = 0;
        goto LABEL_131;
      }
    }
    else
    {
      v49 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v49 = 0;
      *(_BYTE *)(v49 + 2) = 0;
      std::vector<float>::vector((std::vector<float> *const)(v3 + 288));
      *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v3 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 928),
        ",",
        (const std::allocator<char> *)(v3 + 32));
      v67 = common::tools::StringUtils::splitToList<float>(
              &config->special_reward.obtain_param,
              (const std::string *)(v3 + 928),
              (std::vector<float> *)(v3 + 288),
              1) != 0;
      std::string::~string((void *)(v3 + 928));
      *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v3 + 32);
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v67 )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanConfig",
          171);
        v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 992),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v51 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v50, (const char (*)[56])byte_1AAA5A00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
        *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v68 = 0;
      }
      else
      {
        v69 = std::vector<float>::size((const std::vector<float> *const)(v3 + 288));
        if ( v69 == std::vector<unsigned int>::size(&config->daily_config_id_list) )
        {
          v68 = 1;
        }
        else
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
            "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
            "checkSalesmanConfig",
            176);
          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1056),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v53 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v52, (const char (*)[78])byte_1AAA5A60);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
          *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v68 = 0;
        }
      }
      std::vector<float>::~vector((std::vector<float> *const)(v3 + 288));
      v54 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v54 = -1800;
      *(_BYTE *)(v54 + 2) = -8;
      if ( v68 != 1 )
      {
        v21 = 0;
        goto LABEL_131;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanExcelConfig>,false,false> *const)(v3 + 96));
  }
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
    "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
    "checkSalesmanConfig",
    161);
  v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 864),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v48 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v47, (const char (*)[50])byte_1AAA59A0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, schedule_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
  v2 = -1;
  v21 = 0;
LABEL_131:
  if ( v21 == 1 )
    v2 = ret;
  if ( v81 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8088) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8098) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A0) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1312LL, v81);
  }
  return v2;
};

// Line 207: range 0000000012E02DC6-0000000012E02FA9
int32_t __cdecl ActivitySalesmanExcelConfigMgr::rewriteSalesmanDailyConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  data::ActivitySalesmanDailyExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *daily_config; // [rsp+28h] [rbp-88h]
  char v9[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false> *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:208 64 8 13 __for_end:208";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>::__node_type *)ActivitySalesmanExcelConfigMgr::rewriteSalesmanDailyConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->activity_salesman_daily_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::ActivitySalesmanDailyExcelConfig>(__in);
    daily_config = std::get<1ul,unsigned int const,data::ActivitySalesmanDailyExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &daily_config->cost_item_list,
      (unsigned int *)8);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 216: range 0000000012E02FAA-0000000012E03810
int32_t __cdecl ActivitySalesmanExcelConfigMgr::checkSalesmanDailyConfig(
        ActivitySalesmanExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::ActivitySalesmanDailyExcelConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::reference v21; // [rsp+28h] [rbp-1A8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *daily_config_id; // [rsp+30h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *daily_config; // [rsp+38h] [rbp-198h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+40h] [rbp-190h]
  const data::IdCountConfig *id_count_config; // [rsp+48h] [rbp-188h]
  char v26[384]; // [rsp+50h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:218 64 8 13 __for_end:218 96 8 15 __for_begin:225 128 8 13 __for_end:225 1"
                        "60 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySalesmanExcelConfigMgr::checkSalesmanDailyConfig;
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
  __for_range = &this->activity_salesman_daily_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivitySalesmanDailyExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (std::tuple_element<0,std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false> *)(v2 + 64)) )
      break;
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false> *const)(v2 + 32));
    daily_config_id = std::get<0ul,unsigned int const,data::ActivitySalesmanDailyExcelConfig>(v21);
    daily_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivitySalesmanDailyExcelConfig>(v21);
    if ( std::vector<data::IdCountConfig>::empty(&daily_config->cost_item_list) )
    {
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
        "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
        "checkSalesmanDailyConfig",
        222);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             v6,
             (const char (*)[42])"cost_item_list is empty, daily_config_id:");
      v5 = daily_config_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, daily_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __for_range_0 = &daily_config->cost_item_list;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 96) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v2 + 128) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v2 + 128)) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 96));
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanDailyConfig",
          229);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v9,
                (const char (*)[30])"findItemConfig fail, item_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &id_count_config->id);
        v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v11,
                (const char (*)[18])" daily_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, daily_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
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
          "./src/txt_data_manual/ActivitySalesmanExcelConfig.cpp",
          "checkSalesmanDailyConfig",
          234);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v13,
                (const char (*)[21])"count is 0, item_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &id_count_config->id);
        v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v15,
                (const char (*)[18])" daily_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, daily_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivitySalesmanDailyExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v26 == (char *)v2 )
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

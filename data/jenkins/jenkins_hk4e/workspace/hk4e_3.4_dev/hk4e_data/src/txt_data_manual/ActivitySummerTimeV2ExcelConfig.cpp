// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp

// Line 20: range 0000000012E26832-0000000012E26CA7
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::checkConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivitySummerTimeV2ExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivitySummerTimeV2ExcelConfigMgr::checkDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v5,
      (const char (*)[48])"[SUMMER_TIME_V2] checkDungeonExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivitySummerTimeV2ExcelConfigMgr::checkBoatExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v7,
      (const char (*)[45])"[SUMMER_TIME_V2] checkBoatExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivitySummerTimeV2ExcelConfigMgr::checkOverallExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "checkConfig",
      33);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v8,
      (const char (*)[48])"[SUMMER_TIME_V2] checkOverallExcelConfig failed");
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

// Line 40: range 0000000012E26CA8-0000000012E26FCC
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::rewriteConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeV2ExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivitySummerTimeV2ExcelConfigMgr::rewriteDungeonExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "rewriteConfig",
      43);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      v5,
      (const char (*)[50])"[SUMMER_TIME_V2] rewriteDungeonExcelConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivitySummerTimeV2ExcelConfigMgr::rewriteBoatExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "rewriteConfig",
      48);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v7,
      (const char (*)[47])"[SUMMER_TIME_V2] rewriteBoatExcelConfig failed");
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

// Line 55: range 0000000012E26FCE-0000000012E29007
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::checkDungeonExcelConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *p_cycle_dungeon_id; // rsi
  const unsigned int *v7; // r8
  const unsigned int *v8; // r8
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  uint32_t prev_dungeon_id; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  _BOOL4 v16; // r15d
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  DungeonExcelConfigMgr *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  __int64 v29; // rsi
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  unsigned int *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  int v38; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  unsigned int *v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  int v50; // eax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rax
  int v58; // edx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v59; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  int v63; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rdx
  int v67; // edx
  uint32_t last_day_index; // [rsp+28h] [rbp-638h]
  uint32_t last_day_reward_limit; // [rsp+2Ch] [rbp-634h]
  data::SummerTimeV2DungeonStageExcelConfigMap *__for_range; // [rsp+30h] [rbp-630h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::reference v73; // [rsp+38h] [rbp-628h]
  std::tuple_element<0,std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *stage_id; // [rsp+40h] [rbp-620h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *excel_config; // [rsp+48h] [rbp-618h]
  const data::DungeonExcelConfig *prev_dungeon_config_ptr; // [rsp+50h] [rbp-610h]
  const data::DungeonExcelConfig *cycle_dungeon_config_ptr; // [rsp+58h] [rbp-608h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-600h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-5F8h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+70h] [rbp-5F0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v81; // [rsp+78h] [rbp-5E8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+80h] [rbp-5E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *day_index; // [rsp+88h] [rbp-5D8h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+90h] [rbp-5D0h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v85; // [rsp+98h] [rbp-5C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_1; // [rsp+A0h] [rbp-5C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *reward_limt; // [rsp+A8h] [rbp-5B8h]
  char v88[1456]; // [rsp+B0h] [rbp-5B0h] BYREF

  v3 = (unsigned __int64)v88;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1408LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "27 32 4 11 card_id:100 48 4 17 exhibition_id:113 64 8 14 __for_begin:58 96 8 12 __for_end:58 128"
                        " 8 15 __for_begin:100 160 8 13 __for_end:100 192 8 15 __for_begin:113 224 8 13 __for_end:113 256"
                        " 8 15 __for_begin:128 288 8 13 __for_end:128 320 8 15 __for_begin:138 352 8 13 __for_end:138 384"
                        " 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 "
                        "32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 "
                        "32 9 <unknown> 1088 48 18 stage_2_day_map:56 1168 48 27 stage_2_reward_limit_map:57 1248 48 14 c"
                        "ard_id_set:62 1328 48 20 exhibition_id_set:62";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeV2ExcelConfigMgr::checkDungeonExcelConfig;
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
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -219021312;
  v5[536862756] = 62194;
  v5[536862758] = -218959118;
  v5[536862760] = -219021312;
  v5[536862761] = 62194;
  v5[536862763] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1088));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1168));
  __for_range = &this->summer_time_v2_dungeon_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_cycle_dungeon_id = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)(v3 + 96)) )
      break;
    v73 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false> *const)(v3 + 64));
    stage_id = std::get<0ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v73);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v73);
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      (std::map<unsigned int,unsigned int> *const)(v3 + 1088),
      stage_id,
      &excel_config->day_index,
      stage_id,
      v7);
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      (std::map<unsigned int,unsigned int> *const)(v3 + 1168),
      stage_id,
      &excel_config->dungeon_reward_limit,
      stage_id,
      v8);
    v9 = ((v3 + 1248) >> 3) + 2147450880;
    *(_DWORD *)v9 = 0;
    *(_WORD *)(v9 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1248));
    v10 = ((v3 + 1328) >> 3) + 2147450880;
    *(_DWORD *)v10 = 0;
    *(_WORD *)(v10 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1328));
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->prev_dungeon_id);
    }
    prev_dungeon_id = excel_config->prev_dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->cycle_dungeon_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->cycle_dungeon_id);
    }
    if ( prev_dungeon_id == excel_config->cycle_dungeon_id )
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
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "checkDungeonExcelConfig",
        66);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v12, (const char (*)[81])byte_1AAAD680);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &excel_config->prev_dungeon_id);
      v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", stage_id: ");
      p_cycle_dungeon_id = (char *)stage_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
    }
    else
    {
      p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->prev_dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->prev_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->prev_dungeon_id);
      }
      prev_dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                  p_dungeon_config_mgr,
                                  excel_config->prev_dungeon_id);
      if ( prev_dungeon_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&prev_dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)prev_dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prev_dungeon_config_ptr->type >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4(&prev_dungeon_config_ptr->type);
        }
        if ( prev_dungeon_config_ptr->type == DUNGEON_SUMMER_V2 )
        {
          v24 = &txt_config_mgr->dungeon_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->cycle_dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)excel_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->cycle_dungeon_id >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&excel_config->cycle_dungeon_id);
          }
          cycle_dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                       v24,
                                       excel_config->cycle_dungeon_id);
          if ( cycle_dungeon_config_ptr )
          {
            v29 = (((_BYTE)cycle_dungeon_config_ptr + 12) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&cycle_dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)cycle_dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cycle_dungeon_config_ptr->type >> 3)
                                                                                      + 0x7FFF8000) )
            {
              __asan_report_load4(&cycle_dungeon_config_ptr->type);
            }
            if ( cycle_dungeon_config_ptr->type == DUNGEON_SUMMER_V2 )
            {
              __for_range_0 = &excel_config->dungeon_card_id_list;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 128, v29);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 160, v29);
              *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
              while ( 1 )
              {
                p_cycle_dungeon_id = (char *)(v3 + 160);
                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
                {
                  v38 = 1;
                  goto LABEL_62;
                }
                *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
                v32 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
                v33 = (int *)v32;
                if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v32);
                }
                v34 = *v33;
                v35 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
                if ( v35 != 0 && v35 <= 3 )
                {
                  LOBYTE(p_cycle_dungeon_id) = v35 != 0;
                  __asan_report_store4(v3 + 32, p_cycle_dungeon_id);
                }
                *(_DWORD *)(v3 + 32) = v34;
                if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionCardExcelConfig(
                        &txt_config_mgr->exhibition_config_mgr,
                        *(unsigned int *)(v3 + 32)) )
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
                    "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                    "checkDungeonExcelConfig",
                    104);
                  v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 704),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v37 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
                          v36,
                          (const char (*)[79])byte_1AAAD940);
                  p_cycle_dungeon_id = (char *)(v3 + 32);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v3 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v38 = 0;
                  goto LABEL_62;
                }
                v39 = std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v3 + 1248),
                        (const std::set<unsigned int>::value_type *)(v3 + 32));
                if ( !v39.second )
                  break;
                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
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
                "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                "checkDungeonExcelConfig",
                109);
              v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 768),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v41 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                      v40,
                      (const char (*)[76])byte_1AAAD9C0);
              v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v41,
                      (const unsigned int *)(v3 + 32));
              v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v42,
                      (const char (*)[13])", stage_id: ");
              p_cycle_dungeon_id = (char *)stage_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, stage_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
              *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v38 = 0;
LABEL_62:
              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
              if ( v38 == 1 )
              {
                __for_range_1 = &excel_config->dungeon_exhibition_id_list;
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 192, p_cycle_dungeon_id);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_1);
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v3 + 224, p_cycle_dungeon_id);
                *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_1);
                while ( 1 )
                {
                  p_cycle_dungeon_id = (char *)(v3 + 224);
                  if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192),
                          (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224)) )
                  {
                    v50 = 1;
                    goto LABEL_84;
                  }
                  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                  v44 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
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
                    LOBYTE(p_cycle_dungeon_id) = v47 != 0;
                    __asan_report_store4(v3 + 48, p_cycle_dungeon_id);
                  }
                  *(_DWORD *)(v3 + 48) = v46;
                  if ( !data::ExhibitionExcelConfigMgrBase::findPlayerExhibitionExcelConfig(
                          &txt_config_mgr->exhibition_config_mgr,
                          *(unsigned int *)(v3 + 48)) )
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
                      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                      "checkDungeonExcelConfig",
                      117);
                    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 832),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v49 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                            v48,
                            (const char (*)[78])byte_1AAADA40);
                    p_cycle_dungeon_id = (char *)(v3 + 48);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v3 + 48));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
                    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v50 = 0;
                    goto LABEL_84;
                  }
                  v51 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v3 + 1328),
                          (const std::set<unsigned int>::value_type *)(v3 + 48));
                  if ( !v51.second )
                    break;
                  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 192));
                }
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
                  "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                  "checkDungeonExcelConfig",
                  122);
                v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 896),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v53 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                        v52,
                        (const char (*)[81])byte_1AAADAC0);
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v53,
                        (const unsigned int *)(v3 + 48));
                v55 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v54,
                        (const char (*)[13])", stage_id: ");
                p_cycle_dungeon_id = (char *)stage_id;
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, stage_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
                *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v50 = 0;
LABEL_84:
                *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
                v16 = v50 == 1;
              }
              else
              {
                v16 = 0;
              }
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
                "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                "checkDungeonExcelConfig",
                91);
              v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 640),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v31 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                      v30,
                      (const char (*)[73])byte_1AAAD8C0);
              p_cycle_dungeon_id = (char *)&excel_config->cycle_dungeon_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                &excel_config->cycle_dungeon_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
              *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v16 = 0;
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
              "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
              "checkDungeonExcelConfig",
              85);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                    v25,
                    (const char (*)[67])byte_1AAAD840);
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    &excel_config->cycle_dungeon_id);
            v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])"stage id: ");
            p_cycle_dungeon_id = (char *)stage_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
            *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v16 = 0;
          }
        }
        else
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
            "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
            "checkDungeonExcelConfig",
            79);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(v22, (const char (*)[73])byte_1AAAD7C0);
          p_cycle_dungeon_id = (char *)&excel_config->prev_dungeon_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &excel_config->prev_dungeon_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v16 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
          "checkDungeonExcelConfig",
          73);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v18, (const char (*)[67])byte_1AAAD700);
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                &excel_config->prev_dungeon_id);
        v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])"stage id: ");
        p_cycle_dungeon_id = (char *)stage_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
      }
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1328));
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1248));
    v56 = ((v3 + 1248) >> 3) + 2147450880;
    *(_DWORD *)v56 = -117901064;
    *(_WORD *)(v56 + 4) = -1800;
    v57 = ((v3 + 1328) >> 3) + 2147450880;
    *(_DWORD *)v57 = -117901064;
    *(_WORD *)(v57 + 4) = -1800;
    if ( !v16 )
    {
      v58 = 0;
      goto LABEL_89;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false> *const)(v3 + 64));
  }
  v58 = 1;
LABEL_89:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v58 == 1 )
  {
    last_day_index = 0;
    __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 1088);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, p_cycle_dungeon_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, p_cycle_dungeon_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 288) = std::map<unsigned int,unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v59 = (std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *)(v3 + 288);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 288)) )
      {
        v63 = 1;
        goto LABEL_106;
      }
      v81 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
      stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v81);
      v60 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v81);
      day_index = v60;
      if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v60);
      }
      if ( last_day_index > *day_index )
        break;
      if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(day_index);
      }
      last_day_index = *day_index;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 256));
    }
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 960, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 960),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "checkDungeonExcelConfig",
      132);
    v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 960),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v62 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v61, (const char (*)[62])byte_1AAADB40);
    v59 = stage_id_0;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, stage_id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
    *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v63 = 0;
LABEL_106:
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v63 == 1 )
    {
      last_day_reward_limit = 0;
      __for_range_3 = (std::map<unsigned int,unsigned int> *)(v3 + 1168);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, v59);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 320) = std::map<unsigned int,unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v59);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 352) = std::map<unsigned int,unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 320),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 352)) )
        {
          v67 = 1;
          goto LABEL_123;
        }
        v85 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 320));
        stage_id_1 = std::get<0ul,unsigned int const,unsigned int>(v85);
        v64 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v85);
        reward_limt = v64;
        if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v64);
        }
        if ( last_day_reward_limit > *reward_limt )
          break;
        if ( *(_BYTE *)(((unsigned __int64)reward_limt >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reward_limt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reward_limt >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(reward_limt);
        }
        last_day_reward_limit = *reward_limt;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 320));
      }
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1024, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1024),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "checkDungeonExcelConfig",
        142);
      v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v66 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v65, (const char (*)[68])byte_1AAADBA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, stage_id_1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v67 = 0;
LABEL_123:
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( v67 == 1 )
        v2 = 0;
    }
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1168));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1088));
  if ( v88 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF808C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1408LL, v88);
  }
  return v2;
};

// Line 151: range 0000000012E29008-0000000012E29639
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::rewriteDungeonExcelConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::SummerTimeV2DungeonStageExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >,bool> v7; // rax
  const data::SummerTimeV2DungeonStageExcelConfig *v8; // r8
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  data::SummerTimeV2DungeonStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-170h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::reference v20; // [rsp+18h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-158h]
  char v22[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 15 __for_begin:152 64 8 13 __for_end:152 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeV2ExcelConfigMgr::rewriteDungeonExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  __for_range = &this->summer_time_v2_dungeon_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_24;
    }
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v20);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>(v20);
    v7 = std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::emplace<unsigned int const&,data::SummerTimeV2DungeonStageExcelConfig const&>(
           &this->dungeon_id_2_dungeon_excel_config_map,
           &excel_config->prev_dungeon_id,
           excel_config,
           (const unsigned int *)&this->dungeon_id_2_dungeon_excel_config_map,
           v6);
    if ( !v7.second )
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
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "rewriteDungeonExcelConfig",
        156);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v9,
              (const char (*)[40])"[SUMMER_TIME_V2] duplicate dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &excel_config->prev_dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    v12 = std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::emplace<unsigned int const&,data::SummerTimeV2DungeonStageExcelConfig const&>(
            &this->dungeon_id_2_dungeon_excel_config_map,
            &excel_config->cycle_dungeon_id,
            excel_config,
            (const unsigned int *)&this->dungeon_id_2_dungeon_excel_config_map,
            v8);
    if ( !v12.second )
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
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "rewriteDungeonExcelConfig",
        161);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v13,
              (const char (*)[40])"[SUMMER_TIME_V2] duplicate dungeon_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &excel_config->cycle_dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v11 = 0;
      goto LABEL_24;
    }
    v15 = std::set<unsigned int>::insert(&this->cycle_dungeon_id_set, &excel_config->cycle_dungeon_id);
    if ( !v15.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
    "rewriteDungeonExcelConfig",
    166);
  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 224),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          v16,
          (const char (*)[46])"[SUMMER_TIME_V2] duplicate cycle_dungeon_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &excel_config->cycle_dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v11 = 0;
LABEL_24:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v22 == (char *)v3 )
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

// Line 174: range 0000000012E2963A-0000000012E2AA97
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::checkBoatExcelConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 p_revive_point_group_id; // rsi
  const unsigned int *v7; // r8
  GalleryExcelConfigMgr *p_gallery_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  __int64 revive_point_group_id; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t avatar_revive_point_config_id; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  __int64 v28; // rsi
  uint32_t vehicle_revive_point_config_id; // ecx
  char v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int v34; // edx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  int v38; // edx
  uint32_t last_day_index; // [rsp+1Ch] [rbp-394h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-390h]
  data::SummerTimeV2BoatStageExcelConfigMap *__for_range; // [rsp+28h] [rbp-388h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::reference v44; // [rsp+30h] [rbp-380h]
  std::tuple_element<0,std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *stage_id; // [rsp+38h] [rbp-378h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *excel_config; // [rsp+40h] [rbp-370h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+50h] [rbp-360h]
  const GroupScriptConfig *group_config_ptr; // [rsp+58h] [rbp-358h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-350h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v50; // [rsp+68h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stage_id_0; // [rsp+70h] [rbp-340h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *day_index; // [rsp+78h] [rbp-338h]
  char v53[816]; // [rsp+80h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 33 avatar_revive_point_config_id:207 64 4 31 boat_revive_point_config_id:213 80 8 15 __f"
                        "or_begin:177 112 8 13 __for_end:177 144 8 9 <unknown> 176 8 15 __for_begin:221 208 8 13 __for_en"
                        "d:221 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unkn"
                        "own> 560 32 9 <unknown> 624 32 9 <unknown> 688 48 19 stage_2_day_map:175";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeV2ExcelConfigMgr::checkBoatExcelConfig;
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
  v5[536862743] = -202116109;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 688));
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->summer_time_v2_boat_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_revive_point_group_id = v3 + 112;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v3 + 112)) )
      break;
    v44 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false> *const)(v3 + 80));
    stage_id = std::get<0ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v44);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v44);
    std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
      (std::map<unsigned int,unsigned int> *const)(v3 + 688),
      stage_id,
      &excel_config->day_index,
      stage_id,
      v7);
    p_gallery_config_mgr = &txt_config_mgr->gallery_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&excel_config->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&excel_config->gallery_id);
    }
    if ( data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(p_gallery_config_mgr, excel_config->gallery_id) )
    {
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&excel_config->vehicle_gadget_id);
      }
      gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                            p_gadget_config_mgr,
                            excel_config->vehicle_gadget_id);
      if ( gadget_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&gadget_config_ptr->type);
        }
        if ( gadget_config_ptr->type == Vehicle )
        {
          if ( *(_BYTE *)(((unsigned __int64)&excel_config->revive_point_group_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)excel_config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->revive_point_group_id >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4(&excel_config->revive_point_group_id);
          }
          revive_point_group_id = excel_config->revive_point_group_id;
          group_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, revive_point_group_id);
          if ( group_config_ptr )
          {
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((unsigned __int64)&excel_config->avatar_revive_point_config_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&excel_config->avatar_revive_point_config_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&excel_config->avatar_revive_point_config_id);
            }
            avatar_revive_point_config_id = excel_config->avatar_revive_point_config_id;
            v24 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v24 != 0 && v24 <= 3 )
            {
              LOBYTE(revive_point_group_id) = v24 != 0;
              __asan_report_store4(v3 + 48, revive_point_group_id);
            }
            *(_DWORD *)(v3 + 48) = avatar_revive_point_config_id;
            if ( GroupScriptConfig::findPointConfig(group_config_ptr, *(unsigned int *)(v3 + 48)) )
            {
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
              v28 = (((_BYTE)excel_config + 36) & 7u) + 3;
              if ( *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_revive_point_config_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)excel_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->vehicle_revive_point_config_id >> 3)
                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4(&excel_config->vehicle_revive_point_config_id);
              }
              vehicle_revive_point_config_id = excel_config->vehicle_revive_point_config_id;
              v30 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
              if ( v30 != 0 && v30 <= 3 )
              {
                LOBYTE(v28) = v30 != 0;
                __asan_report_store4(v3 + 64, v28);
              }
              *(_DWORD *)(v3 + 64) = vehicle_revive_point_config_id;
              p_revive_point_group_id = *(unsigned int *)(v3 + 64);
              if ( GroupScriptConfig::findPointConfig(group_config_ptr, p_revive_point_group_id) )
              {
                v13 = 1;
              }
              else
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
                  "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                  "checkBoatExcelConfig",
                  216);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 560),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v32 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        v31,
                        (const char (*)[34])byte_1AAAE1C0);
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v32,
                        (const unsigned int *)(v3 + 64));
                p_revive_point_group_id = (__int64)byte_1AA2E0C0;
                common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])byte_1AA2E0C0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
                *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v13 = 0;
              }
            }
            else
            {
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 496, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 496),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
                "checkBoatExcelConfig",
                210);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 496),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      v25,
                      (const char (*)[34])byte_1AAAE160);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v26,
                      (const unsigned int *)(v3 + 48));
              p_revive_point_group_id = (__int64)byte_1AA2E0C0;
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v27, (const char (*)[11])byte_1AA2E0C0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
              *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v13 = 0;
            }
          }
          else
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
              "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
              "checkBoatExcelConfig",
              204);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 432),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v21,
                    (const char (*)[44])byte_1AAAE100);
            p_revive_point_group_id = (__int64)&excel_config->revive_point_group_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v22,
              &excel_config->revive_point_group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
            *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
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
            "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
            "checkBoatExcelConfig",
            196);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                  v17,
                  (const char (*)[74])"[SUMMER_TIME_V2] checkBoatExcelConfig failed, expect Vehicle rather than ");
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&gadget_config_ptr->type);
          }
          v19 = (__int64)data::enumValToStr(gadget_config_ptr->type);
          if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 144, (((_BYTE)gadget_config_ptr + 84) & 7u) + 3);
          *(_QWORD *)(v3 + 144) = v19;
          p_revive_point_group_id = v3 + 144;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 144));
          *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
      }
      else
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
          "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
          "checkBoatExcelConfig",
          191);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                v15,
                (const char (*)[68])"[SUMMER_TIME_V2] cannot find gadget of vehicle, vehicle_gadget_id: ");
        p_revive_point_group_id = (__int64)&excel_config->vehicle_gadget_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &excel_config->vehicle_gadget_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "checkBoatExcelConfig",
        183);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v9, (const char (*)[55])byte_1AAADF60);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, stage_id);
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])", gallery id: ");
      p_revive_point_group_id = (__int64)&excel_config->gallery_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &excel_config->gallery_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v34 = 0;
      goto LABEL_59;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false> *const)(v3 + 80));
  }
  v34 = 1;
LABEL_59:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v34 == 1 )
  {
    last_day_index = 0;
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 688);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_revive_point_group_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 176) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_revive_point_group_id);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 208) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 176),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 208)) )
      {
        v38 = 1;
        goto LABEL_76;
      }
      v50 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
      stage_id_0 = std::get<0ul,unsigned int const,unsigned int>(v50);
      v35 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v50);
      day_index = v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      if ( last_day_index > *day_index )
        break;
      if ( *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)day_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)day_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(day_index);
      }
      last_day_index = *day_index;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 176));
    }
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
      "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
      "checkBoatExcelConfig",
      225);
    v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 624),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v37 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v36, (const char (*)[62])byte_1AAADB40);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, stage_id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
    *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v38 = 0;
LABEL_76:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v38 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 688));
  if ( v53 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
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
  }
  return v2;
};

// Line 234: range 0000000012E2AA98-0000000012E2ADEA
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::rewriteBoatExcelConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::SummerTimeV2BoatStageExcelConfig *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::SummerTimeV2BoatStageExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *excel_config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:235 64 8 13 __for_end:235 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeV2ExcelConfigMgr::rewriteBoatExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->summer_time_v2_boat_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v13);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2BoatStageExcelConfig>(v13);
    v7 = std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::emplace<unsigned int const&,data::SummerTimeV2BoatStageExcelConfig const&>(
           &this->gallery_id_2_boat_excel_config_map,
           &excel_config->gallery_id,
           excel_config,
           (const unsigned int *)&this->gallery_id_2_boat_excel_config_map,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
    "rewriteBoatExcelConfig",
    239);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v8, (const char (*)[54])byte_1AAAE2C0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &excel_config->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
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

// Line 247: range 0000000012E2ADEC-0000000012E2B337
int32_t __cdecl ActivitySummerTimeV2ExcelConfigMgr::checkOverallExcelConfig(
        ActivitySummerTimeV2ExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  data::SummerTimeV2OverallExcelConfigMap *__for_range; // [rsp+18h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false,false>::reference v15; // [rsp+20h] [rbp-130h]
  std::tuple_element<0,std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig> >::type *activity_id; // [rsp+28h] [rbp-128h]
  std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig> >::type *excel_config; // [rsp+30h] [rbp-120h]
  char v18[272]; // [rsp+40h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:248 64 8 13 __for_end:248 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivitySummerTimeV2ExcelConfigMgr::checkOverallExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  __for_range = &this->summer_time_v2_overall_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2OverallExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::SummerTimeV2OverallExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::SummerTimeV2OverallExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::SummerTimeV2OverallExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_24;
    }
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false,false> *const)(v3 + 32));
    activity_id = std::get<0ul,unsigned int const,data::SummerTimeV2OverallExcelConfig>(v15);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig> >::type *)std::get<1ul,unsigned int const,data::SummerTimeV2OverallExcelConfig>(v15);
    p_new_activity_config_mgr = &txt_config_mgr->new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(activity_id);
    }
    if ( !data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(p_new_activity_config_mgr, *activity_id) )
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
        "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
        "checkOverallExcelConfig",
        253);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v7,
             (const char (*)[38])"[SUMMER_TIME_V2] invalid activity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, activity_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v9 = 0;
      goto LABEL_24;
    }
    if ( *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&excel_config->dungeon_reward_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&excel_config->dungeon_reward_id);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            excel_config->dungeon_reward_id,
                            ITEM_LIMIT_ACTIVITY_SUMMER_TIME_V2) != 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::SummerTimeV2OverallExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivitySummerTimeV2ExcelConfig.cpp",
    "checkOverallExcelConfig",
    258);
  v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v10, (const char (*)[43])byte_1AAAE420);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &excel_config->dungeon_reward_id);
  common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])byte_1AA20200);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  v2 = -1;
  v9 = 0;
LABEL_24:
  if ( v9 == 1 )
    v2 = 0;
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 266: range 0000000012E2B338-0000000012E2B4F9
const data::SummerTimeV2DungeonStageExcelConfig *__fastcall ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId(
        const ActivitySummerTimeV2ExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig> *p_dungeon_id_2_dungeon_excel_config_map; // rdx
  std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig> *v6; // rdx
  bool v7; // al
  const data::SummerTimeV2DungeonStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:265 64 8 8 iter:267 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeV2ExcelConfigMgr::findStageConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_2_dungeon_excel_config_map = &this->dungeon_id_2_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::find(
                                                                                                     p_dungeon_id_2_dungeon_excel_config_map,
                                                                                                     (const std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_2_dungeon_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::SummerTimeV2DungeonStageExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2DungeonStageExcelConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 276: range 0000000012E2B4FA-0000000012E2B6BB
const data::SummerTimeV2BoatStageExcelConfig *__fastcall ActivitySummerTimeV2ExcelConfigMgr::findBoatConfigByGalleryId(
        const ActivitySummerTimeV2ExcelConfigMgr *const this,
        __int64 gallery_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig> *p_gallery_id_2_boat_excel_config_map; // rdx
  std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig> *v6; // rdx
  bool v7; // al
  const data::SummerTimeV2BoatStageExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 gallery_id:275 64 8 8 iter:277 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeV2ExcelConfigMgr::findBoatConfigByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  p_gallery_id_2_boat_excel_config_map = &this->gallery_id_2_boat_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, gallery_id);
  *(std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::find(
                                                                                                  p_gallery_id_2_boat_excel_config_map,
                                                                                                  (const std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->gallery_id_2_boat_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::SummerTimeV2BoatStageExcelConfig>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::SummerTimeV2BoatStageExcelConfig> > *const)(v2 + 64))->second;
  else
    result = 0LL;
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

// Line 286: range 0000000012E2B6BC-0000000012E2B854
bool __fastcall ActivitySummerTimeV2ExcelConfigMgr::isSummerTimeV2CycleDungeon(
        const ActivitySummerTimeV2ExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::set<unsigned int> *p_cycle_dungeon_id_set; // rdx
  std::set<unsigned int> *v6; // rdx
  bool result; // al
  char v8[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 dungeon_id:285 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivitySummerTimeV2ExcelConfigMgr::isSummerTimeV2CycleDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_cycle_dungeon_id_set = &this->cycle_dungeon_id_set;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, dungeon_id);
  *(std::set<unsigned int>::iterator *)(v2 + 96) = std::set<unsigned int>::end(p_cycle_dungeon_id_set);
  v6 = &this->cycle_dungeon_id_set;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::set<unsigned int>::const_iterator *)(v2 + 64) = std::set<unsigned int>::find(
                                                           v6,
                                                           (const std::set<unsigned int>::key_type *)(v2 + 48));
  result = std::operator!=(
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64),
             (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 96));
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

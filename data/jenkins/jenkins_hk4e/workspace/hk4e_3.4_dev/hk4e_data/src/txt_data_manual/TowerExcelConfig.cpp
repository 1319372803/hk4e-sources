// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/TowerExcelConfig.cpp

// Line 21: range 000000000CB0EE56-000000000CB0F0D9
int32_t __cdecl TowerExcelConfigMgr::rewriteConfig(TowerExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TowerExcelConfigMgr::rewriteTowerScheduleConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::rewriteTowerLevelConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::rewriteTowerFloorConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::rewriteTowerBuffConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::rewriteTowerSkipFloorConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::rewriteTowerRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TowerExcelConfig.cpp",
      "rewriteConfig",
      29);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])byte_1A1230C0);
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

// Line 36: range 000000000CB0F0DA-000000000CB0F302
int32_t __cdecl TowerExcelConfigMgr::checkConfig(TowerExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( TowerExcelConfigMgr::checkTowerScheduleConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::checkTowerLevelConfig(this, txt_config_mgr)
    || TowerExcelConfigMgr::checkTowerBuffConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/TowerExcelConfig.cpp",
      "checkConfig",
      41);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v6, (const char (*)[25])byte_1A1230C0);
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

// Line 48: range 000000000CB0F304-000000000CB0F4EC
__int64 __fastcall TowerExcelConfigMgr::TowerIndexConfig::findIdByIndex(
        const TowerExcelConfigMgr::TowerIndexConfig *const this,
        __int64 index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_index_to_id_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 index:47 64 8 7 iter:49 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::TowerIndexConfig::findIdByIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = index;
  p_index_to_id_map = &this->index_to_id_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, index);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_index_to_id_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->index_to_id_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 54: range 000000000CB0F4EE-000000000CB0F6CE
__int64 __fastcall TowerExcelConfigMgr::TowerIndexConfig::findIndexById(
        const TowerExcelConfigMgr::TowerIndexConfig *const this,
        __int64 id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::map<unsigned int,unsigned int> *p_id_to_index_map; // rax
  const std::map<unsigned int,unsigned int> *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 5 id:53 64 8 7 iter:55 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::TowerIndexConfig::findIndexById;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_id_to_index_map = &this->id_to_index_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    p_id_to_index_map = (const std::map<unsigned int,unsigned int> *)__asan_report_store8(v2 + 64, id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_id_to_index_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->id_to_index_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    v6 = (const std::map<unsigned int,unsigned int> *)__asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    result = 0LL;
  }
  else
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  if ( v10 == (char *)v2 )
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

// Line 61: range 000000000CB0F6D0-000000000CB11515
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerScheduleConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned __int64 v7; // rax
  std::vector<data::TowerSchedule>::value_type *v9; // rax
  std::string *TimeByStr; // rsi
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // r15d
  unsigned int *p_open_timestamp; // rsi
  const unsigned int *v18; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  unsigned int *v22; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  int v27; // r15d
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v28; // rax
  char *v29; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rax
  _DWORD *v31; // rdx
  char v32; // cl
  int v33; // r15d
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v34; // rax
  char *v35; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v36; // rax
  _DWORD *v37; // rdx
  char v38; // cl
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  std::vector<unsigned int>::iterator v41; // rax
  unsigned int *v42; // rsi
  char *v43; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v44; // rax
  int *v45; // rdx
  int v46; // ecx
  char v47; // al
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v48; // rcx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v49; // rcx
  bool v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rdx
  int v55; // edx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v56; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // r15d
  char *v59; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v60; // rax
  unsigned int *v61; // rdx
  char v62; // cl
  int v63; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v64; // rax
  _DWORD *v65; // rdx
  char v66; // cl
  int v67; // edx
  char *v68; // rsi
  char *v69; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v70; // rax
  int *v71; // rdx
  int v72; // ecx
  char v73; // al
  int v74; // r15d
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v75; // rax
  char *v76; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v77; // rax
  _DWORD *v78; // rdx
  char v79; // cl
  int v80; // r15d
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v81; // rax
  char *v82; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v83; // rax
  _DWORD *v84; // rdx
  char v85; // cl
  unsigned __int64 v86; // rax
  int v87; // eax
  unsigned int *__last; // [rsp+0h] [rbp-500h]
  data::TowerScheduleExcelConfigMap *__for_range; // [rsp+28h] [rbp-4D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-4D0h]
  const unsigned int *tower_schedule_id; // [rsp+38h] [rbp-4C8h]
  std::tuple_element<1,std::pair<unsigned int const,data::TowerScheduleExcelConfig> >::type *tower_schedule_config; // [rsp+40h] [rbp-4C0h]
  std::vector<data::TowerSchedule> *__for_range_0; // [rsp+48h] [rbp-4B8h]
  std::vector<data::TowerSchedule> *__for_range_1; // [rsp+50h] [rbp-4B0h]
  std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-4A8h]
  std::vector<unsigned int> *__for_range_3; // [rsp+60h] [rbp-4A0h]
  std::vector<data::TowerSchedule> *__for_range_4; // [rsp+68h] [rbp-498h]
  std::vector<unsigned int> *__for_range_5; // [rsp+78h] [rbp-488h]
  data::TowerSchedule *tower_schedule_0; // [rsp+80h] [rbp-480h]
  data::TowerSchedule *tower_schedule; // [rsp+88h] [rbp-478h]
  char v102[1136]; // [rsp+90h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v102;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "28 32 4 15 floor_index:105 48 4 21 entrance_floor_id:107 64 4 21 entrance_floor_id:124 80 4 12 f"
                        "loor_id:139 96 8 14 __for_begin:62 128 8 12 __for_end:62 160 8 14 __for_begin:66 192 8 12 __for_"
                        "end:66 224 8 14 __for_begin:82 256 8 12 __for_end:82 288 8 15 __for_begin:107 320 8 13 __for_end"
                        ":107 352 8 9 <unknown> 384 8 15 __for_begin:124 416 8 13 __for_end:124 448 8 20 floor_index_iter"
                        ":126 480 8 9 <unknown> 512 8 15 __for_begin:137 544 8 13 __for_end:137 576 8 15 __for_begin:139 "
                        "608 8 13 __for_end:139 640 24 20 temp_schedule_vec:65 704 32 9 <unknown> 768 32 9 <unknown> 832 "
                        "32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerScheduleConfig;
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
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -202116109;
  __for_range = &this->tower_schedule_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v3 + 128)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *const)(v3 + 96));
    tower_schedule_id = std::get<0ul,unsigned int const,data::TowerScheduleExcelConfig>(__in);
    tower_schedule_config = std::get<1ul,unsigned int const,data::TowerScheduleExcelConfig>(__in);
    v7 = ((v3 + 640) >> 3) + 2147450880;
    *(_WORD *)v7 = 0;
    *(_BYTE *)(v7 + 2) = 0;
    std::vector<data::TowerSchedule>::vector((std::vector<data::TowerSchedule> *const)(v3 + 640));
    __for_range_0 = &tower_schedule_config->schedules;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 160) = std::vector<data::TowerSchedule>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 192) = std::vector<data::TowerSchedule>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::TowerSchedule *,std::vector<data::TowerSchedule>>(
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 192)) )
    {
      tower_schedule = __gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 160));
      if ( !std::vector<unsigned int>::empty(&tower_schedule->floor_list) || !(unsigned __int8)std::string::empty() )
      {
        v9 = std::move<data::TowerSchedule &>(tower_schedule);
        std::vector<data::TowerSchedule>::push_back((std::vector<data::TowerSchedule> *const)(v3 + 640), v9);
      }
      __gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    std::vector<data::TowerSchedule>::swap(
      &tower_schedule_config->schedules,
      (std::vector<data::TowerSchedule> *)(v3 + 640));
    TimeByStr = (std::string *)(unsigned int)common::tools::TimeUtils::getTimeByStr(&tower_schedule_config->close_time);
    if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&tower_schedule_config->close_timestamp, TimeByStr);
    }
    tower_schedule_config->close_timestamp = (unsigned int)TimeByStr;
    if ( !tower_schedule_config->close_timestamp )
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
        3u,
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "rewriteTowerScheduleConfig",
        80);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])" invalid_time: ");
      TimeByStr = &tower_schedule_config->close_time;
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &tower_schedule_config->close_time);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    }
    __for_range_1 = &tower_schedule_config->schedules;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, TimeByStr);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 224) = std::vector<data::TowerSchedule>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, TimeByStr);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 256) = std::vector<data::TowerSchedule>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::TowerSchedule *,std::vector<data::TowerSchedule>>(
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 256)) )
    {
      tower_schedule_0 = __gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 224));
      v12 = (unsigned int)common::tools::TimeUtils::getTimeByStr(&tower_schedule_0->open_time);
      if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_0->open_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tower_schedule_0->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tower_schedule_0->open_timestamp, v12);
      }
      tower_schedule_0->open_timestamp = v12;
      if ( !tower_schedule_0->open_timestamp )
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
          3u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "rewriteTowerScheduleConfig",
          87);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 768),
                (const char (*)[16])" invalid_time: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &tower_schedule_0->open_time);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
        *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
      }
      __gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 224));
    }
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( std::vector<data::TowerSchedule>::empty(&tower_schedule_config->schedules) )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "rewriteTowerScheduleConfig",
        93);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 832),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v14, (const char (*)[33])byte_1A123440);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, tower_schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
      *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
      goto LABEL_138;
    }
    p_open_timestamp = &std::vector<data::TowerSchedule>::operator[](&tower_schedule_config->schedules, 0LL)->open_timestamp;
    v19 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
            &this->tower_schedule_open_map,
            p_open_timestamp,
            tower_schedule_id,
            p_open_timestamp,
            v18);
    if ( !v19.second )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "rewriteTowerScheduleConfig",
        100);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 896),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v20, (const char (*)[41])byte_1A1234A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, tower_schedule_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
      *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v16 = 0;
      goto LABEL_138;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 32, p_open_timestamp);
    *(_DWORD *)(v3 + 32) = 0;
    __for_range_2 = &tower_schedule_config->entrance_floor_id;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, p_open_timestamp);
    *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, p_open_timestamp);
    *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v22 = (unsigned int *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v3 + 48, v22);
      }
      *(_DWORD *)(v3 + 48) = v25;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 32);
      v27 = ++*(_DWORD *)(v3 + 32);
      v28 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
              &this->tower_schedule_index_map,
              tower_schedule_id);
      v29 = (char *)(v3 + 48);
      v30 = std::map<unsigned int,unsigned int>::operator[](
              &v28->id_to_index_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v31 = v30;
      v32 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
      if ( v32 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= v32 )
      {
        LOBYTE(v29) = v32 != 0;
        __asan_report_store4(v30, v29);
      }
      *v31 = v27;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v33 = *(_DWORD *)(v3 + 48);
      v34 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
              &this->tower_schedule_index_map,
              tower_schedule_id);
      v35 = (char *)(v3 + 32);
      v36 = std::map<unsigned int,unsigned int>::operator[](
              &v34->index_to_id_map,
              (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
      v37 = v36;
      v38 = *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000);
      if ( v38 != 0 && (char)(((unsigned __int8)v36 & 7) + 3) >= v38 )
      {
        LOBYTE(v35) = v38 != 0;
        __asan_report_store4(v36, v35);
      }
      *v37 = v33;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( std::unordered_set<unsigned int>::empty(&this->tower_entrance_floor_id_set_) )
    {
      if ( std::vector<unsigned int>::empty(&tower_schedule_config->entrance_floor_id) )
      {
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
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "rewriteTowerScheduleConfig",
          119);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v39, (const char (*)[36])byte_1A123500);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, tower_schedule_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
        *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v16 = 0;
        goto LABEL_138;
      }
      __last = std::vector<unsigned int>::end(&tower_schedule_config->entrance_floor_id)._M_current;
      v41._M_current = std::vector<unsigned int>::begin(&tower_schedule_config->entrance_floor_id)._M_current;
      std::unordered_set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
        &this->tower_entrance_floor_id_set_,
        v41,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      v42 = std::vector<unsigned int>::back(&tower_schedule_config->entrance_floor_id);
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v42);
      std::make_tuple<unsigned int &,unsigned int &>(
        (unsigned int *)(v3 + 352),
        (unsigned int *)(v3 + 32),
        v42,
        (unsigned int *)(v3 + 32));
      v43 = (char *)(v3 + 352);
      std::tuple<unsigned int,unsigned int>::operator=(
        &this->tower_entrance_last_floor_tuple_,
        (std::conditional<true,std::tuple<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)(v3 + 352));
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      __for_range_3 = &tower_schedule_config->entrance_floor_id;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v43);
      *(std::vector<unsigned int>::iterator *)(v3 + 384) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 416, v43);
      *(std::vector<unsigned int>::iterator *)(v3 + 416) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v22 = (unsigned int *)(v3 + 416);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 384),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 416)) )
          break;
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        v44 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 384));
        v45 = (int *)v44;
        if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v44);
        }
        v46 = *v45;
        v47 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v47 != 0 && v47 <= 3 )
        {
          LOBYTE(v22) = v47 != 0;
          __asan_report_store4(v3 + 64, v22);
        }
        *(_DWORD *)(v3 + 64) = v46;
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        v48 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_schedule_index_map,
                tower_schedule_id);
        if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 448, tower_schedule_id);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 448) = std::map<unsigned int,unsigned int>::find(
                                                                         &v48->id_to_index_map,
                                                                         (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        v49 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_schedule_index_map,
                tower_schedule_id);
        if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 480, tower_schedule_id);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 480) = std::map<unsigned int,unsigned int>::end(&v49->id_to_index_map);
        v50 = std::operator==(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 448),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 480));
        *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
        if ( v50 )
        {
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
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "rewriteTowerScheduleConfig",
            129);
          v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1024),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v52 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v51, (const char (*)[41])byte_1A123560);
          v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v52,
                  (const unsigned int *)(v3 + 64));
          v54 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v53,
                  (const char (*)[14])" schedule_id:");
          v22 = (unsigned int *)tower_schedule_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, tower_schedule_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
          *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v55 = 0;
        }
        else
        {
          v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 448));
          p_second = &v56->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          second = v56->second;
          v59 = (char *)(v3 + 64);
          v60 = std::map<unsigned int,unsigned int>::operator[](
                  &this->entrance_floor_id_to_index_map,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
          v61 = v60;
          v62 = *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000);
          if ( v62 != 0 && (char)(((unsigned __int8)v60 & 7) + 3) >= v62 )
          {
            LOBYTE(v59) = v62 != 0;
            __asan_report_store4(v60, v59);
          }
          *v61 = second;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          v63 = *(_DWORD *)(v3 + 64);
          v22 = &std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 448))->second;
          v64 = std::map<unsigned int,unsigned int>::operator[](&this->entrance_floor_index_to_id_map, v22);
          v65 = v64;
          v66 = *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000);
          LOBYTE(v22) = v66 != 0;
          if ( v66 != 0 && (char)(((unsigned __int8)v64 & 7) + 3) >= v66 )
            __asan_report_store4(v64, v22);
          *v65 = v63;
          v55 = 1;
        }
        *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
        if ( v55 != 1 )
        {
          v67 = 0;
          goto LABEL_109;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 384));
      }
      v67 = 1;
LABEL_109:
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
      if ( v67 != 1 )
      {
        v16 = 0;
        goto LABEL_138;
      }
    }
    __for_range_4 = &tower_schedule_config->schedules;
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 512, v22);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 512) = std::vector<data::TowerSchedule>::begin(__for_range_4);
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 544, v22);
    *(std::vector<data::TowerSchedule>::iterator *)(v3 + 544) = std::vector<data::TowerSchedule>::end(__for_range_4);
    while ( 1 )
    {
      v68 = (char *)(v3 + 544);
      if ( !__gnu_cxx::operator!=<data::TowerSchedule *,std::vector<data::TowerSchedule>>(
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 512),
              (const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 544)) )
        break;
      __for_range_5 = &__gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 512))->floor_list;
      *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 576, v68);
      *(std::vector<unsigned int>::iterator *)(v3 + 576) = std::vector<unsigned int>::begin(__for_range_5);
      *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 608, v68);
      *(std::vector<unsigned int>::iterator *)(v3 + 608) = std::vector<unsigned int>::end(__for_range_5);
      while ( 1 )
      {
        v69 = (char *)(v3 + 608);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 576),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 608)) )
          break;
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v70 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 576));
        v71 = (int *)v70;
        if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v70 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v70);
        }
        v72 = *v71;
        v73 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v73 != 0 && v73 <= 3 )
        {
          LOBYTE(v69) = v73 != 0;
          __asan_report_store4(v3 + 80, v69);
        }
        *(_DWORD *)(v3 + 80) = v72;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v74 = ++*(_DWORD *)(v3 + 32);
        v75 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_schedule_index_map,
                tower_schedule_id);
        v76 = (char *)(v3 + 80);
        v77 = std::map<unsigned int,unsigned int>::operator[](
                &v75->id_to_index_map,
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
        v78 = v77;
        v79 = *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000);
        if ( v79 != 0 && (char)(((unsigned __int8)v77 & 7) + 3) >= v79 )
        {
          LOBYTE(v76) = v79 != 0;
          __asan_report_store4(v77, v76);
        }
        *v78 = v74;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 80);
        v80 = *(_DWORD *)(v3 + 80);
        v81 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_schedule_index_map,
                tower_schedule_id);
        v82 = (char *)(v3 + 32);
        v83 = std::map<unsigned int,unsigned int>::operator[](
                &v81->index_to_id_map,
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 32));
        v84 = v83;
        v85 = *(_BYTE *)(((unsigned __int64)v83 >> 3) + 0x7FFF8000);
        if ( v85 != 0 && (char)(((unsigned __int8)v83 & 7) + 3) >= v85 )
        {
          LOBYTE(v82) = v85 != 0;
          __asan_report_store4(v83, v82);
        }
        *v84 = v80;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 576));
      }
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 608) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<data::TowerSchedule *,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 512));
    }
    *(_BYTE *)(((v3 + 512) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 544) >> 3) + 0x7FFF8000) = -8;
    v16 = 1;
LABEL_138:
    std::vector<data::TowerSchedule>::~vector((std::vector<data::TowerSchedule> *const)(v3 + 640));
    v86 = ((v3 + 640) >> 3) + 2147450880;
    *(_WORD *)v86 = -1800;
    *(_BYTE *)(v86 + 2) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v87 = 0;
      goto LABEL_142;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *const)(v3 + 96));
  }
  v87 = 1;
LABEL_142:
  if ( v87 == 1 )
    v2 = 0;
  if ( v102 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8080) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 136) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v102);
  }
  return v2;
};

// Line 152: range 000000000CB11516-000000000CB1551D
int32_t __cdecl TowerExcelConfigMgr::checkTowerScheduleConfig(
        const TowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::TowerScheduleExcelConfigMap *p_tower_schedule_excel_config_map; // rsi
  const TxtConfigMgr *p_open_time; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  data::TowerScheduleExcelConfigMap *v12; // rdx
  data::TowerScheduleExcelConfigMap *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  _BOOL4 v18; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::pointer v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned __int64 v24; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v26; // rax
  char *v27; // rsi
  unsigned int *v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  int v36; // eax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  _BOOL4 v40; // r15d
  std::set<unsigned int>::size_type v41; // r15
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  unsigned __int64 v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // eax
  unsigned int *v52; // rax
  int *v53; // rdx
  int v54; // ecx
  char v55; // al
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  int v62; // eax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  uint32_t open_timestamp; // ecx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  uint32_t v83; // ecx
  char v84; // al
  const unsigned int *v85; // r15
  std::vector<unsigned int>::const_iterator v86; // rax
  int v87; // r15d
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  uint32_t close_timestamp; // ecx
  std::vector<data::TowerSchedule>::const_reference v94; // rax
  char v95; // al
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // r14
  std::vector<data::TowerSchedule>::const_reference v100; // rax
  time_t v101; // rdi
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r14
  time_t v106; // rsi
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  int v111; // ecx
  char v112; // al
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rdx
  int v117; // r15d
  unsigned __int64 v118; // rax
  common::milog::MiLogStream *v120; // rax
  char *v121; // rsi
  unsigned int *v122; // rax
  int *v123; // rdx
  int v124; // ecx
  char v125; // al
  std::map<unsigned int,unsigned int> *p_entrance_floor_id_to_index_map; // rdx
  std::map<unsigned int,unsigned int> *v127; // rdx
  bool v128; // al
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  int v131; // eax
  unsigned int *p_second; // rdx
  unsigned int *v133; // rsi
  std::map<unsigned int,unsigned int> *p_entrance_floor_index_to_id_map; // rdx
  bool v135; // al
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v138; // rdx
  unsigned int *v139; // rax
  unsigned int second; // ecx
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  int v143; // edx
  common::milog::MiLogStream *v144; // rax
  uint32_t last_close_timestamp; // [rsp+20h] [rbp-AB0h]
  uint32_t entrance_max_floor_index; // [rsp+24h] [rbp-AACh]
  uint32_t total_floor_id_count; // [rsp+28h] [rbp-AA8h]
  uint32_t total_star_count; // [rsp+2Ch] [rbp-AA4h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-AA0h]
  const data::TowerScheduleExcelConfig *tower_schedule_config; // [rsp+38h] [rbp-A98h]
  std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-A90h]
  const data::TowerFloorExcelConfig *tower_floor_config_ptr; // [rsp+48h] [rbp-A88h]
  const std::vector<data::TowerSchedule> *__for_range_1; // [rsp+58h] [rbp-A78h]
  const data::TowerSchedule *tower_schedule; // [rsp+60h] [rbp-A70h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+68h] [rbp-A68h]
  const data::TowerFloorExcelConfig *tower_floor_config_ptr_0; // [rsp+70h] [rbp-A60h]
  const std::vector<unsigned int> *level_vec_ptr_0; // [rsp+78h] [rbp-A58h]
  std::unordered_set<unsigned int> *__for_range_3; // [rsp+80h] [rbp-A50h]
  std::tuple_element<1,const std::tuple<unsigned int,unsigned int> >::type *last_entrance_floor_id; // [rsp+98h] [rbp-A38h]
  char v163[2608]; // [rsp+A0h] [rbp-A30h] BYREF

  v3 = (unsigned __int64)v163;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_6(2560LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "51 48 4 26 last_tower_schedule_id:154 64 4 21 tower_schedule_id:158 80 4 12 floor_id:187 96 4 23"
                        " last_open_timestamp:230 112 4 12 floor_id:241 128 4 21 entrance_floor_id:330 144 8 15 __for_beg"
                        "in:158 176 8 13 __for_end:158 208 8 8 iter:160 240 8 9 <unknown> 272 8 15 __for_begin:187 304 8 "
                        "13 __for_end:187 336 8 15 __for_begin:231 368 8 13 __for_end:231 400 8 15 __for_begin:241 432 8 "
                        "13 __for_end:241 464 8 15 __for_begin:330 496 8 13 __for_end:330 528 8 8 iter:332 560 8 9 <unkno"
                        "wn> 592 8 14 index_iter:338 624 8 9 <unknown> 656 24 9 <unknown> 720 32 9 <unknown> 784 32 9 <un"
                        "known> 848 32 9 <unknown> 912 32 9 <unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <u"
                        "nknown> 1168 32 9 <unknown> 1232 32 9 <unknown> 1296 32 9 <unknown> 1360 32 9 <unknown> 1424 32 "
                        "9 <unknown> 1488 32 9 <unknown> 1552 32 9 <unknown> 1616 32 9 <unknown> 1680 32 9 <unknown> 1744"
                        " 32 9 <unknown> 1808 32 9 <unknown> 1872 32 9 <unknown> 1936 32 9 <unknown> 2000 32 9 <unknown> "
                        "2064 32 9 <unknown> 2128 32 9 <unknown> 2192 32 9 <unknown> 2256 32 9 <unknown> 2320 48 25 entra"
                        "nce_floor_id_set:156 2400 48 35 cur_schedule_entrance_floor_set:182 2480 48 22 total_floor_id_set:225";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::checkTowerScheduleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
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
  v5[536862741] = -218959360;
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
  v5[536862787] = -219021312;
  v5[536862788] = 62194;
  v5[536862789] = -219021312;
  v5[536862790] = 62194;
  v5[536862791] = -219021312;
  v5[536862792] = 62194;
  v5[536862794] = -218959118;
  v5[536862796] = -219021312;
  v5[536862797] = 62194;
  v5[536862799] = -202116109;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  last_close_timestamp = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2320));
  entrance_max_floor_index = 0;
  p_tower_schedule_excel_config_map = &this->tower_schedule_excel_config_map;
  if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 112 + 23) & 7) >= *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) )
  {
    p_tower_schedule_excel_config_map = (data::TowerScheduleExcelConfigMap *)24;
    __asan_report_store_n(v3 + 656, 24LL);
  }
  common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>>(
    (std::vector<unsigned int> *)(v3 + 656),
    p_tower_schedule_excel_config_map);
  __for_range = (std::vector<unsigned int> *)(v3 + 656);
  if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 144, p_tower_schedule_excel_config_map);
  *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 176, p_tower_schedule_excel_config_map);
  *(std::vector<unsigned int>::iterator *)(v3 + 176) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    p_open_time = (const TxtConfigMgr *)(v3 + 176);
    if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144),
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 176)) )
      break;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
    v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
    v9 = (int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v10 = *v9;
    v11 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(p_open_time) = v11 != 0;
    if ( v11 != 0 && v11 <= 3 )
      __asan_report_store4(v3 + 64, p_open_time);
    *(_DWORD *)(v3 + 64) = v10;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    v12 = &this->tower_schedule_excel_config_map;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_open_time);
    *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::const_iterator *)(v3 + 208) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::find(v12, (const std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::key_type *)(v3 + 64));
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    v13 = &this->tower_schedule_excel_config_map;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, v3 + 64);
    *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::const_iterator *)(v3 + 240) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::end(v13);
    v14 = std::__detail::operator==<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v3 + 208),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v3 + 240));
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerScheduleConfig",
        163);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 720),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])byte_1A123AE0);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      p_open_time = (const TxtConfigMgr *)byte_1A123B20;
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])byte_1A123B20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
      *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v18 = 0;
    }
    else
    {
      v19 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *const)(v3 + 208));
      tower_schedule_config = &v19->second;
      if ( std::vector<data::TowerSchedule>::empty(&v19->second.schedules) )
      {
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "checkTowerScheduleConfig",
          171);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v20, (const char (*)[33])byte_1A123440);
        p_open_time = (const TxtConfigMgr *)(v3 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
        *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        if ( !std::vector<unsigned int>::empty(&tower_schedule_config->entrance_floor_id) )
        {
          v24 = ((v3 + 2400) >> 3) + 2147450880;
          *(_DWORD *)v24 = 0;
          *(_WORD *)(v24 + 4) = 0;
          M_current = std::vector<unsigned int>::end(&tower_schedule_config->entrance_floor_id)._M_current;
          v26._M_current = std::vector<unsigned int>::begin(&tower_schedule_config->entrance_floor_id)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v3 + 2400),
            v26,
            (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
          if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v3 + 2320)) )
          {
            v27 = (char *)(v3 + 2400);
            std::set<unsigned int>::operator=(
              (std::set<unsigned int> *const)(v3 + 2320),
              (const std::set<unsigned int> *)(v3 + 2400));
            __for_range_0 = (std::set<unsigned int> *)(v3 + 2320);
            *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 272, v27);
            *(std::set<unsigned int>::iterator *)(v3 + 272) = std::set<unsigned int>::begin(__for_range_0);
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 304, v27);
            *(std::set<unsigned int>::iterator *)(v3 + 304) = std::set<unsigned int>::end(__for_range_0);
            while ( 1 )
            {
              p_open_time = (const TxtConfigMgr *)(v3 + 304);
              if ( !std::operator!=(
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 272),
                      (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 304)) )
              {
                v36 = 1;
                goto LABEL_61;
              }
              *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
              v28 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 272));
              v29 = (int *)v28;
              if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v28);
              }
              v30 = *v29;
              v31 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
              if ( v31 != 0 && v31 <= 3 )
              {
                LOBYTE(p_open_time) = v31 != 0;
                __asan_report_store4(v3 + 80, p_open_time);
              }
              *(_DWORD *)(v3 + 80) = v30;
              tower_floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(this, *(_DWORD *)(v3 + 80));
              if ( !tower_floor_config_ptr )
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
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerScheduleConfig",
                  192);
                v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 912),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v32,
                        (const char (*)[19])byte_1A123B60);
                v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v33,
                        (const unsigned int *)(v3 + 80));
                v35 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v34,
                        (const char (*)[20])" tower_schedule_id:");
                p_open_time = (const TxtConfigMgr *)(v3 + 64);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v35,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
                *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v36 = 0;
                goto LABEL_61;
              }
              if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 80);
              if ( !TowerExcelConfigMgr::findTowerFloorLevelVec(this, *(_DWORD *)(v3 + 80)) )
                break;
              if ( *(_BYTE *)(((unsigned __int64)&tower_floor_config_ptr->floor_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)tower_floor_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_floor_config_ptr->floor_index >> 3)
                                                                                      + 0x7FFF8000) )
              {
                __asan_report_load4(&tower_floor_config_ptr->floor_index);
              }
              if ( entrance_max_floor_index < tower_floor_config_ptr->floor_index )
                entrance_max_floor_index = tower_floor_config_ptr->floor_index;
              std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 272));
            }
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
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerScheduleConfig",
              200);
            v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 976),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v38 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v37, (const char (*)[10])"floor_id:");
            v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v38,
                    (const unsigned int *)(v3 + 80));
            p_open_time = (const TxtConfigMgr *)byte_1A123C20;
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v39, (const char (*)[22])byte_1A123C20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
            *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v36 = 0;
LABEL_61:
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
            if ( v36 != 1 )
            {
              v40 = 0;
LABEL_181:
              std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2400));
              v18 = v40;
              goto LABEL_182;
            }
            v41 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 2400));
            if ( v41 != std::vector<unsigned int>::size(&tower_schedule_config->entrance_floor_id) )
            {
              *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1040) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1071) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1040, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1040),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                212);
              v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1040),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v43 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v42,
                      (const char (*)[41])byte_1A123C60);
              p_open_time = (const TxtConfigMgr *)(v3 + 64);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v43,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
              *(_DWORD *)(((v3 + 1040) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v40 = 0;
              goto LABEL_181;
            }
          }
          else
          {
            p_open_time = (const TxtConfigMgr *)(v3 + 2400);
            if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
                   (const std::set<unsigned int> *)(v3 + 2320),
                   (const std::set<unsigned int> *)(v3 + 2400)) )
            {
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                220);
              v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1104),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v45 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                      v44,
                      (const char (*)[45])byte_1A123CC0);
              p_open_time = (const TxtConfigMgr *)(v3 + 64);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v45,
                (const unsigned int *)(v3 + 64));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
              *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v40 = 0;
              goto LABEL_181;
            }
          }
          v46 = ((v3 + 2480) >> 3) + 2147450880;
          *(_DWORD *)v46 = 0;
          *(_WORD *)(v46 + 4) = 0;
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 2480));
          total_floor_id_count = 0;
          total_star_count = 0;
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 96, p_open_time);
          *(_DWORD *)(v3 + 96) = 0;
          __for_range_1 = &tower_schedule_config->schedules;
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 336, p_open_time);
          *(std::vector<data::TowerSchedule>::const_iterator *)(v3 + 336) = std::vector<data::TowerSchedule>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 368, p_open_time);
          *(std::vector<data::TowerSchedule>::const_iterator *)(v3 + 368) = std::vector<data::TowerSchedule>::end(__for_range_1);
          while ( 1 )
          {
            p_open_time = (const TxtConfigMgr *)(v3 + 368);
            if ( !__gnu_cxx::operator!=<data::TowerSchedule const*,std::vector<data::TowerSchedule>>(
                    (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 336),
                    (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 368)) )
            {
              v51 = 1;
              goto LABEL_137;
            }
            tower_schedule = __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 336));
            if ( std::vector<unsigned int>::empty(&tower_schedule->floor_list) )
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                236);
              v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1168),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v48 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v47,
                      (const char (*)[39])byte_1A123D20);
              v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v48,
                      (const unsigned int *)(v3 + 64));
              v50 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v49,
                      (const char (*)[12])" open_time:");
              p_open_time = (const TxtConfigMgr *)&tower_schedule->open_time;
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, &tower_schedule->open_time);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
              *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v51 = 0;
              goto LABEL_137;
            }
            __for_range_2 = &tower_schedule->floor_list;
            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 400, p_open_time);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 400) = std::vector<unsigned int>::begin(__for_range_2);
            *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 432, p_open_time);
            *(std::vector<unsigned int>::const_iterator *)(v3 + 432) = std::vector<unsigned int>::end(__for_range_2);
            while ( 1 )
            {
              p_open_time = (const TxtConfigMgr *)(v3 + 432);
              if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 400),
                      (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 432)) )
              {
                v62 = 1;
                goto LABEL_115;
              }
              *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 4;
              v52 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
              v53 = (int *)v52;
              if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v52);
              }
              v54 = *v53;
              v55 = *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000);
              if ( v55 != 0 && v55 <= 3 )
              {
                LOBYTE(p_open_time) = v55 != 0;
                __asan_report_store4(v3 + 112, p_open_time);
              }
              *(_DWORD *)(v3 + 112) = v54;
              tower_floor_config_ptr_0 = TowerExcelConfigMgr::findTowerFloorConfig(this, *(_DWORD *)(v3 + 112));
              if ( !tower_floor_config_ptr_0 )
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
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerScheduleConfig",
                  246);
                v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1232),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v57 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        v56,
                        (const char (*)[19])byte_1A123B60);
                v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v57,
                        (const unsigned int *)(v3 + 112));
                v59 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v58,
                        (const char (*)[20])" tower_schedule_id:");
                v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v59,
                        (const unsigned int *)(v3 + 64));
                v61 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v60,
                        (const char (*)[12])" open_time:");
                p_open_time = (const TxtConfigMgr *)&tower_schedule->open_time;
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &tower_schedule->open_time);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
                *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v62 = 0;
                goto LABEL_115;
              }
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                     (std::set<unsigned int> *)(v3 + 2400),
                     (const unsigned int *)(v3 + 112)) )
              {
                *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1296) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1327) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1296, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1296),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerScheduleConfig",
                  253);
                v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1296),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v64 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        v63,
                        (const char (*)[31])byte_1A123DC0);
                v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v64,
                        (const unsigned int *)(v3 + 112));
                v66 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v65,
                        (const char (*)[20])" tower_schedule_id:");
                p_open_time = (const TxtConfigMgr *)(v3 + 64);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v66,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
                *(_DWORD *)(((v3 + 1296) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v62 = 0;
                goto LABEL_115;
              }
              if ( *(_BYTE *)(((unsigned __int64)&tower_floor_config_ptr_0->floor_index >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)tower_floor_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_floor_config_ptr_0->floor_index >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(&tower_floor_config_ptr_0->floor_index);
              }
              if ( entrance_max_floor_index >= tower_floor_config_ptr_0->floor_index )
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
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerScheduleConfig",
                  259);
                v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1360),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v68 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                        v67,
                        (const char (*)[49])byte_1A123E00);
                v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v68,
                        (const unsigned int *)(v3 + 112));
                v70 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v69,
                        (const char (*)[20])" tower_schedule_id:");
                p_open_time = (const TxtConfigMgr *)(v3 + 64);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v70,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1360));
                *(_DWORD *)(((v3 + 1360) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v62 = 0;
                goto LABEL_115;
              }
              if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 112);
              level_vec_ptr_0 = TowerExcelConfigMgr::findTowerFloorLevelVec(this, *(_DWORD *)(v3 + 112));
              if ( !level_vec_ptr_0 )
                break;
              total_star_count += 3 * std::vector<unsigned int>::size(level_vec_ptr_0);
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
            }
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
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerScheduleConfig",
              267);
            v71 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1424),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v72 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v71, (const char (*)[10])"floor_id:");
            v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v72,
                    (const unsigned int *)(v3 + 112));
            p_open_time = (const TxtConfigMgr *)byte_1A123C20;
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v73, (const char (*)[22])byte_1A123C20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1424));
            *(_DWORD *)(((v3 + 1424) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v62 = 0;
LABEL_115:
            *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
            if ( v62 != 1 )
            {
              v51 = 0;
              goto LABEL_137;
            }
            if ( *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&tower_schedule->open_timestamp);
            }
            if ( !tower_schedule->open_timestamp )
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                276);
              v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1488),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v75 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v74,
                      (const char (*)[41])"parse open_time fail. tower_schedule_id:");
              v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v75,
                      (const unsigned int *)(v3 + 64));
              v77 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v76,
                      (const char (*)[12])" open_time:");
              p_open_time = (const TxtConfigMgr *)&tower_schedule->open_time;
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, &tower_schedule->open_time);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1488));
              *(_DWORD *)(((v3 + 1488) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v51 = 0;
              goto LABEL_137;
            }
            if ( *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&tower_schedule->open_timestamp);
            }
            open_timestamp = tower_schedule->open_timestamp;
            if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 96);
            if ( open_timestamp <= *(_DWORD *)(v3 + 96) )
              break;
            if ( *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&tower_schedule->open_timestamp);
            }
            v83 = tower_schedule->open_timestamp;
            v84 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
            if ( v84 != 0 && v84 <= 3 )
            {
              LOBYTE(p_open_time) = v84 != 0;
              __asan_report_store4(v3 + 96, p_open_time);
            }
            *(_DWORD *)(v3 + 96) = v83;
            v85 = std::vector<unsigned int>::end(&tower_schedule->floor_list)._M_current;
            v86._M_current = std::vector<unsigned int>::begin(&tower_schedule->floor_list)._M_current;
            std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
              (std::set<unsigned int> *const)(v3 + 2480),
              v86,
              (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v85);
            total_floor_id_count += std::vector<unsigned int>::size(&tower_schedule->floor_list);
            __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v3 + 336));
          }
          *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1552) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1583) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1552, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1552),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "checkTowerScheduleConfig",
            282);
          v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1552),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v80 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v79, (const char (*)[38])byte_1A123EC0);
          v81 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v80,
                  (const unsigned int *)(v3 + 64));
          v82 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v81, (const char (*)[12])" open_time:");
          p_open_time = (const TxtConfigMgr *)&tower_schedule->open_time;
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v82, &tower_schedule->open_time);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1552));
          *(_DWORD *)(((v3 + 1552) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v51 = 0;
LABEL_137:
          *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
          if ( v51 == 1 )
          {
            if ( std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 2480)) == total_floor_id_count )
            {
              if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&tower_schedule_config->close_timestamp);
              }
              if ( tower_schedule_config->close_timestamp )
              {
                if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&tower_schedule_config->close_timestamp);
                }
                close_timestamp = tower_schedule_config->close_timestamp;
                if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_load4(v3 + 96);
                if ( close_timestamp <= *(_DWORD *)(v3 + 96) )
                  goto LABEL_157;
                p_open_time = 0LL;
                v94 = std::vector<data::TowerSchedule>::operator[](&tower_schedule_config->schedules, 0LL);
                if ( *(_BYTE *)(((unsigned __int64)&v94->open_timestamp >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v94->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&v94->open_timestamp);
                }
                if ( last_close_timestamp <= v94->open_timestamp )
                  v95 = 0;
                else
LABEL_157:
                  v95 = 1;
                if ( v95 )
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
                    "./src/txt_data_manual/TowerExcelConfig.cpp",
                    "checkTowerScheduleConfig",
                    308);
                  v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1744),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v97 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          v96,
                          (const char (*)[53])byte_1A124000);
                  v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v97,
                          (const unsigned int *)(v3 + 64));
                  v99 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v98,
                          (const char (*)[12])" open_time:");
                  *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = 0;
                  v100 = std::vector<data::TowerSchedule>::operator[](&tower_schedule_config->schedules, 0LL);
                  if ( *(_BYTE *)(((unsigned __int64)&v100->open_timestamp >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&v100->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&v100->open_timestamp);
                  }
                  v101 = v100->open_timestamp;
                  if ( *(char *)(((v3 + 1808) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 1839) >> 3) + 0x7FFF8000) )
                  {
                    v101 = v3 + 1808;
                    __asan_report_store_n(v3 + 1808, 32LL);
                  }
                  common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 1808), v101);
                  v102 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                           v99,
                           (const std::string *)(v3 + 1808));
                  v103 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                           v102,
                           (const char (*)[19])" last_schedule_id:");
                  v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v103,
                           (const unsigned int *)(v3 + 48));
                  v105 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                           v104,
                           (const char (*)[18])" last_close_time:");
                  *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = 0;
                  v106 = last_close_timestamp;
                  if ( *(char *)(((v3 + 1872) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 1903) >> 3) + 0x7FFF8000) )
                  {
                    v106 = 32LL;
                    __asan_report_store_n(v3 + 1872, 32LL);
                  }
                  common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 1872), v106);
                  v107 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                           v105,
                           (const std::string *)(v3 + 1872));
                  v108 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                           v107,
                           (const char (*)[22])" last_open_timestamp:");
                  v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v108,
                           (const unsigned int *)(v3 + 96));
                  v110 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                           v109,
                           (const char (*)[13])" close_time:");
                  p_open_time = (const TxtConfigMgr *)&tower_schedule_config->close_timestamp;
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v110,
                    &tower_schedule_config->close_timestamp);
                  std::string::~string((void *)(v3 + 1872));
                  *(_DWORD *)(((v3 + 1872) >> 3) + 0x7FFF8000) = -117901064;
                  std::string::~string((void *)(v3 + 1808));
                  *(_DWORD *)(((v3 + 1808) >> 3) + 0x7FFF8000) = -117901064;
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1744));
                  *(_DWORD *)(((v3 + 1744) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v87 = 0;
                }
                else
                {
                  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                    __asan_report_load4(v3 + 64);
                  v111 = *(_DWORD *)(v3 + 64);
                  v112 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
                  if ( v112 != 0 && v112 <= 3 )
                  {
                    LOBYTE(p_open_time) = v112 != 0;
                    __asan_report_store4(v3 + 48, p_open_time);
                  }
                  *(_DWORD *)(v3 + 48) = v111;
                  if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&tower_schedule_config->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&tower_schedule_config->close_timestamp);
                  }
                  last_close_timestamp = tower_schedule_config->close_timestamp;
                  p_open_time = txt_config_mgr;
                  if ( TowerExcelConfigMgr::checkTowerFloorConfigInOneSchedule(
                         this,
                         txt_config_mgr,
                         *(_DWORD *)(v3 + 64)) )
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
                      "./src/txt_data_manual/TowerExcelConfig.cpp",
                      "checkTowerScheduleConfig",
                      319);
                    v113 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                             (common::milog::MiLogStream *const)(v3 + 1936),
                             (const char (*)[16])"[CONFIG_ERROR] ");
                    v114 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                             v113,
                             (const char (*)[60])"checkTowerFloorConfigInOneSchedule fail, tower_schedule_id:");
                    p_open_time = (const TxtConfigMgr *)(v3 + 64);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v114,
                      (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1936));
                    *(_DWORD *)(((v3 + 1936) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v87 = 0;
                  }
                  else
                  {
                    v87 = 1;
                  }
                }
              }
              else
              {
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
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerScheduleConfig",
                  302);
                v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1680),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v92 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        v91,
                        (const char (*)[42])"parse close_time fail. tower_schedule_id:");
                p_open_time = (const TxtConfigMgr *)(v3 + 64);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v92,
                  (const unsigned int *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1680));
                *(_DWORD *)(((v3 + 1680) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v87 = 0;
              }
            }
            else
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                295);
              v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1616),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v89 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v88,
                      (const char (*)[18])byte_1A123F20);
              v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v89,
                      (const unsigned int *)(v3 + 64));
              p_open_time = (const TxtConfigMgr *)byte_1A123F60;
              common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v90, (const char (*)[22])byte_1A123F60);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
              *(_DWORD *)(((v3 + 1616) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v87 = 0;
            }
          }
          else
          {
            v87 = 0;
          }
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2480));
          v40 = v87 == 1;
          goto LABEL_181;
        }
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
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "checkTowerScheduleConfig",
          177);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 848),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v22, (const char (*)[36])byte_1A123500);
        p_open_time = (const TxtConfigMgr *)(v3 + 64);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
        *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
    }
LABEL_182:
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    v115 = ((v3 + 2400) >> 3) + 2147450880;
    *(_DWORD *)v115 = -117901064;
    *(_WORD *)(v115 + 4) = -1800;
    v116 = ((v3 + 2480) >> 3) + 2147450880;
    *(_DWORD *)v116 = -117901064;
    *(_WORD *)(v116 + 4) = -1800;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v18 )
    {
      v117 = 0;
      goto LABEL_186;
    }
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 144));
  }
  v117 = 1;
LABEL_186:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 656));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  v118 = ((v3 + 656) >> 3) + 2147450880;
  *(_WORD *)v118 = -1800;
  *(_BYTE *)(v118 + 2) = -8;
  *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
  if ( v117 == 1 )
  {
    if ( std::map<unsigned int,unsigned int>::empty(&this->entrance_floor_id_to_index_map)
      || std::map<unsigned int,unsigned int>::empty(&this->entrance_floor_index_to_id_map) )
    {
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerScheduleConfig",
        326);
      v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 2000),
               (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v120, (const char (*)[28])byte_1A1241C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2000));
      *(_DWORD *)(((v3 + 2000) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
    }
    else
    {
      __for_range_3 = &this->tower_entrance_floor_id_set_;
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 464, p_open_time);
      *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 464) = std::unordered_set<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 496, p_open_time);
      *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 496) = std::unordered_set<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v121 = (char *)(v3 + 496);
        if ( !std::__detail::operator!=<unsigned int,false>(
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 464),
                (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 496)) )
          break;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 4;
        v122 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 464));
        v123 = (int *)v122;
        if ( *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v122 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v122 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v122);
        }
        v124 = *v123;
        v125 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
        LOBYTE(v121) = v125 != 0;
        if ( v125 != 0 && v125 <= 3 )
          __asan_report_store4(v3 + 128, v121);
        *(_DWORD *)(v3 + 128) = v124;
        *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        p_entrance_floor_id_to_index_map = &this->entrance_floor_id_to_index_map;
        if ( *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 528, v121);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 528) = std::map<unsigned int,unsigned int>::find(
                                                                               p_entrance_floor_id_to_index_map,
                                                                               (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 128));
        *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
        v127 = &this->entrance_floor_id_to_index_map;
        if ( *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 560, v3 + 128);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 560) = std::map<unsigned int,unsigned int>::end(v127);
        v128 = std::operator==(
                 (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 528),
                 (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 560));
        *(_BYTE *)(((v3 + 560) >> 3) + 0x7FFF8000) = -8;
        if ( v128 )
        {
          *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2064) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 2095) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2064, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2064),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "checkTowerScheduleConfig",
            335);
          v129 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 2064),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v130 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                   v129,
                   (const char (*)[59])byte_1A124200);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v130, (const unsigned int *)(v3 + 128));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2064));
          *(_DWORD *)(((v3 + 2064) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v131 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
          p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 528))->second;
          if ( *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 592, v3 + 560);
          v133 = p_second;
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 592) = std::map<unsigned int,unsigned int>::find(
                                                                                 &this->entrance_floor_index_to_id_map,
                                                                                 p_second);
          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
          p_entrance_floor_index_to_id_map = &this->entrance_floor_index_to_id_map;
          if ( *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 624, v133);
          *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 624) = std::map<unsigned int,unsigned int>::end(p_entrance_floor_index_to_id_map);
          v135 = std::operator==(
                   (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 592),
                   (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 624));
          *(_BYTE *)(((v3 + 624) >> 3) + 0x7FFF8000) = -8;
          if ( v135 )
          {
            *(_DWORD *)(((v3 + 2128) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 2128) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 2159) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 2159) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 2128, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 2128),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerScheduleConfig",
              341);
            v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 2128),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v137 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                     v136,
                     (const char (*)[62])byte_1A124260);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v137,
              (const unsigned int *)(v3 + 128));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2128));
            *(_DWORD *)(((v3 + 2128) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v131 = 0;
          }
          else
          {
            v138 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 592));
            v139 = &v138->second;
            if ( *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v139 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v139 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v139);
            }
            second = v138->second;
            if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 128);
            if ( second == *(_DWORD *)(v3 + 128) )
            {
              v131 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 2192) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 2192) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 2223) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 2223) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 2192, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 2192),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerScheduleConfig",
                346);
              v141 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 2192),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v142 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                       v141,
                       (const char (*)[44])byte_1A1242C0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v142,
                (const unsigned int *)(v3 + 128));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2192));
              *(_DWORD *)(((v3 + 2192) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v131 = 0;
            }
          }
        }
        *(_BYTE *)(((v3 + 528) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 592) >> 3) + 0x7FFF8000) = -8;
        if ( v131 != 1 )
        {
          v143 = 0;
          goto LABEL_234;
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 464));
      }
      v143 = 1;
LABEL_234:
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) = -8;
      if ( v143 == 1 )
      {
        std::get<0ul,unsigned int,unsigned int>(&this->tower_entrance_last_floor_tuple_);
        last_entrance_floor_id = (std::tuple_element<1,const std::tuple<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(&this->tower_entrance_last_floor_tuple_);
        if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                &this->tower_entrance_floor_id_set_,
                last_entrance_floor_id) )
        {
          *(_DWORD *)(((v3 + 2256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 2256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 2287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 2287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 2256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 2256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "checkTowerScheduleConfig",
            354);
          v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 2256),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v144, (const char (*)[62])byte_1A124320);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2256));
          *(_DWORD *)(((v3 + 2256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
        }
        else
        {
          v2 = 0;
        }
      }
    }
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 2320));
  if ( v163 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF811C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 292) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8128) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8130) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8138) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_6(v3, 2560LL, v163);
  }
  return v2;
};

// Line 363: range 000000000CB1551E-000000000CB15CDB
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerFloorConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_level_group_map; // rdx
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *p_level_group_id; // rcx
  __int64 v8; // rsi
  const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *v9; // rsi
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v10; // rdx
  char *v11; // rsi
  bool v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // edx
  char *v18; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rax
  int *v20; // rdx
  int v21; // ecx
  char v22; // al
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v23; // rax
  unsigned int *v24; // r8
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::mapped_type *v25; // rax
  unsigned int *v26; // r8
  int v27; // eax
  int32_t result; // eax
  data::TowerFloorExcelConfigMap *__for_range; // [rsp+18h] [rbp-198h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-190h]
  const unsigned int *floor_id; // [rsp+28h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,data::TowerFloorExcelConfig> >::type *floor_config; // [rsp+30h] [rbp-180h]
  std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-178h]
  char v34[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 4 15 level_index:373 48 4 12 level_id:374 64 8 15 __for_begin:364 96 8 13 __for_end:364 128"
                        " 8 8 iter:366 160 8 9 <unknown> 192 8 15 __for_begin:374 224 8 13 __for_end:374 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerFloorConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -202116109;
  __for_range = &this->tower_floor_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false> *const)(v3 + 64));
    floor_id = std::get<0ul,unsigned int const,data::TowerFloorExcelConfig>(__in);
    floor_config = std::get<1ul,unsigned int const,data::TowerFloorExcelConfig>(__in);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_level_group_map = &this->level_group_map;
    p_level_group_id = &floor_config->level_group_id;
    v8 = *(unsigned __int8 *)(((v3 + 128) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_store8(v3 + 128, v8);
    v9 = p_level_group_id;
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                            p_level_group_map,
                                                                                            p_level_group_id);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v10 = &this->level_group_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v9);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v10);
    v11 = (char *)(v3 + 160);
    v12 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "rewriteTowerFloorConfig",
        369);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v13, (const char (*)[22])byte_1A1244A0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &floor_config->level_group_id);
      v16 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])byte_1A1244E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, floor_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v11);
      *(_DWORD *)(v3 + 32) = 0;
      __for_range_0 = &std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 128))->second;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v11);
      *(std::vector<unsigned int>::iterator *)(v3 + 192) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v11);
      *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v18 = (char *)(v3 + 224);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224)) )
          break;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
        v20 = (int *)v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        v21 = *v20;
        v22 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v22 != 0 && v22 <= 3 )
        {
          LOBYTE(v18) = v22 != 0;
          __asan_report_store4(v3 + 48, v18);
        }
        *(_DWORD *)(v3 + 48) = v21;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        ++*(_DWORD *)(v3 + 32);
        v23 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_level_index_map,
                floor_id);
        std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
          &v23->id_to_index_map,
          (unsigned int *)(v3 + 48),
          (unsigned int *)(v3 + 32),
          (unsigned int *)v23,
          v24);
        v25 = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::operator[](
                &this->tower_level_index_map,
                floor_id);
        std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
          &v25->index_to_id_map,
          (unsigned int *)(v3 + 32),
          (unsigned int *)(v3 + 48),
          (unsigned int *)&v25->index_to_id_map,
          v26);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 192));
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      v17 = 1;
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v27 = 0;
      goto LABEL_38;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false> *const)(v3 + 64));
  }
  v27 = 1;
LABEL_38:
  if ( v27 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
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

// Line 386: range 000000000CB15CDC-000000000CB18DB5
__int64 __fastcall TowerExcelConfigMgr::checkTowerFloorConfigInOneSchedule(
        const TowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t schedule_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::vector<unsigned int> *p_entrance_floor_id; // rsi
  const unsigned int *M_current; // r15
  unsigned int *v11; // r15
  std::vector<unsigned int>::iterator v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rsi
  bool v17; // r15
  unsigned __int64 v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  uint32_t *p_monthly_level_config_id; // rsi
  char *v27; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  _BOOL4 v37; // eax
  __int64 v38; // rsi
  uint32_t floor_index; // ecx
  char v40; // al
  uint32_t TowerFloorIndex; // ecx
  uint32_t TowerFloorId; // ecx
  char v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  __int64 v51; // rsi
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  unsigned __int64 v57; // rax
  uint32_t *p_reward_id; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  int v63; // edx
  int v64; // r15d
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  __int64 v74; // rsi
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  char *v80; // rsi
  unsigned int *v81; // rax
  int *v82; // rdx
  int v83; // ecx
  char v84; // al
  __int64 v85; // rsi
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  _BOOL4 v93; // eax
  uint32_t level_index; // ecx
  char v95; // al
  uint32_t v96; // edx
  uint32_t TowerLevelId; // ecx
  uint32_t v98; // ecx
  uint32_t v99; // ecx
  uint32_t v100; // edx
  uint32_t TowerLevelIndex; // ecx
  char v102; // al
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  uint32_t v112; // ecx
  __int64 v113; // rsi
  uint32_t LevelFirstPassRewardId; // edx
  char v115; // al
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  __int64 dungeon_id; // rsi
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v136; // rdx
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  int v148; // edx
  int v149; // edx
  unsigned __int64 v150; // rdx
  int v151; // edx
  const unsigned int *__last; // [rsp+8h] [rbp-7E8h]
  data::ItemLimitType item_limit_type; // [rsp+3Ch] [rbp-7B4h]
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+40h] [rbp-7B0h]
  const std::vector<data::TowerSchedule> *__for_range; // [rsp+48h] [rbp-7A8h]
  common::tools::transcribe_cv_t_1 *floor_index_config_ptr; // [rsp+50h] [rbp-7A0h]
  std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-798h]
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+60h] [rbp-790h]
  const std::vector<data::TowerStarReward> *floor_reward_vec_ptr; // [rsp+68h] [rbp-788h]
  const data::TowerStarReward *tower_star_reward; // [rsp+78h] [rbp-778h]
  const std::vector<unsigned int> *level_vec_ptr; // [rsp+80h] [rbp-770h]
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+90h] [rbp-760h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+98h] [rbp-758h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+A0h] [rbp-750h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *level_config_id; // [rsp+A8h] [rbp-748h]
  const data::TowerSchedule *tower_schedule; // [rsp+B8h] [rbp-738h]
  char v170[1840]; // [rsp+C0h] [rbp-730h] BYREF

  v4 = (unsigned __int64)v170;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1792LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "38 32 4 12 floor_id:415 48 4 15 floor_index:424 64 4 12 level_id:477 80 4 15 level_index:485 96 "
                        "4 30 level_first_pass_reward_id:493 112 4 15 schedule_id:385 128 8 15 __for_begin:395 160 8 13 _"
                        "_for_end:395 192 8 9 <unknown> 224 8 9 <unknown> 256 8 15 __for_begin:415 288 8 13 __for_end:415"
                        " 320 8 15 __for_begin:445 352 8 13 __for_end:445 384 8 15 __for_begin:477 416 8 13 __for_end:477"
                        " 448 8 9 <unknown> 480 8 15 __for_begin:508 512 8 13 __for_end:508 544 24 16 floor_id_vec:394 60"
                        "8 24 9 <unknown> 672 24 17 reward_id_vec:444 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unk"
                        "nown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <u"
                        "nknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 "
                        "9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 56 23 level_config_id_set:413";
  *(_QWORD *)(v4 + 16) = TowerExcelConfigMgr::checkTowerFloorConfigInOneSchedule;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -218959360;
  v6[536862728] = -218959360;
  v6[536862729] = -218959360;
  v6[536862730] = -218959360;
  v6[536862731] = -218959360;
  v6[536862732] = -218959360;
  v6[536862733] = -218959360;
  v6[536862734] = -218959360;
  v6[536862735] = -218959360;
  v6[536862736] = -218959360;
  v6[536862737] = -234881024;
  v6[536862738] = -218959118;
  v6[536862739] = -234881024;
  v6[536862740] = -218959118;
  v6[536862741] = -234881024;
  v6[536862742] = -218959118;
  v6[536862744] = -218959118;
  v6[536862746] = -218959118;
  v6[536862748] = -218959118;
  v6[536862750] = -218959118;
  v6[536862752] = -218959118;
  v6[536862754] = -218959118;
  v6[536862756] = -218959118;
  v6[536862758] = -218959118;
  v6[536862760] = -218959118;
  v6[536862762] = -218959118;
  v6[536862764] = -218959118;
  v6[536862766] = -218959118;
  v6[536862768] = -218959118;
  v6[536862770] = -218959118;
  v6[536862772] = -218959118;
  v6[536862774] = -218103808;
  v6[536862775] = -202116109;
  *(_DWORD *)(v4 + 112) = schedule_id;
  schedule_config_ptr = data::TowerExcelConfigMgrBase::findTowerScheduleExcelConfig(this, *(unsigned int *)(v4 + 112));
  if ( schedule_config_ptr )
  {
    p_entrance_floor_id = &schedule_config_ptr->entrance_floor_id;
    std::vector<unsigned int>::vector(
      (std::vector<unsigned int> *const)(v4 + 544),
      &schedule_config_ptr->entrance_floor_id);
    __for_range = &schedule_config_ptr->schedules;
    if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 128, p_entrance_floor_id);
    *(std::vector<data::TowerSchedule>::const_iterator *)(v4 + 128) = std::vector<data::TowerSchedule>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 160, p_entrance_floor_id);
    *(std::vector<data::TowerSchedule>::const_iterator *)(v4 + 160) = std::vector<data::TowerSchedule>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::TowerSchedule const*,std::vector<data::TowerSchedule>>(
              (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v4 + 128),
              (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v4 + 160)) )
    {
      tower_schedule = __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v4 + 128));
      __last = std::vector<unsigned int>::end(&tower_schedule->floor_list)._M_current;
      M_current = std::vector<unsigned int>::begin(&tower_schedule->floor_list)._M_current;
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v4 + 192, v4 + 160);
      *(std::vector<unsigned int>::iterator *)(v4 + 192) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 544));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 224),
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 192));
      if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v4 + 224);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v4 + 544),
        *(std::vector<unsigned int>::const_iterator *)(v4 + 224),
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
      *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v4 + 128));
    }
    *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
    v11 = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v4 + 544))._M_current;
    v12._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v4 + 544))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v12,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v11);
    floor_index_config_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> const>(
                               &this->tower_schedule_index_map,
                               (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v4 + 112));
    if ( floor_index_config_ptr )
    {
      v15 = ((v4 + 608) >> 3) + 2147450880;
      *(_WORD *)v15 = 0;
      *(_BYTE *)(v15 + 2) = 0;
      v16 = (__int64)floor_index_config_ptr;
      if ( *(char *)(((v4 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 631) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 119) & 7) >= *(_BYTE *)(((v4 + 631) >> 3) + 0x7FFF8000) )
      {
        v16 = 24LL;
        __asan_report_store_n(v4 + 608, 24LL);
      }
      common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>(
        (std::vector<unsigned int> *)(v4 + 608),
        (const std::map<unsigned int,unsigned int> *)v16);
      v17 = std::operator!=<unsigned int,std::allocator<unsigned int>>(
              (const std::vector<unsigned int> *)(v4 + 608),
              (const std::vector<unsigned int> *)(v4 + 544));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 608));
      v18 = ((v4 + 608) >> 3) + 2147450880;
      *(_WORD *)v18 = -1800;
      *(_BYTE *)(v18 + 2) = -8;
      if ( v17 )
      {
        *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v4 + 864) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 895) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 864, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 864),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "checkTowerFloorConfigInOneSchedule",
          408);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 864),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])byte_1A1249A0);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 112));
        v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])byte_1A1249E0);
        v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::vector<unsigned int> *)(v4 + 544));
        v24 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v23, (const char (*)[23])byte_1A124A20);
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v24, &floor_index_config_ptr->id_to_index_map);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 864));
        *(_DWORD *)(((v4 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
      }
      else
      {
        v25 = ((v4 + 1696) >> 3) + 2147450880;
        *(_DWORD *)v25 = 0;
        *(_WORD *)(v25 + 4) = 0;
        *(_BYTE *)(v25 + 6) = 0;
        std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v4 + 1696));
        p_monthly_level_config_id = &schedule_config_ptr->monthly_level_config_id;
        std::unordered_set<unsigned int>::insert(
          (std::unordered_set<unsigned int> *const)(v4 + 1696),
          &schedule_config_ptr->monthly_level_config_id);
        __for_range_0 = (std::vector<unsigned int> *)(v4 + 544);
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 256, p_monthly_level_config_id);
        *(std::vector<unsigned int>::iterator *)(v4 + 256) = std::vector<unsigned int>::begin(__for_range_0);
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v4 + 288, p_monthly_level_config_id);
        *(std::vector<unsigned int>::iterator *)(v4 + 288) = std::vector<unsigned int>::end(__for_range_0);
        while ( 1 )
        {
          v27 = (char *)(v4 + 288);
          if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 256),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v4 + 288)) )
            break;
          *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = 4;
          v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 256));
          v29 = (int *)v28;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          v30 = *v29;
          v31 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
          if ( v31 != 0 && v31 <= 3 )
          {
            LOBYTE(v27) = v31 != 0;
            __asan_report_store4(v4 + 32, v27);
          }
          *(_DWORD *)(v4 + 32) = v30;
          floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(this, *(_DWORD *)(v4 + 32));
          if ( floor_config_ptr )
          {
            *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = 4;
            v38 = (((_BYTE)floor_config_ptr + 12) & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_index >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)floor_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_index >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&floor_config_ptr->floor_index);
            }
            floor_index = floor_config_ptr->floor_index;
            v40 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
            if ( v40 != 0 && v40 <= 3 )
            {
              LOBYTE(v38) = v40 != 0;
              __asan_report_store4(v4 + 48, v38);
            }
            *(_DWORD *)(v4 + 48) = floor_index;
            if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v4 + 32);
            TowerFloorIndex = TowerExcelConfigMgr::findTowerFloorIndex(
                                this,
                                *(_DWORD *)(v4 + 112),
                                *(_DWORD *)(v4 + 32));
            if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v4 + 48);
            if ( TowerFloorIndex != *(_DWORD *)(v4 + 48) )
              goto LABEL_55;
            TowerFloorId = TowerExcelConfigMgr::findTowerFloorId(this, *(_DWORD *)(v4 + 112), *(_DWORD *)(v4 + 48));
            if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v4 + 32);
            if ( TowerFloorId == *(_DWORD *)(v4 + 32) )
              v43 = 0;
            else
LABEL_55:
              v43 = 1;
            if ( v43 )
            {
              *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v4 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v4 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v4 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerFloorConfigInOneSchedule",
                428);
              v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v4 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v45 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v44,
                      (const char (*)[12])byte_1A1249A0);
              v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v4 + 112));
              v47 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v46,
                      (const char (*)[12])byte_1A124AE0);
              v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v47,
                      (const unsigned int *)(v4 + 48));
              v49 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v48, (const char (*)[8])byte_1A124A60);
              v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v49,
                      (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v50, (const char (*)[11])byte_1A124B20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 992));
              *(_DWORD *)(((v4 + 992) >> 3) + 0x7FFF8000) = -117901064;
              v3 = -1;
              v37 = 0;
            }
            else
            {
              item_limit_type = ITEM_LIMIT_TOWER_MONTHLY;
              if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v4 + 32);
              if ( TowerExcelConfigMgr::isIdEntranceFloor(this, *(_DWORD *)(v4 + 32)) )
                item_limit_type = ITEM_LIMIT_TOWER_REWARD;
              if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v4 + 48);
              v51 = *(unsigned int *)(v4 + 112);
              floor_reward_vec_ptr = TowerExcelConfigMgr::findFloorStarRewardVec(this, v51, *(_DWORD *)(v4 + 48));
              if ( floor_reward_vec_ptr )
              {
                v57 = ((v4 + 672) >> 3) + 2147450880;
                *(_WORD *)v57 = 0;
                *(_BYTE *)(v57 + 2) = 0;
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 672));
                *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v4 + 320, v51);
                *(std::vector<data::TowerStarReward>::const_iterator *)(v4 + 320) = std::vector<data::TowerStarReward>::begin(floor_reward_vec_ptr);
                *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v4 + 352, v51);
                *(std::vector<data::TowerStarReward>::const_iterator *)(v4 + 352) = std::vector<data::TowerStarReward>::end(floor_reward_vec_ptr);
                while ( 1 )
                {
                  if ( !__gnu_cxx::operator!=<data::TowerStarReward const*,std::vector<data::TowerStarReward>>(
                          (const __gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *)(v4 + 320),
                          (const __gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *)(v4 + 352)) )
                  {
                    v63 = 1;
                    goto LABEL_85;
                  }
                  tower_star_reward = __gnu_cxx::__normal_iterator<data::TowerStarReward const*,std::vector<data::TowerStarReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *const)(v4 + 320));
                  p_reward_id = &tower_star_reward->reward_id;
                  if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4(p_reward_id);
                  }
                  if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                          txt_config_mgr,
                                          tower_star_reward->reward_id,
                                          item_limit_type) != 1 )
                    break;
                  std::vector<unsigned int>::push_back(
                    (std::vector<unsigned int> *const)(v4 + 672),
                    &tower_star_reward->reward_id);
                  __gnu_cxx::__normal_iterator<data::TowerStarReward const*,std::vector<data::TowerStarReward>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *const)(v4 + 320));
                }
                *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 1120) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1151) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 1120, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 1120),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerFloorConfigInOneSchedule",
                  450);
                v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v4 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v60 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                        v59,
                        (const char (*)[20])byte_1A124BA0);
                v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v60,
                        &tower_star_reward->reward_id);
                v62 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                        v61,
                        (const char (*)[11])" floor_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v62,
                  (const unsigned int *)(v4 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1120));
                *(_DWORD *)(((v4 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v3 = -1;
                v63 = 0;
LABEL_85:
                *(_BYTE *)(((v4 + 320) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v4 + 352) >> 3) + 0x7FFF8000) = -8;
                if ( v63 == 1 )
                {
                  if ( TxtConfigMgr::checkMergeRewardIds(
                         txt_config_mgr,
                         (const std::vector<unsigned int> *)(v4 + 672),
                         item_limit_type) )
                  {
                    *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v4 + 1184) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) != 0
                      && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 1215) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v4 + 1184, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v4 + 1184),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/TowerExcelConfig.cpp",
                      "checkTowerFloorConfigInOneSchedule",
                      458);
                    v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v4 + 1184),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v66 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                            v65,
                            (const char (*)[41])"checkMergeRewardIds fail, reward_id_vec:");
                    v67 = common::milog::MiLogStream::operator<<<unsigned int>(
                            v66,
                            (const std::vector<unsigned int> *)(v4 + 672));
                    v68 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v67,
                            (const char (*)[11])" floor_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v68,
                      (const unsigned int *)(v4 + 32));
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1184));
                    *(_DWORD *)(((v4 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                    v3 = -1;
                    v64 = 0;
                  }
                  else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                              (std::unordered_set<unsigned int> *)(v4 + 1696),
                              &floor_config_ptr->floor_level_config_id) )
                  {
                    *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v4 + 1248) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v4 + 1279) >> 3) + 0x7FFF8000) != 0
                      && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 1279) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v4 + 1248, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v4 + 1248),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/TowerExcelConfig.cpp",
                      "checkTowerFloorConfigInOneSchedule",
                      465);
                    v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v4 + 1248),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v70 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                            v69,
                            (const char (*)[12])byte_1A1249A0);
                    v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v70,
                            (const unsigned int *)(v4 + 112));
                    v72 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                            v71,
                            (const char (*)[8])byte_1A124A60);
                    v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v72,
                            (const unsigned int *)(v4 + 32));
                    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                      v73,
                      (const char (*)[22])byte_1A124C80);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1248));
                    *(_DWORD *)(((v4 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                    v3 = -1;
                    v64 = 0;
                  }
                  else
                  {
                    std::unordered_set<unsigned int>::insert(
                      (std::unordered_set<unsigned int> *const)(v4 + 1696),
                      &floor_config_ptr->floor_level_config_id);
                    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(v4 + 32);
                    }
                    v74 = *(unsigned int *)(v4 + 32);
                    level_vec_ptr = TowerExcelConfigMgr::findTowerFloorLevelVec(this, v74);
                    if ( level_vec_ptr )
                    {
                      *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v4 + 384, v74);
                      *(std::vector<unsigned int>::const_iterator *)(v4 + 384) = std::vector<unsigned int>::begin(level_vec_ptr);
                      *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = 0;
                      if ( *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) )
                        __asan_report_store8(v4 + 416, v74);
                      *(std::vector<unsigned int>::const_iterator *)(v4 + 416) = std::vector<unsigned int>::end(level_vec_ptr);
                      while ( 1 )
                      {
                        v80 = (char *)(v4 + 416);
                        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 384),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 416)) )
                          break;
                        *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = 4;
                        v81 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 384));
                        v82 = (int *)v81;
                        if ( *(_BYTE *)(((unsigned __int64)v81 >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)v81 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v81 >> 3)
                                                                                + 0x7FFF8000) )
                        {
                          __asan_report_load4(v81);
                        }
                        v83 = *v82;
                        v84 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
                        if ( v84 != 0 && v84 <= 3 )
                        {
                          LOBYTE(v80) = v84 != 0;
                          __asan_report_store4(v4 + 64, v80);
                        }
                        *(_DWORD *)(v4 + 64) = v83;
                        v85 = *(unsigned int *)(v4 + 64);
                        level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(this, v85);
                        if ( level_config_ptr )
                        {
                          *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = 4;
                          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_index >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_index >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&level_config_ptr->level_index);
                          }
                          level_index = level_config_ptr->level_index;
                          v95 = *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000);
                          if ( v95 != 0 && v95 <= 3 )
                          {
                            LOBYTE(v85) = v95 != 0;
                            __asan_report_store4(v4 + 80, v85);
                          }
                          *(_DWORD *)(v4 + 80) = level_index;
                          v96 = *(_DWORD *)(v4 + 80);
                          if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 32);
                          }
                          TowerLevelId = TowerExcelConfigMgr::findTowerLevelId(this, *(_DWORD *)(v4 + 32), v96);
                          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 64);
                          }
                          if ( TowerLevelId != *(_DWORD *)(v4 + 64) )
                            goto LABEL_136;
                          if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 80);
                          }
                          v98 = *(_DWORD *)(v4 + 80);
                          if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 48);
                          }
                          v99 = TowerExcelConfigMgr::findTowerLevelId(
                                  this,
                                  *(_DWORD *)(v4 + 112),
                                  *(_DWORD *)(v4 + 48),
                                  v98);
                          if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 64);
                          }
                          if ( v99 != *(_DWORD *)(v4 + 64) )
                            goto LABEL_136;
                          v100 = *(_DWORD *)(v4 + 64);
                          if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 32);
                          }
                          TowerLevelIndex = TowerExcelConfigMgr::findTowerLevelIndex(this, *(_DWORD *)(v4 + 32), v100);
                          if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(v4 + 80);
                          }
                          if ( TowerLevelIndex == *(_DWORD *)(v4 + 80) )
                            v102 = 0;
                          else
LABEL_136:
                            v102 = 1;
                          if ( v102 )
                          {
                            *(_DWORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v4 + 1440) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) != 0
                              && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 1471) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v4 + 1440, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v4 + 1440),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/TowerExcelConfig.cpp",
                              "checkTowerFloorConfigInOneSchedule",
                              490);
                            v103 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                     (common::milog::MiLogStream *const)(v4 + 1440),
                                     (const char (*)[16])"[CONFIG_ERROR] ");
                            v104 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                     v103,
                                     (const char (*)[12])byte_1A1249A0);
                            v105 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v104,
                                     (const unsigned int *)(v4 + 112));
                            v106 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                     v105,
                                     (const char (*)[8])byte_1A124A60);
                            v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v106,
                                     (const unsigned int *)(v4 + 32));
                            v108 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                     v107,
                                     (const char (*)[13])byte_1A124CC0);
                            v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v108,
                                     (const unsigned int *)(v4 + 64));
                            v110 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                                     v109,
                                     (const char (*)[19])byte_1A124D00);
                            v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                     v110,
                                     (const unsigned int *)(v4 + 80));
                            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              v111,
                              (const char (*)[11])byte_1A124B20);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1440));
                            *(_DWORD *)(((v4 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                            v3 = -1;
                            v93 = 0;
                          }
                          else
                          {
                            *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = 4;
                            if ( *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(v4 + 80);
                            }
                            v112 = *(_DWORD *)(v4 + 80);
                            if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(v4 + 48);
                            }
                            v113 = *(unsigned int *)(v4 + 112);
                            LevelFirstPassRewardId = TowerExcelConfigMgr::findLevelFirstPassRewardId(
                                                       this,
                                                       v113,
                                                       *(_DWORD *)(v4 + 48),
                                                       v112);
                            v115 = *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000);
                            if ( v115 != 0 && v115 <= 3 )
                            {
                              LOBYTE(v113) = v115 != 0;
                              __asan_report_store4(v4 + 96, v113);
                            }
                            *(_DWORD *)(v4 + 96) = LevelFirstPassRewardId;
                            if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                                                    txt_config_mgr,
                                                    *(_DWORD *)(v4 + 96),
                                                    item_limit_type) != 1 )
                            {
                              *(_DWORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v4 + 1504) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v4 + 1535) >> 3) + 0x7FFF8000) != 0
                                && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 1535) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v4 + 1504, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v4 + 1504),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/TowerExcelConfig.cpp",
                                "checkTowerFloorConfigInOneSchedule",
                                496);
                              v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                       (common::milog::MiLogStream *const)(v4 + 1504),
                                       (const char (*)[16])"[CONFIG_ERROR] ");
                              v117 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                       v116,
                                       (const char (*)[12])byte_1A1249A0);
                              v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v117,
                                       (const unsigned int *)(v4 + 112));
                              v119 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                       v118,
                                       (const char (*)[8])byte_1A124A60);
                              v120 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v119,
                                       (const unsigned int *)(v4 + 32));
                              v121 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                       v120,
                                       (const char (*)[13])byte_1A124CC0);
                              v122 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v121,
                                       (const unsigned int *)(v4 + 64));
                              v123 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                       v122,
                                       (const char (*)[30])byte_1A124D40);
                              v124 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                       v123,
                                       (const unsigned int *)(v4 + 96));
                              common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                v124,
                                (const char (*)[14])byte_1A120640);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1504));
                              *(_DWORD *)(((v4 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                              v3 = -1;
                              v93 = 0;
                            }
                            else
                            {
                              p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
                              if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                                && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                                                + 0x7FFF8000) )
                              {
                                __asan_report_load4(&level_config_ptr->dungeon_id);
                              }
                              dungeon_id = level_config_ptr->dungeon_id;
                              dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                                     p_dungeon_config_mgr,
                                                     dungeon_id);
                              if ( dungeon_config_ptr )
                              {
                                __for_range_3 = &dungeon_config_ptr->level_config_map;
                                *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = 0;
                                if ( *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8(v4 + 480, dungeon_id);
                                *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 480) = std::map<unsigned int,unsigned int>::begin(__for_range_3);
                                *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = 0;
                                if ( *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) )
                                  __asan_report_store8(v4 + 512, dungeon_id);
                                *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 512) = std::map<unsigned int,unsigned int>::end(__for_range_3);
                                while ( 1 )
                                {
                                  if ( !std::operator!=(
                                          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 480),
                                          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 512)) )
                                  {
                                    v148 = 1;
                                    goto LABEL_174;
                                  }
                                  *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = 0;
                                  v136 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 480));
                                  if ( *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8(v4 + 448, v4 + 512);
                                  if ( ((unsigned __int8)v136 & 7) >= *(_BYTE *)(((unsigned __int64)v136 >> 3)
                                                                               + 0x7FFF8000)
                                    && *(_BYTE *)(((unsigned __int64)v136 >> 3) + 0x7FFF8000) != 0
                                    || *(_BYTE *)((((unsigned __int64)&v136->second + 3) >> 3) + 0x7FFF8000) != 0
                                    && (((unsigned __int8)v136 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v136->second
                                                                                       + 3) >> 3)
                                                                                     + 0x7FFF8000) )
                                  {
                                    __asan_report_load_n(v136, 8LL);
                                  }
                                  *(std::pair<unsigned int const,unsigned int> *)(v4 + 448) = *v136;
                                  level_config_id = std::get<0ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)(v4 + 448));
                                  std::get<1ul,unsigned int const,unsigned int>((const std::pair<unsigned int const,unsigned int> *)(v4 + 448));
                                  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                                         (std::unordered_set<unsigned int> *)(v4 + 1696),
                                         level_config_id) )
                                  {
                                    break;
                                  }
                                  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 480));
                                }
                                *(_DWORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v4 + 1632) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v4 + 1663) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1663) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v4 + 1632, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v4 + 1632),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                                  "checkTowerFloorConfigInOneSchedule",
                                  513);
                                v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v4 + 1632),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v138 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                         v137,
                                         (const char (*)[12])byte_1A1249A0);
                                v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v138,
                                         (const unsigned int *)(v4 + 112));
                                v140 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                         v139,
                                         (const char (*)[8])byte_1A124A60);
                                v141 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v140,
                                         (const unsigned int *)(v4 + 32));
                                v142 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                         v141,
                                         (const char (*)[13])byte_1A124CC0);
                                v143 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v142,
                                         (const unsigned int *)(v4 + 64));
                                v144 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                         v143,
                                         (const char (*)[13])byte_1A124D80);
                                v145 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v144,
                                         &level_config_ptr->dungeon_id);
                                v146 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                         v145,
                                         (const char (*)[17])byte_1A124DC0);
                                v147 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v146,
                                         level_config_id);
                                common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                  v147,
                                  (const char (*)[8])byte_1A1174C0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1632));
                                *(_DWORD *)(((v4 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                                v3 = -1;
                                v148 = 0;
LABEL_174:
                                *(_BYTE *)(((v4 + 448) >> 3) + 0x7FFF8000) = -8;
                                *(_BYTE *)(((v4 + 480) >> 3) + 0x7FFF8000) = -8;
                                *(_BYTE *)(((v4 + 512) >> 3) + 0x7FFF8000) = -8;
                                v93 = v148 == 1;
                              }
                              else
                              {
                                *(_DWORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v4 + 1568) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v4 + 1599) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1599) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v4 + 1568, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v4 + 1568),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                                  "checkTowerFloorConfigInOneSchedule",
                                  504);
                                v127 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v4 + 1568),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v128 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                         v127,
                                         (const char (*)[12])byte_1A1249A0);
                                v129 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v128,
                                         (const unsigned int *)(v4 + 112));
                                v130 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                         v129,
                                         (const char (*)[8])byte_1A124A60);
                                v131 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v130,
                                         (const unsigned int *)(v4 + 32));
                                v132 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                         v131,
                                         (const char (*)[13])byte_1A124CC0);
                                v133 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v132,
                                         (const unsigned int *)(v4 + 64));
                                v134 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                         v133,
                                         (const char (*)[13])byte_1A124D80);
                                v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                         v134,
                                         &level_config_ptr->dungeon_id);
                                common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                                  v135,
                                  (const char (*)[17])byte_1A124AA0);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1568));
                                *(_DWORD *)(((v4 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                                v3 = -1;
                                v93 = 0;
                              }
                            }
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v4 + 1376) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) != 0
                            && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 1407) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v4 + 1376, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v4 + 1376),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/TowerExcelConfig.cpp",
                            "checkTowerFloorConfigInOneSchedule",
                            482);
                          v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v4 + 1376),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v87 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                  v86,
                                  (const char (*)[12])byte_1A1249A0);
                          v88 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v87,
                                  (const unsigned int *)(v4 + 112));
                          v89 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                  v88,
                                  (const char (*)[8])byte_1A124A60);
                          v90 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v89,
                                  (const unsigned int *)(v4 + 32));
                          v91 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                  v90,
                                  (const char (*)[13])byte_1A124CC0);
                          v92 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v91,
                                  (const unsigned int *)(v4 + 64));
                          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v92,
                            (const char (*)[17])byte_1A124AA0);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1376));
                          *(_DWORD *)(((v4 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                          v3 = -1;
                          v93 = 0;
                        }
                        *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
                        if ( !v93 )
                        {
                          v149 = 0;
                          goto LABEL_179;
                        }
                        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v4 + 384));
                      }
                      v149 = 1;
LABEL_179:
                      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v4 + 384) >> 3) + 0x7FFF8000) = -8;
                      *(_BYTE *)(((v4 + 416) >> 3) + 0x7FFF8000) = -8;
                      if ( v149 == 1 )
                      {
                        std::unordered_set<unsigned int>::erase(
                          (std::unordered_set<unsigned int> *const)(v4 + 1696),
                          &floor_config_ptr->floor_level_config_id);
                        v64 = 1;
                      }
                      else
                      {
                        v64 = 0;
                      }
                    }
                    else
                    {
                      *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v4 + 1312) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) != 0
                        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1343) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v4 + 1312, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v4 + 1312),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/TowerExcelConfig.cpp",
                        "checkTowerFloorConfigInOneSchedule",
                        473);
                      v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v4 + 1312),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v76 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v75,
                              (const char (*)[12])byte_1A1249A0);
                      v77 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v76,
                              (const unsigned int *)(v4 + 112));
                      v78 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                              v77,
                              (const char (*)[8])byte_1A124A60);
                      v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v78,
                              (const unsigned int *)(v4 + 32));
                      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v79,
                        (const char (*)[17])byte_1A124AA0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1312));
                      *(_DWORD *)(((v4 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                      v3 = -1;
                      v64 = 0;
                    }
                  }
                }
                else
                {
                  v64 = 0;
                }
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 672));
                v37 = v64 == 1;
              }
              else
              {
                *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v4 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v4 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v4 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerFloorConfigInOneSchedule",
                  441);
                v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v4 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v53 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v52,
                        (const char (*)[12])byte_1A1249A0);
                v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v53,
                        (const unsigned int *)(v4 + 112));
                v55 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                        v54,
                        (const char (*)[12])byte_1A124AE0);
                v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v55,
                        (const unsigned int *)(v4 + 48));
                common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v56, (const char (*)[29])byte_1A124B60);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1056));
                *(_DWORD *)(((v4 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                v3 = -1;
                v37 = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v4 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerFloorConfigInOneSchedule",
              420);
            v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v33 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v32,
                    (const char (*)[12])byte_1A1249A0);
            v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v33,
                    (const unsigned int *)(v4 + 112));
            v35 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v34, (const char (*)[8])byte_1A124A60);
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v36, (const char (*)[17])byte_1A124AA0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 928));
            *(_DWORD *)(((v4 + 928) >> 3) + 0x7FFF8000) = -117901064;
            v3 = -1;
            v37 = 0;
          }
          *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) = -8;
          v150 = ((v4 + 672) >> 3) + 2147450880;
          *(_WORD *)v150 = -1800;
          *(_BYTE *)(v150 + 2) = -8;
          if ( !v37 )
          {
            v151 = 0;
            goto LABEL_187;
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v4 + 256));
        }
        v151 = 1;
LABEL_187:
        *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v4 + 288) >> 3) + 0x7FFF8000) = -8;
        if ( v151 == 1 )
          v3 = 0;
        std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v4 + 1696));
      }
    }
    else
    {
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v4 + 800) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 63) & 7) >= *(_BYTE *)(((v4 + 831) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 800, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 800),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerFloorConfigInOneSchedule",
        403);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v13,
              (const char (*)[43])"floor_index_config not found, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 800));
      *(_DWORD *)(((v4 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 544));
  }
  else
  {
    if ( *(char *)(((v4 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 - 32 + 31) & 7) >= *(_BYTE *)(((v4 + 767) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 736, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 736),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/TowerExcelConfig.cpp",
      "checkTowerFloorConfigInOneSchedule",
      390);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 736),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           v7,
           (const char (*)[48])"findTowerScheduleExcelConfig fail, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 736));
    v3 = -1;
  }
  if ( v170 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862746) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450976 - (((_DWORD)v6 + 2147450984) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF80D8) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1792LL, v170);
  }
  return v3;
};

// Line 527: range 000000000CB18DB6-000000000CB1A97C
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerLevelConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  std::map<unsigned int,unsigned int> *v7; // rdi
  uint32_t *p_level_index; // rsi
  const unsigned int *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  common::milog::MiLogStream *v18; // rax
  _BOOL4 v19; // edx
  unsigned __int64 v20; // rax
  char *v21; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v26; // rdx
  __int64 v27; // rsi
  __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  int v30; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  _BOOL4 v33; // eax
  std::vector<unsigned int>::size_type v34; // rsi
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type v35; // ecx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // edx
  std::vector<unsigned int> *v42; // rdx
  int v43; // edx
  bool v45; // [rsp+8h] [rbp-5A8h]
  int v46; // [rsp+8h] [rbp-5A8h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *v47; // [rsp+8h] [rbp-5A8h]
  uint32_t index; // [rsp+24h] [rbp-58Ch]
  data::TowerLevelExcelConfigMap *__for_range; // [rsp+28h] [rbp-588h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-580h]
  const unsigned int *level_id; // [rsp+38h] [rbp-578h]
  std::tuple_element<1,std::pair<unsigned int const,data::TowerLevelExcelConfig> >::type *level_config; // [rsp+40h] [rbp-570h]
  std::vector<std::string> *__for_range_0; // [rsp+48h] [rbp-568h]
  const std::string *tower_buff_config_str; // [rsp+50h] [rbp-560h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+58h] [rbp-558h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *tower_buff_id; // [rsp+60h] [rbp-550h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+68h] [rbp-548h]
  std::vector<data::TowerCondition> *__for_range_2; // [rsp+70h] [rbp-540h]
  data::TowerCondition *tower_condition; // [rsp+78h] [rbp-538h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_3; // [rsp+80h] [rbp-530h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::reference v62; // [rsp+88h] [rbp-528h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *level_group_id; // [rsp+90h] [rbp-520h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *level_map; // [rsp+98h] [rbp-518h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v65; // [rsp+A8h] [rbp-508h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *level_index; // [rsp+B0h] [rbp-500h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *level_id_0; // [rsp+B8h] [rbp-4F8h]
  char v68[1264]; // [rsp+C0h] [rbp-4F0h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1216LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "27 32 1 9 <unknown> 48 1 9 <unknown> 64 4 20 temp_level_index:579 80 8 15 __for_begin:529 112 8 "
                        "13 __for_end:529 144 8 15 __for_begin:538 176 8 13 __for_end:538 208 8 9 <unknown> 240 8 15 __fo"
                        "r_begin:553 272 8 13 __for_end:553 304 8 15 __for_begin:565 336 8 13 __for_end:565 368 8 15 __fo"
                        "r_begin:571 400 8 13 __for_end:571 432 8 15 __for_begin:580 464 8 13 __for_end:580 496 16 14 tow"
                        "er_buff:555 528 32 9 <unknown> 592 32 9 <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9"
                        " <unknown> 848 32 21 tower_buff_config:552 912 32 9 <unknown> 976 32 9 <unknown> 1040 48 19 buff"
                        "_weight_map:546 1120 56 24 temp_level_group_map:528";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753535;
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
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
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
  v5[536862754] = -218959118;
  v5[536862756] = -218103808;
  v5[536862757] = -202116109;
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::unordered_map((std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 1120));
  __for_range = &this->tower_level_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v3 + 112)) )
    {
      v17 = 1;
      goto LABEL_68;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false> *const)(v3 + 80));
    level_id = std::get<0ul,unsigned int const,data::TowerLevelExcelConfig>(__in);
    level_config = std::get<1ul,unsigned int const,data::TowerLevelExcelConfig>(__in);
    v7 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
           (std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 1120),
           &level_config->level_group_id);
    p_level_index = &level_config->level_index;
    v10 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
            v7,
            &level_config->level_index,
            level_id,
            &level_config->level_index,
            v9);
    if ( !v10.second )
      break;
    __for_range_0 = &level_config->tower_buff_config_str_list;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, p_level_index);
    *(std::vector<std::string>::iterator *)(v3 + 144) = std::vector<std::string>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_level_index);
    *(std::vector<std::string>::iterator *)(v3 + 176) = std::vector<std::string>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (const char *)(v3 + 176);
      if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 144),
              (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 176)) )
        break;
      tower_buff_config_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 144));
      if ( (unsigned __int8)std::string::empty() )
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
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "rewriteTowerLevelConfig",
          542);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v6 = byte_1A125180;
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v18, (const char (*)[25])byte_1A125180);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
      }
      else
      {
        v20 = ((v3 + 1040) >> 3) + 2147450880;
        *(_DWORD *)v20 = 0;
        *(_WORD *)(v20 + 4) = 0;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1040));
        *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 720),
          ":",
          (const std::allocator<char> *)(v3 + 48));
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v3 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v3 + 656),
          ",",
          (const std::allocator<char> *)(v3 + 32));
        v21 = (char *)(v3 + 656);
        v45 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                tower_buff_config_str,
                (const std::string *)(v3 + 656),
                (const std::string *)(v3 + 720),
                (std::map<unsigned int,unsigned int> *)(v3 + 1040),
                0) != 0;
        std::string::~string((void *)(v3 + 656));
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 32);
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
        std::string::~string((void *)(v3 + 720));
        *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v3 + 48);
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v45 )
        {
          *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 784) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 815) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 784, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 784),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "rewriteTowerLevelConfig",
            549);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 784),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v22, (const char (*)[30])byte_1A125200);
          v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, tower_buff_config_str);
          v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v24, (const char (*)[17])byte_1A125140);
          v6 = (const char *)&level_config->level_index;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &level_config->level_index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
          *(_DWORD *)(((v3 + 784) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v46 = 0;
        }
        else
        {
          *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = 0;
          data::TowerBuffConfig::TowerBuffConfig((data::TowerBuffConfig *const)(v3 + 848));
          __for_range_1 = (std::map<unsigned int,unsigned int> *)(v3 + 1040);
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 240, v21);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 240) = std::map<unsigned int,unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 272, v21);
          *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 272) = std::map<unsigned int,unsigned int>::end(__for_range_1);
          while ( std::operator!=(
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 240),
                    (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 272)) )
          {
            *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
            v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 240));
            if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 208, v3 + 272);
            v27 = ((_DWORD)v26 + 7) & 7;
            if ( ((unsigned __int8)v26 & 7) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000)
              && *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
              || *(_BYTE *)((((unsigned __int64)&v26->second + 3) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v26 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v26->second + 3) >> 3) + 0x7FFF8000) )
            {
              v27 = 8LL;
              __asan_report_load_n(v26, 8LL);
            }
            *(std::pair<unsigned int const,unsigned int> *)(v3 + 208) = *v26;
            tower_buff_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 208));
            weight = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 208));
            *(_WORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
            v28 = &`vtable for'data::TowerBuff + 2;
            if ( *(_BYTE *)(((v3 + 496) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v3 + 496, v27);
            *(_QWORD *)(v3 + 496) = v28;
            if ( *(_BYTE *)(((v3 + 504) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 504) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 504, v27);
            *(_DWORD *)(v3 + 504) = 0;
            if ( *(_BYTE *)(((v3 + 508) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 - 64 + 60) & 7) + 3) >= *(_BYTE *)(((v3 + 508) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v3 + 508, (((_BYTE)v3 - 64 + 60) & 7u) + 3);
            }
            *(_DWORD *)(v3 + 508) = 0;
            if ( *(_BYTE *)(((unsigned __int64)tower_buff_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tower_buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tower_buff_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(tower_buff_id);
            }
            *(_DWORD *)(v3 + 504) = *tower_buff_id;
            if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(weight);
            }
            *(_DWORD *)(v3 + 508) = *weight;
            std::vector<data::TowerBuff>::push_back(
              (std::vector<data::TowerBuff> *const)(v3 + 856),
              (const std::vector<data::TowerBuff>::value_type *)(v3 + 496));
            data::TowerBuff::~TowerBuff((data::TowerBuff *const)(v3 + 496));
            *(_WORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -1800;
            std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 240));
          }
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
          v6 = (const char *)(v3 + 848);
          std::vector<data::TowerBuffConfig>::push_back(
            &level_config->tower_buff_configs,
            (const std::vector<data::TowerBuffConfig>::value_type *)(v3 + 848));
          data::TowerBuffConfig::~TowerBuffConfig((data::TowerBuffConfig *const)(v3 + 848));
          v46 = 1;
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1040));
        v19 = v46 == 1;
      }
      v29 = ((v3 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v29 = -117901064;
      *(_WORD *)(v29 + 4) = -1800;
      *(_DWORD *)(((v3 + 848) >> 3) + 0x7FFF8000) = -117901064;
      if ( !v19 )
      {
        v30 = 0;
        goto LABEL_55;
      }
      __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 144));
    }
    v30 = 1;
LABEL_55:
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v30 != 1 )
    {
      v17 = 0;
      goto LABEL_68;
    }
    common::tools::MiscUtils::removeEmptyElement<data::TowerCondition,data::TowerCondType data::TowerCondition::*>(
      &level_config->conds,
      (data::TowerCondType *)8);
    index = 0;
    __for_range_2 = &level_config->conds;
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 304, 8LL);
    *(std::vector<data::TowerCondition>::iterator *)(v3 + 304) = std::vector<data::TowerCondition>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 336, 8LL);
    *(std::vector<data::TowerCondition>::iterator *)(v3 + 336) = std::vector<data::TowerCondition>::end(__for_range_2);
    while ( __gnu_cxx::operator!=<data::TowerCondition *,std::vector<data::TowerCondition>>(
              (const __gnu_cxx::__normal_iterator<data::TowerCondition*,std::vector<data::TowerCondition> > *)(v3 + 304),
              (const __gnu_cxx::__normal_iterator<data::TowerCondition*,std::vector<data::TowerCondition> > *)(v3 + 336)) )
    {
      tower_condition = __gnu_cxx::__normal_iterator<data::TowerCondition *,std::vector<data::TowerCondition>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerCondition*,std::vector<data::TowerCondition> > *const)(v3 + 304));
      ++index;
      if ( *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&tower_condition->index, v3 + 336);
      }
      tower_condition->index = index;
      __gnu_cxx::__normal_iterator<data::TowerCondition *,std::vector<data::TowerCondition>>::operator++((__gnu_cxx::__normal_iterator<data::TowerCondition*,std::vector<data::TowerCondition> > *const)(v3 + 304));
    }
    *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false> *const)(v3 + 80));
  }
  *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 111) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 528, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 528),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/TowerExcelConfig.cpp",
    "rewriteTowerLevelConfig",
    534);
  v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 528),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v11, (const char (*)[32])byte_1A1250C0);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, level_id);
  v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1A125100);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &level_config->level_group_id);
  v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v15, (const char (*)[17])byte_1A125140);
  v6 = (const char *)&level_config->level_index;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &level_config->level_index);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
  *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v17 = 0;
LABEL_68:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v17 == 1 )
  {
    __for_range_3 = (std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *)(v3 + 1120);
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 368, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 368) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 400, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 400) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_3);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 368),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 400)) )
    {
      v62 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 368));
      level_group_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v62);
      level_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v62);
      if ( std::map<unsigned int,unsigned int>::empty(level_map) )
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
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "rewriteTowerLevelConfig",
          575);
        v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 912),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v32 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                v31,
                (const char (*)[36])"level_map is empty, level_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, level_group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
        *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v33 = 0;
      }
      else
      {
        v47 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->level_group_map,
                level_group_id);
        v34 = std::map<unsigned int,unsigned int>::size(level_map);
        std::vector<unsigned int>::reserve(v47, v34);
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 64, v34);
        *(_DWORD *)(v3 + 64) = 0;
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 432, v34);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 432) = std::map<unsigned int,unsigned int>::begin(level_map);
        *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 464, v34);
        *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 464) = std::map<unsigned int,unsigned int>::end(level_map);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 432),
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 464)) )
          {
            v41 = 1;
            goto LABEL_97;
          }
          v65 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 432));
          level_index = std::get<0ul,unsigned int const,unsigned int>(v65);
          level_id_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v65);
          if ( *(_BYTE *)(((unsigned __int64)level_index >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)level_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_index >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(level_index);
          }
          v35 = *level_index;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 64);
          if ( v35 != ++*(_DWORD *)(v3 + 64) )
            break;
          v42 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->level_group_map,
                  level_group_id);
          std::vector<unsigned int>::push_back(v42, level_id_0);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 432));
        }
        *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 47) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 976, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 976),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "rewriteTowerLevelConfig",
          584);
        v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 976),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v37 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v36, (const char (*)[15])byte_1A1252A0);
        v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, level_group_id);
        v39 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v38, (const char (*)[14])byte_1A1252E0);
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])byte_1A125320);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
        *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
LABEL_97:
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 464) >> 3) + 0x7FFF8000) = -8;
        v33 = v41 == 1;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !v33 )
      {
        v43 = 0;
        goto LABEL_102;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 368));
    }
    v43 = 1;
LABEL_102:
    *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v43 == 1 )
      v2 = 0;
  }
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::~unordered_map((std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *const)(v3 + 1120));
  if ( v68 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8090) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1216LL, v68);
  }
  return v2;
};

// Line 594: range 000000000CB1A97E-000000000CB1DB8E
int32_t __cdecl TowerExcelConfigMgr::checkTowerLevelConfig(
        const TowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const char *v6; // rsi
  unsigned __int64 v7; // rax
  std::vector<unsigned int>::const_iterator v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  uint32_t *p_dungeon_id; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  _BOOL4 v20; // eax
  const unsigned int *p_level_id; // rcx
  const unsigned int *v22; // rdx
  __int64 v23; // rsi
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> >::type *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  char v27; // dl
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v34; // rax
  __int64 v35; // rsi
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  char *v42; // rsi
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  int v47; // edx
  int v48; // edx
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  uint32_t *p_index; // rsi
  int tower_cond_type; // eax
  __int64 v53; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v54; // rax
  int *v55; // rdx
  int v56; // ecx
  char v57; // al
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  __int64 v65; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v66; // rax
  int *v67; // rdx
  int v68; // ecx
  char v69; // al
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  __int64 v76; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v77; // rax
  int *v78; // rdx
  int v79; // ecx
  char v80; // al
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rdx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rdx
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v92; // rax
  int *v93; // rdx
  std::vector<unsigned int>::const_reference v94; // rax
  _DWORD *v95; // rdx
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rdx
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v100; // rax
  int *v101; // rdx
  std::vector<unsigned int>::const_reference v102; // rax
  _DWORD *v103; // rdx
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v108; // rax
  int *v109; // rdx
  std::vector<unsigned int>::const_reference v110; // rax
  _DWORD *v111; // rdx
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rdx
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  const unsigned int *v116; // rcx
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rdx
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  common::milog::MiLogStream *v122; // rax
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rdx
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  int v127; // edx
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rdx
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rdx
  std::set<data::TowerCondType>::size_type v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rdx
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rdx
  int v143; // edx
  const unsigned int *__firstg; // [rsp+8h] [rbp-888h]
  std::set<unsigned int>::size_type __firsth; // [rsp+8h] [rbp-888h]
  int __first; // [rsp+8h] [rbp-888h]
  char __firsta; // [rsp+8h] [rbp-888h]
  int __firstb; // [rsp+8h] [rbp-888h]
  int __firstc; // [rsp+8h] [rbp-888h]
  int __firstd; // [rsp+8h] [rbp-888h]
  const unsigned int *__firste; // [rsp+8h] [rbp-888h]
  int __firstf; // [rsp+8h] [rbp-888h]
  bool has_err; // [rsp+2Eh] [rbp-862h]
  bool is_argument_valid; // [rsp+2Fh] [rbp-861h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-860h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v158; // [rsp+38h] [rbp-858h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *level_group_id; // [rsp+40h] [rbp-850h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *level_id_vec; // [rsp+48h] [rbp-848h]
  data::TowerLevelExcelConfigMap *__for_range_0; // [rsp+50h] [rbp-840h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::reference v162; // [rsp+58h] [rbp-838h]
  std::tuple_element<0,std::pair<unsigned int const,data::TowerLevelExcelConfig> >::type *level_id; // [rsp+60h] [rbp-830h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TowerLevelExcelConfig> >::type *level_config; // [rsp+68h] [rbp-828h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+70h] [rbp-820h]
  std::tuple_element<0,std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> >::type *dungeon_iter; // [rsp+78h] [rbp-818h]
  std::tuple_element<1,std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> >::type *is_new; // [rsp+80h] [rbp-810h]
  const std::vector<data::TowerBuffConfig> *__for_range_1; // [rsp+88h] [rbp-808h]
  std::vector<data::TowerBuff> *__for_range_2; // [rsp+98h] [rbp-7F8h]
  const data::TowerBuff *tower_buff; // [rsp+A0h] [rbp-7F0h]
  const std::vector<data::TowerCondition> *__for_range_3; // [rsp+A8h] [rbp-7E8h]
  const data::TowerCondition *cond; // [rsp+B0h] [rbp-7E0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+B8h] [rbp-7D8h]
  char v174[2000]; // [rsp+C0h] [rbp-7D0h] BYREF

  v3 = (unsigned __int64)v174;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1952LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "39 32 4 12 group_id:655 48 4 13 config_id:663 64 4 16 min_hp_ratio:670 80 4 9 <unknown> 96 8 15 "
                        "__for_begin:596 128 8 13 __for_end:596 160 8 15 __for_begin:607 192 8 13 __for_end:607 224 8 9 <"
                        "unknown> 256 8 9 <unknown> 288 8 15 __for_begin:628 320 8 13 __for_end:628 352 8 15 __for_begin:"
                        "630 384 8 13 __for_end:630 416 8 15 __for_begin:644 448 8 13 __for_end:644 480 8 9 <unknown> 512"
                        " 16 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 "
                        "32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120"
                        " 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> "
                        "1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 48 16 level_id_set:598 1712 48 "
                        "15 dungeon_map:606 1792 48 17 cond_type_set:642 1872 48 18 param_pair_set:643";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::checkTowerLevelConfig;
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
  v5[536862736] = -219021312;
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
  v5[536862772] = -219021312;
  v5[536862773] = 62194;
  v5[536862775] = -218959118;
  v5[536862777] = -219021312;
  v5[536862778] = 62194;
  v5[536862780] = -202116109;
  __for_range = &this->level_group_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (const char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 128)) )
      break;
    v158 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 96));
    level_group_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v158);
    level_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v158);
    v7 = ((v3 + 1632) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_WORD *)(v7 + 4) = 0;
    __firstg = std::vector<unsigned int>::begin(level_id_vec)._M_current;
    v8._M_current = std::vector<unsigned int>::end(level_id_vec)._M_current;
    v6 = (const char *)__firstg;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 1632),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__firstg,
      v8);
    __firsth = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 1632));
    if ( __firsth == std::vector<unsigned int>::size(level_id_vec) )
    {
      __first = 1;
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
        3u,
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerLevelConfig",
        601);
      v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
             (common::milog::MiLogStream *const)(v3 + 544),
             (const char (*)[15])byte_1A1252A0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_group_id);
      v6 = byte_1A125700;
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1A125700);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
      *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      __first = 0;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1632));
    v11 = ((v3 + 1632) >> 3) + 2147450880;
    *(_DWORD *)v11 = -117901064;
    *(_WORD *)(v11 + 4) = -1800;
    if ( __first != 1 )
    {
      v12 = 0;
      goto LABEL_19;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 96));
  }
  v12 = 1;
LABEL_19:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v12 != 1 )
    goto LABEL_198;
  has_err = 0;
  v13 = ((v3 + 1712) >> 3) + 2147450880;
  *(_DWORD *)v13 = 0;
  *(_WORD *)(v13 + 4) = 0;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1712));
  __for_range_0 = &this->tower_level_excel_config_map;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v6);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::const_iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::end(__for_range_0);
LABEL_25:
  if ( std::__detail::operator!=<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v3 + 160),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v3 + 192)) )
  {
    v162 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false> *const)(v3 + 160));
    level_id = std::get<0ul,unsigned int const,data::TowerLevelExcelConfig>(v162);
    level_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TowerLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TowerLevelExcelConfig>(v162);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    p_dungeon_id = &level_config->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_dungeon_id);
    }
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           p_dungeon_config_mgr,
                           level_config->dungeon_id);
    if ( !dungeon_config_ptr )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerLevelConfig",
        613);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v16, (const char (*)[39])byte_1A125740);
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &level_config->dungeon_id);
      v19 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v18, (const char (*)[11])" level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
      goto LABEL_189;
    }
    *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    p_level_id = &level_config->level_id;
    v22 = &level_config->dungeon_id;
    v23 = *(unsigned __int8 *)(((v3 + 224) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v23 )
      __asan_report_store8(v3 + 224, v23);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 224) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                            v22,
                                                            p_level_id);
    if ( *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    *(std::__enable_if_t_28 *)(v3 + 512) = std::map<unsigned int,unsigned int>::insert<std::pair<unsigned int,unsigned int>>(
                                             (std::map<unsigned int,unsigned int> *const)(v3 + 1712),
                                             (std::pair<unsigned int,unsigned int> *)(v3 + 224));
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    dungeon_iter = std::get<0ul,std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>,bool>((std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> *)(v3 + 512));
    v24 = std::get<1ul,std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>,bool>((std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> *)(v3 + 512));
    is_new = v24;
    __firsta = 0;
    v25 = (unsigned __int8)v24 & 7;
    v26 = (*(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000));
    if ( (_BYTE)v26 )
      __asan_report_load1(v24, v25, v26);
    if ( *is_new )
      goto LABEL_43;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v25);
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 1712));
    __firsta = 1;
    if ( std::operator!=(
           dungeon_iter,
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256)) )
    {
      v27 = 1;
    }
    else
    {
LABEL_43:
      v27 = 0;
    }
    if ( __firsta )
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v27 )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerLevelConfig",
        619);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v29 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v28, (const char (*)[22])byte_1A1257E0);
      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &level_config->dungeon_id);
      v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v30, (const char (*)[12])" @level_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, level_id);
      v33 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v32, (const char (*)[5])" vs ");
      v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->(dungeon_iter);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &v34->second);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
      goto LABEL_189;
    }
    v35 = (((_BYTE)dungeon_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    if ( dungeon_config_ptr->type != DUNGEON_TOWER )
    {
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerLevelConfig",
        624);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v36, (const char (*)[22])byte_1A1258A0);
      v38 = common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(
              v37,
              &dungeon_config_ptr->type);
      v39 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v38, (const char (*)[30])byte_1A1258E0);
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &level_config->dungeon_id);
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v20 = 0;
      goto LABEL_189;
    }
    __for_range_1 = &level_config->tower_buff_configs;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v35);
    *(std::vector<data::TowerBuffConfig>::const_iterator *)(v3 + 288) = std::vector<data::TowerBuffConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v35);
    *(std::vector<data::TowerBuffConfig>::const_iterator *)(v3 + 320) = std::vector<data::TowerBuffConfig>::end(__for_range_1);
    while ( 1 )
    {
      v42 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::TowerBuffConfig*,std::vector<data::TowerBuffConfig> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<const data::TowerBuffConfig*,std::vector<data::TowerBuffConfig> > *)(v3 + 320)) )
        break;
      __for_range_2 = &__gnu_cxx::__normal_iterator<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerBuffConfig*,std::vector<data::TowerBuffConfig> > *const)(v3 + 288))->tower_buff_list;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v42);
      *(std::vector<data::TowerBuff>::const_iterator *)(v3 + 352) = std::vector<data::TowerBuff>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v42);
      *(std::vector<data::TowerBuff>::const_iterator *)(v3 + 384) = std::vector<data::TowerBuff>::end(__for_range_2);
      while ( 1 )
      {
        v42 = (char *)(v3 + 384);
        if ( !__gnu_cxx::operator!=<data::TowerBuff const*,std::vector<data::TowerBuff>>(
                (const __gnu_cxx::__normal_iterator<const data::TowerBuff*,std::vector<data::TowerBuff> > *)(v3 + 352),
                (const __gnu_cxx::__normal_iterator<const data::TowerBuff*,std::vector<data::TowerBuff> > *)(v3 + 384)) )
        {
          v47 = 1;
          goto LABEL_76;
        }
        tower_buff = __gnu_cxx::__normal_iterator<data::TowerBuff const*,std::vector<data::TowerBuff>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerBuff*,std::vector<data::TowerBuff> > *const)(v3 + 352));
        if ( *(_BYTE *)(((unsigned __int64)&tower_buff->tower_buff_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&tower_buff->tower_buff_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&tower_buff->tower_buff_id);
        }
        if ( !TowerExcelConfigMgr::findTowerBuffConfig(this, tower_buff->tower_buff_id) )
          break;
        __gnu_cxx::__normal_iterator<data::TowerBuff const*,std::vector<data::TowerBuff>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerBuff*,std::vector<data::TowerBuff> > *const)(v3 + 352));
      }
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerLevelConfig",
        634);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v43, (const char (*)[37])byte_1A125920);
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &tower_buff->tower_buff_id);
      v46 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])" level_id:");
      v42 = (char *)level_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, level_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
      *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v47 = 0;
LABEL_76:
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v47 != 1 )
      {
        v48 = 0;
        goto LABEL_80;
      }
      __gnu_cxx::__normal_iterator<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerBuffConfig*,std::vector<data::TowerBuffConfig> > *const)(v3 + 288));
    }
    v48 = 1;
LABEL_80:
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v48 != 1 )
    {
      v20 = 0;
      goto LABEL_189;
    }
    v49 = ((v3 + 1792) >> 3) + 2147450880;
    *(_DWORD *)v49 = 0;
    *(_WORD *)(v49 + 4) = 0;
    std::set<data::TowerCondType>::set((std::set<data::TowerCondType> *const)(v3 + 1792));
    v50 = ((v3 + 1872) >> 3) + 2147450880;
    *(_DWORD *)v50 = 0;
    *(_WORD *)(v50 + 4) = 0;
    std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1872));
    __for_range_3 = &level_config->conds;
    *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 416, v42);
    *(std::vector<data::TowerCondition>::const_iterator *)(v3 + 416) = std::vector<data::TowerCondition>::begin(__for_range_3);
    *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 448, v42);
    *(std::vector<data::TowerCondition>::const_iterator *)(v3 + 448) = std::vector<data::TowerCondition>::end(__for_range_3);
    while ( 1 )
    {
      p_index = (uint32_t *)(v3 + 448);
      if ( !__gnu_cxx::operator!=<data::TowerCondition const*,std::vector<data::TowerCondition>>(
              (const __gnu_cxx::__normal_iterator<const data::TowerCondition*,std::vector<data::TowerCondition> > *)(v3 + 416),
              (const __gnu_cxx::__normal_iterator<const data::TowerCondition*,std::vector<data::TowerCondition> > *)(v3 + 448)) )
      {
        v127 = 1;
        goto LABEL_174;
      }
      cond = __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerCondition*,std::vector<data::TowerCondition> > *const)(v3 + 416));
      is_argument_valid = 1;
      if ( *(_BYTE *)(((unsigned __int64)&cond->tower_cond_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cond->tower_cond_type);
      }
      tower_cond_type = cond->tower_cond_type;
      if ( tower_cond_type == 3 )
      {
        if ( std::vector<unsigned int>::size(&cond->argument_list) == 2
          && std::vector<unsigned int>::size(&cond->argument_list_upper) == 2 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config->is_two_layer >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config->is_two_layer >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&level_config->is_two_layer);
          }
          if ( !level_config->is_two_layer )
          {
            v92 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 0LL);
            v93 = (int *)v92;
            if ( *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v92 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v92 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v92);
            }
            __firstb = *v93;
            v94 = std::vector<unsigned int>::operator[](&cond->argument_list_upper, 0LL);
            v95 = v94;
            if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v94);
            }
            if ( __firstb != *v95 )
            {
              is_argument_valid = 0;
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerLevelConfig",
                693);
              v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1120),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v97 = common::milog::MiLogStream::operator<<<char [136],(char *[136])0>(
                      v96,
                      (const char (*)[136])byte_1A125CA0);
              v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, level_id);
              v99 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v98, (const char (*)[9])byte_1A125A40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v99, &cond->index);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
              *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              goto LABEL_168;
            }
LABEL_151:
            v108 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 1uLL);
            v109 = (int *)v108;
            if ( *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v108 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v108 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v108);
            }
            __firstd = *v109;
            v110 = std::vector<unsigned int>::operator[](&cond->argument_list_upper, 1uLL);
            v111 = v110;
            if ( *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v110 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v110 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v110);
            }
            if ( __firstd == *v111 )
            {
              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
              __firste = std::vector<unsigned int>::operator[](&cond->argument_list_upper, 0LL);
              v116 = std::vector<unsigned int>::operator[](&cond->argument_list, 0LL);
              if ( *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v3 + 480, 0LL);
              *(std::pair<unsigned int,unsigned int> *)(v3 + 480) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                      v116,
                                                                      __firste);
              std::set<std::pair<unsigned int,unsigned int>>::insert(
                (std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1872),
                (std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v3 + 480));
              *(_BYTE *)(((v3 + 480) >> 3) + 0x7FFF8000) = -8;
            }
            else
            {
              is_argument_valid = 0;
              *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1248, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1248),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerLevelConfig",
                709);
              v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v3 + 1248),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v113 = common::milog::MiLogStream::operator<<<char [127],(char *[127])0>(
                       v112,
                       (const char (*)[127])byte_1A125E20);
              v114 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, level_id);
              v115 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                       v114,
                       (const char (*)[9])byte_1A125A40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v115, &cond->index);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
              *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
            }
            goto LABEL_168;
          }
          v100 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 0LL);
          v101 = (int *)v100;
          if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v100 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v100);
          }
          __firstc = *v101;
          v102 = std::vector<unsigned int>::operator[](&cond->argument_list_upper, 0LL);
          v103 = v102;
          if ( *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v102 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v102 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v102);
          }
          if ( __firstc != *v103 )
            goto LABEL_151;
          is_argument_valid = 0;
          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1184, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1184),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "checkTowerLevelConfig",
            702);
          v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 1184),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v105 = common::milog::MiLogStream::operator<<<char [136],(char *[136])0>(
                   v104,
                   (const char (*)[136])byte_1A125D60);
          v106 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, level_id);
          v107 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v106, (const char (*)[9])byte_1A125A40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v107, &cond->index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
          *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
        }
        else
        {
          is_argument_valid = 0;
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
            "./src/txt_data_manual/TowerExcelConfig.cpp",
            "checkTowerLevelConfig",
            717);
          v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 1312),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v118 = common::milog::MiLogStream::operator<<<char [113],(char *[113])0>(
                   v117,
                   (const char (*)[113])byte_1A125EC0);
          v119 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v118, level_id);
          v120 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v119, (const char (*)[9])byte_1A125A40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v120, &cond->index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
          *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        if ( tower_cond_type > 3 )
          goto LABEL_165;
        if ( tower_cond_type == 1 )
        {
          is_argument_valid = std::vector<unsigned int>::size(&cond->argument_list) == 1;
        }
        else
        {
          if ( tower_cond_type != 2 )
          {
LABEL_165:
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
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerLevelConfig",
              722);
            v121 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1376),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v122 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                     v121,
                     (const char (*)[37])byte_1A125F60);
            v123 = common::milog::MiLogStream::operator<<<data::TowerCondType,(data::TowerCondType*)0>(
                     v122,
                     &cond->tower_cond_type);
            v124 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v123,
                     (const char (*)[11])" level_id:");
            v125 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v124, level_id);
            v126 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v125, (const char (*)[9])byte_1A125A40);
            p_index = &cond->index;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v126, &cond->index);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
            *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v127 = 0;
LABEL_174:
            *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 448) >> 3) + 0x7FFF8000) = -8;
            if ( v127 == 1 )
            {
              if ( std::set<data::TowerCondType>::size((const std::set<data::TowerCondType> *const)(v3 + 1792)) == 1 )
              {
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
                if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
                  __asan_report_store4(v3 + 80, p_index);
                *(_DWORD *)(v3 + 80) = 3;
                v136 = std::set<data::TowerCondType>::count(
                         (const std::set<data::TowerCondType> *const)(v3 + 1792),
                         (const std::set<data::TowerCondType>::key_type *)(v3 + 80));
                *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
                if ( v136
                  && std::set<std::pair<unsigned int,unsigned int>>::size((const std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1872)) != 1 )
                {
                  has_err = 1;
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
                    "./src/txt_data_manual/TowerExcelConfig.cpp",
                    "checkTowerLevelConfig",
                    744);
                  v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                           (common::milog::MiLogStream *const)(v3 + 1568),
                           (const char (*)[16])"[CONFIG_ERROR] ");
                  v138 = common::milog::MiLogStream::operator<<<char [110],(char *[110])0>(
                           v137,
                           (const char (*)[110])byte_1A1260A0);
                  v139 = common::milog::MiLogStream::operator<<<std::pair<unsigned int,unsigned int>>(
                           v138,
                           (const std::set<std::pair<unsigned int,unsigned int>> *)(v3 + 1872));
                  v140 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                           v139,
                           (const char (*)[12])". level_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, level_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
                  *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
              {
                has_err = 1;
                *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1504, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1504),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerLevelConfig",
                  735);
                v134 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v3 + 1504),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v135 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                         v134,
                         (const char (*)[68])byte_1A126020);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v135, level_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
                *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              }
              __firstf = 1;
            }
            else
            {
              __firstf = 0;
            }
            std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v3 + 1872));
            std::set<data::TowerCondType>::~set((std::set<data::TowerCondType> *const)(v3 + 1792));
            v20 = __firstf == 1;
LABEL_189:
            *(_WORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -1800;
            v141 = ((v3 + 1792) >> 3) + 2147450880;
            *(_DWORD *)v141 = -117901064;
            *(_WORD *)(v141 + 4) = -1800;
            v142 = ((v3 + 1872) >> 3) + 2147450880;
            *(_DWORD *)v142 = -117901064;
            *(_WORD *)(v142 + 4) = -1800;
            if ( !v20 )
            {
              v143 = 0;
              goto LABEL_193;
            }
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false> *const)(v3 + 160));
            goto LABEL_25;
          }
          if ( std::vector<unsigned int>::size(&cond->argument_list) == 3 )
          {
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
            v53 = 0LL;
            v54 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 0LL);
            v55 = (int *)v54;
            if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v54);
            }
            v56 = *v55;
            v57 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
            if ( v57 != 0 && v57 <= 3 )
            {
              LOBYTE(v53) = v57 != 0;
              __asan_report_store4(v3 + 32, v53);
            }
            *(_DWORD *)(v3 + 32) = v56;
            p_lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
            if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 32);
            group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v3 + 32));
            if ( group_script_config_ptr )
            {
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              v65 = 1LL;
              v66 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 1uLL);
              v67 = (int *)v66;
              if ( *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v66 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v66 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v66);
              }
              v68 = *v67;
              v69 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
              if ( v69 != 0 && v69 <= 3 )
              {
                LOBYTE(v65) = v69 != 0;
                __asan_report_store4(v3 + 48, v65);
              }
              *(_DWORD *)(v3 + 48) = v68;
              if ( GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *(unsigned int *)(v3 + 48)) )
              {
                *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
                v76 = 2LL;
                v77 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&cond->argument_list, 2uLL);
                v78 = (int *)v77;
                if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v77);
                }
                v79 = *v78;
                v80 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
                if ( v80 != 0 && v80 <= 3 )
                {
                  LOBYTE(v76) = v80 != 0;
                  __asan_report_store4(v3 + 64, v76);
                }
                *(_DWORD *)(v3 + 64) = v79;
                if ( *(_DWORD *)(v3 + 64) > 0x64u )
                {
                  is_argument_valid = 0;
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 992, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 992),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/TowerExcelConfig.cpp",
                    "checkTowerLevelConfig",
                    674);
                  v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 992),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v82 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                          v81,
                          (const char (*)[69])byte_1A125B60);
                  v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v82,
                          (const unsigned int *)(v3 + 64));
                  v84 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          v83,
                          (const char (*)[28])byte_1A125BE0);
                  v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, level_id);
                  v86 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v85,
                          (const char (*)[9])byte_1A125A40);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &cond->index);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                  *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
              {
                is_argument_valid = 0;
                *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/TowerExcelConfig.cpp",
                  "checkTowerLevelConfig",
                  667);
                v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 928),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v71 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                        v70,
                        (const char (*)[66])byte_1A125A80);
                v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v71,
                        (const unsigned int *)(v3 + 48));
                v73 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        v72,
                        (const char (*)[34])byte_1A125B00);
                v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, level_id);
                v75 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                        v74,
                        (const char (*)[9])byte_1A125A40);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &cond->index);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
              }
            }
            else
            {
              is_argument_valid = 0;
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
                "./src/txt_data_manual/TowerExcelConfig.cpp",
                "checkTowerLevelConfig",
                660);
              v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 864),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v60 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                      v59,
                      (const char (*)[65])byte_1A125980);
              v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v60,
                      (const unsigned int *)(v3 + 32));
              v62 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      v61,
                      (const char (*)[28])byte_1A125A00);
              v63 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, level_id);
              v64 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v63, (const char (*)[9])byte_1A125A40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, &cond->index);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
              *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
            }
            *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
          }
          else
          {
            is_argument_valid = 0;
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
              "./src/txt_data_manual/TowerExcelConfig.cpp",
              "checkTowerLevelConfig",
              681);
            v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1056),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v88 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                    v87,
                    (const char (*)[81])byte_1A125C20);
            v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, level_id);
            v90 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v89, (const char (*)[9])byte_1A125A40);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, &cond->index);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
            *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
      }
LABEL_168:
      if ( !is_argument_valid )
      {
        has_err = 1;
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1440, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1440),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "checkTowerLevelConfig",
          728);
        v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 1440),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v129 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v128, (const char (*)[40])byte_1A125FC0);
        v130 = common::milog::MiLogStream::operator<<<unsigned int>(v129, &cond->argument_list);
        v131 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v130, (const char (*)[11])" level_id:");
        v132 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v131, level_id);
        v133 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v132, (const char (*)[9])byte_1A125A40);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v133, &cond->index);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
        *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::set<data::TowerCondType>::insert((std::set<data::TowerCondType> *const)(v3 + 1792), &cond->tower_cond_type);
      __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerCondition*,std::vector<data::TowerCondition> > *const)(v3 + 416));
    }
  }
  v143 = 1;
LABEL_193:
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
  if ( v143 == 1 )
  {
    if ( has_err )
      v2 = -1;
    else
      v2 = 0;
  }
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1712));
LABEL_198:
  if ( v174 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 216) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80DC) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E4) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80EC) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1952LL, v174);
  }
  return v2;
};

// Line 755: range 000000000CB1DB90-000000000CB1DBA2
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerBuffConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 760: range 000000000CB1DBA4-000000000CB1DEF4
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerSkipFloorConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t *p_cur_level_index; // rdx
  const unsigned int *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int v11; // eax
  int32_t result; // eax
  data::TowerSkipFloorExcelConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false,false>::reference v14; // [rsp+18h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::TowerSkipFloorExcelConfig> >::type *last_floor_index; // [rsp+20h] [rbp-E0h]
  char v16[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 15 __for_begin:761 64 8 13 __for_end:761 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerSkipFloorConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->tower_skip_floor_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerSkipFloorExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::TowerSkipFloorExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerSkipFloorExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TowerSkipFloorExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_16;
    }
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false,false> *const)(v3 + 32));
    last_floor_index = std::get<0ul,unsigned int const,data::TowerSkipFloorExcelConfig>(v14);
    p_cur_level_index = &std::get<1ul,unsigned int const,data::TowerSkipFloorExcelConfig>(v14)->cur_level_index;
    v8 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->tower_skip_floor_index_map_,
           last_floor_index,
           p_cur_level_index,
           (const unsigned int *)&this->tower_skip_floor_index_map_,
           v7);
    if ( !v8.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::TowerSkipFloorExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/TowerExcelConfig.cpp",
    "rewriteTowerSkipFloorConfig",
    765);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v9, (const char (*)[42])byte_1A126220);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, last_floor_index);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v11 = 0;
LABEL_16:
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

// Line 775: range 000000000CB1E1B6-000000000CB1EB89
int32_t __cdecl TowerExcelConfigMgr::rewriteTowerRewardConfig(
        TowerExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __int64 v7; // rsi
  uint32_t reward_group; // ecx
  char v9; // al
  std::vector<data::TowerRewardExcelConfig> *v10; // rdx
  data::TowerRewardExcelConfig *M_current; // r14
  std::vector<data::TowerRewardExcelConfig>::iterator v12; // rax
  TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(const auto:27&, const auto:28&)> v13; // dl
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // edx
  int v20; // eax
  int32_t result; // eax
  data::TowerRewardExcelConfigVec *__for_range; // [rsp+20h] [rbp-1D0h]
  std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> *__for_range_0; // [rsp+28h] [rbp-1C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false>::reference __in; // [rsp+30h] [rbp-1C0h]
  const unsigned int *reward_group_id; // [rsp+38h] [rbp-1B8h]
  std::vector<data::TowerRewardExcelConfig> *tower_reward_config_vec; // [rsp+40h] [rbp-1B0h]
  const data::TowerRewardExcelConfig *tower_reward_config_0; // [rsp+50h] [rbp-1A0h]
  data::TowerRewardExcelConfig *tower_reward_config; // [rsp+58h] [rbp-198h]
  char v29[400]; // [rsp+60h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 19 reward_group_id:789 48 4 15 floor_index:795 64 8 15 __for_begin:776 96 8 13 __for_end"
                        ":776 128 8 29 append_star_reward_config:778 160 8 15 __for_begin:792 192 8 13 __for_end:792 224 "
                        "8 15 __for_begin:796 256 8 13 __for_end:796 288 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerRewardConfig;
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
  v5[536862730] = -202116109;
  __for_range = &this->tower_reward_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::TowerRewardExcelConfig>::iterator *)(v3 + 64) = std::vector<data::TowerRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::TowerRewardExcelConfig>::iterator *)(v3 + 96) = std::vector<data::TowerRewardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *)(v3 + 96)) )
      break;
    tower_reward_config = __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(_QWORD *)(v3 + 128) = tower_reward_config;
    if ( *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id3_stars >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id3_stars >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_reward_config->reward_id3_stars);
    }
    TowerExcelConfigMgr::rewriteTowerRewardConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
      (const TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(uint32_t, uint32_t)> *const)(v3 + 128),
      3u,
      tower_reward_config->reward_id3_stars);
    if ( *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id6_stars >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_reward_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id6_stars >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(&tower_reward_config->reward_id6_stars);
    }
    TowerExcelConfigMgr::rewriteTowerRewardConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
      (const TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(uint32_t, uint32_t)> *const)(v3 + 128),
      6u,
      tower_reward_config->reward_id6_stars);
    if ( *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id9_stars >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_id9_stars >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_reward_config->reward_id9_stars);
    }
    v7 = 9LL;
    TowerExcelConfigMgr::rewriteTowerRewardConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
      (const TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(uint32_t, uint32_t)> *const)(v3 + 128),
      9u,
      tower_reward_config->reward_id9_stars);
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_reward_config->reward_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_reward_config->reward_group);
    }
    reward_group = tower_reward_config->reward_group;
    v9 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 32, v7);
    }
    *(_DWORD *)(v3 + 32) = reward_group;
    v10 = std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::operator[](
            &this->tower_reward_config_vec_map_,
            (const std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::key_type *)(v3 + 32));
    std::vector<data::TowerRewardExcelConfig>::push_back(v10, tower_reward_config);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *const)(v3 + 64));
  }
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->tower_reward_config_vec_map_;
  *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 160, v6);
  *(std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, v6);
  *(std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false> *)(v3 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false> *)(v3 + 192)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false> *const)(v3 + 160));
    reward_group_id = std::get<0ul,unsigned int const,std::vector<data::TowerRewardExcelConfig>>(__in);
    tower_reward_config_vec = std::get<1ul,unsigned int const,std::vector<data::TowerRewardExcelConfig>>(__in);
    M_current = std::vector<data::TowerRewardExcelConfig>::end(tower_reward_config_vec)._M_current;
    v12._M_current = std::vector<data::TowerRewardExcelConfig>::begin(tower_reward_config_vec)._M_current;
    std::sort___gnu_cxx::__normal_iterator_data::TowerRewardExcelConfig__std::vector_data::TowerRewardExcelConfig____TowerExcelConfigMgr::rewriteTowerRewardConfig_TxtConfigMgr__::_lambda_const_auto_27__const_auto_28_____(
      v12,
      (__gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> >)M_current,
      v13);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, M_current);
    *(_DWORD *)(v3 + 48) = 0;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, M_current);
    *(std::vector<data::TowerRewardExcelConfig>::iterator *)(v3 + 224) = std::vector<data::TowerRewardExcelConfig>::begin(tower_reward_config_vec);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, M_current);
    *(std::vector<data::TowerRewardExcelConfig>::iterator *)(v3 + 256) = std::vector<data::TowerRewardExcelConfig>::end(tower_reward_config_vec);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *)(v3 + 256)) )
      {
        v19 = 1;
        goto LABEL_47;
      }
      tower_reward_config_0 = __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *const)(v3 + 224));
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      ++*(_DWORD *)(v3 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&tower_reward_config_0->floor >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tower_reward_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_reward_config_0->floor >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&tower_reward_config_0->floor);
      }
      if ( tower_reward_config_0->floor != *(_DWORD *)(v3 + 48) )
        break;
      __gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig *,std::vector<data::TowerRewardExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::TowerRewardExcelConfig*,std::vector<data::TowerRewardExcelConfig> > *const)(v3 + 224));
    }
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
      "./src/txt_data_manual/TowerExcelConfig.cpp",
      "rewriteTowerRewardConfig",
      801);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v14,
            (const char (*)[23])"tower_reward_group_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, reward_group_id);
    v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" floor_index:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" not found!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v19 = 0;
LABEL_47:
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v19 != 1 )
    {
      v20 = 0;
      goto LABEL_51;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<data::TowerRewardExcelConfig> >,false,false> *const)(v3 + 160));
  }
  v20 = 1;
LABEL_51:
  if ( v20 == 1 )
    v2 = 0;
  result = v2;
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
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

// Line 778: range 000000000CB1DEF6-000000000CB1E1B5
// local variable allocation has failed, the output may be wrong!
void __cdecl TowerExcelConfigMgr::rewriteTowerRewardConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t min_star_count,
        uint32_t reward_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 *v6; // rdx
  __int64 v7; // rsi
  int v8; // ecx
  char v9; // al
  char v12[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 21 tower_star_reward:780";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::rewriteTowerRewardConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  v6 = &`vtable for'data::TowerStarReward + 2;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, *(_QWORD *)&min_star_count);
  *(_QWORD *)(v3 + 32) = v6;
  if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 40, *(_QWORD *)&min_star_count);
  *(_DWORD *)(v3 + 40) = 0;
  v7 = (((_BYTE)v3 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0
    && (char)(((v3 + 44) & 7) + 3) >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3 + 44, v7);
  }
  *(_DWORD *)(v3 + 44) = 0;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, v7);
  *(_DWORD *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 40) = min_star_count;
  *(_DWORD *)(v3 + 44) = reward_id;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v8 = std::vector<data::TowerStarReward>::size(&__closure->__tower_reward_config->floor_rewards) + 1;
  v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(v3 + 48, v7);
  }
  *(_DWORD *)(v3 + 48) = v8;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  std::vector<data::TowerStarReward>::push_back(
    &__closure->__tower_reward_config->floor_rewards,
    (const std::vector<data::TowerStarReward>::value_type *)(v3 + 32));
  data::TowerStarReward::~TowerStarReward((data::TowerStarReward *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 794: range 000000000CDE1E62-000000000CDE1F01
bool __cdecl TowerExcelConfigMgr::rewriteTowerRewardConfig::_lambda_const_auto_27___const_auto_28___::operator()_data::TowerRewardExcelConfig_data::TowerRewardExcelConfig_(
        const TowerExcelConfigMgr::rewriteTowerRewardConfig::<lambda(const auto:27&, const auto:28&)> *const __closure,
        const data::TowerRewardExcelConfig *lhs,
        const data::TowerRewardExcelConfig *rhs)
{
  uint32_t floor; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->floor);
  }
  floor = lhs->floor;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->floor >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->floor >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->floor);
  }
  return floor < rhs->floor;
};

// Line 810: range 000000000CB1EB8A-000000000CB1F5E8
int32_t __cdecl TowerExcelConfigMgr::checkTowerBuffConfig(
        const TowerExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::TowerBuffLastingType *p_lasting_type; // rax
  char v7; // al
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  BuffExcelConfigMgr *p_buff_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  data::TowerBuffExcelConfigMap *__for_range; // [rsp+18h] [rbp-1F8h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false>::reference v25; // [rsp+20h] [rbp-1F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::TowerBuffExcelConfig> >::type *server_buff_id; // [rsp+28h] [rbp-1E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TowerBuffExcelConfig> >::type *tower_buff_config; // [rsp+30h] [rbp-1E0h]
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+38h] [rbp-1D8h]
  char v29[464]; // [rsp+40h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:811 64 8 13 __for_end:811 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::checkTowerBuffConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->tower_buff_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_51;
    }
    v25 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false> *const)(v3 + 32));
    server_buff_id = std::get<0ul,unsigned int const,data::TowerBuffExcelConfig>(v25);
    tower_buff_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TowerBuffExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TowerBuffExcelConfig>(v25);
    p_lasting_type = &tower_buff_config->lasting_type;
    if ( *(_BYTE *)(((unsigned __int64)p_lasting_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_lasting_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_lasting_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_lasting_type);
    }
    if ( !data::isValidTowerBuffLastingType(tower_buff_config->lasting_type) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config->lasting_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_buff_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_buff_config->lasting_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&tower_buff_config->lasting_type);
    }
    if ( tower_buff_config->lasting_type )
      v7 = 0;
    else
LABEL_16:
      v7 = 1;
    if ( v7 )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerBuffConfig",
        815);
      v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[18])byte_1A1265A0);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, server_buff_id);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v9, (const char (*)[23])byte_1A1265E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v10 = 0;
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config->lasting_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_buff_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_buff_config->lasting_type >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&tower_buff_config->lasting_type);
    }
    if ( tower_buff_config->lasting_type == TOWER_BUFF_LASTING_IMMEDIATE )
    {
      if ( *(_BYTE *)(((unsigned __int64)server_buff_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)server_buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)server_buff_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(server_buff_id);
      }
      if ( *server_buff_id != 19 )
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
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "checkTowerBuffConfig",
          820);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(v11, (const char (*)[76])byte_1A126620);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, server_buff_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v2 = -1;
        v10 = 0;
        goto LABEL_51;
      }
    }
    p_buff_config_mgr = &txt_config_mgr->buff_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config->buff_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_buff_config->buff_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_buff_config->buff_id);
    }
    buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(p_buff_config_mgr, tower_buff_config->buff_id);
    if ( !buff_config_ptr )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerBuffConfig",
        826);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v14, (const char (*)[24])byte_1A1266A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &tower_buff_config->buff_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v10 = 0;
      goto LABEL_51;
    }
    v16 = ((_BYTE)buff_config_ptr + 92) & 7;
    v17 = (*(_BYTE *)(((unsigned __int64)&buff_config_ptr->is_persistent >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->is_persistent >> 3) + 0x7FFF8000));
    if ( (_BYTE)v17 )
      __asan_report_load1(&buff_config_ptr->is_persistent, v16, v17);
    if ( buff_config_ptr->is_persistent )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "checkTowerBuffConfig",
        831);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v18, (const char (*)[33])byte_1A1266E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &tower_buff_config->buff_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v10 = 0;
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&buff_config_ptr->time);
    }
    if ( buff_config_ptr->time >= 0.0 )
      break;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false> *const)(v3 + 32));
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
    "./src/txt_data_manual/TowerExcelConfig.cpp",
    "checkTowerBuffConfig",
    836);
  v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 352),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v20, (const char (*)[39])byte_1A126740);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &tower_buff_config->buff_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  v2 = -1;
  v10 = 0;
LABEL_51:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v29 == (char *)v3 )
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

// Line 845: range 000000000CB1F5EA-000000000CB1F7A5
const data::TowerScheduleExcelConfig *__fastcall TowerExcelConfigMgr::findTowerScheduleConfig(
        const TowerExcelConfigMgr *const this,
        __int64 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TowerScheduleExcelConfigMap *p_tower_schedule_excel_config_map; // rdx
  data::TowerScheduleExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TowerScheduleExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 schedule_id:844 64 8 8 iter:846 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerScheduleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = schedule_id;
  p_tower_schedule_excel_config_map = &this->tower_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, schedule_id);
  *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::find(
                                                                                                    p_tower_schedule_excel_config_map,
                                                                                                    (const std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->tower_schedule_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 856: range 000000000CB1F7A6-000000000CB1F8DE
uint32_t __cdecl TowerExcelConfigMgr::findLevelFirstPassRewardId(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index,
        uint32_t level_index)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  uint32_t *v7; // rdx
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-28h]
  common::tools::transcribe_cv_t_0 *tower_reward_config_vec_ptr; // [rsp+30h] [rbp-20h]
  const data::TowerRewardExcelConfig *tower_reward_config; // [rsp+38h] [rbp-18h]

  schedule_config_ptr = data::TowerExcelConfigMgrBase::findTowerScheduleExcelConfig(this, schedule_id);
  if ( !schedule_config_ptr )
    return 0;
  tower_reward_config_vec_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> const>(
                                  &this->tower_reward_config_vec_map_,
                                  &schedule_config_ptr->reward_group);
  if ( !tower_reward_config_vec_ptr
    || floor_index - 1 >= std::vector<data::TowerRewardExcelConfig>::size(tower_reward_config_vec_ptr) )
  {
    return 0;
  }
  tower_reward_config = std::vector<data::TowerRewardExcelConfig>::at(tower_reward_config_vec_ptr, floor_index - 1);
  if ( level_index - 1 >= std::vector<unsigned int>::size(&tower_reward_config->reward_id_room) )
    return 0;
  v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                             &tower_reward_config->reward_id_room,
                                                                                             level_index - 1);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  return *v7;
};

// Line 876: range 000000000CB1F8E0-000000000CB1F997
const std::vector<data::TowerStarReward> *__cdecl TowerExcelConfigMgr::findFloorStarRewardVec(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index)
{
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+18h] [rbp-28h]
  common::tools::transcribe_cv_t_0 *tower_reward_config_vec_ptr; // [rsp+20h] [rbp-20h]

  schedule_config_ptr = data::TowerExcelConfigMgrBase::findTowerScheduleExcelConfig(this, schedule_id);
  if ( !schedule_config_ptr )
    return 0LL;
  tower_reward_config_vec_ptr = common::tools::MiscUtils::findMapValuePointer<std::unordered_map<unsigned int,std::vector<data::TowerRewardExcelConfig>> const>(
                                  &this->tower_reward_config_vec_map_,
                                  &schedule_config_ptr->reward_group);
  if ( !tower_reward_config_vec_ptr
    || floor_index - 1 >= std::vector<data::TowerRewardExcelConfig>::size(tower_reward_config_vec_ptr) )
  {
    return 0LL;
  }
  else
  {
    return &std::vector<data::TowerRewardExcelConfig>::at(tower_reward_config_vec_ptr, floor_index - 1)->floor_rewards;
  }
};

// Line 893: range 000000000CB1F998-000000000CB1FB53
const data::TowerFloorExcelConfig *__fastcall TowerExcelConfigMgr::findTowerFloorConfig(
        const TowerExcelConfigMgr *const this,
        __int64 floor_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TowerFloorExcelConfigMap *p_tower_floor_excel_config_map; // rdx
  data::TowerFloorExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TowerFloorExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 floor_id:892 64 8 8 iter:894 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerFloorConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = floor_id;
  p_tower_floor_excel_config_map = &this->tower_floor_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, floor_id);
  *(std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::find(
                                                                                                 p_tower_floor_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->tower_floor_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TowerFloorExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerFloorExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 904: range 000000000CB1FB54-000000000CB1FB8F
const data::TowerFloorExcelConfig *__cdecl TowerExcelConfigMgr::findTowerFloorConfig(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index)
{
  uint32_t TowerFloorId; // edx

  TowerFloorId = TowerExcelConfigMgr::findTowerFloorId(this, schedule_id, floor_index);
  return TowerExcelConfigMgr::findTowerFloorConfig(this, TowerFloorId);
};

// Line 911: range 000000000CB1FB90-000000000CB20001
__int64 __fastcall TowerExcelConfigMgr::findTowerFloorIndex(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  std::map<unsigned int,unsigned int> *p_entrance_floor_id_to_index_map; // rdx
  std::map<unsigned int,unsigned int> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v12; // rdx
  unsigned int *p_second; // rax
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *p_tower_schedule_index_map; // rdx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *v15; // rdx
  bool v16; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::pointer v17; // rax
  char v19[288]; // [rsp+10h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 15 schedule_id:910 48 4 12 floor_id:910 64 8 17 entrance_iter:914 96 8 9 <unknown> 128 8 "
                        "8 iter:922 160 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::findTowerFloorIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = floor_id;
  v6 = *(unsigned int *)(v3 + 48);
  if ( TowerExcelConfigMgr::isIdEntranceFloor(this, v6) )
  {
    p_entrance_floor_id_to_index_map = &this->entrance_floor_id_to_index_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          p_entrance_floor_id_to_index_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v8 = &this->entrance_floor_id_to_index_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "findTowerFloorIndex",
        917);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[37])"cannot find tower entrance floor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0LL;
    }
    else
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      p_second = &v12->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v12->second;
    }
  }
  else
  {
    p_tower_schedule_index_map = &this->tower_schedule_index_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(p_tower_schedule_index_map, (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v3 + 32));
    v15 = &this->tower_schedule_index_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 32);
    *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(v15);
    v16 = std::__detail::operator==<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
    {
      result = 0LL;
    }
    else
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *const)(v3 + 128));
      result = TowerExcelConfigMgr::TowerIndexConfig::findIndexById(&v17->second, *(unsigned int *)(v3 + 48));
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 932: range 000000000CB20002-000000000CB20473
__int64 __fastcall TowerExcelConfigMgr::findTowerFloorId(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  std::map<unsigned int,unsigned int> *p_entrance_floor_index_to_id_map; // rdx
  std::map<unsigned int,unsigned int> *v8; // rdx
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v12; // rdx
  unsigned int *p_second; // rax
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *p_tower_schedule_index_map; // rdx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *v15; // rdx
  bool v16; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::pointer v17; // rax
  char v19[288]; // [rsp+10h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 15 schedule_id:931 48 4 15 floor_index:931 64 8 17 entrance_iter:935 96 8 9 <unknown> 128"
                        " 8 8 iter:943 160 8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::findTowerFloorId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = schedule_id;
  *(_DWORD *)(v3 + 48) = floor_index;
  v6 = *(unsigned int *)(v3 + 48);
  if ( TowerExcelConfigMgr::isIndexEntranceFloor(this, v6) )
  {
    p_entrance_floor_index_to_id_map = &this->entrance_floor_index_to_id_map;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, v6);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                          p_entrance_floor_index_to_id_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    v8 = &this->entrance_floor_index_to_id_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(v8);
    v9 = std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "findTowerFloorId",
        938);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[40])"cannot find tower entrance floor_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0LL;
    }
    else
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      p_second = &v12->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v12->second;
    }
  }
  else
  {
    p_tower_schedule_index_map = &this->tower_schedule_index_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(p_tower_schedule_index_map, (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v3 + 32));
    v15 = &this->tower_schedule_index_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 32);
    *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(v15);
    v16 = std::__detail::operator==<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 )
    {
      result = 0LL;
    }
    else
    {
      v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *const)(v3 + 128));
      result = TowerExcelConfigMgr::TowerIndexConfig::findIdByIndex(&v17->second, *(unsigned int *)(v3 + 48));
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 953: range 000000000CB20474-000000000CB206D1
// local variable allocation has failed, the output may be wrong!
const std::vector<unsigned int> *__cdecl TowerExcelConfigMgr::findTowerFloorLevelVec(
        const TowerExcelConfigMgr *const this,
        uint32_t floor_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::vector<unsigned int> *result; // rax
  uint32_t level_group_id; // ecx
  char v7; // al
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_level_group_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v9; // rdx
  bool v10; // al
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+18h] [rbp-A8h]
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 level_group_id:959 64 8 8 iter:960 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerFloorLevelVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_QWORD *)&floor_id = floor_id;
  floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(this, floor_id);
  if ( floor_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->level_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&floor_config_ptr->level_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&floor_config_ptr->level_group_id);
    }
    level_group_id = floor_config_ptr->level_group_id;
    v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(floor_id) = v7 != 0;
    if ( v7 != 0 && v7 <= 3 )
      __asan_report_store4(v2 + 48, *(_QWORD *)&floor_id);
    *(_DWORD *)(v2 + 48) = level_group_id;
    p_level_group_map = &this->level_group_map;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, *(_QWORD *)&floor_id);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 p_level_group_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
    v9 = &this->level_group_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v2 + 48);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v9);
    v10 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v12 == (char *)v2 )
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

// Line 970: range 000000000CB206D2-000000000CB2088D
const data::TowerLevelExcelConfig *__fastcall TowerExcelConfigMgr::findTowerLevelConfig(
        const TowerExcelConfigMgr *const this,
        __int64 level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TowerLevelExcelConfigMap *p_tower_level_excel_config_map; // rdx
  data::TowerLevelExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TowerLevelExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 level_id:969 64 8 8 iter:971 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerLevelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  p_tower_level_excel_config_map = &this->tower_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, level_id);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::find(
                                                                                                 p_tower_level_excel_config_map,
                                                                                                 (const std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->tower_level_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TowerLevelExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerLevelExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 981: range 000000000CB2088E-000000000CB20A83
const data::TowerLevelExcelConfig *__fastcall TowerExcelConfigMgr::findTowerLevelConfig(
        const TowerExcelConfigMgr *const this,
        __int64 floor_id,
        uint32_t level_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *p_tower_level_index_map; // rdx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *v7; // rdx
  bool v8; // al
  const data::TowerLevelExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::pointer v10; // rax
  uint32_t level_id; // [rsp+1Ch] [rbp-A4h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 floor_id:980 64 8 8 iter:982 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::findTowerLevelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = floor_id;
  p_tower_level_index_map = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, floor_id);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(p_tower_level_index_map, (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v3 + 48));
  v7 = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *const)(v3 + 64));
    level_id = TowerExcelConfigMgr::TowerIndexConfig::findIdByIndex(&v10->second, level_index);
    result = TowerExcelConfigMgr::findTowerLevelConfig(this, level_id);
  }
  if ( v13 == (char *)v3 )
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

// Line 993: range 000000000CB20A84-000000000CB20AC5
const data::TowerLevelExcelConfig *__cdecl TowerExcelConfigMgr::findTowerLevelConfig(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index,
        uint32_t level_index)
{
  unsigned int TowerFloorId; // ecx

  TowerFloorId = TowerExcelConfigMgr::findTowerFloorId(this, schedule_id, floor_index);
  return TowerExcelConfigMgr::findTowerLevelConfig(this, TowerFloorId, level_index);
};

// Line 1000: range 000000000CB20AC6-000000000CB20C9E
__int64 __fastcall TowerExcelConfigMgr::findTowerLevelId(
        const TowerExcelConfigMgr *const this,
        __int64 floor_id,
        uint32_t level_index)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *p_tower_level_index_map; // rdx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 floor_id:999 64 8 9 iter:1001 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::findTowerLevelId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = floor_id;
  p_tower_level_index_map = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, floor_id);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(p_tower_level_index_map, (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v3 + 48));
  v7 = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *const)(v3 + 64));
    result = TowerExcelConfigMgr::TowerIndexConfig::findIdByIndex(&v10->second, level_index);
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
  return result;
};

// Line 1011: range 000000000CB20CA0-000000000CB20D17
uint32_t __cdecl TowerExcelConfigMgr::findTowerLevelId(
        const TowerExcelConfigMgr *const this,
        uint32_t schedule_id,
        uint32_t floor_index,
        uint32_t level_index)
{
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-8h]

  level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(this, schedule_id, floor_index, level_index);
  if ( !level_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&level_config_ptr->level_id);
  }
  return level_config_ptr->level_id;
};

// Line 1022: range 000000000CB20D18-000000000CB20EF0
__int64 __fastcall TowerExcelConfigMgr::findTowerLevelIndex(
        const TowerExcelConfigMgr *const this,
        __int64 floor_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *p_tower_level_index_map; // rdx
  std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 floor_id:1021 64 8 9 iter:1023 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = TowerExcelConfigMgr::findTowerLevelIndex;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = floor_id;
  p_tower_level_index_map = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, floor_id);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::find(p_tower_level_index_map, (const std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::key_type *)(v3 + 48));
  v7 = &this->tower_level_index_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,TowerExcelConfigMgr::TowerIndexConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,TowerExcelConfigMgr::TowerIndexConfig>,false,false> *const)(v3 + 64));
    result = TowerExcelConfigMgr::TowerIndexConfig::findIndexById(&v10->second, level_id);
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
  return result;
};

// Line 1033: range 000000000CB20EF2-000000000CB210B3
const data::TowerBuffExcelConfig *__fastcall TowerExcelConfigMgr::findTowerBuffConfig(
        const TowerExcelConfigMgr *const this,
        __int64 tower_buff_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::TowerBuffExcelConfigMap *p_tower_buff_excel_config_map; // rdx
  data::TowerBuffExcelConfigMap *v6; // rdx
  bool v7; // al
  const data::TowerBuffExcelConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 tower_buff_id:1032 64 8 9 iter:1034 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerBuffConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = tower_buff_id;
  p_tower_buff_excel_config_map = &this->tower_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, tower_buff_id);
  *(std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::find(
                                                                                                p_tower_buff_excel_config_map,
                                                                                                (const std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::key_type *)(v2 + 48));
  v6 = &this->tower_buff_excel_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::TowerBuffExcelConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerBuffExcelConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 1044: range 000000000CB210B4-000000000CB21707
__int64 __fastcall TowerExcelConfigMgr::findTowerScheduleConfigIdByTimestamp(
        const TowerExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,unsigned int> *p_tower_schedule_open_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::map<unsigned int,unsigned int> *v9; // rdx
  char *v10; // rsi
  bool v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v15; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  const data::TowerScheduleExcelConfig *tower_schedule_config_ptr; // [rsp+18h] [rbp-148h]
  char v21[320]; // [rsp+20h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 22 tower_schedule_id:1056 48 4 14 timestamp:1043 64 8 9 iter:1045 96 8 9 <unknown> 128 8 "
                        "9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findTowerScheduleConfigIdByTimestamp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_tower_schedule_open_map = &this->tower_schedule_open_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_tower_schedule_open_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->tower_schedule_open_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->tower_schedule_open_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::end(v9);
    v10 = (char *)(v2 + 128);
    v11 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
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
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "findTowerScheduleConfigIdByTimestamp",
        1053);
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[11])"timestamp:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      v14 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v13,
              (const char (*)[26])" tower_schedule_open_map:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v14, &this->tower_schedule_open_map);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      result = 0LL;
    }
    else
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
      p_second = &v15->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v15->second;
      v18 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v10) = v18 != 0;
        __asan_report_store4(v2 + 32, v10);
      }
      *(_DWORD *)(v2 + 32) = second;
      tower_schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(this, *(unsigned int *)(v2 + 32));
      if ( tower_schedule_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&tower_schedule_config_ptr->close_timestamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&tower_schedule_config_ptr->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&tower_schedule_config_ptr->close_timestamp);
        }
        if ( tower_schedule_config_ptr->close_timestamp > *(_DWORD *)(v2 + 48) )
        {
          if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 32);
          result = *(unsigned int *)(v2 + 32);
        }
        else
        {
          result = 0LL;
        }
      }
      else
      {
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
          3u,
          "./src/txt_data_manual/TowerExcelConfig.cpp",
          "findTowerScheduleConfigIdByTimestamp",
          1060);
        v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[49])"findTowerScheduleConfig fail, tower_schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        result = 0LL;
      }
    }
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1072: range 000000000CB21708-000000000CB21903
__int64 __fastcall TowerExcelConfigMgr::findNextTowerScheduleConfigIdByTimestamp(
        const TowerExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_tower_schedule_open_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 timestamp:1071 64 8 9 iter:1073 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findNextTowerScheduleConfigIdByTimestamp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_tower_schedule_open_map = &this->tower_schedule_open_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::upper_bound(
                                                                        p_tower_schedule_open_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->tower_schedule_open_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 1083: range 000000000CB21904-000000000CB21DD2
// local variable allocation has failed, the output may be wrong!
uint32_t __cdecl TowerExcelConfigMgr::findLastFloorIndexByTimestamp(
        const TowerExcelConfigMgr *const this,
        uint32_t timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int TowerScheduleConfigIdByTimestamp; // edx
  char v6; // al
  uint32_t result; // eax
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v10; // rax
  uint32_t *v11; // rdx
  uint32_t timestampa; // [rsp+4h] [rbp-10Ch]
  uint32_t last_floor_id; // [rsp+14h] [rbp-FCh]
  const data::TowerScheduleExcelConfig *tower_schedule_config_ptr; // [rsp+18h] [rbp-F8h]
  const std::vector<data::TowerSchedule> *__for_range; // [rsp+20h] [rbp-F0h]
  const data::TowerSchedule *tower_schedule; // [rsp+28h] [rbp-E8h]
  char v17[224]; // [rsp+30h] [rbp-E0h] BYREF

  timestampa = timestamp;
  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 22 tower_schedule_id:1084 64 8 16 __for_begin:1096 96 8 14 __for_end:1096 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findLastFloorIndexByTimestamp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_QWORD *)&timestamp = timestamp;
  TowerScheduleConfigIdByTimestamp = TowerExcelConfigMgr::findTowerScheduleConfigIdByTimestamp(this, timestamp);
  v6 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(timestamp) = v6 != 0;
    __asan_report_store4(v2 + 48, *(_QWORD *)&timestamp);
  }
  *(_DWORD *)(v2 + 48) = TowerScheduleConfigIdByTimestamp;
  if ( *(_DWORD *)(v2 + 48) )
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 48);
    v8 = *(unsigned int *)(v2 + 48);
    tower_schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(this, v8);
    if ( tower_schedule_config_ptr )
    {
      last_floor_id = 0;
      __for_range = &tower_schedule_config_ptr->schedules;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 64, v8);
      *(std::vector<data::TowerSchedule>::const_iterator *)(v2 + 64) = std::vector<data::TowerSchedule>::begin(__for_range);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 96, v8);
      *(std::vector<data::TowerSchedule>::const_iterator *)(v2 + 96) = std::vector<data::TowerSchedule>::end(__for_range);
      while ( __gnu_cxx::operator!=<data::TowerSchedule const*,std::vector<data::TowerSchedule>>(
                (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v2 + 64),
                (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v2 + 96)) )
      {
        tower_schedule = __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&tower_schedule->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&tower_schedule->open_timestamp);
        }
        if ( timestampa < tower_schedule->open_timestamp )
          break;
        if ( !std::vector<unsigned int>::empty(&tower_schedule->floor_list) )
        {
          v10 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::back(&tower_schedule->floor_list);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          last_floor_id = *v11;
        }
        __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *const)(v2 + 64));
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      result = TowerExcelConfigMgr::findTowerFloorIndex(this, *(_DWORD *)(v2 + 48), last_floor_id);
    }
    else
    {
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/TowerExcelConfig.cpp",
        "findLastFloorIndexByTimestamp",
        1092);
      v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[49])"findTowerScheduleConfig fail, tower_schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1112: range 000000000CB21DD4-000000000CB2205F
std::vector<unsigned int> *__cdecl TowerExcelConfigMgr::findAllScheduleIdSinceTimestamp(
        std::vector<unsigned int> *retstr,
        const TowerExcelConfigMgr *const this,
        uint32_t timestamp)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  data::TowerScheduleExcelConfigMap *__for_range; // [rsp+20h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::reference v9; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::TowerScheduleExcelConfig> >::type *schedule_id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::TowerScheduleExcelConfig> >::type *schedule_config; // [rsp+38h] [rbp-88h]
  char v12[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false> *)v4;
  }
  v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)1102416563;
  v3[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)"2 32 8 16 __for_begin:1114 64 8 14 __for_end:1114";
  v3[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)TowerExcelConfigMgr::findAllScheduleIdSinceTimestamp;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->tower_schedule_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v3[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[4], this);
  v3[4]._M_cur = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v3[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v3[8], this);
  v3[8]._M_cur = std::unordered_map<unsigned int,data::TowerScheduleExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>(v3 + 4, v3 + 8) )
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator*(v3 + 4);
    schedule_id = std::get<0ul,unsigned int const,data::TowerScheduleExcelConfig>(v9);
    schedule_config = (std::tuple_element<1,const std::pair<unsigned int const,data::TowerScheduleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::TowerScheduleExcelConfig>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config->close_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config->close_timestamp);
    }
    if ( timestamp < schedule_config->close_timestamp )
      std::vector<unsigned int>::push_back(retstr, schedule_id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false,false>::operator++(v3 + 4);
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v3->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::TowerScheduleExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1125: range 000000000CB22060-000000000CB2225B
__int64 __fastcall TowerExcelConfigMgr::findSkipFloorIndex(
        const TowerExcelConfigMgr *const this,
        __int64 last_floor_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_tower_skip_floor_index_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 21 last_floor_index:1124 64 8 9 iter:1126 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::findSkipFloorIndex;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = last_floor_index;
  p_tower_skip_floor_index_map = &this->tower_skip_floor_index_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, last_floor_index);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_tower_skip_floor_index_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->tower_skip_floor_index_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
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

// Line 1137: range 000000000CB2225C-000000000CB222DD
bool __cdecl TowerExcelConfigMgr::isIndexEntranceFloor(const TowerExcelConfigMgr *const this, uint32_t floor_index)
{
  std::tuple_element<0,const std::tuple<unsigned int,unsigned int> >::type *last_entrance_floor_index; // [rsp+20h] [rbp-10h]

  last_entrance_floor_index = (std::tuple_element<0,const std::tuple<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(&this->tower_entrance_last_floor_tuple_);
  std::get<1ul,unsigned int,unsigned int>(&this->tower_entrance_last_floor_tuple_);
  if ( *(_BYTE *)(((unsigned __int64)last_entrance_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)last_entrance_floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_entrance_floor_index >> 3)
                                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(last_entrance_floor_index);
  }
  return floor_index <= *last_entrance_floor_index;
};

// Line 1144: range 000000000CB222DE-000000000CB223AF
bool __fastcall TowerExcelConfigMgr::isIdEntranceFloor(const TowerExcelConfigMgr *const this, uint32_t floor_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 floor_id:1143";
  *(_QWORD *)(v2 + 16) = TowerExcelConfigMgr::isIdEntranceFloor;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = floor_id;
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &this->tower_entrance_floor_id_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/StatLogFilterExcelConfig.cpp

// Line 22: range 000000000CB04DBA-000000000CB04EEF
std::size_t __cdecl std::hash<data::AbilityFilterIndex>::operator()(
        const std::hash<data::AbilityFilterIndex> *const this,
        const data::AbilityFilterIndex *ability_filter_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::size_t result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 hash_code:23";
  *(_QWORD *)(v2 + 16) = std::hash<data::AbilityFilterIndex>::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, ability_filter_index);
  *(_QWORD *)(v2 + 32) = 0LL;
  boost::hash_combine<int>((std::size_t *)(v2 + 32), &ability_filter_index->ability_name_hash);
  boost::hash_combine<int>((std::size_t *)(v2 + 32), &ability_filter_index->modifier_name_hash);
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v2 + 32);
  result = *(_QWORD *)(v2 + 32);
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

// Line 29: range 000000000CE0C758-000000000CE0C87F
bool __cdecl std::equal_to<data::AbilityFilterIndex>::operator()(
        const std::equal_to<data::AbilityFilterIndex> *const this,
        const data::AbilityFilterIndex *lhs,
        const data::AbilityFilterIndex *rhs)
{
  int32_t ability_name_hash; // ecx
  int32_t modifier_name_hash; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs->ability_name_hash);
  }
  ability_name_hash = lhs->ability_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs->ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs->ability_name_hash);
  }
  if ( ability_name_hash != rhs->ability_name_hash )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->modifier_name_hash);
  }
  modifier_name_hash = lhs->modifier_name_hash;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->modifier_name_hash >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->modifier_name_hash);
  }
  return modifier_name_hash == rhs->modifier_name_hash;
};

// Line 36: range 000000000CB04EF0-000000000CB04F62
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const data::AbilityFilterIndex *filter_index)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax

  v2 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(stream, (const char (*)[2])"(");
  v3 = common::milog::MiLogStream::operator<<<int,(int *)0>(v2, &filter_index->ability_name_hash);
  v4 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])",");
  v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &filter_index->modifier_name_hash);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])")");
  return stream;
};

// Line 42: range 000000000CB053EC-000000000CB08756
int32_t __cdecl StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(
        StatLogFilterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  const std::string *v6; // rsi
  unsigned int v7; // ecx
  char v8; // al
  const std::string *v9; // rax
  char *v11; // rsi
  unsigned int *v12; // rax
  int *v13; // rdx
  int v14; // ecx
  char v15; // al
  unsigned int v16; // ecx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  __int64 TimeByStr; // rsi
  __int64 v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int v24; // ecx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  __int64 v31; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v32; // rax
  int *v33; // rdx
  int v34; // ecx
  char v35; // al
  __int64 v36; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // dl
  char v41; // r15
  uint32_t v42; // ebx
  char *p_world_id_list; // rsi
  uint32_t v44; // ebx
  uint32_t v45; // ebx
  char v46; // bl
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v47; // rax
  unsigned int *v48; // rdx
  unsigned int *v49; // rax
  int *v50; // rdx
  int v51; // ecx
  char v52; // al
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  unsigned int *v55; // r8
  bool *v56; // r9
  unsigned int *v57; // rax
  int *v58; // rdx
  int v59; // ecx
  char v60; // al
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  unsigned int *v63; // r8
  bool *v64; // r9
  CombatStatLogFilterConfig *v65; // rdx
  const unsigned int *v66; // rcx
  CombatStatLogFilterConfig *v67; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,CombatStatLogFilterConfig>,false,false>,bool> v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  unsigned __int64 v71; // rax
  std::tuple<unsigned int,bool,unsigned int> *M_current; // rbx
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator v73; // rax
  unsigned __int64 v74; // rax
  char *v75; // rsi
  unsigned __int64 n; // rax
  __int64 v77; // rsi
  __int64 v78; // rdx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rdx
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rcx
  char v84; // dl
  const char *v85; // rsi
  __int64 v86; // rdx
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rdx
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rcx
  char v91; // dl
  const char *v92; // rsi
  __int64 v93; // rdx
  unsigned __int64 v94; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // rbx
  std::set<unsigned int>::iterator v96; // rax
  std::vector<unsigned int> *v97; // rax
  unsigned __int64 v98; // rax
  common::milog::MiLogStream *v99; // rbx
  time_t v100; // rdi
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // rdx
  const unsigned int *v104; // [rsp+0h] [rbp-950h]
  const unsigned int *v105; // [rsp+0h] [rbp-950h]
  char v106; // [rsp+17h] [rbp-939h]
  char v107; // [rsp+18h] [rbp-938h]
  char v108; // [rsp+19h] [rbp-937h]
  char v109; // [rsp+1Ah] [rbp-936h]
  char v110; // [rsp+1Bh] [rbp-935h]
  char v111; // [rsp+1Ch] [rbp-934h]
  char v112; // [rsp+1Dh] [rbp-933h]
  bool is_region_satisfied; // [rsp+33h] [rbp-91Dh]
  int32_t ret; // [rsp+34h] [rbp-91Ch]
  uint32_t i; // [rsp+38h] [rbp-918h]
  data::CombatStatLogFilterExcelConfigMap *__for_range; // [rsp+40h] [rbp-910h]
  std::vector<std::tuple<unsigned int,bool,unsigned int>> *__for_range_4; // [rsp+48h] [rbp-908h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_5; // [rsp+50h] [rbp-900h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::reference v120; // [rsp+58h] [rbp-8F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *timestamp_0; // [rsp+60h] [rbp-8F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *id_set; // [rsp+68h] [rbp-8E8h]
  std::tuple_element<0,std::tuple<unsigned int,bool,unsigned int> >::type *timestamp; // [rsp+70h] [rbp-8E0h]
  bool *is_finish; // [rsp+78h] [rbp-8D8h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *id_0; // [rsp+80h] [rbp-8D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>::reference v126; // [rsp+88h] [rbp-8C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig> >::type *id; // [rsp+90h] [rbp-8C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig> >::type *config; // [rsp+98h] [rbp-8B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+A0h] [rbp-8B0h]
  std::unordered_set<unsigned int> *__for_range_1; // [rsp+A8h] [rbp-8A8h]
  std::unordered_set<unsigned int> *__for_range_2; // [rsp+B0h] [rbp-8A0h]
  std::unordered_set<unsigned int> *__for_range_3; // [rsp+B8h] [rbp-898h]
  char v133[2192]; // [rsp+C0h] [rbp-890h] BYREF

  v2 = (unsigned __int64)v133;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2144LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 32 1 21 convert_str_to_set:45 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unkn"
                        "own> 112 1 9 <unknown> 128 1 9 <unknown> 144 4 12 uid_param:79 160 4 13 begin_time:98 176 4 11 e"
                        "nd_time:99 192 4 14 dungeon_id:142 208 4 14 monster_id:153 224 8 14 __for_begin:63 256 8 12 __fo"
                        "r_end:63 288 8 14 __for_begin:79 320 8 12 __for_end:79 352 8 13 uid_filter:81 384 8 15 __for_beg"
                        "in:131 416 8 13 __for_end:131 448 8 15 __for_begin:142 480 8 13 __for_end:142 512 8 15 __for_beg"
                        "in:153 544 8 13 __for_end:153 576 8 15 __for_begin:180 608 8 13 __for_end:180 640 8 15 __for_beg"
                        "in:201 672 8 13 __for_end:201 704 12 9 <unknown> 736 24 17 time_event_vec:62 800 24 9 <unknown> "
                        "864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown>"
                        " 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unkn"
                        "own> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 48 17 "
                        "config_id_set:179 1840 232 16 filter_config:65";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234556927;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
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
  v4[536862738] = -218959360;
  v4[536862739] = -218959360;
  v4[536862740] = -218959360;
  v4[536862741] = -218959360;
  v4[536862742] = -219020288;
  v4[536862743] = -234881024;
  v4[536862744] = -218959118;
  v4[536862745] = -234881024;
  v4[536862746] = -218959118;
  v4[536862748] = -218959118;
  v4[536862750] = -218959118;
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -219021312;
  v4[536862777] = 62194;
  v4[536862784] = -218103808;
  v4[536862785] = -202116109;
  v4[536862786] = -202116109;
  ret = 0;
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::vector((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736));
  __for_range = &this->combat_stat_log_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 256, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::iterator *)(v2 + 256) = std::unordered_map<unsigned int,data::CombatStatLogFilterExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 224),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false> *)(v2 + 256)) )
  {
    v126 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false> *const)(v2 + 224));
    id = std::get<0ul,unsigned int const,data::CombatStatLogFilterExcelConfig>(v126);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::CombatStatLogFilterExcelConfig>(v126);
    v5 = ((v2 + 1840) >> 3) + 2147450880;
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 20) = 0;
    *(_DWORD *)(v5 + 24) = 0;
    *(_BYTE *)(v5 + 28) = 0;
    CombatStatLogFilterConfig::CombatStatLogFilterConfig((CombatStatLogFilterConfig *const)(v2 + 1840));
    v6 = (const std::string *)(((unsigned __int8)id & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(id);
    }
    v7 = *id;
    v8 = *(_BYTE *)(((v2 + 1840) >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v8 != 0;
    if ( v8 != 0 && v8 <= 3 )
      __asan_report_store4(v2 + 1840, v6);
    *(_DWORD *)(v2 + 1840) = v7;
    if ( std::vector<std::string>::size(&config->region_list) == 1
      && (v9 = std::vector<std::string>::operator[](&config->region_list, 0LL),
          v6 = (const std::string *)"-1",
          std::operator==<char>(v9, "-1")) )
    {
      is_region_satisfied = 1;
    }
    else
    {
      v6 = TxtConfigMgr::getRegionName[abi:cxx11](txt_config_mgr);
      is_region_satisfied = common::tools::MiscUtils::isContains<std::string>(&config->region_list, v6);
    }
    __for_range_0 = &config->uid_filter_param;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, v6);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 320) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v11 = (char *)(v2 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 320)) )
        break;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 4;
      v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
      v13 = (int *)v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      v14 = *v13;
      v15 = *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v15 != 0;
      if ( v15 != 0 && v15 <= 3 )
        __asan_report_store4(v2 + 144, v11);
      *(_DWORD *)(v2 + 144) = v14;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, v11);
      *(_DWORD *)(v2 + 352) = 0;
      if ( *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) != 0
        && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v2 + 356, (((_BYTE)v2 + 100) & 7u) + 3);
      }
      *(_DWORD *)(v2 + 356) = 0;
      *(_DWORD *)(v2 + 352) = 10;
      *(_DWORD *)(v2 + 356) = *(_DWORD *)(v2 + 144);
      for ( i = 0; ; ++i )
      {
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 352);
        v16 = *(_DWORD *)(v2 + 352);
        if ( *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 + 100) & 7) + 3) >= *(_BYTE *)(((v2 + 356) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v2 + 356);
        }
        if ( v16 > *(_DWORD *)(v2 + 356) || i > 9 )
          break;
        if ( (unsigned int)(10 * *(_DWORD *)(v2 + 352)) < *(_DWORD *)(v2 + 352) )
        {
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
            "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
            "rewriteCombatStatLogFilterConfig",
            88);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v17, (const char (*)[18])byte_1A121A00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          break;
        }
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 352);
        *(_DWORD *)(v2 + 352) *= 10;
      }
      std::vector<CombatStatLogUidFilter>::push_back(
        (std::vector<CombatStatLogUidFilter> *const)(v2 + 1848),
        (const std::vector<CombatStatLogUidFilter>::value_type *)(v2 + 352));
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 288));
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 4;
    TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(&config->begin_time_str);
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 160, TimeByStr);
    *(_DWORD *)(v2 + 160) = TimeByStr;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 4;
    v20 = (unsigned int)common::tools::TimeUtils::getTimeByStr(&config->end_time_str);
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 176, v20);
    *(_DWORD *)(v2 + 176) = v20;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 160);
    if ( !*(_DWORD *)(v2 + 160) || !*(_DWORD *)(v2 + 176) )
    {
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
        3u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "rewriteCombatStatLogFilterConfig",
        102);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[16])" invalid_time: ");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, &config->begin_time_str);
      v23 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v22, (const char (*)[3])", ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, &config->end_time_str);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 160);
    v24 = *(_DWORD *)(v2 + 160);
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 176);
    if ( v24 >= *(_DWORD *)(v2 + 176) )
    {
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "rewriteCombatStatLogFilterConfig",
        106);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v25, (const char (*)[37])byte_1A121A40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( std::vector<unsigned int>::size(&config->player_level_range) == 2 )
    {
      v31 = 0LL;
      v32 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &config->player_level_range,
                                                                                                  0LL);
      v33 = (int *)v32;
      if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v32);
      }
      v34 = *v33;
      v35 = *(_BYTE *)(((v2 + 1872) >> 3) + 0x7FFF8000);
      if ( v35 != 0 && v35 <= 3 )
      {
        LOBYTE(v31) = v35 != 0;
        __asan_report_store4(v2 + 1872, v31);
      }
      *(_DWORD *)(v2 + 1872) = v34;
      v36 = 1LL;
      v37 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &config->player_level_range,
                                                                                                  1uLL);
      v38 = (int *)v37;
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v37);
      }
      v39 = *v38;
      v40 = *(_BYTE *)(((v2 + 1876) >> 3) + 0x7FFF8000);
      if ( v40 != 0 && (char)(((v2 + 84) & 7) + 3) >= v40 )
      {
        LOBYTE(v36) = v40 != 0;
        __asan_report_store4(v2 + 1876, v36);
      }
      *(_DWORD *)(v2 + 1876) = v39;
      v112 = 0;
      v111 = 0;
      v110 = 0;
      v109 = 0;
      v108 = 0;
      v41 = 0;
      v107 = 0;
      v106 = 0;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v42 = *id;
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1120),
        &byte_1A121AE0,
        (const std::allocator<char> *)(v2 + 48));
      p_world_id_list = (char *)&config->world_id_list;
      if ( StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(TxtConfigMgr &)::{lambda(std::string const&,std::optional<std::unordered_set<unsigned int>> &,std::string const&,unsigned int)#1}::operator()(
             (const StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig::<lambda(const string&, std::optional<std::unordered_set<unsigned int> >&, const string&, uint32_t)> *const)(v2 + 32),
             &config->world_id_list,
             (std::optional<std::unordered_set<unsigned int> > *)(v2 + 1880),
             (const std::string *)(v2 + 1120),
             v42) )
      {
        goto LABEL_90;
      }
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v44 = *id;
      *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      v112 = 1;
      v111 = 1;
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1184),
        &byte_1A121B20,
        (const std::allocator<char> *)(v2 + 64));
      v110 = 1;
      v109 = 1;
      p_world_id_list = (char *)&config->dungeon_id_list;
      if ( StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(TxtConfigMgr &)::{lambda(std::string const&,std::optional<std::unordered_set<unsigned int>> &,std::string const&,unsigned int)#1}::operator()(
             (const StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig::<lambda(const string&, std::optional<std::unordered_set<unsigned int> >&, const string&, uint32_t)> *const)(v2 + 32),
             &config->dungeon_id_list,
             (std::optional<std::unordered_set<unsigned int> > *)(v2 + 1944),
             (const std::string *)(v2 + 1184),
             v44) )
      {
        goto LABEL_90;
      }
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      v45 = *id;
      *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      v108 = 1;
      v41 = 1;
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1248),
        &byte_1A121B60,
        (const std::allocator<char> *)(v2 + 80));
      v107 = 1;
      v106 = 1;
      p_world_id_list = (char *)&config->monster_id_list;
      if ( StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(TxtConfigMgr &)::{lambda(std::string const&,std::optional<std::unordered_set<unsigned int>> &,std::string const&,unsigned int)#1}::operator()(
             (const StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig::<lambda(const string&, std::optional<std::unordered_set<unsigned int> >&, const string&, uint32_t)> *const)(v2 + 32),
             &config->monster_id_list,
             (std::optional<std::unordered_set<unsigned int> > *)(v2 + 2008),
             (const std::string *)(v2 + 1248),
             v45) )
      {
LABEL_90:
        v46 = 1;
      }
      else
      {
        v46 = 0;
      }
      if ( v106 )
        std::string::~string((void *)(v2 + 1248));
      if ( v107 )
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
      if ( v41 )
        std::allocator<char>::~allocator(v2 + 80);
      if ( v108 )
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v109 )
        std::string::~string((void *)(v2 + 1184));
      if ( v110 )
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
      if ( v111 )
        std::allocator<char>::~allocator(v2 + 64);
      if ( v112 )
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v46 )
      {
        ret = -1;
      }
      else
      {
        if ( std::optional<std::unordered_set<unsigned int>>::operator bool((const std::optional<std::unordered_set<unsigned int> > *const)(v2 + 1880)) )
        {
          __for_range_1 = std::optional<std::unordered_set<unsigned int>>::value((std::optional<std::unordered_set<unsigned int> > *const)(v2 + 1880));
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 384, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 384) = std::unordered_set<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 416, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 416) = std::unordered_set<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            p_world_id_list = (char *)(v2 + 416);
            if ( !std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 384),
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 416)) )
              break;
            v47 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 384));
            v48 = (unsigned int *)v47;
            if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v47);
            }
            data::SceneExcelConfigMgrBase::findSceneExcelConfig(&txt_config_mgr->scene_config_mgr, *v48);
            std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 384));
          }
          *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
        }
        if ( std::optional<std::unordered_set<unsigned int>>::operator bool((const std::optional<std::unordered_set<unsigned int> > *const)(v2 + 1944)) )
        {
          __for_range_2 = std::optional<std::unordered_set<unsigned int>>::value((std::optional<std::unordered_set<unsigned int> > *const)(v2 + 1944));
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 448, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 448) = std::unordered_set<unsigned int>::begin(__for_range_2);
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 480, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 480) = std::unordered_set<unsigned int>::end(__for_range_2);
          while ( 1 )
          {
            p_world_id_list = (char *)(v2 + 480);
            if ( !std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 448),
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 480)) )
              break;
            *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 4;
            v49 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 448));
            v50 = (int *)v49;
            if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v49);
            }
            v51 = *v50;
            v52 = *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000);
            if ( v52 != 0 && v52 <= 3 )
            {
              LOBYTE(p_world_id_list) = v52 != 0;
              __asan_report_store4(v2 + 192, p_world_id_list);
            }
            *(_DWORD *)(v2 + 192) = v51;
            if ( !data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                    &txt_config_mgr->dungeon_config_mgr,
                    *(unsigned int *)(v2 + 192)) )
            {
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1312, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1312),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
                "rewriteCombatStatLogFilterConfig",
                146);
              v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v54 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v53,
                      (const char (*)[41])"findDungeonExcelConfig fail, dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v54,
                (const unsigned int *)(v2 + 192));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
              *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 448));
          }
          *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
        }
        if ( std::optional<std::unordered_set<unsigned int>>::operator bool((const std::optional<std::unordered_set<unsigned int> > *const)(v2 + 2008)) )
        {
          __for_range_3 = std::optional<std::unordered_set<unsigned int>>::value((std::optional<std::unordered_set<unsigned int> > *const)(v2 + 2008));
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 512, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 512) = std::unordered_set<unsigned int>::begin(__for_range_3);
          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 544, p_world_id_list);
          *(std::unordered_set<unsigned int>::iterator *)(v2 + 544) = std::unordered_set<unsigned int>::end(__for_range_3);
          while ( 1 )
          {
            p_world_id_list = (char *)(v2 + 544);
            if ( !std::__detail::operator!=<unsigned int,false>(
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 512),
                    (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v2 + 544)) )
              break;
            *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 4;
            v57 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 512));
            v58 = (int *)v57;
            if ( *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v57 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v57);
            }
            v59 = *v58;
            v60 = *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000);
            if ( v60 != 0 && v60 <= 3 )
            {
              LOBYTE(p_world_id_list) = v60 != 0;
              __asan_report_store4(v2 + 208, p_world_id_list);
            }
            *(_DWORD *)(v2 + 208) = v59;
            if ( !data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                    &txt_config_mgr->monster_config_mgr,
                    *(unsigned int *)(v2 + 208)) )
            {
              *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1376, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1376),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
                "rewriteCombatStatLogFilterConfig",
                157);
              v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v62 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      v61,
                      (const char (*)[41])"findMonsterExcelConfig fail, monster_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v62,
                (const unsigned int *)(v2 + 208));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
              *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
            std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v2 + 512));
          }
          *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
        }
        if ( is_region_satisfied )
        {
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 96, p_world_id_list, v2 + 96);
          *(_BYTE *)(v2 + 96) = 0;
          std::vector<std::tuple<unsigned int,bool,unsigned int>>::emplace_back<unsigned int &,bool,unsigned int const&>(
            (std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736),
            (unsigned int *)(v2 + 160),
            (bool *)(v2 + 96),
            id,
            v55,
            v56,
            v104);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          if ( *(char *)(((v2 + 112) >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(v2 + 112, v2 + 160, v2 + 112);
          *(_BYTE *)(v2 + 112) = 1;
          std::vector<std::tuple<unsigned int,bool,unsigned int>>::emplace_back<unsigned int &,bool,unsigned int const&>(
            (std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736),
            (unsigned int *)(v2 + 176),
            (bool *)(v2 + 112),
            id,
            v63,
            v64,
            v105);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          v65 = std::move<CombatStatLogFilterConfig &>((CombatStatLogFilterConfig *)(v2 + 1840));
          v68 = std::unordered_map<unsigned int,CombatStatLogFilterConfig>::emplace<unsigned int const&,CombatStatLogFilterConfig>(
                  &this->filter_config_map_,
                  id,
                  v65,
                  v66,
                  v67);
          if ( !v68.second )
          {
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1440, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1440),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
              "rewriteCombatStatLogFilterConfig",
              173);
            v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1440),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v70 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v69,
                    (const char (*)[14])"duplicate id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "rewriteCombatStatLogFilterConfig",
        113);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v28 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v27, (const char (*)[22])byte_1A121AA0);
      v29 = common::milog::MiLogStream::operator<<<unsigned int>(v28, &config->player_level_range);
      v30 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v29, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
      *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    CombatStatLogFilterConfig::~CombatStatLogFilterConfig((CombatStatLogFilterConfig *const)(v2 + 1840));
    v71 = ((v2 + 1840) >> 3) + 2147450880;
    *(_DWORD *)v71 = -117901064;
    *(_DWORD *)(v71 + 4) = -117901064;
    *(_DWORD *)(v71 + 8) = -117901064;
    *(_DWORD *)(v71 + 12) = -117901064;
    *(_DWORD *)(v71 + 16) = -117901064;
    *(_DWORD *)(v71 + 20) = -117901064;
    *(_DWORD *)(v71 + 24) = -117901064;
    *(_BYTE *)(v71 + 28) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::CombatStatLogFilterExcelConfig>,false,false> *const)(v2 + 224));
  }
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
  M_current = std::vector<std::tuple<unsigned int,bool,unsigned int>>::end((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736))._M_current;
  v73._M_current = std::vector<std::tuple<unsigned int,bool,unsigned int>>::begin((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736))._M_current;
  std::sort<__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>>(
    v73,
    (__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> >)M_current);
  v74 = ((v2 + 1760) >> 3) + 2147450880;
  *(_DWORD *)v74 = 0;
  *(_WORD *)(v74 + 4) = 0;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 1760));
  __for_range_4 = (std::vector<std::tuple<unsigned int,bool,unsigned int>> *)(v2 + 736);
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 576, M_current);
  *(std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator *)(v2 + 576) = std::vector<std::tuple<unsigned int,bool,unsigned int>>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 608, M_current);
  *(std::vector<std::tuple<unsigned int,bool,unsigned int>>::iterator *)(v2 + 608) = std::vector<std::tuple<unsigned int,bool,unsigned int>>::end(__for_range_4);
  while ( 1 )
  {
    v75 = (char *)(v2 + 608);
    if ( !__gnu_cxx::operator!=<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *)(v2 + 576),
            (const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *)(v2 + 608)) )
      break;
    *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 1024;
    n = (unsigned __int64)__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *const)(v2 + 576));
    if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 715) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 53) & 7) >= *(_BYTE *)(((v2 + 715) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 704, 12LL);
    }
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(n, 12LL);
    }
    *(_QWORD *)(v2 + 704) = *(_QWORD *)n;
    *(_DWORD *)(v2 + 712) = *(_DWORD *)(n + 8);
    timestamp = std::get<0ul,unsigned int,bool,unsigned int>((std::tuple<unsigned int,bool,unsigned int> *)(v2 + 704));
    is_finish = std::get<1ul,unsigned int,bool,unsigned int>((std::tuple<unsigned int,bool,unsigned int> *)(v2 + 704));
    id_0 = std::get<2ul,unsigned int,bool,unsigned int>((std::tuple<unsigned int,bool,unsigned int> *)(v2 + 704));
    v77 = (unsigned __int8)is_finish & 7;
    v78 = (*(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v77 >= *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000));
    if ( (_BYTE)v78 )
      __asan_report_load1(is_finish, v77, v78);
    if ( !*is_finish )
    {
      v79 = std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 1760), id_0);
      if ( !v79.second )
      {
        *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1504, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1504),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
          "rewriteCombatStatLogFilterConfig",
          186);
        v80 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1504),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v81 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v80,
                (const char (*)[31])"insert config fail, timestamp:");
        v82 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, timestamp);
        v85 = " is_finish:";
        v83 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v82, (const char (*)[12])" is_finish:");
        v84 = *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000);
        LOBYTE(v85) = v84 != 0;
        v86 = (v84 != 0) & (unsigned __int8)(((unsigned __int8)is_finish & 7) >= v84);
        if ( (_BYTE)v86 )
          __asan_report_load1(is_finish, v85, v86);
        common::milog::MiLogStream::operator<<(v83, *is_finish);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
        *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else if ( !std::set<unsigned int>::erase((std::set<unsigned int> *const)(v2 + 1760), id_0) )
    {
      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1568, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1568),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "rewriteCombatStatLogFilterConfig",
        194);
      v87 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1568),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v88 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              v87,
              (const char (*)[30])"erase config fail, timestamp:");
      v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, timestamp);
      v92 = " is_finish:";
      v90 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v89, (const char (*)[12])" is_finish:");
      v91 = *(_BYTE *)(((unsigned __int64)is_finish >> 3) + 0x7FFF8000);
      LOBYTE(v92) = v91 != 0;
      v93 = (v91 != 0) & (unsigned __int8)(((unsigned __int8)is_finish & 7) >= v91);
      if ( (_BYTE)v93 )
        __asan_report_load1(is_finish, v92, v93);
      common::milog::MiLogStream::operator<<(v90, *is_finish);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    v94 = ((v2 + 800) >> 3) + 2147450880;
    *(_WORD *)v94 = 0;
    *(_BYTE *)(v94 + 2) = 0;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 128));
    M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 1760))._M_node;
    v96._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 1760))._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v2 + 800),
      v96,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (const std::vector<unsigned int>::allocator_type *)(v2 + 128));
    v97 = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->time_filter_config_map_, timestamp);
    std::vector<unsigned int>::operator=(v97, (std::vector<unsigned int> *)(v2 + 800));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 800));
    v98 = ((v2 + 800) >> 3) + 2147450880;
    *(_WORD *)v98 = -1800;
    *(_BYTE *)(v98 + 2) = -8;
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    __gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int> *,std::vector<std::tuple<unsigned int,bool,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::tuple<unsigned int,bool,unsigned int>*,std::vector<std::tuple<unsigned int,bool,unsigned int>> > *const)(v2 + 576));
  }
  *(_WORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -1800;
  *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
  __for_range_5 = &this->time_filter_config_map_;
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 640, v75);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 640) = std::map<unsigned int,std::vector<unsigned int>>::begin(__for_range_5);
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 672, v75);
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 672) = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_5);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 640),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 672)) )
  {
    v120 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 640));
    timestamp_0 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v120);
    id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v120);
    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 1632, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 1632),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
      "rewriteCombatStatLogFilterConfig",
      203);
    v99 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
            (common::milog::MiLogStream *const)(v2 + 1632),
            (const char (*)[6])"time:");
    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)timestamp_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)timestamp_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)timestamp_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(timestamp_0);
    }
    v100 = *timestamp_0;
    if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
    {
      v100 = v2 + 1696;
      __asan_report_store_n(v2 + 1696, 32LL);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v2 + 1696), v100);
    v101 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v99, (const std::string *)(v2 + 1696));
    v102 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v101,
             (const char (*)[23])" -> filter_config_ids:");
    common::milog::MiLogStream::operator<<<unsigned int>(v102, id_set);
    std::string::~string((void *)(v2 + 1696));
    *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
    *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 640));
  }
  *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 1760));
  std::vector<std::tuple<unsigned int,bool,unsigned int>>::~vector((std::vector<std::tuple<unsigned int,bool,unsigned int>> *const)(v2 + 736));
  if ( v133 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 220) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8100) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8108) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2144LL, v133);
  }
  return ret;
};

// Line 45: range 000000000CB04F64-000000000CB053EA
__int64 __fastcall StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(TxtConfigMgr &)::{lambda(std::string const&,std::optional<std::unordered_set<unsigned int>> &,std::string const&,unsigned int)#1}::operator()(
        const StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig::<lambda(const string&, std::optional<std::unordered_set<unsigned int> >&, const string&, uint32_t)> *const __closure,
        const std::string *s,
        std::optional<std::unordered_set<unsigned int> > *opt_set,
        const std::string *field_name,
        uint32_t id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  char v20[336]; // [rsp+30h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 1 9 <unknown> 48 4 5 id:46 64 32 9 <unknown> 128 32 9 <unknown> 192 56 5 st:52";
  *(_QWORD *)(v5 + 16) = StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(TxtConfigMgr &)::{lambda(std::string const&,std::optional<std::unordered_set<unsigned int>> &,std::string const&,unsigned int)#1}::operator();
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862723] = -218959118;
  v7[536862725] = -218959118;
  v7[536862727] = -218103808;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = id;
  if ( std::operator==<char>(s, "-1") )
  {
    v8 = 0;
  }
  else
  {
    std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v5 + 192));
    std::allocator<char>::allocator(v5 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v5 + 64),
      ",",
      (const std::allocator<char> *)(v5 + 32));
    v9 = common::tools::StringUtils::splitToSet<std::unordered_set<unsigned int>>(
           s,
           (const std::string *)(v5 + 64),
           (std::unordered_set<unsigned int> *)(v5 + 192),
           1) != 0;
    std::string::~string((void *)(v5 + 64));
    *(_DWORD *)(((v5 + 64) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v5 + 32);
    *(_BYTE *)(((v5 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "operator()",
        55);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v5 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])"splitToSet ");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, field_name);
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" fail, str:");
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, s);
      v15 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v14, (const char (*)[5])" id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 128));
      *(_DWORD *)(((v5 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v8 = -1;
    }
    else
    {
      std::optional<std::unordered_set<unsigned int>>::operator=<std::unordered_set<unsigned int>&>(
        opt_set,
        (std::unordered_set<unsigned int> *)(v5 + 192));
      v8 = 0;
    }
    std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v5 + 192));
  }
  result = v8;
  if ( v20 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 210: range 000000000CB08758-000000000CB0876A
int32_t __cdecl StatLogFilterExcelConfigMgr::checkCombatStatLogFilterConfig(
        const StatLogFilterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 215: range 000000000CB098E4-000000000CB09C87
int32_t __cdecl StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig(
        StatLogFilterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-104h]
  data::OriHurtFilterExcelConfigMap *__for_range; // [rsp+20h] [rbp-100h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-F8h]
  const unsigned int *filter_id; // [rsp+30h] [rbp-F0h]
  data::OriHurtFilterExcelConfig *config; // [rsp+38h] [rbp-E8h]
  char v13[224]; // [rsp+40h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 18 rewrite_config:216 64 8 15 __for_begin:285 96 8 13 __for_end:285 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(_QWORD *)(v2 + 32) = this;
  ret = 0;
  __for_range = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 64));
    filter_id = std::get<0ul,unsigned int const,data::OriHurtFilterExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::OriHurtFilterExcelConfig>(__in);
    if ( StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig(TxtConfigMgr &)::{lambda(data::OriHurtFilterExcelConfig &)#1}::operator()(
           (const StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig::<lambda(data::OriHurtFilterExcelConfig&)> *const)(v2 + 32),
           config) )
    {
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "rewriteOriHurtFilterConfig",
        289);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v5,
             (const char (*)[32])"rewrite_config fail, filter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, filter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 216: range 000000000CB0876C-000000000CB098E3
int32_t __cdecl StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig(TxtConfigMgr &)::{lambda(data::OriHurtFilterExcelConfig &)#1}::operator()(
        const StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig::<lambda(data::OriHurtFilterExcelConfig&)> *const __closure,
        data::OriHurtFilterExcelConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 StringHash; // rsi
  std::string *v6; // r8
  data::OriHurtFilterType filter_type; // eax
  StatLogFilterExcelConfigMgr *this; // rax
  char v9; // dl
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  __int64 v12; // rax
  __int64 filter_hash; // rsi
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::vector<std::string>::size_type v16; // rax
  const std::string *v17; // rax
  int32_t v18; // edx
  char v19; // al
  __int64 v20; // rsi
  const std::string *v21; // rax
  int32_t v22; // ecx
  unsigned int *v23; // r8
  char v24; // dl
  common::milog::MiLogStream *v25; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false>,bool> v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  std::vector<std::string>::size_type v34; // rax
  const std::string *v35; // rax
  int32_t v36; // edx
  unsigned int *v37; // r8
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<const data::AbilityFilterIndex,unsigned int>,false,false>,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rdx
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  data::AbilityFilterIndex *filter_index_0; // [rsp+10h] [rbp-2E0h]
  data::AbilityFilterIndex *filter_index; // [rsp+18h] [rbp-2D8h]
  char v49[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 8 9 <unknown> 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288"
                        " 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig(TxtConfigMgr &)::{lambda(data::OriHurtFilterExcelConfig &)#1}::operator();
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
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  StringHash = (unsigned int)getStringHash(&config->filter_name);
  if ( *(_BYTE *)(((unsigned __int64)&config->filter_hash >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->filter_hash >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&config->filter_hash, StringHash);
  }
  config->filter_hash = StringHash;
  if ( config->filter_hash )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    std::unordered_map<unsigned int,std::string>::emplace<unsigned int &,std::string&>(
      &__closure->__this->filter_hash_name_map_,
      &config->filter_hash,
      &config->filter_name,
      &config->filter_hash,
      v6);
  }
  if ( *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->filter_type);
  }
  filter_type = config->filter_type;
  if ( filter_type == ABILITY_NAME )
  {
    if ( std::vector<std::string>::size(&config->filter_params) )
    {
      filter_index_0 = &config->ability_filter_index;
      v35 = std::vector<std::string>::operator[](&config->filter_params, 0LL);
      v36 = getStringHash(v35);
      v38 = *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
        __asan_report_store4(&config->ability_filter_index.ability_name_hash, v38 != 0);
      config->ability_filter_index.ability_name_hash = v36;
      if ( *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.modifier_name_hash >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.modifier_name_hash >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_store4(&config->ability_filter_index.modifier_name_hash, (((_BYTE)config + 92) & 7u) + 3);
      }
      config->ability_filter_index.modifier_name_hash = 0;
      if ( config->ability_filter_index.ability_name_hash )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v40 = std::unordered_map<data::AbilityFilterIndex,unsigned int>::emplace<data::AbilityFilterIndex&,unsigned int &>(
                &__closure->__this->ability_filter_index_map_,
                filter_index_0,
                &config->filter_hash,
                (data::AbilityFilterIndex *)&__closure->__this->ability_filter_index_map_,
                v37);
        if ( v40.second )
        {
          if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
            "operator()",
            276);
          v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[14])"filter_index:");
          v44 = operator<<(v43, filter_index_0);
          v45 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v44,
                  (const char (*)[14])" filter_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, &config->filter_name);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          goto LABEL_81;
        }
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
          "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
          "operator()",
          273);
        v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v42 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v41,
                (const char (*)[24])"duplicate ability name:");
        operator<<(v42, filter_index_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        result = -1;
      }
      else
      {
        if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
          "operator()",
          268);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v39,
          (const char (*)[22])"ability name is empty");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = -1;
      }
    }
    else
    {
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
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "operator()",
        260);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v33 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v32,
              (const char (*)[21])"invalid params size:");
      v34 = std::vector<std::string>::size(&config->filter_params);
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        v34 = __asan_report_store8(v2 + 64, "invalid params size:");
      *(_QWORD *)(v2 + 64) = v34;
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v33, (const unsigned __int64 *)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      result = -1;
    }
  }
  else
  {
    if ( filter_type > ABILITY_NAME )
    {
LABEL_81:
      result = 0;
      goto LABEL_82;
    }
    if ( filter_type == OVERDOSE )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      this = __closure->__this;
      v9 = *(_BYTE *)(((unsigned __int64)&__closure->__this->overdose_filter_hash >> 3) + 0x7FFF8000);
      if ( v9 != 0 && v9 <= 3 )
        __asan_report_load4(&__closure->__this->overdose_filter_hash);
      if ( !this->overdose_filter_hash )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v12 = (__int64)__closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&config->filter_hash >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->filter_hash >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->filter_hash);
        }
        filter_hash = config->filter_hash;
        if ( *(_BYTE *)(((unsigned __int64)(v12 + 120) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)(v12 + 120) >> 3) + 0x7FFF8000) <= 3 )
        {
          v12 = __asan_report_store4(v12 + 120, filter_hash);
        }
        *(_DWORD *)(v12 + 120) = filter_hash;
        goto LABEL_81;
      }
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
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "operator()",
        228);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v10,
        (const char (*)[34])"duplicate overdose filter config!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = -1;
    }
    else
    {
      if ( filter_type != MODIFIER_NAME )
        goto LABEL_81;
      if ( std::vector<std::string>::size(&config->filter_params) > 1 )
      {
        filter_index = &config->ability_filter_index;
        v17 = std::vector<std::string>::operator[](&config->filter_params, 0LL);
        v18 = getStringHash(v17);
        v19 = *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000);
        if ( v19 != 0 && v19 <= 3 )
          __asan_report_store4(&config->ability_filter_index.ability_name_hash, v19 != 0);
        config->ability_filter_index.ability_name_hash = v18;
        v20 = 1LL;
        v21 = std::vector<std::string>::operator[](&config->filter_params, 1uLL);
        v22 = getStringHash(v21);
        v24 = *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.modifier_name_hash >> 3) + 0x7FFF8000);
        if ( v24 != 0 && (char)((((_BYTE)config + 92) & 7) + 3) >= v24 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(&config->ability_filter_index.modifier_name_hash, v20);
        }
        config->ability_filter_index.modifier_name_hash = v22;
        if ( *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->ability_filter_index.ability_name_hash);
        }
        if ( config->ability_filter_index.ability_name_hash && config->ability_filter_index.modifier_name_hash )
        {
          if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
            __asan_report_load8(__closure);
          v26 = std::unordered_map<data::AbilityFilterIndex,unsigned int>::emplace<data::AbilityFilterIndex&,unsigned int &>(
                  &__closure->__this->ability_filter_index_map_,
                  filter_index,
                  &config->filter_hash,
                  (data::AbilityFilterIndex *)&__closure->__this->ability_filter_index_map_,
                  v23);
          if ( v26.second )
          {
            if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 352, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 352),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
              "operator()",
              253);
            v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    (common::milog::MiLogStream *const)(v2 + 352),
                    (const char (*)[14])"filter_index:");
            v30 = operator<<(v29, filter_index);
            v31 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v30,
                    (const char (*)[14])" filter_name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, &config->filter_name);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
            goto LABEL_81;
          }
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
            "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
            "operator()",
            250);
          v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v28 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  v27,
                  (const char (*)[42])"duplicate ability and modifier name pair:");
          operator<<(v28, filter_index);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          result = -1;
        }
        else
        {
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
            "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
            "operator()",
            245);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 224),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v25,
            (const char (*)[34])"ability or modifier name is empty");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          result = -1;
        }
      }
      else
      {
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
          "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
          "operator()",
          237);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 160),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v14,
                (const char (*)[21])"invalid params size:");
        v16 = std::vector<std::string>::size(&config->filter_params);
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v2 + 32, "invalid params size:");
        *(_QWORD *)(v2 + 32) = v16;
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v15,
          (const unsigned __int64 *)(v2 + 32));
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        result = -1;
      }
    }
  }
LABEL_82:
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 297: range 000000000CB0A52C-000000000CB0AB38
int32_t __cdecl StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig(
        const StatLogFilterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::unordered_map<unsigned int,std::string>::size_type v9; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-174h]
  data::OriHurtFilterExcelConfigMap *__for_range; // [rsp+20h] [rbp-170h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,data::OriHurtFilterExcelConfig> >::type *filter_id; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,const std::pair<unsigned int const,data::OriHurtFilterExcelConfig> >::type *config; // [rsp+38h] [rbp-158h]
  char v16[336]; // [rsp+40h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:327 64 8 13 __for_end:327 96 8 9 <unknown> 128 16 16 check_config:298 160 "
                        "32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219021312;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(_QWORD *)(v2 + 128) = txt_config_mgr;
  if ( *(_BYTE *)(((v2 + 136) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 136, txt_config_mgr);
  *(_QWORD *)(v2 + 136) = this;
  ret = 0;
  __for_range = &this->ori_hurt_filter_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::OriHurtFilterExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 32));
    filter_id = std::get<0ul,unsigned int const,data::OriHurtFilterExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::OriHurtFilterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::OriHurtFilterExcelConfig>(v13);
    if ( StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig(TxtConfigMgr const&)const::{lambda(data::OriHurtFilterExcelConfig const&)#1}::operator()(
           (const StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig::<lambda(const data::OriHurtFilterExcelConfig&)> *const)(v2 + 128),
           config) )
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
        "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
        "checkOriHurtFilterConfig",
        331);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v5,
             (const char (*)[32])"rewrite_config fail, filter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, filter_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::OriHurtFilterExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( std::unordered_map<unsigned int,std::string>::size(&this->filter_hash_name_map_) > 0x64 )
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
      4u,
      "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
      "checkOriHurtFilterConfig",
      337);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 224),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           v7,
           (const char (*)[33])"filter names more than 100! num:");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v9 = std::unordered_map<unsigned int,std::string>::size(&this->filter_hash_name_map_);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v2 + 96, "filter names more than 100! num:");
    *(_QWORD *)(v2 + 96) = v9;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v8, (const unsigned __int64 *)(v2 + 96));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    ret = -1;
  }
  result = ret;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 298: range 000000000CB09C88-000000000CB0A52A
int32_t __cdecl StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig(TxtConfigMgr const&)const::{lambda(data::OriHurtFilterExcelConfig const&)#1}::operator()(
        const StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig::<lambda(const data::OriHurtFilterExcelConfig&)> *const __closure,
        const data::OriHurtFilterExcelConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::OriHurtFilterType filter_type; // eax
  uint32_t modifier_name_hash; // r8d
  uint32_t v7; // edi
  char v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int32_t result; // eax
  uint32_t ability_name_hash; // edi
  bool v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const char *v21; // rsi
  common::milog::MiLogStream *v22; // rcx
  data::OriHurtFilterType v23; // edi
  char v24; // al
  JsonConfigMgr *json_config_mgr; // [rsp+10h] [rbp-1A0h]
  data::AbilityFilterIndex *filter_index; // [rsp+18h] [rbp-198h]
  char v28[400]; // [rsp+20h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 9 <unknown> 64 16 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig(TxtConfigMgr const&)const::{lambda(data::OriHurtFilterExcelConfig const&)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  json_config_mgr = &TxtConfigMgr::getConfig(__closure->__txt_config_mgr)->json_config_mgr;
  filter_index = &config->ability_filter_index;
  if ( *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&config->filter_type);
  }
  filter_type = config->filter_type;
  if ( filter_type == ABILITY_NAME )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->ability_filter_index.ability_name_hash);
    }
    ability_name_hash = config->ability_filter_index.ability_name_hash;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    {
      ability_name_hash = v2 + 64;
      __asan_report_store16();
    }
    JsonConfigMgr::findAbilityConfig(
      (const JsonConfigMgr *const)(v2 + 64),
      (const char *)json_config_mgr,
      ability_name_hash,
      0);
    v15 = std::operator==<data::ConfigAbility>(0LL, (const std::shared_ptr<data::ConfigAbility> *)(v2 + 64));
    std::shared_ptr<data::ConfigAbility>::~shared_ptr((std::shared_ptr<data::ConfigAbility> *const)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v15 )
      goto LABEL_37;
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
      "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
      "operator()",
      316);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            v16,
            (const char (*)[38])"findAbilityConfig fail, filter_index:");
    v18 = operator<<(v17, filter_index);
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" params:");
    common::milog::MiLogStream::operator<<<std::string>(v19, &config->filter_params);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = -1;
  }
  else
  {
    if ( filter_type <= ABILITY_NAME )
    {
      if ( filter_type == OVERDOSE )
        goto LABEL_37;
      if ( filter_type == MODIFIER_NAME )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.modifier_name_hash >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.modifier_name_hash >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->ability_filter_index.modifier_name_hash);
        }
        modifier_name_hash = config->ability_filter_index.modifier_name_hash;
        if ( *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->ability_filter_index.ability_name_hash >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->ability_filter_index.ability_name_hash);
        }
        v7 = config->ability_filter_index.ability_name_hash;
        if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
        {
          v7 = v2 + 96;
          __asan_report_store_n(v2 + 96, 32LL);
        }
        JsonConfigMgr::findModifierName[abi:cxx11]((std::string *)(v2 + 96), json_config_mgr, v7, modifier_name_hash);
        v8 = std::string::empty();
        std::string::~string((void *)(v2 + 96));
        *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
        if ( v8 )
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
            "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
            "operator()",
            309);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 160),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  v9,
                  (const char (*)[37])"findModifierName fail, filter_index:");
          v11 = operator<<(v10, filter_index);
          v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" params:");
          common::milog::MiLogStream::operator<<<std::string>(v12, &config->filter_params);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
          result = -1;
          goto LABEL_38;
        }
LABEL_37:
        result = 0;
        goto LABEL_38;
      }
    }
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
      "./src/txt_data_manual/StatLogFilterExcelConfig.cpp",
      "operator()",
      321);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = "invalid filter_type:";
    v22 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v20,
            (const char (*)[21])"invalid filter_type:");
    if ( *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->filter_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->filter_type);
    }
    v23 = config->filter_type;
    v24 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v24 != 0 && v24 <= 3 )
    {
      v23 = v2 + 48;
      LOBYTE(v21) = v24 != 0;
      __asan_report_store4(v2 + 48, v21);
    }
    *(_DWORD *)(v2 + 48) = v23;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 48));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    result = -1;
  }
LABEL_38:
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 344: range 000000000CB0AB3A-000000000CB0AB95
int32_t __cdecl StatLogFilterExcelConfigMgr::rewriteConfig(
        StatLogFilterExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( StatLogFilterExcelConfigMgr::rewriteCombatStatLogFilterConfig(this, txt_config_mgr)
    || StatLogFilterExcelConfigMgr::rewriteOriHurtFilterConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 354: range 000000000CB0AB96-000000000CB0ABF1
int32_t __cdecl StatLogFilterExcelConfigMgr::checkConfig(
        StatLogFilterExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( StatLogFilterExcelConfigMgr::checkCombatStatLogFilterConfig(this, txt_config_mgr)
    || StatLogFilterExcelConfigMgr::checkOriHurtFilterConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 364: range 000000000CB0ABF2-000000000CB0AE67
const std::vector<unsigned int> *__fastcall StatLogFilterExcelConfigMgr::findFilterConfigsByTime(
        const StatLogFilterExcelConfigMgr *const this,
        __int64 timestamp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,std::vector<unsigned int>> *p_time_filter_config_map; // rdx
  std::map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::vector<unsigned int> *result; // rax
  std::map<unsigned int,std::vector<unsigned int>> *v9; // rdx
  bool v10; // al
  char v11[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 timestamp:363 64 8 8 iter:365 96 8 9 <unknown> 128 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::findFilterConfigsByTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  *(_DWORD *)(v2 + 48) = timestamp;
  p_time_filter_config_map = &this->time_filter_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, timestamp);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::upper_bound(
                                                                                     p_time_filter_config_map,
                                                                                     (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->time_filter_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::map<unsigned int,std::vector<unsigned int>>::begin(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator--((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v9 = &this->time_filter_config_map_;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    *(std::map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 128) = std::map<unsigned int,std::vector<unsigned int>>::end(v9);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
      result = 0LL;
    else
      result = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  }
  if ( v11 == (char *)v2 )
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

// Line 379: range 000000000CB0AE68-000000000CB0B029
const CombatStatLogFilterConfig *__fastcall StatLogFilterExcelConfigMgr::findFilterConfig(
        const StatLogFilterExcelConfigMgr *const this,
        __int64 id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,CombatStatLogFilterConfig> *p_filter_config_map; // rdx
  std::unordered_map<unsigned int,CombatStatLogFilterConfig> *v6; // rdx
  bool v7; // al
  const CombatStatLogFilterConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:378 64 8 8 iter:380 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = StatLogFilterExcelConfigMgr::findFilterConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = id;
  p_filter_config_map = &this->filter_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, id);
  *(std::unordered_map<unsigned int,CombatStatLogFilterConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,CombatStatLogFilterConfig>::find(
                                                                                               p_filter_config_map,
                                                                                               (const std::unordered_map<unsigned int,CombatStatLogFilterConfig>::key_type *)(v2 + 48));
  v6 = &this->filter_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,CombatStatLogFilterConfig>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,CombatStatLogFilterConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,CombatStatLogFilterConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CombatStatLogFilterConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,CombatStatLogFilterConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,CombatStatLogFilterConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,CombatStatLogFilterConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 390: range 000000000CB0B02A-000000000CB0B05A
uint32_t __cdecl StatLogFilterExcelConfigMgr::getFilterHashByAbilityFilterIndex(
        const StatLogFilterExcelConfigMgr *const this,
        const data::AbilityFilterIndex *filter_index)
{
  return common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<data::AbilityFilterIndex,unsigned int>>(
           &this->ability_filter_index_map_,
           filter_index,
           0);
};

// Line 395: range 000000000CB0B05C-000000000CB0B28C
std::string *__fastcall StatLogFilterExcelConfigMgr::getFilterNameByHash[abi:cxx11](
        std::string *retstr,
        const StatLogFilterExcelConfigMgr *const this,
        uint32_t filter_hash)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::string> *p_filter_hash_name_map; // rsi
  char v9[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 1 9 <unknown> 48 4 15 filter_hash:394 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = StatLogFilterExcelConfigMgr::getFilterNameByHash[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862723] = -202116109;
  *(_DWORD *)(v3 + 48) = filter_hash;
  std::allocator<char>::allocator(v3 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v3 + 64),
    byte_1A0D8BA0,
    (const std::allocator<char> *)(v3 + 32));
  p_filter_hash_name_map = &this->filter_hash_name_map_;
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    p_filter_hash_name_map = (std::unordered_map<unsigned int,std::string> *)32;
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,std::string>>(
    retstr,
    p_filter_hash_name_map,
    (const std::unordered_map<unsigned int,std::string>::key_type *)(v3 + 48),
    (std::unordered_map<unsigned int,std::string>::mapped_type *)(v3 + 64));
  std::string::~string((void *)(v3 + 64));
  *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v3 + 32);
  if ( v9 == (char *)v3 )
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
  return retstr;
};

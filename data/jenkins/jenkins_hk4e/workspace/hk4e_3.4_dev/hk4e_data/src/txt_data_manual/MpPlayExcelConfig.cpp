// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MpPlayExcelConfig.cpp

// Line 20: range 0000000014610A3E-00000000146114E3
int32_t __cdecl MpPlayExcelConfigMgr::rewriteConfig(MpPlayExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::vector<unsigned int> *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v8; // rax
  unsigned int *v9; // r14
  std::vector<unsigned int>::iterator v10; // rax
  unsigned __int64 v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r14
  std::set<unsigned int>::iterator v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  data::MpPlayGroupExcelConfigMap *__for_range; // [rsp+10h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-248h]
  const std::vector<unsigned int>::value_type *entry_id; // [rsp+20h] [rbp-240h]
  std::tuple_element<1,std::pair<unsigned int const,data::MpPlayGroupExcelConfig> >::type *entry_config; // [rsp+28h] [rbp-238h]
  char v25[560]; // [rsp+30h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 9 <unknown> 48 8 14 __for_begin:21 80 8 12 __for_end:21 112 24 9 <unknown> 176 32 9 <unkn"
                        "own> 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 48 12 group_set:25";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = -218959360;
  v4[536862725] = 62194;
  v4[536862726] = -219021312;
  v4[536862727] = 62194;
  v4[536862728] = -219021312;
  v4[536862729] = 62194;
  v4[536862730] = -219021312;
  v4[536862731] = 62194;
  v4[536862732] = -219021312;
  v4[536862733] = 62194;
  v4[536862735] = -202116109;
  __for_range = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::iterator *)(v2 + 48) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::iterator *)(v2 + 80) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v2 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v2 + 80)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v2 + 48));
    entry_id = std::get<0ul,unsigned int const,data::MpPlayGroupExcelConfig>(__in);
    entry_config = std::get<1ul,unsigned int const,data::MpPlayGroupExcelConfig>(__in);
    v5 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
           &this->mp_play_config_map,
           &entry_config->play_id);
    std::vector<unsigned int>::push_back(v5, entry_id);
    v6 = ((v2 + 432) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_WORD *)(v6 + 4) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 432));
    M_current = std::vector<unsigned int>::end(&entry_config->activate_group_list)._M_current;
    v8._M_current = std::vector<unsigned int>::begin(&entry_config->activate_group_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v2 + 432),
      v8,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    v9 = std::vector<unsigned int>::end(&entry_config->group_list)._M_current;
    v10._M_current = std::vector<unsigned int>::begin(&entry_config->group_list)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v2 + 432),
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v9);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 432), &entry_config->born_group_id);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 432), &entry_config->reborn_group_id);
    std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 432), &entry_config->reward_group_id);
    v11 = ((v2 + 112) >> 3) + 2147450880;
    *(_WORD *)v11 = 0;
    *(_BYTE *)(v11 + 2) = 0;
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
    std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v2 + 32));
    M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v2 + 432))._M_node;
    v13._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 432))._M_node;
    std::vector<unsigned int>::vector<std::_Rb_tree_const_iterator<unsigned int>,void>(
      (std::vector<unsigned int> *const)(v2 + 112),
      v13,
      (std::_Rb_tree_const_iterator<unsigned int>)M_node,
      (const std::vector<unsigned int>::allocator_type *)(v2 + 32));
    std::vector<unsigned int>::operator=(&entry_config->notify_group_vec, (std::vector<unsigned int> *)(v2 + 112));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 112));
    v14 = ((v2 + 112) >> 3) + 2147450880;
    *(_WORD *)v14 = -1800;
    *(_BYTE *)(v14 + 2) = -8;
    std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 432));
    v15 = ((v2 + 432) >> 3) + 2147450880;
    *(_DWORD *)v15 = -117901064;
    *(_WORD *)(v15 + 4) = -1800;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v2 + 48));
  }
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( MpPlayExcelConfigMgr::rewriteWatcherConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteConfig",
      36);
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 176),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      v16,
      (const char (*)[27])"rewriteWatcherConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = -1;
  }
  else if ( MpPlayExcelConfigMgr::rewriteMpPlayGroupConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteConfig",
      42);
    v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 240),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v18,
      (const char (*)[31])"rewriteMpPlayGroupConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
    result = -1;
  }
  else if ( MpPlayExcelConfigMgr::rewriteMpPlayStatisticConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteConfig",
      48);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 304),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      v19,
      (const char (*)[35])"rewriteMpPlayStatisticConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 304));
    result = -1;
  }
  else if ( MpPlayExcelConfigMgr::rewriteMpPlayScoreConfig(this, txt_config_mgr) )
  {
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteConfig",
      54);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 368),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v20,
      (const char (*)[31])"rewriteMpPlayScoreConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 368));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v25 == (char *)v2 )
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

// Line 62: range 00000000146114E4-000000001461170F
int32_t __cdecl MpPlayExcelConfigMgr::checkConfig(MpPlayExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t reta; // [rsp+1Ch] [rbp-84h]
  int retb; // [rsp+1Ch] [rbp-84h]
  int ret; // [rsp+1Ch] [rbp-84h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  reta = MpPlayExcelConfigMgr::checkMpPlayMatchConfig(this, txt_config_mgr);
  retb = MpPlayExcelConfigMgr::checkMpPlayGroupConfig(this, txt_config_mgr) | reta;
  ret = MpPlayExcelConfigMgr::checkMpStatisticConfig(this, txt_config_mgr) | retb;
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "checkConfig",
      70);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v5, (const char (*)[18])"checkConfig fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  result = ret;
  if ( v10 == (char *)v2 )
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

// Line 77: range 0000000014611710-0000000014611769
data::ItemLimitType __cdecl MpPlayExcelConfigMgr::getDropLimitType(uint32_t mp_play_type)
{
  data::ItemLimitType result; // eax

  switch ( mp_play_type )
  {
    case 1u:
      result = ITEM_LIMIT_MP_PLAY_CRUCIBLE_DROP;
      break;
    case 2u:
      result = ITEM_LIMIT_ACTIVITY_ASTER_DROP;
      break;
    case 3u:
      result = ITEM_LIMIT_ACTIVITY_DRAGON_SPINE_DROP;
      break;
    case 4u:
      result = ITEM_LIMIT_WATER_SPIRIT_DROP;
      break;
    case 5u:
      result = ITEM_LIMIT_WINTER_CAMP_DROP;
      break;
    default:
      result = ITEM_LIMIT_MP_PLAY_DROP;
      break;
  }
  return result;
};

// Line 97: range 0000000014611890-00000000146120A8
int32_t __cdecl MpPlayExcelConfigMgr::rewriteWatcherConfig(
        MpPlayExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rdi
  data::WatcherConfig *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  MpPlayExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int> *v16; // rdx
  unsigned int *M_current; // r14
  unsigned int *v18; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1B4h]
  data::MpPlayWatcherConfigMap *__for_range; // [rsp+20h] [rbp-1B0h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+28h] [rbp-1A8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v25; // [rsp+30h] [rbp-1A0h]
  std::vector<unsigned int> *watcher_id_vec; // [rsp+40h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false,false>::reference __in; // [rsp+48h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,data::MpPlayWatcherConfig> >::type *watcher_id; // [rsp+50h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,data::MpPlayWatcherConfig> >::type *watcher_config; // [rsp+58h] [rbp-178h]
  char v30[368]; // [rsp+60h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 14 __for_begin:99 64 8 12 __for_end:99 96 8 12 cmp_func:118 128 8 15 __for_begin:132 160 "
                        "8 13 __for_end:132 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::rewriteWatcherConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  ret = 0;
  __for_range = &this->mp_play_watcher_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayWatcherConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MpPlayWatcherConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayWatcherConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MpPlayWatcherConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false> *)(v2 + 64)) )
      break;
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false,false> *const)(v2 + 32));
    watcher_id = std::get<0ul,unsigned int const,data::MpPlayWatcherConfig>(__in);
    watcher_config = std::get<1ul,unsigned int const,data::MpPlayWatcherConfig>(__in);
    p_watcher_config_mgr = &txt_config_mgr->watcher_config_mgr;
    v7 = (data::WatcherConfig *)watcher_config;
    if ( *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)watcher_id >> 3) + 0x7FFF8000) )
    {
      p_watcher_config_mgr = (WatcherExcelConfigMgr *)watcher_id;
      __asan_report_load4(watcher_id);
    }
    if ( WatcherExcelConfigMgr::addWatcherConfig(p_watcher_config_mgr, *watcher_id, v7) )
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "rewriteWatcherConfig",
        104);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v8,
             (const char (*)[29])"addWatcherConfig failed, id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, watcher_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      v10 = this;
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config->mp_play_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)watcher_config + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&watcher_config->mp_play_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&watcher_config->mp_play_id);
      }
      if ( data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(v10, watcher_config->mp_play_id) )
      {
        v16 = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                &this->mp_play_watchers_map,
                &watcher_config->mp_play_id);
        std::vector<unsigned int>::push_back(v16, watcher_id);
      }
      else
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
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "rewriteWatcherConfig",
          110);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])"watcher_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, watcher_id);
        v14 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v13, (const char (*)[21])byte_1ADC2840);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &watcher_config->mp_play_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayWatcherConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(_QWORD *)(v2 + 96) = this;
  __for_range_0 = &this->mp_play_watchers_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 160)) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 128));
    std::get<0ul,unsigned int const,std::vector<unsigned int>>(v25);
    watcher_id_vec = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v25);
    M_current = std::vector<unsigned int>::end(watcher_id_vec)._M_current;
    v18 = std::vector<unsigned int>::begin(watcher_id_vec)._M_current;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 96);
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,MpPlayExcelConfigMgr::rewriteWatcherConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}>(
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v18,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
      *(MpPlayExcelConfigMgr::rewriteWatcherConfig::<lambda(uint32_t, uint32_t)> *)(v2 + 96));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 128));
  }
  result = ret;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 118: range 000000001461176A-000000001461188E
bool __cdecl MpPlayExcelConfigMgr::rewriteWatcherConfig(TxtConfigMgr &)::{lambda(unsigned int,unsigned int)#1}::operator()(
        const MpPlayExcelConfigMgr::rewriteWatcherConfig::<lambda(uint32_t, uint32_t)> *const __closure,
        uint32_t lhs,
        uint32_t rhs)
{
  uint32_t priority; // ecx
  data::MpPlayWatcherConfig *lhs_config_ptr; // [rsp+10h] [rbp-10h]
  data::MpPlayWatcherConfig *rhs_config_ptr; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  lhs_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayWatcherConfig(__closure->__this, lhs);
  if ( !lhs_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  rhs_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayWatcherConfig(__closure->__this, rhs);
  if ( !rhs_config_ptr )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&lhs_config_ptr->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&lhs_config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&lhs_config_ptr->priority);
  }
  priority = lhs_config_ptr->priority;
  if ( *(_BYTE *)(((unsigned __int64)&rhs_config_ptr->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&rhs_config_ptr->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&rhs_config_ptr->priority);
  }
  return priority > rhs_config_ptr->priority;
};

// Line 141: range 00000000146120AA-0000000014612EB9
int32_t __cdecl MpPlayExcelConfigMgr::rewriteMpPlayGroupConfig(
        MpPlayExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  const char *v7; // rsi
  unsigned int *v8; // rax
  const unsigned int *v9; // r8
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // edx
  int v18; // eax
  const char *v19; // rsi
  unsigned int *v20; // rax
  const unsigned int *v21; // r8
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // edx
  char *v30; // rsi
  unsigned int *v31; // rax
  int *v32; // rdx
  int v33; // ecx
  char v34; // al
  data::MpPlayAbilityGroupExcelConfigMap *p_mp_play_ability_group_excel_config_map; // rdx
  data::MpPlayAbilityGroupExcelConfigMap *v36; // rdx
  bool v37; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  int v41; // edx
  std::vector<data::MpPlayAbilityGroupExcelConfig> *v42; // r15
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false,false>::pointer v43; // rax
  int v44; // edx
  data::MpPlayGroupExcelConfigMap *__for_range; // [rsp+28h] [rbp-2C8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::reference v47; // [rsp+30h] [rbp-2C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayGroupExcelConfig> >::type *entry_config; // [rsp+40h] [rbp-2B0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-2A8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-2A0h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+58h] [rbp-298h]
  char v52[656]; // [rsp+60h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v52;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "16 48 4 12 group_id:144 64 4 12 group_id:153 80 4 20 ability_group_id:162 96 8 15 __for_begin:14"
                        "2 128 8 13 __for_end:142 160 8 15 __for_begin:144 192 8 13 __for_end:144 224 8 15 __for_begin:15"
                        "3 256 8 13 __for_end:153 288 8 15 __for_begin:162 320 8 13 __for_end:162 352 8 8 iter:164 384 8 "
                        "9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::rewriteMpPlayGroupConfig;
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
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 128)) )
      break;
    v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 96));
    std::get<0ul,unsigned int const,data::MpPlayGroupExcelConfig>(v47);
    entry_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayGroupExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MpPlayGroupExcelConfig>(v47);
    __for_range_0 = &entry_config->activate_group_list;
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
      v7 = (const char *)(v3 + 192);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
      {
        v17 = 1;
        goto LABEL_26;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      v10 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v11 = *v10;
      v12 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v11;
      v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->mp_play_group_map,
              (unsigned int *)(v3 + 48),
              &entry_config->play_id,
              (unsigned int *)&this->mp_play_group_map,
              v9);
      if ( !v13.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteMpPlayGroupConfig",
      148);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v14,
            (const char (*)[20])"activate group id: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    v7 = byte_1ADC2A80;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])byte_1ADC2A80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v17 = 0;
LABEL_26:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v17 != 1 )
    {
      v18 = 0;
      goto LABEL_73;
    }
    __for_range_1 = &entry_config->group_list;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v7);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v19 = (const char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v29 = 1;
        goto LABEL_44;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
      v22 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v23 = *v22;
      v24 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v24 != 0 && v24 <= 3 )
      {
        LOBYTE(v19) = v24 != 0;
        __asan_report_store4(v3 + 64, v19);
      }
      *(_DWORD *)(v3 + 64) = v23;
      v25 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int const&>(
              &this->mp_play_group_map,
              (unsigned int *)(v3 + 64),
              &entry_config->play_id,
              (unsigned int *)&this->mp_play_group_map,
              v21);
      if ( !v25.second )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 224));
    }
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "rewriteMpPlayGroupConfig",
      157);
    v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])"group id: ");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 64));
    v19 = byte_1ADC2A80;
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1ADC2A80);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v29 = 0;
LABEL_44:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v29 != 1 )
    {
      v18 = 0;
      goto LABEL_73;
    }
    __for_range_2 = &entry_config->ability_group_list;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, v19);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, v19);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v30 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
        break;
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
      v31 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
      v32 = (int *)v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      v33 = *v32;
      v34 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
      LOBYTE(v30) = v34 != 0;
      if ( v34 != 0 && v34 <= 3 )
        __asan_report_store4(v3 + 80, v30);
      *(_DWORD *)(v3 + 80) = v33;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      p_mp_play_ability_group_excel_config_map = &this->mp_play_ability_group_excel_config_map;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v30);
      *(std::unordered_map<unsigned int,data::MpPlayAbilityGroupExcelConfig>::iterator *)(v3 + 352) = std::unordered_map<unsigned int,data::MpPlayAbilityGroupExcelConfig>::find(p_mp_play_ability_group_excel_config_map, (const std::unordered_map<unsigned int,data::MpPlayAbilityGroupExcelConfig>::key_type *)(v3 + 80));
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      v36 = &this->mp_play_ability_group_excel_config_map;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v3 + 80);
      *(std::unordered_map<unsigned int,data::MpPlayAbilityGroupExcelConfig>::iterator *)(v3 + 384) = std::unordered_map<unsigned int,data::MpPlayAbilityGroupExcelConfig>::end(v36);
      v37 = std::__detail::operator==<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false> *)(v3 + 352),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false> *)(v3 + 384));
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v37 )
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
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "rewriteMpPlayGroupConfig",
          167);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v38,
                (const char (*)[19])"ability_group_id: ");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" not found");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v41 = 0;
      }
      else
      {
        v42 = std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::operator[](
                &this->mp_play_ability_group_map,
                &entry_config->play_id);
        v43 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayAbilityGroupExcelConfig>,false,false> *const)(v3 + 352));
        std::vector<data::MpPlayAbilityGroupExcelConfig>::push_back(v42, &v43->second);
        v41 = 1;
      }
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      if ( v41 != 1 )
      {
        v44 = 0;
        goto LABEL_69;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
    }
    v44 = 1;
LABEL_69:
    *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v44 != 1 )
    {
      v18 = 0;
      goto LABEL_73;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 96));
  }
  v18 = 1;
LABEL_73:
  if ( v18 == 1 )
    v2 = 0;
  if ( v52 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 178: range 0000000014612EBA-0000000014615A8C
int32_t __cdecl MpPlayExcelConfigMgr::rewriteMpPlayStatisticConfig(
        MpPlayExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  int v9; // eax
  const std::string *v10; // rax
  MpPlaySettleWatcherFinishParam *v11; // r8
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // rdx
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::string *v25; // rax
  const std::string *v26; // rax
  MpPlaySettleWatcherProgressParam *v27; // r8
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  const std::string *v30; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  int v35; // eax
  __int64 v36; // rsi
  const std::string *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r14
  const std::string *v40; // rax
  const std::string *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  const std::string *v44; // rax
  MpPlaySettleSpecifiedMonsterTakeDamageParam *v45; // r8
  bool v46; // al
  const std::string *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  const std::string *v50; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  int v55; // eax
  const std::string *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r14
  const std::string *v59; // rax
  const std::string *v60; // rax
  MpPlaySettleSpecifiedMonsterKillerParam *v61; // r8
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r14
  const std::string *v64; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  _BOOL4 v69; // eax
  _DWORD *v70; // rax
  const std::string *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r14
  const std::string *v74; // rax
  int v75; // r15d
  const std::string *v77; // rax
  bool v78; // r15
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r14
  const std::string *v81; // rax
  MpPlaySettleMonsterKillNumParam *v82; // r8
  bool v83; // al
  const std::string *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // r14
  const std::string *v87; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::any>,false,false>,bool> v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rdx
  _DWORD *v91; // rdx
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  data::MpPlayStatisticConfigMap *__for_range; // [rsp+28h] [rbp-798h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::reference v96; // [rsp+30h] [rbp-790h]
  std::tuple_element<0,std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *id; // [rsp+38h] [rbp-788h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *config; // [rsp+40h] [rbp-780h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::mapped_type *statistic_id_set; // [rsp+48h] [rbp-778h]
  char v100[1904]; // [rsp+50h] [rbp-770h] BYREF

  v3 = (unsigned __int64)v100;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1856LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "32 32 1 9 <unknown> 48 4 9 param:197 64 8 15 __for_begin:179 96 8 13 __for_end:179 128 8 9 param"
                        ":217 160 8 9 param:275 192 12 9 param:242 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknow"
                        "n> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown"
                        "> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown>"
                        " 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unkn"
                        "own> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <"
                        "unknown> 1696 32 9 <unknown> 1760 64 9 param:300";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::rewriteMpPlayStatisticConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -219020288;
  v5[536862728] = -218959118;
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
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -218959118;
  v5[536862774] = -218959118;
  v5[536862777] = -202116109;
  __for_range = &this->mp_play_statistic_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::end(__for_range);
  while ( 2 )
  {
    if ( std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false> *)(v3 + 64),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false> *)(v3 + 96)) )
    {
      v96 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false> *const)(v3 + 64));
      id = std::get<0ul,unsigned int const,data::MpPlayStatisticConfig>(v96);
      config = (std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *)std::get<1ul,unsigned int const,data::MpPlayStatisticConfig>(v96);
      if ( *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->settle_type);
      }
      if ( config->settle_type )
      {
        statistic_id_set = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                             &this->mp_play_statistic_map,
                             &config->mp_play_id);
        std::unordered_set<unsigned int>::insert(statistic_id_set, id);
        if ( *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->settle_type);
        }
        switch ( config->settle_type )
        {
          case MP_PLAY_SETTLE_TYPE_WATCHER_FINISH:
            if ( std::vector<std::string>::size(&config->settle_param) )
            {
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 48, id);
              *(_DWORD *)(v3 + 48) = 0;
              v10 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v10, (unsigned int *)(v3 + 48), 1) )
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
                  "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                  "rewriteMpPlayStatisticConfig",
                  200);
                v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 352),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v13 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v12,
                        (const char (*)[17])"strToNum failed ");
                v14 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
                *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v9 = 0;
              }
              else
              {
                v15 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,MpPlaySettleWatcherFinishParam &>(
                        &this->mp_play_settle_param_map,
                        id,
                        (MpPlaySettleWatcherFinishParam *)(v3 + 48),
                        (const unsigned int *)&this->mp_play_settle_param_map,
                        v11);
                if ( !v15.second )
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
                    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                    "rewriteMpPlayStatisticConfig",
                    205);
                  v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 416),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                          v16,
                          (const char (*)[26])"duplicated mp_settle id, ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
                  *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v9 = 0;
                }
                else
                {
                  v9 = 1;
                }
              }
            }
            else
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
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "rewriteMpPlayStatisticConfig",
                194);
              v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 288),
                     (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v8, (const char (*)[21])byte_1ADC2E40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
              *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v9 = 0;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
            if ( v9 )
              goto LABEL_153;
            v7 = 0;
            break;
          case MP_PLAY_SETTLE_TYPE_WATCHER_PROGRESS:
            if ( std::vector<std::string>::size(&config->settle_param) > 1 )
            {
              *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 128, id);
              *(_DWORD *)(v3 + 128) = 0;
              v20 = ((_BYTE)v3 - 124) & 7;
              v21 = (*(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000));
              if ( (_BYTE)v21 )
                __asan_report_store1(v3 + 132, v20, v21);
              *(_BYTE *)(v3 + 132) = 0;
              v22 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v22, (unsigned int *)(v3 + 128), 1) )
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
                  "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                  "rewriteMpPlayStatisticConfig",
                  220);
                v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 544),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v24 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v23,
                        (const char (*)[17])"strToNum failed ");
                v25 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v25);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
                *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v19 = 0;
              }
              else
              {
                v26 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                if ( common::tools::StringUtils::strToNum<bool>(v26, (bool *)(v3 + 132), 1) )
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
                    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                    "rewriteMpPlayStatisticConfig",
                    225);
                  v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 608),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v29 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v28,
                          (const char (*)[17])"strToNum failed ");
                  v30 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, v30);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
                  *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v19 = 0;
                }
                else
                {
                  v31 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,MpPlaySettleWatcherProgressParam &>(
                          &this->mp_play_settle_param_map,
                          id,
                          (MpPlaySettleWatcherProgressParam *)(v3 + 128),
                          (const unsigned int *)&this->mp_play_settle_param_map,
                          v27);
                  if ( !v31.second )
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
                      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                      "rewriteMpPlayStatisticConfig",
                      230);
                    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 672),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v33 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                            v32,
                            (const char (*)[26])"duplicated mp_settle id, ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
                    *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v19 = 0;
                  }
                  else
                  {
                    v19 = 1;
                  }
                }
              }
            }
            else
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
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "rewriteMpPlayStatisticConfig",
                214);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v18, (const char (*)[21])byte_1ADC2F00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
              *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v19 = 0;
            }
            *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v19 )
              goto LABEL_153;
            v7 = 0;
            break;
          case MP_PLAY_SETTLE_TYPE_MONSTER_TAKE_DEMAGE:
            if ( std::vector<std::string>::size(&config->settle_param) > 1 )
            {
              *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 1024;
              if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 192, id);
              *(_DWORD *)(v3 + 192) = 0;
              v36 = (((_BYTE)v3 - 60) & 7u) + 3;
              if ( *(_BYTE *)(((v3 + 196) >> 3) + 0x7FFF8000) != 0
                && (char)(((v3 - 60) & 7) + 3) >= *(_BYTE *)(((v3 + 196) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v3 + 196, v36);
              }
              *(_DWORD *)(v3 + 196) = 0;
              if ( *(char *)(((v3 + 200) >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(v3 + 200, v36, v3 + 200);
              *(_BYTE *)(v3 + 200) = 1;
              v37 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v37, (unsigned int *)(v3 + 192), 1) )
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
                  "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                  "rewriteMpPlayStatisticConfig",
                  245);
                v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v38,
                        (const char (*)[17])"strToNum failed ");
                v40 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, v40);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v35 = 0;
              }
              else
              {
                v41 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v41, (unsigned int *)(v3 + 196), 1) )
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
                    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                    "rewriteMpPlayStatisticConfig",
                    250);
                  v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 864),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v43 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v42,
                          (const char (*)[17])"strToNum failed ");
                  v44 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v43, v44);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                  *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v35 = 0;
                }
                else
                {
                  v46 = 0;
                  if ( std::vector<std::string>::size(&config->settle_param) > 2 )
                  {
                    std::vector<std::string>::operator[](&config->settle_param, 2uLL);
                    if ( (unsigned __int8)std::string::empty() != 1 )
                      v46 = 1;
                  }
                  if ( v46
                    && (v47 = std::vector<std::string>::operator[](&config->settle_param, 2uLL),
                        common::tools::StringUtils::strToNum<bool>(v47, (bool *)(v3 + 200), 1)) )
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
                      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                      "rewriteMpPlayStatisticConfig",
                      257);
                    v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 928),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v49 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v48,
                            (const char (*)[17])"strToNum failed ");
                    v50 = std::vector<std::string>::operator[](&config->settle_param, 2uLL);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, v50);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                    *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v35 = 0;
                  }
                  else
                  {
                    v51 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,MpPlaySettleSpecifiedMonsterTakeDamageParam &>(
                            &this->mp_play_settle_param_map,
                            id,
                            (MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v3 + 192),
                            (const unsigned int *)&this->mp_play_settle_param_map,
                            v45);
                    if ( !v51.second )
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
                        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                        "rewriteMpPlayStatisticConfig",
                        263);
                      v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 992),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v53 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              v52,
                              (const char (*)[26])"duplicated mp_settle id, ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
                      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v35 = 0;
                    }
                    else
                    {
                      v35 = 1;
                    }
                  }
                }
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
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "rewriteMpPlayStatisticConfig",
                239);
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v34, (const char (*)[21])byte_1ADC2F00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
              *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v35 = 0;
            }
            *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
            if ( v35 )
              goto LABEL_153;
            v7 = 0;
            break;
          case MP_PLAY_SETTLE_TYPE_MONSTER_KILL_NUM:
            if ( std::vector<std::string>::size(&config->settle_param) )
            {
              v70 = (_DWORD *)(((v3 + 1760) >> 3) + 2147450880);
              *v70 = 0;
              v70[1] = 0;
              MpPlaySettleMonsterKillNumParam::MpPlaySettleMonsterKillNumParam((MpPlaySettleMonsterKillNumParam *const)(v3 + 1760));
              v71 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v71, (unsigned int *)(v3 + 1760), 1) )
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
                  "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                  "rewriteMpPlayStatisticConfig",
                  303);
                v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1376),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v73 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v72,
                        (const char (*)[17])"strToNum failed ");
                v74 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v73, v74);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
                *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v75 = 0;
              }
              else
              {
                if ( std::vector<std::string>::size(&config->settle_param) <= 1 )
                  goto LABEL_163;
                std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                if ( (unsigned __int8)std::string::empty() == 1 )
                  goto LABEL_163;
                *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v3 + 32);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v3 + 1440),
                  ",",
                  (const std::allocator<char> *)(v3 + 32));
                v77 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                v78 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
                        v77,
                        (const std::string *)(v3 + 1440),
                        (std::set<unsigned int> *)(v3 + 1768),
                        0) != 0;
                std::string::~string((void *)(v3 + 1440));
                *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v3 + 32);
                *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
                if ( v78 )
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
                    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                    "rewriteMpPlayStatisticConfig",
                    310);
                  v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1504),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v80 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v79,
                          (const char (*)[17])"strToNum failed ");
                  v81 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, v81);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
                  *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v75 = 0;
                }
                else
                {
LABEL_163:
                  v83 = 0;
                  if ( std::vector<std::string>::size(&config->settle_param) > 2 )
                  {
                    std::vector<std::string>::operator[](&config->settle_param, 2uLL);
                    if ( (unsigned __int8)std::string::empty() != 1 )
                      v83 = 1;
                  }
                  if ( v83
                    && (v84 = std::vector<std::string>::operator[](&config->settle_param, 2uLL),
                        common::tools::StringUtils::strToNum<bool>(v84, (bool *)(v3 + 1816), 1)) )
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
                      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                      "rewriteMpPlayStatisticConfig",
                      318);
                    v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1568),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v86 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                            v85,
                            (const char (*)[17])"strToNum failed ");
                    v87 = std::vector<std::string>::operator[](&config->settle_param, 2uLL);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, v87);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
                    *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v75 = 0;
                  }
                  else
                  {
                    v88 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,MpPlaySettleMonsterKillNumParam &>(
                            &this->mp_play_settle_param_map,
                            id,
                            (MpPlaySettleMonsterKillNumParam *)(v3 + 1760),
                            (const unsigned int *)&this->mp_play_settle_param_map,
                            v82);
                    if ( !v88.second )
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
                        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                        "rewriteMpPlayStatisticConfig",
                        324);
                      v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 1632),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v90 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              v89,
                              (const char (*)[26])"duplicated mp_settle id, ");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v90, id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
                      *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      v2 = -1;
                      v75 = 0;
                    }
                    else
                    {
                      v75 = 1;
                    }
                  }
                }
              }
              MpPlaySettleMonsterKillNumParam::~MpPlaySettleMonsterKillNumParam((MpPlaySettleMonsterKillNumParam *const)(v3 + 1760));
              v69 = v75 != 0;
            }
            else
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
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "rewriteMpPlayStatisticConfig",
                297);
              v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1312),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v68, (const char (*)[21])byte_1ADC2E40);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
              *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v69 = 0;
            }
            v91 = (_DWORD *)(((v3 + 1760) >> 3) + 2147450880);
            *v91 = -117901064;
            v91[1] = -117901064;
            if ( v69 )
              goto LABEL_153;
            v7 = 0;
            break;
          case MP_PLAY_SETTLE_TYPE_MONSTER_KILLER:
            if ( std::vector<std::string>::size(&config->settle_param) > 1 )
            {
              *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 160, id);
              *(_DWORD *)(v3 + 160) = 0;
              if ( *(_BYTE *)(((v3 + 164) >> 3) + 0x7FFF8000) != 0
                && (char)(((v3 - 92) & 7) + 3) >= *(_BYTE *)(((v3 + 164) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store4(v3 + 164, (((_BYTE)v3 - 92) & 7u) + 3);
              }
              *(_DWORD *)(v3 + 164) = 0;
              v56 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v56, (unsigned int *)(v3 + 160), 1) )
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
                  "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                  "rewriteMpPlayStatisticConfig",
                  278);
                v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1120),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v58 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v57,
                        (const char (*)[17])"strToNum failed ");
                v59 = std::vector<std::string>::operator[](&config->settle_param, 0LL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v58, v59);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
                *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v55 = 0;
              }
              else
              {
                v60 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                if ( common::tools::StringUtils::strToNum<unsigned int>(v60, (unsigned int *)(v3 + 164), 1) )
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
                    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                    "rewriteMpPlayStatisticConfig",
                    283);
                  v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 1184),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v63 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                          v62,
                          (const char (*)[17])"strToNum failed ");
                  v64 = std::vector<std::string>::operator[](&config->settle_param, 1uLL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, v64);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
                  *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v55 = 0;
                }
                else
                {
                  v65 = std::unordered_map<unsigned int,std::any>::emplace<unsigned int const&,MpPlaySettleSpecifiedMonsterKillerParam &>(
                          &this->mp_play_settle_param_map,
                          id,
                          (MpPlaySettleSpecifiedMonsterKillerParam *)(v3 + 160),
                          (const unsigned int *)&this->mp_play_settle_param_map,
                          v61);
                  if ( !v65.second )
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
                      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                      "rewriteMpPlayStatisticConfig",
                      288);
                    v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 1248),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v67 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                            v66,
                            (const char (*)[26])"duplicated mp_settle id, ");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
                    *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v55 = 0;
                  }
                  else
                  {
                    v55 = 1;
                  }
                }
              }
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
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "rewriteMpPlayStatisticConfig",
                272);
              v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1056),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v54, (const char (*)[21])byte_1ADC2F00);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
              *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v55 = 0;
            }
            *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
            if ( v55 )
            {
LABEL_153:
              std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false> *const)(v3 + 64));
              continue;
            }
            v7 = 0;
            break;
          default:
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
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "rewriteMpPlayStatisticConfig",
              330);
            v92 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1696),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v93 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v92,
                    (const char (*)[29])byte_1ADC2F40);
            common::milog::MiLogStream::operator<<<data::MpPlayerSettleType,(data::MpPlayerSettleType*)0>(
              v93,
              &config->settle_type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1696));
            v2 = -1;
            v7 = 0;
            break;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "rewriteMpPlayStatisticConfig",
          183);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 224),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v6, (const char (*)[19])"unkown settle type");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
        v2 = -1;
        v7 = 0;
      }
    }
    else
    {
      v7 = 1;
    }
    break;
  }
  if ( v7 == 1 )
    v2 = 0;
  if ( v100 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862730) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450912 - (((_DWORD)v5 + 2147450920) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF80D8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E0) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1856LL, v100);
  }
  return v2;
};

// Line 338: range 0000000014615A8E-0000000014615E38
int32_t __cdecl MpPlayExcelConfigMgr::rewriteMpPlayScoreConfig(
        MpPlayExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MpPlayScoreExcelConfig **v6; // r8
  std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*> *p_mp_play_score_map; // rcx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,data::MpPlayScoreExcelConfig*>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  int32_t result; // eax
  data::MpPlayScoreExcelConfigVec *__for_range; // [rsp+10h] [rbp-100h]
  data::MpPlayScoreExcelConfig *score_config; // [rsp+18h] [rbp-F8h]
  char v15[240]; // [rsp+20h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:339 64 8 13 __for_end:339 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::rewriteMpPlayScoreConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->mp_play_score_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::vector<data::MpPlayScoreExcelConfig>::iterator *)(v3 + 32) = std::vector<data::MpPlayScoreExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::MpPlayScoreExcelConfig>::iterator *)(v3 + 64) = std::vector<data::MpPlayScoreExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<data::MpPlayScoreExcelConfig *,std::vector<data::MpPlayScoreExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig*,std::vector<data::MpPlayScoreExcelConfig> > *)(v3 + 32),
            (const __gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig*,std::vector<data::MpPlayScoreExcelConfig> > *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_18;
    }
    score_config = __gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig *,std::vector<data::MpPlayScoreExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig*,std::vector<data::MpPlayScoreExcelConfig> > *const)(v3 + 32));
    p_mp_play_score_map = &this->mp_play_score_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(_QWORD *)(v3 + 96) = score_config;
    v8 = std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig *>::emplace<data::MpPlayType &,data::MpPlayScoreExcelConfig *>(
           p_mp_play_score_map,
           &score_config->play_type,
           (data::MpPlayScoreExcelConfig **)(v3 + 96),
           (data::MpPlayType *)p_mp_play_score_map,
           v6);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8.second )
      break;
    __gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig *,std::vector<data::MpPlayScoreExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::MpPlayScoreExcelConfig*,std::vector<data::MpPlayScoreExcelConfig> > *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
    "rewriteMpPlayScoreConfig",
    343);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v9, (const char (*)[22])"duplicated play_type:");
  common::milog::MiLogStream::operator<<<data::MpPlayType,(data::MpPlayType*)0>(v10, &score_config->play_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v11 = 0;
LABEL_18:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
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

// Line 351: range 0000000014615E3A-00000000146167AA
int32_t __cdecl MpPlayExcelConfigMgr::checkMpPlayMatchConfig(
        const MpPlayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::MpPlayType *p_play_type; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1A4h]
  data::MpPlayMatchExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false,false>::reference v23; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::MpPlayMatchExcelConfig> >::type *play_id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayMatchExcelConfig> >::type *match_config; // [rsp+38h] [rbp-188h]
  char v26[384]; // [rsp+40h] [rbp-180h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:353 64 8 13 __for_end:353 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::checkMpPlayMatchConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  ret = 0;
  __for_range = &this->mp_play_match_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayMatchExcelConfig>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MpPlayMatchExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayMatchExcelConfig>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MpPlayMatchExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false> *)(v2 + 64)) )
  {
    v23 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false,false> *const)(v2 + 32));
    play_id = std::get<0ul,unsigned int const,data::MpPlayMatchExcelConfig>(v23);
    match_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayMatchExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MpPlayMatchExcelConfig>(v23);
    p_play_type = &match_config->play_type;
    if ( *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_play_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_play_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_play_type);
    }
    if ( match_config->play_type == MP_PLAY_NONE )
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayMatchConfig",
        358);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])"play_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, play_id);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])byte_1ADC3180);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&match_config->min_players >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config->min_players >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config->min_players);
    }
    if ( !match_config->min_players )
      goto LABEL_22;
    if ( *(_BYTE *)(((unsigned __int64)&match_config->max_players >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&match_config->max_players >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&match_config->max_players);
    }
    if ( match_config->max_players > 4 )
    {
LABEL_22:
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayMatchConfig",
        363);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])"play_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, play_id);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v11, (const char (*)[25])byte_1ADC31C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
            &this->mp_play_config_map,
            play_id) )
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayMatchConfig",
        369);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])"play_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, play_id);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v14, (const char (*)[46])byte_1ADC3200);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&match_config->settle_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&match_config->settle_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&match_config->settle_type);
    }
    if ( match_config->settle_type != MP_PLAY_SETTLE_OLD )
    {
      p_exhibition_config_mgr = &txt_config_mgr->exhibition_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&match_config->series_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)match_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config->series_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&match_config->series_id);
      }
      if ( !data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(
              p_exhibition_config_mgr,
              match_config->series_id) )
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
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "checkMpPlayMatchConfig",
          376);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])"play_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, play_id);
        v19 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v18, (const char (*)[41])byte_1ADC3260);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &match_config->series_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayMatchExcelConfig>,false,false> *const)(v2 + 32));
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

// Line 384: range 00000000146167AC-0000000014618D84
int32_t __cdecl MpPlayExcelConfigMgr::checkMpPlayGroupConfig(
        const MpPlayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t DefaultWorldMainSceneId; // edx
  char v7; // al
  __int64 v8; // rsi
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  char *v13; // rsi
  unsigned int *v14; // rax
  int *v15; // rdx
  int v16; // ecx
  char v17; // al
  __int64 v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  uint32_t born_config_id; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t reborn_config_id; // edx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  uint32_t safe_config_id; // edx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  common::milog::MiLogStream *v39; // rax
  int v40; // eax
  uint32_t reward_config_id; // edx
  char v42; // al
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  uint32_t general_reward_config_id; // edx
  char v47; // al
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  const MpPlayExcelConfigMgr *v60; // rcx
  __int64 play_id; // rsi
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  int v66; // edx
  data::ItemLimitType DropLimitType; // esi
  char v68; // al
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-5A0h]
  int32_t ret; // [rsp+14h] [rbp-58Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-588h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+20h] [rbp-580h]
  data::MpPlayGroupExcelConfigMap *__for_range; // [rsp+28h] [rbp-578h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::reference v85; // [rsp+30h] [rbp-570h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayGroupExcelConfig> >::type *entry_config; // [rsp+40h] [rbp-560h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-558h]
  const data::MpPlayMatchExcelConfig *mp_player_match_config_ptr; // [rsp+50h] [rbp-550h]
  const std::vector<data::MpCrucibleRewardConfig> *__for_range_1; // [rsp+58h] [rbp-548h]
  const data::MpCrucibleRewardConfig *reward_config; // [rsp+60h] [rbp-540h]
  const GroupInfoScriptConfig *group_info_config_ptr; // [rsp+68h] [rbp-538h]
  char v92[1328]; // [rsp+70h] [rbp-530h] BYREF

  txt_config_mgra = txt_config_mgr;
  v3 = (unsigned __int64)v92;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1280LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 32 4 12 scene_id:386 48 4 12 group_id:398 64 8 15 __for_begin:395 96 8 13 __for_end:395 128 8"
                        " 15 __for_begin:398 160 8 13 __for_end:398 192 8 15 __for_begin:494 224 8 13 __for_end:494 256 3"
                        "2 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32"
                        " 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 "
                        "9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::checkMpPlayGroupConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
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
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  DefaultWorldMainSceneId = TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v7 != 0;
    __asan_report_store4(v3 + 32, txt_config_mgr);
  }
  *(_DWORD *)(v3 + 32) = DefaultWorldMainSceneId;
  v8 = *(unsigned int *)(v3 + 32);
  scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, v8);
  if ( !scene_config_ptr )
  {
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "checkMpPlayGroupConfig",
      390);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])"scene_id: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1AD7AF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
    v2 = -1;
    goto LABEL_181;
  }
  ret = 0;
  __for_range = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, v8);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v8);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v12 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 96)) )
    {
      v40 = 1;
      goto LABEL_179;
    }
    v85 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 64));
    std::get<0ul,unsigned int const,data::MpPlayGroupExcelConfig>(v85);
    entry_config = (std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayGroupExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MpPlayGroupExcelConfig>(v85);
    __for_range_0 = &entry_config->group_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v12);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v13 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
        break;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v14 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v15 = (int *)v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = *v15;
      v17 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v13) = v17 != 0;
        __asan_report_store4(v3 + 48, v13);
      }
      *(_DWORD *)(v3 + 48) = v16;
      v18 = *(unsigned int *)(v3 + 48);
      group_info_config_ptr = SceneScriptConfig::findGroupInfoConfig(scene_config_ptr, v18);
      if ( group_info_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_info_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&group_info_config_ptr->is_dynamic_load, v18, &group_info_config_ptr->is_dynamic_load);
        if ( !group_info_config_ptr->is_dynamic_load )
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
            "./src/txt_data_manual/MpPlayExcelConfig.cpp",
            "checkMpPlayGroupConfig",
            409);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])"group_id: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v24, (const char (*)[33])byte_1ADC3500);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "checkMpPlayGroupConfig",
          403);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])"group_id: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->born_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->born_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->born_config_id);
    }
    born_config_id = entry_config->born_config_id;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->born_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->born_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->born_group_id);
    }
    if ( MpPlayExcelConfigMgr::checkGroupPointValid(this, entry_config->born_group_id, born_config_id, txt_config_mgra) )
    {
      ret = -1;
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        419);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v27 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v26, (const char (*)[25])byte_1ADC3560);
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &entry_config->born_config_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reborn_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->reborn_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->reborn_config_id);
    }
    reborn_config_id = entry_config->reborn_config_id;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reborn_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->reborn_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->reborn_group_id);
    }
    if ( MpPlayExcelConfigMgr::checkGroupPointValid(
           this,
           entry_config->reborn_group_id,
           reborn_config_id,
           txt_config_mgra) )
    {
      ret = -1;
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        424);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 512),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v31 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v30, (const char (*)[25])byte_1ADC35A0);
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &entry_config->born_config_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
      *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->safe_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->safe_group_id);
    }
    if ( entry_config->safe_group_id )
      goto LABEL_59;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->safe_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->safe_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->safe_config_id);
    }
    if ( entry_config->safe_config_id )
    {
LABEL_59:
      if ( *(_BYTE *)(((unsigned __int64)&entry_config->safe_config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entry_config - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->safe_config_id >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(&entry_config->safe_config_id);
      }
      safe_config_id = entry_config->safe_config_id;
      if ( *(_BYTE *)(((unsigned __int64)&entry_config->safe_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config->safe_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config->safe_group_id);
      }
      if ( MpPlayExcelConfigMgr::checkGroupPointValid(
             this,
             entry_config->safe_group_id,
             safe_config_id,
             txt_config_mgra) )
      {
        ret = -1;
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
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "checkMpPlayGroupConfig",
          431);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 576),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v34, (const char (*)[28])byte_1ADC35E0);
        v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, &entry_config->safe_group_id);
        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])byte_1AD7AF20);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
        *(_DWORD *)(((v3 + 576) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    v37 = ((_BYTE)entry_config + 52) & 7;
    v38 = (*(_BYTE *)(((unsigned __int64)&entry_config->is_direct_to_bag >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&entry_config->is_direct_to_bag >> 3) + 0x7FFF8000));
    if ( (_BYTE)v38 )
      __asan_report_load1(&entry_config->is_direct_to_bag, v37, v38);
    if ( !entry_config->is_direct_to_bag )
      break;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->reward_config_id);
    }
    if ( !entry_config->reward_config_id
      && *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->general_reward_config_id);
      break;
    }
LABEL_90:
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->reward_config_id);
    }
    if ( !entry_config->reward_config_id )
      goto LABEL_97;
    reward_config_id = entry_config->reward_config_id;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->reward_group_id);
    }
    if ( MpPlayExcelConfigMgr::checkGroupPointValid(
           this,
           entry_config->reward_group_id,
           reward_config_id,
           txt_config_mgra) )
    {
      v42 = 1;
    }
    else
    {
LABEL_97:
      v42 = 0;
    }
    if ( v42 )
    {
      ret = -1;
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        457);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 704),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v44 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v43, (const char (*)[25])byte_1ADC3680);
      v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &entry_config->reward_config_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v45, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
      *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->general_reward_config_id);
    }
    if ( !entry_config->general_reward_config_id )
      goto LABEL_109;
    general_reward_config_id = entry_config->general_reward_config_id;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->reward_group_id);
    }
    if ( MpPlayExcelConfigMgr::checkGroupGadgetValid(
           this,
           entry_config->reward_group_id,
           general_reward_config_id,
           txt_config_mgra) )
    {
      v47 = 1;
    }
    else
    {
LABEL_109:
      v47 = 0;
    }
    if ( v47 )
    {
      ret = -1;
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        463);
      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v49 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v48, (const char (*)[23])byte_1ADC36C0);
      v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v49,
              &entry_config->general_reward_config_id);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
      *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( std::vector<float>::size(&entry_config->center_pos_list) != 3 )
    {
      ret = -1;
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        470);
      v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 832),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v52 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])"play_id:");
      v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, &entry_config->play_id);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v53, (const char (*)[22])byte_1ADC3700);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
      *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( std::vector<float>::size(&entry_config->target_pos_list) != 3 )
    {
      ret = -1;
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        476);
      v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 896),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v55 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v54, (const char (*)[9])"play_id:");
      v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &entry_config->play_id);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v56, (const char (*)[16])byte_1ADC3740);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
      *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
    }
    if ( std::vector<data::MpCrucibleRewardConfig>::empty(&entry_config->reward_vec) )
    {
      ret = -1;
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 960, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 960),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        482);
      v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 960),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v58 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v57, (const char (*)[17])byte_1ADC3780);
      v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &entry_config->play_id);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v59, (const char (*)[19])byte_1ADC37C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
      *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
    }
    v60 = this;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->play_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->play_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->play_id);
    }
    play_id = entry_config->play_id;
    mp_player_match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(v60, play_id);
    if ( mp_player_match_config_ptr )
    {
      __for_range_1 = &entry_config->reward_vec;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, play_id);
      *(std::vector<data::MpCrucibleRewardConfig>::const_iterator *)(v3 + 192) = std::vector<data::MpCrucibleRewardConfig>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, play_id);
      *(std::vector<data::MpCrucibleRewardConfig>::const_iterator *)(v3 + 224) = std::vector<data::MpCrucibleRewardConfig>::end(__for_range_1);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::MpCrucibleRewardConfig const*,std::vector<data::MpCrucibleRewardConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::MpCrucibleRewardConfig*,std::vector<data::MpCrucibleRewardConfig> > *)(v3 + 192),
                (const __gnu_cxx::__normal_iterator<const data::MpCrucibleRewardConfig*,std::vector<data::MpCrucibleRewardConfig> > *)(v3 + 224)) )
        {
          v66 = 1;
          goto LABEL_175;
        }
        reward_config = __gnu_cxx::__normal_iterator<data::MpCrucibleRewardConfig const*,std::vector<data::MpCrucibleRewardConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MpCrucibleRewardConfig*,std::vector<data::MpCrucibleRewardConfig> > *const)(v3 + 192));
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_config->drop_id);
        }
        if ( reward_config->drop_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&reward_config->reward_id);
          }
          if ( reward_config->reward_id )
            break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_config->drop_id);
        }
        if ( !reward_config->drop_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)reward_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&reward_config->reward_id);
          }
          if ( !reward_config->reward_id )
            break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_config->drop_id);
        }
        if ( !reward_config->drop_id )
          goto LABEL_162;
        if ( *(_BYTE *)(((unsigned __int64)&mp_player_match_config_ptr->play_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)mp_player_match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mp_player_match_config_ptr->play_type >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4(&mp_player_match_config_ptr->play_type);
        }
        DropLimitType = MpPlayExcelConfigMgr::getDropLimitType(mp_player_match_config_ptr->play_type);
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&reward_config->drop_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&reward_config->drop_id);
        }
        if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                                txt_config_mgra,
                                reward_config->drop_id,
                                DropLimitType) != 1 )
          v68 = 1;
        else
LABEL_162:
          v68 = 0;
        if ( v68 )
        {
          ret = -1;
          *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1152, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1152),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MpPlayExcelConfig.cpp",
            "checkMpPlayGroupConfig",
            505);
          v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1152),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v70 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v69, (const char (*)[9])"play_id:");
          v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &entry_config->play_id);
          v72 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v71, (const char (*)[17])byte_1ADC38E0);
          v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &reward_config->drop_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v73, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
          *(_DWORD *)(((v3 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        }
        if ( *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)reward_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&reward_config->reward_id >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&reward_config->reward_id);
        }
        if ( reward_config->reward_id )
        {
          ret = -1;
          *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1216, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1216),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MpPlayExcelConfig.cpp",
            "checkMpPlayGroupConfig",
            510);
          v74 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1216),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v75 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v74, (const char (*)[9])"play_id:");
          v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &entry_config->play_id);
          v77 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v76, (const char (*)[19])byte_1ADC3920);
          v78 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &reward_config->reward_id);
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v78, (const char (*)[7])byte_1AD7AF20);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
          *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<data::MpCrucibleRewardConfig const*,std::vector<data::MpCrucibleRewardConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MpCrucibleRewardConfig*,std::vector<data::MpCrucibleRewardConfig> > *const)(v3 + 192));
      }
      *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1088, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1088),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        499);
      v65 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1088),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v65, (const char (*)[38])byte_1ADC3880);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
      *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v66 = 0;
LABEL_175:
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      if ( v66 != 1 )
      {
        v40 = 0;
        goto LABEL_179;
      }
    }
    else
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpPlayGroupConfig",
        488);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1024),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v63 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v62, (const char (*)[11])"player_id:");
      v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &entry_config->play_id);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v64, (const char (*)[18])byte_1ADC3840);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
      *(_DWORD *)(((v3 + 1024) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)entry_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3)
                                                                + 0x7FFF8000) )
  {
    __asan_report_load4(&entry_config->reward_config_id);
  }
  if ( !entry_config->reward_config_id )
    goto LABEL_187;
  if ( *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&entry_config->general_reward_config_id);
  }
  if ( !entry_config->general_reward_config_id )
  {
LABEL_187:
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)entry_config - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config->reward_config_id >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&entry_config->reward_config_id);
    }
    if ( entry_config->reward_config_id )
      goto LABEL_90;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config->general_reward_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config->general_reward_config_id);
    }
    if ( entry_config->general_reward_config_id )
      goto LABEL_90;
  }
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
    "./src/txt_data_manual/MpPlayExcelConfig.cpp",
    "checkMpPlayGroupConfig",
    449);
  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 640),
          (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v39, (const char (*)[37])byte_1ADC3620);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
  v2 = -1;
  v40 = 0;
LABEL_179:
  if ( v40 == 1 )
    v2 = ret;
LABEL_181:
  if ( v92 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862743) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450964 - (((_DWORD)v5 + 2147450972) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1280LL, v92);
  }
  return v2;
};

// Line 518: range 0000000014618D86-000000001461B7F9
int32_t __cdecl MpPlayExcelConfigMgr::checkMpStatisticConfig(
        const MpPlayExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::any> *p_mp_play_settle_param_map; // rdx
  std::unordered_map<unsigned int,std::any> *v7; // rdx
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  std::any *p_second; // rcx
  char v14; // al
  const MpPlayExcelConfigMgr *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // edx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::any *v21; // rdx
  const MpPlayExcelConfigMgr *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  std::any *v28; // rsi
  const LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // eax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  _DWORD *v37; // rax
  std::any *v38; // rsi
  const LuaConfigMgr *v39; // rcx
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  _DWORD *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  std::any *v46; // rdx
  const LuaConfigMgr *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // eax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  int v59; // eax
  int v61; // [rsp+8h] [rbp-788h]
  data::MpPlayStatisticConfigMap *__for_range; // [rsp+38h] [rbp-758h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::reference v64; // [rsp+40h] [rbp-750h]
  std::tuple_element<0,std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *stat_id; // [rsp+48h] [rbp-748h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *config; // [rsp+50h] [rbp-740h]
  const HK4EDesignConfig *design_config_1; // [rsp+58h] [rbp-738h]
  const GroupScriptConfig *group_script_config_ptr_1; // [rsp+60h] [rbp-730h]
  const HK4EDesignConfig *design_config_0; // [rsp+70h] [rbp-720h]
  const HK4EDesignConfig *design_config; // [rsp+88h] [rbp-708h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+90h] [rbp-700h]
  char v72[1744]; // [rsp+C0h] [rbp-6D0h] BYREF

  v3 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1696LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "32 48 4 9 param:533 64 8 15 __for_begin:519 96 8 13 __for_end:519 128 8 14 param_iter:521 160 8 "
                        "9 <unknown> 192 8 9 <unknown> 224 8 9 param:561 256 8 9 <unknown> 288 8 9 <unknown> 320 8 9 <unk"
                        "nown> 352 8 9 param:652 384 8 9 <unknown> 416 12 9 param:588 448 32 9 <unknown> 512 32 9 <unknow"
                        "n> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown"
                        "> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkno"
                        "wn> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <u"
                        "nknown> 1536 32 9 <unknown> 1600 64 9 param:623";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::checkMpStatisticConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
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
  v5[536862732] = -218959360;
  v5[536862733] = -219020288;
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
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862772] = -202116109;
  __for_range = &this->mp_play_statistic_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayStatisticConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false> *)(v3 + 96)) )
  {
    v64 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false> *const)(v3 + 64));
    stat_id = std::get<0ul,unsigned int const,data::MpPlayStatisticConfig>(v64);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MpPlayStatisticConfig> >::type *)std::get<1ul,unsigned int const,data::MpPlayStatisticConfig>(v64);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_mp_play_settle_param_map = &this->mp_play_settle_param_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::any>::find(
                                                                                 p_mp_play_settle_param_map,
                                                                                 stat_id);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->mp_play_settle_param_map;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, stat_id);
    *(std::unordered_map<unsigned int,std::any>::const_iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::any>::end(v7);
    v8 = (char *)(v3 + 160);
    v9 = std::__detail::operator==<std::pair<unsigned int const,std::any>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v3 + 128),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::any>,false> *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkMpStatisticConfig",
        524);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              v10,
              (const char (*)[45])"mp_play_settle_param_map not found, stat_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, stat_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
      *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->settle_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->settle_type);
      }
      switch ( config->settle_type )
      {
        case MP_PLAY_SETTLE_TYPE_WATCHER_FINISH:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v3 + 128))->second;
          v14 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v14 != 0 && v14 <= 3 )
          {
            LOBYTE(v8) = v14 != 0;
            __asan_report_store4(v3 + 48, v8);
          }
          *(MpPlaySettleWatcherFinishParam *)(v3 + 48) = std::any_cast<MpPlaySettleWatcherFinishParam>(p_second);
          v15 = this;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          if ( data::MpPlayExcelConfigMgrBase::findMpPlayWatcherConfig(v15, *(unsigned int *)(v3 + 48)) )
          {
            v18 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 512, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 512),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              537);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v16,
                    (const char (*)[33])byte_1ADC3C80);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
            *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v18 = 0;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v18 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->client_sync_type);
            }
            if ( (unsigned int)(config->client_sync_type - 1) <= 1 )
              goto LABEL_119;
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
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              552);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v19,
                    (const char (*)[56])byte_1ADC3CE0);
            common::milog::MiLogStream::operator<<<data::MpPlayerSettleSyncType,(data::MpPlayerSettleSyncType*)0>(
              v20,
              &config->client_sync_type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
            *(_DWORD *)(((v3 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 0;
          }
          break;
        case MP_PLAY_SETTLE_TYPE_WATCHER_PROGRESS:
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
          v21 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v3 + 128))->second;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 224, v8);
          *(MpPlaySettleWatcherProgressParam *)(v3 + 224) = std::any_cast<MpPlaySettleWatcherProgressParam>(v21);
          v22 = this;
          if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 224);
          if ( data::MpPlayExcelConfigMgrBase::findMpPlayWatcherConfig(v22, *(unsigned int *)(v3 + 224)) )
          {
            v25 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              565);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 704),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v23,
                    (const char (*)[33])byte_1ADC3C80);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v24,
              (const unsigned int *)(v3 + 224));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
            *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v25 = 0;
          }
          *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
          if ( v25 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->client_sync_type);
            }
            if ( config->client_sync_type == MP_PLAY_SETTLE_SYNC_TYPE_WATCHER_PROGRESS )
              goto LABEL_119;
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
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              579);
            v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v27 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v26,
                    (const char (*)[56])byte_1ADC3CE0);
            common::milog::MiLogStream::operator<<<data::MpPlayerSettleSyncType,(data::MpPlayerSettleSyncType*)0>(
              v27,
              &config->client_sync_type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
            *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 0;
          }
          break;
        case MP_PLAY_SETTLE_TYPE_MONSTER_TAKE_DEMAGE:
          *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 1024;
          v28 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v3 + 128))->second;
          if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 427) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 11) & 7) >= *(_BYTE *)(((v3 + 427) >> 3) + 0x7FFF8000) )
          {
            v28 = (std::any *)12;
            __asan_report_store_n(v3 + 416, 12LL);
          }
          *(MpPlaySettleSpecifiedMonsterTakeDamageParam *)(v3 + 416) = std::any_cast<MpPlaySettleSpecifiedMonsterTakeDamageParam>(v28);
          design_config = TxtConfigMgr::getConfig(txt_config_mgr);
          TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
          p_lua_config_mgr = &design_config->lua_config_mgr;
          if ( *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 416) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 416);
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, *(_DWORD *)(v3 + 416));
          if ( group_script_config_ptr )
          {
            if ( *(_BYTE *)(((v3 + 420) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 - 96 + 4) & 7) + 3) >= *(_BYTE *)(((v3 + 420) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v3 + 420);
            }
            if ( GroupScriptConfig::findMonsterConfig(group_script_config_ptr, *(unsigned int *)(v3 + 420)) )
            {
              v33 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "checkMpStatisticConfig",
                599);
              v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 960),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v35 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v34,
                      (const char (*)[11])"config_id:");
              v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v35,
                      (const unsigned int *)(v3 + 420));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v36, (const char (*)[7])byte_1AD7AF20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
              *(_DWORD *)(((v3 + 960) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v33 = 0;
            }
          }
          else
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
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              594);
            v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])"group_id:");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v3 + 416));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v32, (const char (*)[7])byte_1AD7AF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
            *(_DWORD *)(((v3 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v33 = 0;
          }
          *(_WORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -1800;
          if ( v33 )
            goto LABEL_119;
          v12 = 0;
          break;
        case MP_PLAY_SETTLE_TYPE_MONSTER_KILL_NUM:
          v37 = (_DWORD *)(((v3 + 1600) >> 3) + 2147450880);
          *v37 = 0;
          v37[1] = 0;
          v38 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v3 + 128))->second;
          if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
          {
            v38 = (std::any *)64;
            __asan_report_store_n(v3 + 1600, 64LL);
          }
          std::any_cast<MpPlaySettleMonsterKillNumParam>((MpPlaySettleMonsterKillNumParam *)(v3 + 1600), v38);
          design_config_0 = TxtConfigMgr::getConfig(txt_config_mgr);
          TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
          v39 = &design_config_0->lua_config_mgr;
          if ( *(_BYTE *)(((v3 + 1600) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 1600) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 1600);
          if ( LuaConfigMgr::findGroupScriptConfig(v39, *(_DWORD *)(v3 + 1600)) )
          {
            v61 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1088),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              629);
            v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1088),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v41 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v40, (const char (*)[10])"group_id:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v3 + 1600));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v42, (const char (*)[7])byte_1AD7AF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
            *(_DWORD *)(((v3 + 1088) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v61 = 0;
          }
          MpPlaySettleMonsterKillNumParam::~MpPlaySettleMonsterKillNumParam((MpPlaySettleMonsterKillNumParam *const)(v3 + 1600));
          v43 = (_DWORD *)(((v3 + 1600) >> 3) + 2147450880);
          *v43 = -117901064;
          v43[1] = -117901064;
          if ( v61 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->client_sync_type);
            }
            if ( config->client_sync_type == MP_PLAY_SETTLE_SYNC_TYPE_STATISTIC_VALUE )
              goto LABEL_119;
            *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1216, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1216),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              643);
            v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1216),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v45 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v44,
                    (const char (*)[56])byte_1ADC3CE0);
            common::milog::MiLogStream::operator<<<data::MpPlayerSettleSyncType,(data::MpPlayerSettleSyncType*)0>(
              v45,
              &config->client_sync_type);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
            *(_DWORD *)(((v3 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 0;
          }
          break;
        case MP_PLAY_SETTLE_TYPE_MONSTER_KILLER:
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          v46 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::any>,false,false> *const)(v3 + 128))->second;
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 352, v8);
          *(MpPlaySettleSpecifiedMonsterKillerParam *)(v3 + 352) = std::any_cast<MpPlaySettleSpecifiedMonsterKillerParam>(v46);
          design_config_1 = TxtConfigMgr::getConfig(txt_config_mgr);
          TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
          v47 = &design_config_1->lua_config_mgr;
          if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 352);
          group_script_config_ptr_1 = LuaConfigMgr::findGroupScriptConfig(v47, *(_DWORD *)(v3 + 352));
          if ( group_script_config_ptr_1 )
          {
            if ( *(_BYTE *)(((v3 + 356) >> 3) + 0x7FFF8000) != 0
              && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 356) >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v3 + 356);
            }
            if ( GroupScriptConfig::findMonsterConfig(group_script_config_ptr_1, *(unsigned int *)(v3 + 356)) )
            {
              v51 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1344, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1344),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "checkMpStatisticConfig",
                663);
              v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1344),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v52,
                      (const char (*)[11])"config_id:");
              v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v53,
                      (const unsigned int *)(v3 + 356));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v54, (const char (*)[7])byte_1AD7AF20);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
              *(_DWORD *)(((v3 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v51 = 0;
            }
          }
          else
          {
            *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1280, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1280),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/MpPlayExcelConfig.cpp",
              "checkMpStatisticConfig",
              658);
            v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1280),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v48, (const char (*)[10])"group_id:");
            v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v49,
                    (const unsigned int *)(v3 + 352));
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v50, (const char (*)[7])byte_1AD7AF20);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
            *(_DWORD *)(((v3 + 1280) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v51 = 0;
          }
          *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
          if ( v51 == 1 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->client_sync_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->client_sync_type);
            }
            if ( config->client_sync_type == MP_PLAY_SETTLE_SYNC_TYPE_STATISTIC_VALUE )
            {
LABEL_119:
              v12 = 1;
            }
            else
            {
              *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 1472, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 1472),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/MpPlayExcelConfig.cpp",
                "checkMpStatisticConfig",
                677);
              v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 1472),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v56 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      v55,
                      (const char (*)[56])byte_1ADC3CE0);
              common::milog::MiLogStream::operator<<<data::MpPlayerSettleSyncType,(data::MpPlayerSettleSyncType*)0>(
                v56,
                &config->client_sync_type);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
              *(_DWORD *)(((v3 + 1472) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v12 = 0;
            }
          }
          else
          {
            v12 = 0;
          }
          break;
        default:
          *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1536, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1536),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/MpPlayExcelConfig.cpp",
            "checkMpStatisticConfig",
            684);
          v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1536),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v58 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v57, (const char (*)[39])byte_1ADC3D80);
          common::milog::MiLogStream::operator<<<data::MpPlayerSettleType,(data::MpPlayerSettleType*)0>(
            v58,
            &config->settle_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
          *(_DWORD *)(((v3 + 1536) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
          break;
      }
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v59 = 0;
      goto LABEL_124;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayStatisticConfig>,false,false> *const)(v3 + 64));
  }
  v59 = 1;
LABEL_124:
  if ( v59 == 1 )
    v2 = 0;
  if ( v72 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1696LL, v72);
  }
  return v2;
};

// Line 693: range 000000001461B7FA-000000001461BBDE
__int64 __fastcall MpPlayExcelConfigMgr::checkGroupPointValid(
        const MpPlayExcelConfigMgr *const this,
        uint32_t group_id,
        uint32_t config_id,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const HK4EDesignConfig *design_config; // [rsp+30h] [rbp-F0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+38h] [rbp-E8h]
  char v18[224]; // [rsp+40h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 group_id:692 48 4 13 config_id:692 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MpPlayExcelConfigMgr::checkGroupPointValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218959118;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = group_id;
  *(_DWORD *)(v4 + 48) = config_id;
  design_config = TxtConfigMgr::getConfig(txt_config_mgr);
  TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&design_config->lua_config_mgr, *(_DWORD *)(v4 + 32));
  if ( group_script_config_ptr )
  {
    if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, *(unsigned int *)(v4 + 48)) )
    {
      result = 0LL;
    }
    else
    {
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkGroupPointValid",
        704);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "checkGroupPointValid",
      699);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])"group_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 711: range 000000001461BBE0-000000001461BFC4
__int64 __fastcall MpPlayExcelConfigMgr::checkGroupGadgetValid(
        const MpPlayExcelConfigMgr *const this,
        uint32_t group_id,
        uint32_t config_id,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  const HK4EDesignConfig *design_config; // [rsp+30h] [rbp-F0h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+38h] [rbp-E8h]
  char v18[224]; // [rsp+40h] [rbp-E0h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 12 group_id:710 48 4 13 config_id:710 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = MpPlayExcelConfigMgr::checkGroupGadgetValid;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862723] = -218959118;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 32) = group_id;
  *(_DWORD *)(v4 + 48) = config_id;
  design_config = TxtConfigMgr::getConfig(txt_config_mgr);
  TxtConfigMgr::getDefaultWorldMainSceneId(txt_config_mgr);
  group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(&design_config->lua_config_mgr, *(_DWORD *)(v4 + 32));
  if ( group_script_config_ptr )
  {
    if ( GroupScriptConfig::findGadgetConfig(group_script_config_ptr, *(unsigned int *)(v4 + 48)) )
    {
      result = 0LL;
    }
    else
    {
      if ( *(char *)(((v4 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "checkGroupGadgetValid",
        723);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v4 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])"config_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 128));
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "checkGroupGadgetValid",
      717);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v4 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])"group_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])byte_1AD7AF20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
    result = 0xFFFFFFFFLL;
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8014) = 0;
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

// Line 731: range 000000001461BFC6-000000001461C4F8
__int64 __fastcall MpPlayExcelConfigMgr::findMpPlayRewardId(
        const MpPlayExcelConfigMgr *const this,
        __int64 entry_id,
        uint32_t world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MpPlayGroupExcelConfigMap *p_mp_play_group_excel_config_map; // rdx
  data::MpPlayGroupExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<data::MpCrucibleRewardConfig>::const_reference v16; // rax
  std::vector<data::MpCrucibleRewardConfig>::const_reference v17; // rax
  const data::MpPlayGroupExcelConfig *entry_config; // [rsp+18h] [rbp-128h]
  char v20[288]; // [rsp+20h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 entry_id:730 64 8 8 iter:732 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::findMpPlayRewardId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = entry_id;
  p_mp_play_group_excel_config_map = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, entry_id);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::find(
                                                                                                  p_mp_play_group_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 96));
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "findMpPlayRewardId",
      735);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])"entry_id is invalid, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 64));
    entry_config = &v12->second;
    if ( std::vector<data::MpCrucibleRewardConfig>::empty(&v12->second.reward_vec) )
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "findMpPlayRewardId",
        741);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])"entry_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])" reward_vec is empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0LL;
    }
    else if ( world_level >= std::vector<data::MpCrucibleRewardConfig>::size(&entry_config->reward_vec) )
    {
      v17 = std::vector<data::MpCrucibleRewardConfig>::back(&entry_config->reward_vec);
      if ( *(_BYTE *)(((unsigned __int64)&v17->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->drop_id);
      }
      result = v17->drop_id;
    }
    else
    {
      v16 = std::vector<data::MpCrucibleRewardConfig>::operator[](&entry_config->reward_vec, world_level);
      if ( *(_BYTE *)(((unsigned __int64)&v16->drop_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v16->drop_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v16->drop_id);
      }
      result = v16->drop_id;
    }
  }
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 752: range 000000001461C4FA-000000001461C9C0
std::vector<data::MpCrucibleRewardConfig>::const_reference __fastcall MpPlayExcelConfigMgr::findMpPlayRewardConfig(
        const MpPlayExcelConfigMgr *const this,
        __int64 entry_id,
        uint32_t world_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::MpPlayGroupExcelConfigMap *p_mp_play_group_excel_config_map; // rdx
  data::MpPlayGroupExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::vector<data::MpCrucibleRewardConfig>::const_reference result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::pointer v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const data::MpPlayGroupExcelConfig *entry_config; // [rsp+18h] [rbp-128h]
  char v18[288]; // [rsp+20h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 entry_id:751 64 8 8 iter:753 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = MpPlayExcelConfigMgr::findMpPlayRewardConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 48) = entry_id;
  p_mp_play_group_excel_config_map = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, entry_id);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::find(
                                                                                                  p_mp_play_group_excel_config_map,
                                                                                                  (const std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::key_type *)(v3 + 48));
  v7 = &this->mp_play_group_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::MpPlayGroupExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false> *)(v3 + 96));
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
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "findMpPlayRewardConfig",
      756);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v9,
            (const char (*)[22])"entry_id is invalid, ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    result = 0LL;
  }
  else
  {
    v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayGroupExcelConfig>,false,false> *const)(v3 + 64));
    entry_config = &v12->second;
    if ( std::vector<data::MpCrucibleRewardConfig>::empty(&v12->second.reward_vec) )
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
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "findMpPlayRewardConfig",
        763);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])"entry_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])" reward_vec is empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      result = 0LL;
    }
    else if ( world_level >= std::vector<data::MpCrucibleRewardConfig>::size(&entry_config->reward_vec) )
    {
      result = std::vector<data::MpCrucibleRewardConfig>::back(&entry_config->reward_vec);
    }
    else
    {
      result = std::vector<data::MpCrucibleRewardConfig>::operator[](&entry_config->reward_vec, world_level);
    }
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
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

// Line 777: range 000000001461C9C2-000000001461D092
__int64 __fastcall MpPlayExcelConfigMgr::randomOneMpConfigId(
        const MpPlayExcelConfigMgr *const this,
        __int64 mp_play_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_mp_play_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 v13; // rsi
  unsigned int v14; // edx
  char v15; // al
  std::vector<unsigned int>::size_type v16; // r15
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::vector<unsigned int>::const_reference v19; // rax
  unsigned int *v20; // rdx
  std::vector<unsigned int> *entry_id_vec; // [rsp+18h] [rbp-178h]
  char v22[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 4 10 select:790 48 4 14 mp_play_id:776 64 8 8 iter:778 96 8 9 <unknown> 128 32 9 <unknown> "
                        "192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::randomOneMpConfigId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 48) = mp_play_id;
  p_mp_play_config_map = &this->mp_play_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, mp_play_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_mp_play_config_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->mp_play_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
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
      3u,
      "./src/txt_data_manual/MpPlayExcelConfig.cpp",
      "randomOneMpConfigId",
      781);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[12])"mp_play_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" invalid");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0LL;
  }
  else
  {
    entry_id_vec = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64))->second;
    if ( std::vector<unsigned int>::empty(entry_id_vec) )
    {
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
        3u,
        "./src/txt_data_manual/MpPlayExcelConfig.cpp",
        "randomOneMpConfigId",
        787);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[12])"mp_play_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v12,
        (const char (*)[29])" invalid, entry_id_vec empty");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0LL;
    }
    else
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v13 = (unsigned int)std::vector<unsigned int>::size(entry_id_vec) - 1;
      v14 = common::tools::RandomUtils::rand<unsigned int>(0, v13);
      v15 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v15 != 0 && v15 <= 3 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store4(v2 + 32, v13);
      }
      *(_DWORD *)(v2 + 32) = v14;
      v16 = *(unsigned int *)(v2 + 32);
      if ( v16 < std::vector<unsigned int>::size(entry_id_vec) )
      {
        if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 32);
        v19 = std::vector<unsigned int>::operator[](entry_id_vec, *(unsigned int *)(v2 + 32));
        v20 = (unsigned int *)v19;
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v19);
        }
        result = *v20;
      }
      else
      {
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
          3u,
          "./src/txt_data_manual/MpPlayExcelConfig.cpp",
          "randomOneMpConfigId",
          793);
        v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[8])"select:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v18,
          (const char (*)[24])" >= entry_id_vec.size()");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        result = 0LL;
      }
    }
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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

// Line 801: range 000000001461D094-000000001461D22C
bool __fastcall MpPlayExcelConfigMgr::isMpPlayValid(const MpPlayExcelConfigMgr *const this, __int64 mp_play_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_mp_play_config_map; // rdx
  std::unordered_map<unsigned int,std::vector<unsigned int>> *v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 mp_play_id:800 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::isMpPlayValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = mp_play_id;
  p_mp_play_config_map = &this->mp_play_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, mp_play_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(p_mp_play_config_map);
  v6 = &this->mp_play_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, mp_play_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               v6,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  result = std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
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

// Line 807: range 000000001461D22E-000000001461D44B
const std::vector<unsigned int> *__fastcall MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(
        const MpPlayExcelConfigMgr *const this,
        std::vector<unsigned int> *mp_play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_mp_play_watchers_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 14 mp_play_id:806 64 8 8 iter:809 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)mp_play_id;
  if ( !(_BYTE)`guard variable for'MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)::empty_vec
    && __cxa_guard_acquire(&`guard variable for'MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)::empty_vec) )
  {
    std::vector<unsigned int>::vector(&MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)const::empty_vec);
    __cxa_guard_release(&`guard variable for'MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)::empty_vec);
    mp_play_id = &MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)const::empty_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)const::empty_vec,
      &_dso_handle);
  }
  p_mp_play_watchers_map = &this->mp_play_watchers_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, mp_play_id);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_mp_play_watchers_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->mp_play_watchers_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &MpPlayExcelConfigMgr::getBattleWatcherIdByMpPlayId(unsigned int)const::empty_vec;
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

// Line 818: range 000000001461D44C-000000001461D647
__int64 __fastcall MpPlayExcelConfigMgr::findMpPlayIdByGroupId(
        const MpPlayExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_mp_play_group_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v8; // rdx
  unsigned int *p_second; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 group_id:817 64 8 8 iter:819 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::findMpPlayIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_mp_play_group_map = &this->mp_play_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_mp_play_group_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->mp_play_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
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

// Line 830: range 000000001461D648-000000001461D865
const std::unordered_set<unsigned int> *__fastcall MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(
        const MpPlayExcelConfigMgr *const this,
        std::unordered_set<unsigned int> *mp_play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_mp_play_statistic_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v6; // rdx
  bool v7; // al
  const std::unordered_set<unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 mp_play_id:829 64 8 8 iter:832 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = (_DWORD)mp_play_id;
  if ( !(_BYTE)`guard variable for'MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)::empty_set) )
  {
    std::unordered_set<unsigned int>::unordered_set(&MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)::empty_set);
    mp_play_id = &MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::unordered_set<unsigned int>::~unordered_set,
      &MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_mp_play_statistic_map = &this->mp_play_statistic_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, mp_play_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_mp_play_statistic_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->mp_play_statistic_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &MpPlayExcelConfigMgr::getBattleStatisticIdByMpPlayId(unsigned int)const::empty_set;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 64))->second;
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

// Line 841: range 000000001461D866-000000001461DA48
const data::MpPlayScoreExcelConfig *__fastcall MpPlayExcelConfigMgr::findMpPlayScoreConfigByPlayType(
        const MpPlayExcelConfigMgr *const this,
        __int64 play_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*> *p_mp_play_score_map; // rdx
  std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::MpPlayScoreExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayScoreExcelConfig*>,false,false>::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 play_type:840 64 8 8 iter:842 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::findMpPlayScoreConfigByPlayType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = play_type;
  p_mp_play_score_map = &this->mp_play_score_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, play_type);
  *(std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig *>::find(
                                                                                                   p_mp_play_score_map,
                                                                                                   (const std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->mp_play_score_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig*>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::MpPlayScoreExcelConfig *>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,data::MpPlayScoreExcelConfig *>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayScoreExcelConfig*>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MpPlayScoreExcelConfig*>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayScoreExcelConfig *>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::MpPlayScoreExcelConfig*>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
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

// Line 851: range 000000001461DA4A-000000001461DC0B
const std::vector<data::MpPlayAbilityGroupExcelConfig> *__fastcall MpPlayExcelConfigMgr::findAbilityGroupVecByPlayId(
        const MpPlayExcelConfigMgr *const this,
        __int64 play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>> *p_mp_play_ability_group_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::vector<data::MpPlayAbilityGroupExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 play_id:850 64 8 8 iter:852 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MpPlayExcelConfigMgr::findAbilityGroupVecByPlayId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = play_id;
  p_mp_play_ability_group_map = &this->mp_play_ability_group_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, play_id);
  *(std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::find(p_mp_play_ability_group_map, (const std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->mp_play_ability_group_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::MpPlayAbilityGroupExcelConfig>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::MpPlayAbilityGroupExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MpPlayAbilityGroupExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::MpPlayAbilityGroupExcelConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MpPlayAbilityGroupExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::MpPlayAbilityGroupExcelConfig> >,false,false> *const)(v2 + 64))->second;
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

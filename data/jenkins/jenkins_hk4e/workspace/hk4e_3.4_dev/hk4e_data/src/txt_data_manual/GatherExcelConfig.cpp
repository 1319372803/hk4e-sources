// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GatherExcelConfig.cpp

// Line 25: range 0000000014460B88-0000000014460D6B
int32_t __cdecl GatherExcelConfigMgr::rewriteConfig(GatherExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = GatherExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GatherExcelConfigMgr::rewriteGatherExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GatherExcelConfig.cpp",
      "rewriteConfig",
      28);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])"rewriteConfig failed");
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

// Line 36: range 0000000014460D6C-0000000014460F4F
int32_t __cdecl GatherExcelConfigMgr::checkConfig(GatherExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = GatherExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( GatherExcelConfigMgr::checkGatherExcelConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/GatherExcelConfig.cpp",
      "checkConfig",
      39);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])"checkConfig failed");
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

// Line 47: range 0000000014460F50-0000000014461646
int32_t __cdecl GatherExcelConfigMgr::rewriteGatherExcelConfig(
        GatherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::vector<data::GatherExcelConfig> *v7; // rdx
  const std::map<data::GatherSaveType,unsigned int>::key_type *p_save_type; // rdx
  const std::map<data::GatherSaveType,unsigned int>::key_type *v9; // rsi
  char *v10; // rsi
  bool v11; // al
  std::_Rb_tree_const_iterator<std::pair<const data::GatherSaveType,unsigned int> >::pointer v12; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v15; // dl
  std::set<unsigned int> *v16; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int v23; // eax
  int32_t result; // eax
  const std::map<data::GatherSaveType,unsigned int> *refresh_id_map; // [rsp+10h] [rbp-180h]
  data::GatherExcelConfigMap *__for_range; // [rsp+18h] [rbp-178h]
  std::pair<unsigned int const,data::GatherExcelConfig> *p; // [rsp+20h] [rbp-170h]
  std::vector<data::BlockLimit> *__for_range_0; // [rsp+30h] [rbp-160h]
  data::BlockLimit *block_limit; // [rsp+38h] [rbp-158h]
  char v30[336]; // [rsp+40h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 14 __for_begin:49 64 8 12 __for_end:49 96 8 14 __for_begin:52 128 8 12 __for_end:52 160 8"
                        " 7 iter:57 192 8 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GatherExcelConfigMgr::rewriteGatherExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  refresh_id_map = ConstValueExcelConfigMgr::getGatherRefreshIdMap(&txt_config_mgr->const_value_config_mgr);
  __for_range = &this->gather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::GatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GatherExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 64)) )
      break;
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 32));
    __for_range_0 = &p->second.block_limits;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::vector<data::BlockLimit>::iterator *)(v3 + 96) = std::vector<data::BlockLimit>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<data::BlockLimit>::iterator *)(v3 + 128) = std::vector<data::BlockLimit>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::BlockLimit *,std::vector<data::BlockLimit>>(
              (const __gnu_cxx::__normal_iterator<data::BlockLimit*,std::vector<data::BlockLimit> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<data::BlockLimit*,std::vector<data::BlockLimit> > *)(v3 + 128)) )
    {
      block_limit = __gnu_cxx::__normal_iterator<data::BlockLimit *,std::vector<data::BlockLimit>>::operator*((const __gnu_cxx::__normal_iterator<data::BlockLimit*,std::vector<data::BlockLimit> > *const)(v3 + 96));
      v7 = std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::operator[](
             &this->block_gather_vec_map,
             &block_limit->block_id);
      std::vector<data::GatherExcelConfig>::emplace_back<data::GatherExcelConfig&>(
        v7,
        &p->second,
        (data::GatherExcelConfig *)v7);
      __gnu_cxx::__normal_iterator<data::BlockLimit *,std::vector<data::BlockLimit>>::operator++((__gnu_cxx::__normal_iterator<data::BlockLimit*,std::vector<data::BlockLimit> > *const)(v3 + 96));
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_save_type = &p->second.save_type;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 128);
    v9 = p_save_type;
    *(std::map<data::GatherSaveType,unsigned int>::const_iterator *)(v3 + 160) = std::map<data::GatherSaveType,unsigned int>::find(
                                                                                   refresh_id_map,
                                                                                   p_save_type);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v9);
    *(std::map<data::GatherSaveType,unsigned int>::const_iterator *)(v3 + 192) = std::map<data::GatherSaveType,unsigned int>::end(refresh_id_map);
    v10 = (char *)(v3 + 192);
    v11 = std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<const data::GatherSaveType,unsigned int> >::_Self *)(v3 + 160),
            (const std::_Rb_tree_const_iterator<std::pair<const data::GatherSaveType,unsigned int> >::_Self *)(v3 + 192));
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v11 )
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<data::GatherSaveType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::GatherSaveType,unsigned int> > *const)(v3 + 160));
      p_second = &v12->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      second = v12->second;
      v15 = *(_BYTE *)(((unsigned __int64)&p->second.refresh_id >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)((((_BYTE)p + 76) & 7) + 3) >= v15 )
      {
        LOBYTE(v10) = v15 != 0;
        __asan_report_store4(&p->second.refresh_id, v10);
      }
      p->second.refresh_id = second;
    }
    v16 = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
            &this->gadget_to_point_type_map,
            &p->second.gadget_id);
    v17 = std::set<unsigned int>::insert(v16, &p->second.point_type);
    if ( !v17.second )
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
        "./src/txt_data_manual/GatherExcelConfig.cpp",
        "rewriteGatherExcelConfig",
        65);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v18,
              (const char (*)[22])"duplicate point_type:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &p->second.point_type);
      v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])" gadget_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &p->second.gadget_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v22 = 0;
    }
    else
    {
      v22 = 1;
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v22 != 1 )
    {
      v23 = 0;
      goto LABEL_36;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 32));
  }
  v23 = 1;
LABEL_36:
  if ( v23 == 1 )
    v2 = 0;
  result = v2;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 73: range 00000000144616FE-0000000014461B15
int32_t __cdecl GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig(
        GatherExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::MultiStateGatherConfig *M_current; // r14
  data::MultiStateGatherConfig *v6; // rcx
  GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig::<lambda(const data::MultiStateGatherConfig&)> v7; // dl
  int32_t result; // eax
  data::MultiStateGatherExcelConfigMap *__for_range; // [rsp+18h] [rbp-138h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::reference __in; // [rsp+20h] [rbp-130h]
  std::vector<data::MultiStateGatherConfig> *vec; // [rsp+38h] [rbp-118h]
  char v12[272]; // [rsp+40h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:74 64 8 12 __for_end:74 96 8 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknow"
                        "n> 192 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -202116352;
  __for_range = &this->multi_state_gather_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false> *)(v2 + 64)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::MultiStateGatherExcelConfig>(__in);
    vec = &std::get<1ul,unsigned int const,data::MultiStateGatherExcelConfig>(__in)->multi_state_gather_config_list;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 64);
    *(std::vector<data::MultiStateGatherConfig>::iterator *)(v2 + 128) = std::vector<data::MultiStateGatherConfig>::end(vec);
    __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>::__normal_iterator<data::MultiStateGatherConfig*>(
      (__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *const)(v2 + 192),
      (const __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v2 + 128));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    M_current = std::vector<data::MultiStateGatherConfig>::end(vec)._M_current;
    v6 = std::vector<data::MultiStateGatherConfig>::begin(vec)._M_current;
    v7.gap0[0] = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( v7.gap0[0] )
      __asan_report_store8(v2 + 96, v2 + 128);
    *(__gnu_cxx::__normal_iterator<data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v2 + 96) = std::remove_if<__gnu_cxx::__normal_iterator<data::MultiStateGatherConfig *,std::vector<data::MultiStateGatherConfig>>,GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig(TxtConfigMgr &)::{lambda(data::MultiStateGatherConfig const&)#1}>((__gnu_cxx::__normal_iterator<data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >)v6, (__gnu_cxx::__normal_iterator<data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >)M_current, v7);
    __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>::__normal_iterator<data::MultiStateGatherConfig*>(
      (__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *const)(v2 + 160),
      (const __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v2 + 96));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 160);
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v2 + 192);
    std::vector<data::MultiStateGatherConfig>::erase(
      vec,
      *(std::vector<data::MultiStateGatherConfig>::const_iterator *)(v2 + 160),
      *(std::vector<data::MultiStateGatherConfig>::const_iterator *)(v2 + 192));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v12 == (char *)v2 )
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

// Line 79: range 0000000014461648-00000000144616FD
bool __cdecl GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig(TxtConfigMgr &)::{lambda(data::MultiStateGatherConfig const&)#1}::operator()(
        const GatherExcelConfigMgr::rewriteMultiStateGatherExcelConfig::<lambda(const data::MultiStateGatherConfig&)> *const __closure,
        const data::MultiStateGatherConfig *c)
{
  if ( *(_BYTE *)(((unsigned __int64)&c->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&c->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&c->gadget_state);
  }
  if ( c->gadget_state )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&c->item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)c + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&c->item_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&c->item_id);
  }
  return !c->item_id && std::vector<unsigned int>::empty(&c->extra_item_id_vec);
};

// Line 86: range 0000000014461B16-00000000144628B5
int32_t __cdecl GatherExcelConfigMgr::checkGatherExcelConfig(
        GatherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const data::GadgetExcelConfigMgrBase *v6; // rcx
  uint32_t *p_gadget_id; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 item_id; // rsi
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  char *v20; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v21; // rax
  int *v22; // rdx
  int v23; // ecx
  char v24; // al
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  __int64 v34; // rsi
  uint32_t refresh_id; // ecx
  char v36; // al
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // eax
  int32_t result; // eax
  GadgetExcelConfigMgr *gadget_config_mgr; // [rsp+18h] [rbp-268h]
  data::GatherExcelConfigMap *__for_range; // [rsp+20h] [rbp-260h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-258h]
  const unsigned int *gather_id; // [rsp+30h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,data::GatherExcelConfig> >::type *gather_excel_config; // [rsp+38h] [rbp-248h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-238h]
  char v49[560]; // [rsp+50h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 11 item_id:122 48 4 14 refresh_id:137 64 8 14 __for_begin:89 96 8 12 __for_end:89 128 8 "
                        "15 __for_begin:122 160 8 13 __for_end:122 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknow"
                        "n> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GatherExcelConfigMgr::checkGatherExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -202116109;
  gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
  __for_range = &this->gather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GatherExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GatherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GatherExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 64));
    gather_id = std::get<0ul,unsigned int const,data::GatherExcelConfig>(__in);
    gather_excel_config = std::get<1ul,unsigned int const,data::GatherExcelConfig>(__in);
    v6 = gadget_config_mgr;
    p_gadget_id = &gather_excel_config->gadget_id;
    if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_gadget_id);
    }
    if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(v6, gather_excel_config->gadget_id) )
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
        "./src/txt_data_manual/GatherExcelConfig.cpp",
        "checkGatherExcelConfig",
        94);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v8,
             (const char (*)[22])"can't find gadget_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &gather_excel_config->gadget_id);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", gather_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, gather_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
      goto LABEL_60;
    }
    v13 = ((_BYTE)gather_excel_config + 105) & 7;
    v14 = (*(_BYTE *)(((unsigned __int64)&gather_excel_config->is_multi_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&gather_excel_config->is_multi_state >> 3) + 0x7FFF8000));
    if ( (_BYTE)v14 )
      __asan_report_load1(&gather_excel_config->is_multi_state, v13, v14);
    if ( !gather_excel_config->is_multi_state )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gather_excel_config->item_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&gather_excel_config->item_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&gather_excel_config->item_id);
      }
      item_id = gather_excel_config->item_id;
      if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, item_id, ITEM_LIMIT_GATHER) )
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
          "./src/txt_data_manual/GatherExcelConfig.cpp",
          "checkGatherExcelConfig",
          119);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(v16, (const char (*)[30])byte_1AD7BB60);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &gather_excel_config->item_id);
        v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])", gather_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, gather_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
        goto LABEL_60;
      }
      __for_range_0 = &gather_excel_config->extra_item_id_vec;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 128, item_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, item_id);
      *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v20 = (char *)(v3 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
        {
          v30 = 1;
          goto LABEL_41;
        }
        *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
        v21 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
        v22 = (int *)v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        v23 = *v22;
        v24 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
        if ( v24 != 0 && v24 <= 3 )
        {
          LOBYTE(v20) = v24 != 0;
          __asan_report_store4(v3 + 32, v20);
        }
        *(_DWORD *)(v3 + 32) = v23;
        if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *(_DWORD *)(v3 + 32), ITEM_LIMIT_GATHER) )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
      }
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
        "./src/txt_data_manual/GatherExcelConfig.cpp",
        "checkGatherExcelConfig",
        126);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])"gather_id: ");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, gather_id);
      v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v27, (const char (*)[33])byte_1AD7BBE0);
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v29, (const char (*)[7])byte_1AD7AF20);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v30 = 0;
LABEL_41:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( v30 != 1 )
      {
        v12 = 0;
        goto LABEL_60;
      }
    }
    if ( std::vector<data::BlockLimit>::size(&gather_excel_config->block_limits) <= 1 )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v34 = (((_BYTE)gather_excel_config + 68) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&gather_excel_config->refresh_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gather_excel_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_excel_config->refresh_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(&gather_excel_config->refresh_id);
      }
      refresh_id = gather_excel_config->refresh_id;
      v36 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v36 != 0 && v36 <= 3 )
      {
        LOBYTE(v34) = v36 != 0;
        __asan_report_store4(v3 + 48, v34);
      }
      *(_DWORD *)(v3 + 48) = refresh_id;
      if ( *(_DWORD *)(v3 + 48)
        && !data::RefreshPolicyExcelConfigMgrBase::findRefreshPolicyExcelConfig(
              &txt_config_mgr->refresh_policy_config_mgr,
              *(unsigned int *)(v3 + 48)) )
      {
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
          "./src/txt_data_manual/GatherExcelConfig.cpp",
          "checkGatherExcelConfig",
          140);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                v38,
                (const char (*)[52])"findRefreshPolicyExcelConfig can't find refresh_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    else
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
        "./src/txt_data_manual/GatherExcelConfig.cpp",
        "checkGatherExcelConfig",
        134);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])"gather_id: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, gather_id);
      common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(v33, (const char (*)[78])byte_1AD7BC40);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
LABEL_60:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v40 = 0;
      goto LABEL_64;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GatherExcelConfig>,false,false> *const)(v3 + 64));
  }
  v40 = 1;
LABEL_64:
  if ( v40 == 1 )
    v2 = 0;
  result = v2;
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 148: range 00000000144628B6-0000000014463895
int32_t __cdecl GatherExcelConfigMgr::checkMultiStateGatherExcelConfig(
        GatherExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  GatherExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  _BOOL4 v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  unsigned __int64 v14; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int v20; // eax
  __int64 item_id; // rsi
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  unsigned int *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  int v35; // edx
  _BOOL4 v36; // r15d
  unsigned __int64 v37; // rdx
  int v38; // eax
  int32_t result; // eax
  data::MultiStateGatherExcelConfigMap *__for_range; // [rsp+28h] [rbp-2F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::reference v42; // [rsp+30h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int const,data::MultiStateGatherExcelConfig> >::type *point_type; // [rsp+38h] [rbp-2E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MultiStateGatherExcelConfig> >::type *config; // [rsp+40h] [rbp-2E0h]
  data::GatherExcelConfig *gather_config_ptr; // [rsp+48h] [rbp-2D8h]
  const std::vector<data::MultiStateGatherConfig> *__for_range_0; // [rsp+50h] [rbp-2D0h]
  const data::MultiStateGatherConfig *multi_state_config; // [rsp+58h] [rbp-2C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+60h] [rbp-2C0h]
  uint32_t *extra_item_id; // [rsp+68h] [rbp-2B8h]
  char v50[688]; // [rsp+70h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 8 15 __for_begin:149 80 8 13 __for_end:149 112 8 15 __for_begin:163 144 8 13 __for_end:163"
                        " 176 8 15 __for_begin:175 208 8 13 __for_end:175 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 "
                        "<unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 48 13 state_set:162";
  *(_QWORD *)(v3 + 16) = GatherExcelConfigMgr::checkMultiStateGatherExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
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
  v5[536862739] = -202116109;
  __for_range = &this->multi_state_gather_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::MultiStateGatherExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false> *)(v3 + 80)) )
  {
    v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false> *const)(v3 + 48));
    point_type = std::get<0ul,unsigned int const,data::MultiStateGatherExcelConfig>(v42);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MultiStateGatherExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MultiStateGatherExcelConfig>(v42);
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)point_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)point_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(point_type);
    }
    gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(v6, *point_type);
    if ( gather_config_ptr )
    {
      v10 = ((_BYTE)gather_config_ptr + 105) & 7;
      v11 = (*(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_multi_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->is_multi_state >> 3) + 0x7FFF8000));
      if ( (_BYTE)v11 )
        __asan_report_load1(&gather_config_ptr->is_multi_state, v10, v11);
      if ( !gather_config_ptr->is_multi_state )
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
          "./src/txt_data_manual/GatherExcelConfig.cpp",
          "checkMultiStateGatherExcelConfig",
          159);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v12, (const char (*)[67])byte_1AD7BF20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, point_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
      }
      else
      {
        v14 = ((v3 + 560) >> 3) + 2147450880;
        *(_DWORD *)v14 = 0;
        *(_WORD *)(v14 + 4) = 0;
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 560));
        __for_range_0 = &config->multi_state_gather_config_list;
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 112, v10);
        *(std::vector<data::MultiStateGatherConfig>::const_iterator *)(v3 + 112) = std::vector<data::MultiStateGatherConfig>::begin(__for_range_0);
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 144, v10);
        *(std::vector<data::MultiStateGatherConfig>::const_iterator *)(v3 + 144) = std::vector<data::MultiStateGatherConfig>::end(__for_range_0);
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v3 + 144)) )
          {
            v20 = 1;
            goto LABEL_56;
          }
          multi_state_config = __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *const)(v3 + 112));
          v15 = std::set<unsigned int>::emplace<unsigned int const&>(
                  (std::set<unsigned int> *const)(v3 + 560),
                  &multi_state_config->gadget_state,
                  &multi_state_config->gadget_state);
          if ( !v15.second )
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
              "./src/txt_data_manual/GatherExcelConfig.cpp",
              "checkMultiStateGatherExcelConfig",
              167);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 368),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v16,
                    (const char (*)[63])byte_1AD7BFA0);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, point_type);
            v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v18,
                    (const char (*)[17])", gadget_state: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v19,
              &multi_state_config->gadget_state);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
            *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v20 = 0;
            goto LABEL_56;
          }
          if ( *(_BYTE *)(((unsigned __int64)&multi_state_config->item_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)multi_state_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&multi_state_config->item_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(&multi_state_config->item_id);
          }
          item_id = multi_state_config->item_id;
          if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, item_id, ITEM_LIMIT_GATHER) )
            break;
          __for_range_1 = &multi_state_config->extra_item_id_vec;
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 176, item_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 176) = std::vector<unsigned int>::begin(__for_range_1);
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 208, item_id);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::end(__for_range_1);
          while ( 1 )
          {
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 176),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208)) )
            {
              v35 = 1;
              goto LABEL_52;
            }
            v28 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
            extra_item_id = v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            if ( !TxtConfigMgr::isItemAllowedByOutputControl(txt_config_mgr, *extra_item_id, ITEM_LIMIT_GATHER) )
              break;
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 176));
          }
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/GatherExcelConfig.cpp",
            "checkMultiStateGatherExcelConfig",
            179);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v29, (const char (*)[51])byte_1AD7C0E0);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, point_type);
          v32 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v31,
                  (const char (*)[17])", gadget_state: ");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  &multi_state_config->gadget_state);
          v34 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v33,
                  (const char (*)[18])", extra_item_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, extra_item_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v35 = 0;
LABEL_52:
          *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
          if ( v35 != 1 )
          {
            v20 = 0;
            goto LABEL_56;
          }
          __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *const)(v3 + 112));
        }
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GatherExcelConfig.cpp",
          "checkMultiStateGatherExcelConfig",
          172);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v22, (const char (*)[45])byte_1AD7C040);
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, point_type);
        v25 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v24,
                (const char (*)[17])", gadget_state: ");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                &multi_state_config->gadget_state);
        v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])", item_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &multi_state_config->item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v20 = 0;
LABEL_56:
        *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
        v36 = v20 == 1;
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 560));
        v9 = v36;
      }
    }
    else
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GatherExcelConfig.cpp",
        "checkMultiStateGatherExcelConfig",
        154);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(v7, (const char (*)[67])byte_1AD7BEA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, point_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v9 = 0;
    }
    v37 = ((v3 + 560) >> 3) + 2147450880;
    *(_DWORD *)v37 = -117901064;
    *(_WORD *)(v37 + 4) = -1800;
    if ( !v9 )
    {
      v38 = 0;
      goto LABEL_61;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MultiStateGatherExcelConfig>,false,false> *const)(v3 + 48));
  }
  v38 = 1;
LABEL_61:
  if ( v38 == 1 )
    v2 = 0;
  result = v2;
  if ( v50 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
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
  }
  return result;
};

// Line 189: range 0000000014463896-0000000014463AEB
__int64 __fastcall GatherExcelConfigMgr::getGatherGadgetId(const GatherExcelConfigMgr *const this, uint32_t point_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::GatherExcelConfig *gather_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 point_type:188 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GatherExcelConfigMgr::getGatherGadgetId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = point_type;
  gather_config_ptr = data::GatherExcelConfigMgrBase::findGatherExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( gather_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&gather_config_ptr->gadget_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)gather_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gather_config_ptr->gadget_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&gather_config_ptr->gadget_id);
    }
    result = gather_config_ptr->gadget_id;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/GatherExcelConfig.cpp",
      "getGatherGadgetId",
      193);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[41])"findGatherExcelConfig fail. point_type: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 200: range 0000000014463AEC-0000000014463CAF
const std::vector<data::GatherExcelConfig> *__fastcall GatherExcelConfigMgr::getBlockGatherConfigVec(
        const GatherExcelConfigMgr *const this,
        __int64 block_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>> *p_block_gather_vec_map; // rdx
  std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>> *v6; // rdx
  bool v7; // al
  const std::vector<data::GatherExcelConfig> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 block_id:199 64 8 8 iter:201 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = GatherExcelConfigMgr::getBlockGatherConfigVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = block_id;
  p_block_gather_vec_map = &this->block_gather_vec_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, block_id);
  *(std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::find(p_block_gather_vec_map, (const std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::key_type *)(v2 + 48));
  v6 = &this->block_gather_vec_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<data::GatherExcelConfig>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::vector<data::GatherExcelConfig>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::GatherExcelConfig> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<data::GatherExcelConfig> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = &GatherExcelConfigMgr::dummy_vec;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::GatherExcelConfig>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<data::GatherExcelConfig> >,false,false> *const)(v2 + 64))->second;
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

// Line 210: range 0000000014463D64-0000000014463F8D
__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >::reference __fastcall GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState(
        const GatherExcelConfigMgr *const this,
        uint32_t point_type,
        uint32_t gadget_state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >::reference result; // rax
  const data::MultiStateGatherConfig *M_current; // r14
  const data::MultiStateGatherConfig *v8; // rcx
  bool v9; // al
  const data::MultiStateGatherExcelConfig *config_ptr; // [rsp+20h] [rbp-C0h]
  char v12[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 16 gadget_state:209 64 8 8 iter:218 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = gadget_state;
  config_ptr = data::GatherExcelConfigMgrBase::findMultiStateGatherExcelConfig(this, point_type);
  if ( config_ptr )
  {
    M_current = std::vector<data::MultiStateGatherConfig>::end(&config_ptr->multi_state_gather_config_list)._M_current;
    v8 = std::vector<data::MultiStateGatherConfig>::begin(&config_ptr->multi_state_gather_config_list)._M_current;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, point_type);
    *(__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v3 + 64) = std::find_if<__gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>,GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState(unsigned int,unsigned int)::{lambda(data::MultiStateGatherConfig const&)#1}>((__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >)v8, (__gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> >)M_current, (GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState::<lambda(const data::MultiStateGatherConfig&)>)(v3 + 48));
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, M_current);
    *(std::vector<data::MultiStateGatherConfig>::const_iterator *)(v3 + 96) = std::vector<data::MultiStateGatherConfig>::end(&config_ptr->multi_state_gather_config_list);
    v9 = __gnu_cxx::operator==<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>(
           (const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v3 + 64),
           (const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *)(v3 + 96));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
      result = 0LL;
    else
      result = __gnu_cxx::__normal_iterator<data::MultiStateGatherConfig const*,std::vector<data::MultiStateGatherConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::MultiStateGatherConfig*,std::vector<data::MultiStateGatherConfig> > *const)(v3 + 64));
  }
  else
  {
    result = 0LL;
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

// Line 219: range 0000000014463CB0-0000000014463D63
bool __cdecl GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState(unsigned int,unsigned int)const::{lambda(data::MultiStateGatherConfig const&)#1}::operator()(
        const GatherExcelConfigMgr::findMultiStateGatherConfigByGadgetState::<lambda(const data::MultiStateGatherConfig&)> *const __closure,
        const data::MultiStateGatherConfig *c)
{
  uint32_t gadget_state; // esi
  uint32_t *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&c->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&c->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&c->gadget_state);
  }
  gadget_state = c->gadget_state;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v3 = __closure->__gadget_state;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__gadget_state >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__gadget_state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__gadget_state >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__gadget_state);
  }
  return gadget_state == *v3;
};

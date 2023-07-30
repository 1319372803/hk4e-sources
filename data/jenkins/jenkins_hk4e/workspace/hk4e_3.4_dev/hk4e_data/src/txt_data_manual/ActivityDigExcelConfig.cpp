// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityDigExcelConfig.cpp

// Line 19: range 0000000012AF595A-0000000012AF5B3D
int32_t __cdecl ActivityDigExcelConfigMgr::checkConfig(
        ActivityDigExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityDigExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDigExcelConfigMgr::checkGroupLinkConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDigExcelConfig.cpp",
      "checkConfig",
      20);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      v5,
      (const char (*)[29])"checkGroupLinkConfig failed.");
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

// Line 25: range 0000000012AF5B3E-0000000012AF5D21
int32_t __cdecl ActivityDigExcelConfigMgr::rewriteConfig(
        ActivityDigExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ActivityDigExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityDigExcelConfigMgr::rewriteGroupLinkConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityDigExcelConfig.cpp",
      "rewriteConfig",
      26);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      v5,
      (const char (*)[31])"rewriteGroupLinkConfig failed.");
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

// Line 31: range 0000000012AF5D22-0000000012AF63D7
int32_t __cdecl ActivityDigExcelConfigMgr::checkGroupLinkConfig(
        ActivityDigExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityGroupLinksExcelConfigMgr *p_activity_group_links_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  data::DigGroupLinkExcelConfigMap *__for_range; // [rsp+20h] [rbp-180h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range_0; // [rsp+28h] [rbp-178h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v18; // [rsp+30h] [rbp-170h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *stage; // [rsp+38h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *bundle_set; // [rsp+40h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::reference v21; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,data::DigGroupLinkExcelConfig> >::type *id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DigGroupLinkExcelConfig> >::type *config; // [rsp+58h] [rbp-148h]
  char v24[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 14 __for_begin:33 64 8 12 __for_end:33 96 8 14 __for_begin:42 128 8 12 __for_end:42 160 3"
                        "2 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDigExcelConfigMgr::checkGroupLinkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->dig_group_link_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false> *)(v2 + 64)) )
      break;
    v21 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::DigGroupLinkExcelConfig>(v21);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DigGroupLinkExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DigGroupLinkExcelConfig>(v21);
    p_activity_group_links_config_mgr = &txt_config_mgr->activity_group_links_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&config->group_link_bundle_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->group_link_bundle_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->group_link_bundle_id);
    }
    if ( !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
            p_activity_group_links_config_mgr,
            config->group_link_bundle_id) )
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
        "./src/txt_data_manual/ActivityDigExcelConfig.cpp",
        "checkGroupLinkConfig",
        38);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             v7,
             (const char (*)[50])"findGroupLinksBundleExcelConfig fail. bundle_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &config->group_link_bundle_id);
      v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->stage_group_link_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 128)) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 96));
    stage = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v18);
    bundle_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v18);
    if ( std::unordered_set<unsigned int>::empty(bundle_set) )
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
        "./src/txt_data_manual/ActivityDigExcelConfig.cpp",
        "checkGroupLinkConfig",
        47);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v11, (const char (*)[52])byte_1AA2A980);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, stage);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 55: range 0000000012AF63D8-0000000012AF65E4
int32_t __cdecl ActivityDigExcelConfigMgr::rewriteGroupLinkConfig(
        ActivityDigExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_set<unsigned int> *v5; // rax
  int32_t result; // eax
  data::DigGroupLinkExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::reference v8; // [rsp+18h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,data::DigGroupLinkExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false> *)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>::__node_type *)"2 32 8 14 __for_begin:56 64 8 12 __for_end:56";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>::__node_type *)ActivityDigExcelConfigMgr::rewriteGroupLinkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->dig_group_link_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::DigGroupLinkExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::DigGroupLinkExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::DigGroupLinkExcelConfig> >::type *)std::get<1ul,unsigned int const,data::DigGroupLinkExcelConfig>(v8);
    v5 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
           &this->stage_group_link_map,
           &config->stage);
    std::unordered_set<unsigned int>::insert(v5, &config->group_link_bundle_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::DigGroupLinkExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 64: range 0000000012AF65E6-0000000012AF67A1
const std::unordered_set<unsigned int> *__fastcall ActivityDigExcelConfigMgr::getGroupBundleIdSet(
        const ActivityDigExcelConfigMgr *const this,
        __int64 stage_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_stage_group_link_map; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 stage_id:63 64 8 7 iter:65 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityDigExcelConfigMgr::getGroupBundleIdSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = stage_id;
  p_stage_group_link_map = &this->stage_group_link_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, stage_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_stage_group_link_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->stage_group_link_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
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

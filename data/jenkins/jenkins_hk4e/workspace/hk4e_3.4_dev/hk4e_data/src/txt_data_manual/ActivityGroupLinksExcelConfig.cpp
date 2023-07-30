// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp

// Line 20: range 0000000012C41956-0000000012C41DCB
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::checkConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
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
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ActivityGroupLinksExcelConfigMgr::checkConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( ActivityGroupLinksExcelConfigMgr::checkGroupLinkConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "checkConfig",
      23);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"[GROUP_LINK] checkGroupLinkConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  else if ( ActivityGroupLinksExcelConfigMgr::checkGroupLinkBundleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "checkConfig",
      28);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v7,
      (const char (*)[47])"[GROUP_LINK] checkGroupLinkBundleConfig failed");
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    result = -1;
  }
  else if ( ActivityGroupLinksExcelConfigMgr::checkBundleRewardConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "checkConfig",
      33);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v8,
      (const char (*)[44])"[GROUP_LINK] checkBundleRewardConfig failed");
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

// Line 40: range 0000000012C41DCC-0000000012C420F0
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::rewriteConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
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
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( ActivityGroupLinksExcelConfigMgr::rewiteGroupLinkConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "rewriteConfig",
      43);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v5,
      (const char (*)[41])"[GROUP_LINK] checkGroupLinkConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else if ( ActivityGroupLinksExcelConfigMgr::rewriteGroupLinkBundleConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "rewriteConfig",
      48);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v7,
      (const char (*)[47])"[GROUP_LINK] checkGroupLinkBundleConfig failed");
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

// Line 55: range 0000000012C420F2-0000000012C422ED
__int64 __fastcall ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId(
        const ActivityGroupLinksExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_to_bundle_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 11 group_id:54 64 8 7 iter:56 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::getBundleIdByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_to_bundle_map = &this->group_to_bundle_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_to_bundle_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_to_bundle_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 65: range 0000000012C422EE-0000000012C424E9
__int64 __fastcall ActivityGroupLinksExcelConfigMgr::getLinkIdByBundleId(
        const ActivityGroupLinksExcelConfigMgr *const this,
        __int64 bundle_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_bundle_to_link_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "3 48 4 12 bundle_id:64 64 8 7 iter:66 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::getLinkIdByBundleId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = bundle_id;
  p_bundle_to_link_map = &this->bundle_to_link_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, bundle_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_bundle_to_link_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->bundle_to_link_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::cend(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
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

// Line 75: range 0000000012C424EA-0000000012C42A0D
__int64 __fastcall ActivityGroupLinksExcelConfigMgr::getLinkNextBundleId(
        const ActivityGroupLinksExcelConfigMgr *const this,
        uint32_t link_id,
        uint32_t bundle_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  const unsigned int *M_current; // r14
  const unsigned int *v10; // rcx
  const std::vector<unsigned int> *p_set_list; // rdx
  bool v12; // al
  const std::vector<unsigned int> *v13; // rdx
  char *v14; // rsi
  bool v15; // al
  const std::vector<unsigned int> *v16; // rdx
  const std::vector<unsigned int> *v17; // rdx
  bool v18; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v19; // rax
  unsigned int *v20; // rdx
  const data::ActivityGroupLinksExcelConfig *link_config_ptr; // [rsp+18h] [rbp-138h]
  char v23[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 10 link_id:74 48 4 12 bundle_id:74 64 8 7 iter:86 96 8 9 <unknown> 128 8 9 <unknown> 160 "
                        "8 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGroupLinksExcelConfigMgr::getLinkNextBundleId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  *(_DWORD *)(v3 + 32) = link_id;
  *(_DWORD *)(v3 + 48) = bundle_id;
  v6 = *(unsigned int *)(v3 + 32);
  link_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findActivityGroupLinksExcelConfig(this, v6);
  if ( link_config_ptr )
  {
    if ( std::vector<unsigned int>::size(&link_config_ptr->set_list) )
    {
      M_current = std::vector<unsigned int>::end(&link_config_ptr->set_list)._M_current;
      v10 = std::vector<unsigned int>::begin(&link_config_ptr->set_list)._M_current;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v6);
      *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v10,
                                                                                                     (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                     (const unsigned int *)(v3 + 48));
      p_set_list = &link_config_ptr->set_list;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, M_current);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(p_set_list);
      v12 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96));
      *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
      if ( v12 )
      {
        result = 0LL;
      }
      else
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        v13 = &link_config_ptr->set_list;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v3 + 96);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(v13);
        v14 = (char *)(v3 + 128);
        v15 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128));
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        if ( !v15 )
          goto LABEL_25;
        v16 = &link_config_ptr->set_list;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 64, v14);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(v16);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        v17 = &link_config_ptr->set_list;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v14);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(v17);
        v18 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160));
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
        {
          result = 0LL;
        }
        else
        {
LABEL_25:
          v19 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
          v20 = (unsigned int *)v19;
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v19);
          }
          result = *v20;
        }
      }
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "getLinkNextBundleId",
      79);
    v7 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[60])"[GROUP_LINK]findGroupLinksBundleExcelConfig fail. link_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    result = 0LL;
  }
  if ( v23 == (char *)v3 )
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

// Line 104: range 0000000012C42A0E-0000000012C42C5B
__int64 __fastcall ActivityGroupLinksExcelConfigMgr::getGroupBundleHintGroupId(
        const ActivityGroupLinksExcelConfigMgr *const this,
        uint32_t bundle_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::GroupLinksBundleExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 bundle_id:103 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::getGroupBundleHintGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = bundle_id;
  config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                 this,
                 *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hint_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->hint_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->hint_group);
    }
    result = config_ptr->hint_group;
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
      4u,
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "getGroupBundleHintGroupId",
      108);
    v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[62])"[GroupLink]findGroupLinksBundleExcelConfig fail. bundle_id : ");
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

// Line 115: range 0000000012C42C5C-0000000012C4351F
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::checkGroupLinkConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  char *v8; // rsi
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  int32_t result; // eax
  int ret; // [rsp+1Ch] [rbp-1D4h]
  data::ActivityGroupLinksExcelConfigMap *__for_range; // [rsp+20h] [rbp-1D0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::reference v24; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig> >::type *link_id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig> >::type *config; // [rsp+38h] [rbp-1B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1B0h]
  data::GroupLinksBundleExcelConfig *bundle_config_ptr; // [rsp+48h] [rbp-1A8h]
  char v29[416]; // [rsp+50h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 13 bundle_id:125 64 8 15 __for_begin:117 96 8 13 __for_end:117 128 8 15 __for_begin:125 1"
                        "60 8 13 __for_end:125 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::checkGroupLinkConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->activity_group_links_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false> *)(v2 + 96)) )
      break;
    v24 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false> *const)(v2 + 64));
    link_id = std::get<0ul,unsigned int const,data::ActivityGroupLinksExcelConfig>(v24);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ActivityGroupLinksExcelConfig>(v24);
    if ( std::vector<unsigned int>::empty(&config->set_list) )
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
        "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
        "checkGroupLinkConfig",
        122);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AA5E000);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, link_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      __for_range_0 = &config->set_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, v5);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v8 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v9 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v10 = (int *)v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v9);
        }
        v11 = *v10;
        v12 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v8) = v12 != 0;
          __asan_report_store4(v2 + 48, v8);
        }
        *(_DWORD *)(v2 + 48) = v11;
        bundle_config_ptr = data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleExcelConfig(
                              this,
                              *(unsigned int *)(v2 + 48));
        if ( bundle_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)bundle_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bundle_config_ptr->link_type >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&bundle_config_ptr->link_type);
          }
          if ( bundle_config_ptr->link_type != CIRCLE )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
              "checkGroupLinkConfig",
              137);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                    v17,
                    (const char (*)[56])byte_1AA5E100);
            v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v2 + 48));
            v20 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v19, (const char (*)[11])" link_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, link_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
          }
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
            "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
            "checkGroupLinkConfig",
            131);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v13, (const char (*)[58])byte_1AA5E060);
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" link_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, link_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
          *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 146: range 0000000012C43520-0000000012C43C4E
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::rewiteGroupLinkConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  __int64 v9; // rsi
  std::vector<unsigned int>::reference v10; // rax
  int *v11; // rdx
  int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  int v18; // edx
  unsigned int v19; // r15d
  char *v20; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v21; // rax
  unsigned int *v22; // rdx
  char v23; // cl
  std::unordered_map<unsigned int,unsigned int> *v24; // rax
  char *v25; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v26; // rax
  uint32_t *v27; // rdx
  char v28; // cl
  int32_t result; // eax
  uint32_t i; // [rsp+2Ch] [rbp-154h]
  data::ActivityGroupLinksExcelConfigMap *__for_range; // [rsp+30h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::reference __in; // [rsp+38h] [rbp-148h]
  const unsigned int *link_id; // [rsp+40h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig> >::type *config; // [rsp+48h] [rbp-138h]
  char v35[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 bundle_id:156 64 8 15 __for_begin:147 96 8 13 __for_end:147 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGroupLinksExcelConfigMgr::rewiteGroupLinkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->activity_group_links_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::ActivityGroupLinksExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false> *)(v3 + 96)) )
    {
      v8 = 1;
      goto LABEL_36;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false> *const)(v3 + 64));
    link_id = std::get<0ul,unsigned int const,data::ActivityGroupLinksExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::ActivityGroupLinksExcelConfig>(__in);
    if ( !std::vector<unsigned int>::size(&config->set_list) )
      break;
    for ( i = 0; i < std::vector<unsigned int>::size(&config->set_list); ++i )
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v9 = i;
      v10 = std::vector<unsigned int>::operator[](&config->set_list, i);
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
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->bundle_to_link_map,
             (const unsigned int *)(v3 + 48)) )
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
          "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
          "rewiteGroupLinkConfig",
          159);
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v15 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v14, (const char (*)[57])byte_1AA5E280);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v16, (const char (*)[11])" link_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, link_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v18 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)link_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)link_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)link_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(link_id);
        }
        v19 = *link_id;
        v20 = (char *)(v3 + 48);
        v21 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->bundle_to_link_map,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        v22 = v21;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
        {
          LOBYTE(v20) = v23 != 0;
          __asan_report_store4(v21, v20);
        }
        *v22 = v19;
        v24 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,unsigned int>>::operator[](
                &this->link_bundle_index_map,
                link_id);
        v25 = (char *)(v3 + 48);
        v26 = std::unordered_map<unsigned int,unsigned int>::operator[](
                v24,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
        v27 = v26;
        v28 = *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000);
        if ( v28 != 0 && (char)(((unsigned __int8)v26 & 7) + 3) >= v28 )
        {
          LOBYTE(v25) = v28 != 0;
          __asan_report_store4(v26, v25);
        }
        *v27 = i;
        v18 = 1;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v18 != 1 )
      {
        v8 = 0;
        goto LABEL_36;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::ActivityGroupLinksExcelConfig>,false,false> *const)(v3 + 64));
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
    "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
    "rewiteGroupLinkConfig",
    151);
  v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 128),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v6, (const char (*)[39])byte_1AA5E220);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, link_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
  v2 = -1;
  v8 = 0;
LABEL_36:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 170: range 0000000012C43C50-0000000012C44AF7
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::checkGroupLinkBundleConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_reward_id; // rax
  __int64 reward_id; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  char *v14; // rsi
  unsigned int *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  __int64 v19; // rsi
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  __int64 hint_group; // rsi
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  int32_t result; // eax
  int ret; // [rsp+1Ch] [rbp-2A4h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-2A0h]
  data::GroupLinksBundleExcelConfigMap *__for_range; // [rsp+28h] [rbp-298h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::reference v41; // [rsp+30h] [rbp-290h]
  std::tuple_element<0,std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *bundle_id; // [rsp+38h] [rbp-288h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *config; // [rsp+40h] [rbp-280h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-278h]
  const GroupInfoScriptConfig *group_script_config_ptr; // [rsp+50h] [rbp-270h]
  const GroupInfoScriptConfig *group_script_config_ptr_0; // [rsp+58h] [rbp-268h]
  char v47[608]; // [rsp+60h] [rbp-260h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 12 group_id:187 64 8 15 __for_begin:173 96 8 13 __for_end:173 128 8 15 __for_begin:187 1"
                        "60 8 13 __for_end:187 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown"
                        "> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::checkGroupLinkBundleConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->group_links_bundle_excel_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false> *)(v2 + 96)) )
  {
    v41 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false> *const)(v2 + 64));
    bundle_id = std::get<0ul,unsigned int const,data::GroupLinksBundleExcelConfig>(v41);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GroupLinksBundleExcelConfig>(v41);
    p_reward_id = &config->reward_id;
    reward_id = (((_BYTE)config + 52) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_reward_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_reward_id);
    }
    if ( config->reward_id
      && (reward_id = config->reward_id,
          !data::ActivityGroupLinksExcelConfigMgrBase::findGroupLinksBundleRewardExcelConfig(this, reward_id)) )
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
        "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
        "checkGroupLinkBundleConfig",
        178);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v8, (const char (*)[58])byte_1AA5E420);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->reward_id);
      v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])" bundle_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, bundle_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    else if ( std::vector<unsigned int>::empty(&config->group_list) )
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
        "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
        "checkGroupLinkBundleConfig",
        184);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v12, (const char (*)[42])byte_1AA5E4C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, bundle_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    }
    else
    {
      __for_range_0 = &config->group_list;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 128, reward_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v2 + 160, reward_id);
      *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        v14 = (char *)(v2 + 160);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
          break;
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
        v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
        v16 = (int *)v15;
        if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v15);
        }
        v17 = *v16;
        v18 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
        if ( v18 != 0 && v18 <= 3 )
        {
          LOBYTE(v14) = v18 != 0;
          __asan_report_store4(v2 + 48, v14);
        }
        *(_DWORD *)(v2 + 48) = v17;
        v19 = *(unsigned int *)(v2 + 48);
        group_script_config_ptr_0 = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, v19);
        if ( group_script_config_ptr_0 )
        {
          if ( *(char *)(((unsigned __int64)&group_script_config_ptr_0->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(
              &group_script_config_ptr_0->is_dynamic_load,
              v19,
              &group_script_config_ptr_0->is_dynamic_load);
          if ( !group_script_config_ptr_0->is_dynamic_load )
          {
            ret = -1;
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
              "checkGroupLinkBundleConfig",
              199);
            v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v25 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                    v24,
                    (const char (*)[54])byte_1AA5E580);
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v26,
                    (const char (*)[13])" bundle_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, bundle_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          }
        }
        else
        {
          ret = -1;
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
            "checkGroupLinkBundleConfig",
            193);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  v20,
                  (const char (*)[49])"[GROUP_LINK]findGroupInfoConfig fail. group_id: ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 48));
          v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" bundle_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, bundle_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      }
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      if ( *(_BYTE *)(((unsigned __int64)&config->hint_group >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->hint_group >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->hint_group);
      }
      hint_group = config->hint_group;
      group_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, hint_group);
      if ( group_script_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&group_script_config_ptr->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(
            &group_script_config_ptr->is_dynamic_load,
            hint_group,
            &group_script_config_ptr->is_dynamic_load);
        if ( !group_script_config_ptr->is_dynamic_load )
        {
          ret = -1;
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
            "checkGroupLinkBundleConfig",
            213);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v33, (const char (*)[56])byte_1AA5E640);
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &config->hint_group);
          v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])" bundle_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, bundle_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        }
      }
      else
      {
        ret = -1;
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
          "checkGroupLinkBundleConfig",
          207);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 448),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                v29,
                (const char (*)[51])"[GROUP_LINK]findGroupInfoConfig fail. hint_group: ");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &config->hint_group);
        v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])" bundle_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, bundle_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false> *const)(v2 + 64));
  }
  result = ret;
  if ( v47 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
  }
  return result;
};

// Line 221: range 0000000012C44AF8-0000000012C45420
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::rewriteGroupLinkBundleConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  int v16; // edx
  unsigned int v17; // r15d
  char *v18; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  unsigned int *v20; // rdx
  char v21; // cl
  int v22; // eax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 n; // rax
  int32_t result; // eax
  const LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-1A8h]
  data::GroupLinksBundleExcelConfigMap *__for_range; // [rsp+30h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::reference v29; // [rsp+38h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *bundle_id; // [rsp+40h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *config; // [rsp+48h] [rbp-188h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-180h]
  const GroupInfoScriptConfig *group_script_config_ptr; // [rsp+58h] [rbp-178h]
  char v34[368]; // [rsp+60h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 12 group_id:225 64 8 15 __for_begin:223 96 8 13 __for_end:223 128 8 15 __for_begin:225 16"
                        "0 8 13 __for_end:225 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGroupLinksExcelConfigMgr::rewriteGroupLinkBundleConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->group_links_bundle_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GroupLinksBundleExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false> *)(v3 + 96)) )
    {
      v22 = 1;
      goto LABEL_44;
    }
    v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false> *const)(v3 + 64));
    bundle_id = std::get<0ul,unsigned int const,data::GroupLinksBundleExcelConfig>(v29);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GroupLinksBundleExcelConfig>(v29);
    __for_range_0 = &config->group_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v7 = (char *)(v3 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
      {
        v16 = 1;
        goto LABEL_30;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int>,unsigned int>(
             &this->group_to_bundle_map,
             (const unsigned int *)(v3 + 48)) )
      {
        break;
      }
      if ( *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)bundle_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)bundle_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(bundle_id);
      }
      v17 = *bundle_id;
      v18 = (char *)(v3 + 48);
      v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
              &this->group_to_bundle_map,
              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 48));
      v20 = v19;
      v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(v19, v18);
      }
      *v20 = v17;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
    }
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
      "rewriteGroupLinkBundleConfig",
      229);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v12, (const char (*)[57])byte_1AA5E780);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" bundle_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, bundle_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v16 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v16 != 1 )
    {
      v22 = 0;
      goto LABEL_44;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->hint_group >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->hint_group >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->hint_group);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, config->hint_group);
    if ( !group_script_config_ptr )
      break;
    n = (unsigned __int64)std::unordered_map<unsigned int,Vector3>::operator[](
                            &this->group_bundle_hint_group_pos_map,
                            bundle_id);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(n, 12LL);
    }
    if ( *(char *)(((unsigned __int64)&group_script_config_ptr->pos >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&group_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)group_script_config_ptr + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&group_script_config_ptr->pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
    {
      n = __asan_report_load_n(&group_script_config_ptr->pos, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&group_script_config_ptr->pos.x;
    *(float *)(n + 8) = group_script_config_ptr->pos.z;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleExcelConfig>,false,false> *const)(v3 + 64));
  }
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
    "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
    "rewriteGroupLinkBundleConfig",
    237);
  v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 256),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v24 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v23, (const char (*)[50])byte_1AA5E7E0);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->hint_group);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
  v2 = -1;
  v22 = 0;
LABEL_44:
  if ( v22 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
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

// Line 246: range 0000000012C45422-0000000012C457F7
int32_t __cdecl ActivityGroupLinksExcelConfigMgr::checkBundleRewardConfig(
        ActivityGroupLinksExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  int ret; // [rsp+1Ch] [rbp-E4h]
  data::GroupLinksBundleRewardExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false,false>::reference v13; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig> >::type *reward_id; // [rsp+30h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig> >::type *config; // [rsp+38h] [rbp-C8h]
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:248 64 8 13 __for_end:248 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityGroupLinksExcelConfigMgr::checkBundleRewardConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->group_links_bundle_reward_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleRewardExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::GroupLinksBundleRewardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GroupLinksBundleRewardExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::GroupLinksBundleRewardExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false> *)(v2 + 64)) )
  {
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false,false> *const)(v2 + 32));
    reward_id = std::get<0ul,unsigned int const,data::GroupLinksBundleRewardExcelConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GroupLinksBundleRewardExcelConfig>(v13);
    if ( *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->drop_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->drop_id);
    }
    if ( config->drop_id
      && !data::DropExcelConfigMgrBase::findDropExcelConfig(&txt_config_mgr->drop_config_mgr, config->drop_id) )
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
        "./src/txt_data_manual/ActivityGroupLinksExcelConfig.cpp",
        "checkBundleRewardConfig",
        253);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v6, (const char (*)[47])byte_1AA5E880);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &config->drop_id);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" reward_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, reward_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GroupLinksBundleRewardExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 261: range 0000000012C457F8-0000000012C45ABC
__int64 __fastcall ActivityGroupLinksExcelConfigMgr::findBundleHintGroupPos(
        const ActivityGroupLinksExcelConfigMgr *const this,
        __int64 bundle_id,
        unsigned __int64 pos)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,Vector3> *p_group_bundle_hint_group_pos_map; // rdx
  std::unordered_map<unsigned int,Vector3> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false>::pointer v10; // rdx
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 bundle_id:260 64 8 8 iter:262 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityGroupLinksExcelConfigMgr::findBundleHintGroupPos;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = bundle_id;
  p_group_bundle_hint_group_pos_map = &this->group_bundle_hint_group_pos_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, bundle_id);
  *(std::unordered_map<unsigned int,Vector3>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,Vector3>::find(
                                                                             p_group_bundle_hint_group_pos_map,
                                                                             (const std::unordered_map<unsigned int,Vector3>::key_type *)(v3 + 48));
  v7 = &this->group_bundle_hint_group_pos_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,Vector3>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,Vector3>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,Vector3>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Vector3>,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,Vector3>,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,Vector3>,false,false> *const)(v3 + 64));
    if ( (char)(pos & 7) >= *(_BYTE *)((pos >> 3) + 0x7FFF8000) && *(_BYTE *)((pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((pos + 11) & 7) >= *(_BYTE *)(((pos + 11) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(pos, 12LL);
    }
    if ( (((unsigned __int8)v10 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second.z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(&v10->second, 12LL);
    }
    *(_QWORD *)pos = *(_QWORD *)&v10->second.x;
    *(float *)(pos + 8) = v10->second.z;
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

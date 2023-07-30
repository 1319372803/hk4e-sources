// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/MiracleRingExcelConfig.cpp

// Line 19: range 00000000146002E2-000000001460033D
int32_t __cdecl MiracleRingExcelConfigMgr::rewriteConfig(
        MiracleRingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  if ( MiracleRingExcelConfigMgr::rewriteMiracleRingTagConfig(this, txt_config_mgr)
    || MiracleRingExcelConfigMgr::rewriteMiracleRingDropConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 28: range 000000001460033E-0000000014600399
int32_t __cdecl MiracleRingExcelConfigMgr::checkConfig(
        MiracleRingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  if ( MiracleRingExcelConfigMgr::checkMiracleRingTagConfig(this, txt_config_mgr)
    || MiracleRingExcelConfigMgr::checkMiracleRingDropConfig(this, txt_config_mgr) )
  {
    return -1;
  }
  else
  {
    return 0;
  }
};

// Line 37: range 000000001460039A-000000001460086E
int32_t __cdecl MiracleRingExcelConfigMgr::rewriteMiracleRingTagConfig(
        MiracleRingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t *p_miracle_value; // rax
  uint32_t miracle_value; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::MiracleRingExcelConfig> >::type *v7; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v8; // rax
  uint32_t *v9; // rdx
  char v10; // cl
  uint32_t *v11; // rsi
  uint32_t *v12; // rax
  uint32_t *v13; // rdx
  uint32_t v14; // ecx
  char v15; // al
  __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> >::reference v16; // rax
  std::vector<data::MiracleTag> *v17; // rdx
  int32_t result; // eax
  data::MiracleRingExcelConfigMap *__for_range; // [rsp+10h] [rbp-100h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false,false>::reference v20; // [rsp+18h] [rbp-F8h]
  std::tuple_element<0,std::pair<unsigned int const,data::MiracleRingExcelConfig> >::type *item_id; // [rsp+20h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::MiracleRingExcelConfig> >::type *config; // [rsp+28h] [rbp-E8h]
  const std::vector<data::MiracleTag> *__for_range_0; // [rsp+30h] [rbp-E0h]
  const data::MiracleTag *tag; // [rsp+38h] [rbp-D8h]
  char v25[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:38 64 8 12 __for_end:38 96 8 14 __for_begin:42 128 8 12 __for_end:42";
  *(_QWORD *)(v2 + 16) = MiracleRingExcelConfigMgr::rewriteMiracleRingTagConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -202116352;
  __for_range = &this->miracle_ring_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MiracleRingExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::MiracleRingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::MiracleRingExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::MiracleRingExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false> *)(v2 + 64)) )
  {
    v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false,false> *const)(v2 + 32));
    item_id = std::get<0ul,unsigned int const,data::MiracleRingExcelConfig>(v20);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::MiracleRingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::MiracleRingExcelConfig>(v20);
    p_miracle_value = &config->miracle_value;
    if ( *(_BYTE *)(((unsigned __int64)p_miracle_value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_miracle_value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_miracle_value >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(p_miracle_value);
    }
    miracle_value = config->miracle_value;
    v7 = item_id;
    v8 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->item_to_value_map, item_id);
    v9 = v8;
    v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
    if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
    {
      LOBYTE(v7) = v10 != 0;
      __asan_report_store4(v8, v7);
    }
    *v9 = miracle_value;
    v11 = &config->miracle_value;
    v12 = (uint32_t *)std::max<unsigned int>(&this->largest_item_miracle_value, &config->miracle_value);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    v14 = *v13;
    v15 = *(_BYTE *)(((unsigned __int64)&this->largest_item_miracle_value >> 3) + 0x7FFF8000);
    LOBYTE(v11) = v15 != 0;
    if ( v15 != 0 && v15 <= 3 )
      __asan_report_store4(&this->largest_item_miracle_value, v11);
    this->largest_item_miracle_value = v14;
    __for_range_0 = &config->miracle_tag;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v11);
    *(std::vector<data::MiracleTag>::const_iterator *)(v2 + 96) = std::vector<data::MiracleTag>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v11);
    *(std::vector<data::MiracleTag>::const_iterator *)(v2 + 128) = std::vector<data::MiracleTag>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::MiracleTag const*,std::vector<data::MiracleTag>>(
              (const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *)(v2 + 96),
              (const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *)(v2 + 128)) )
    {
      v16 = __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator*((const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *const)(v2 + 96));
      tag = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      if ( *tag )
      {
        v17 = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::operator[](
                &this->item_to_tag_map,
                item_id);
        std::vector<data::MiracleTag>::push_back(v17, tag);
      }
      __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator++((__gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::MiracleRingExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = 0;
  if ( v25 == (char *)v2 )
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

// Line 55: range 0000000014600870-0000000014600D66
int32_t __cdecl MiracleRingExcelConfigMgr::rewriteMiracleRingDropConfig(
        MiracleRingExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v9; // rax
  int *v10; // rdx
  int v11; // r14d
  std::tuple_element<0,std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig> >::type *v12; // rsi
  std::unordered_map<data::MiracleTag,unsigned int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-114h]
  data::MiracleRingDropExcelConfigMap *__for_range; // [rsp+20h] [rbp-110h]
  std::__detail::_Node_iterator<std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig>,false,false>::reference v19; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig> >::type *tag; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,const std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig> >::type *drop_config; // [rsp+38h] [rbp-F8h]
  char v22[240]; // [rsp+40h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 14 __for_begin:57 64 8 12 __for_end:57 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MiracleRingExcelConfigMgr::rewriteMiracleRingDropConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  ret = 0;
  __for_range = &this->miracle_ring_drop_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<data::MiracleTag,data::MiracleRingDropExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<data::MiracleTag,data::MiracleRingDropExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<data::MiracleTag,data::MiracleRingDropExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<data::MiracleTag,data::MiracleRingDropExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::MiracleTag const,data::MiracleRingDropExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig>,false> *)(v2 + 64)) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<data::MiracleTag const,data::MiracleRingDropExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig>,false,false> *const)(v2 + 32));
    tag = std::get<0ul,data::MiracleTag const,data::MiracleRingDropExcelConfig>(v19);
    drop_config = (std::tuple_element<1,const std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig> >::type *)std::get<1ul,data::MiracleTag const,data::MiracleRingDropExcelConfig>(v19);
    if ( std::vector<unsigned int>::size(&drop_config->drop_id) )
    {
      v9 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                 &drop_config->drop_id,
                                                                                                 0LL);
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      v12 = tag;
      v13 = std::unordered_map<data::MiracleTag,unsigned int>::operator[](&this->tag_to_drop_map, tag);
      v14 = v13;
      v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
      {
        LOBYTE(v12) = v15 != 0;
        __asan_report_store4(v13, v12);
      }
      *v14 = v11;
      std::vector<data::MiracleTag>::emplace_back<data::MiracleTag const&>(
        &this->apply_tag_vec,
        tag,
        (const data::MiracleTag *)&this->apply_tag_vec);
    }
    else
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
        "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
        "rewriteMiracleRingDropConfig",
        61);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v5, (const char (*)[44])byte_1ADBF840);
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      v7 = ((unsigned __int8)tag & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(tag);
      }
      v8 = (__int64)data::enumValToStr(*tag, v7);
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v8 = __asan_report_store8(v2 + 96, v7);
      *(_QWORD *)(v2 + 96) = v8;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<data::MiracleTag const,data::MiracleRingDropExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::MiracleTag,data::MiracleRingDropExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
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

// Line 72: range 0000000014600D68-0000000014601803
int32_t __cdecl MiracleRingExcelConfigMgr::checkMiracleRingTagConfig(
        const MiracleRingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::size_type v16; // r14
  common::milog::MiLogStream *v17; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-224h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-220h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v22; // [rsp+28h] [rbp-218h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+30h] [rbp-210h]
  const std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::mapped_type *__for_range_0; // [rsp+40h] [rbp-200h]
  __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> >::reference tag; // [rsp+48h] [rbp-1F8h]
  char v26[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 8 14 __for_begin:74 64 8 12 __for_end:74 96 8 14 __for_begin:90 128 8 12 __for_end:90 160 8"
                        " 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MiracleRingExcelConfigMgr::checkMiracleRingTagConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  ret = 0;
  __for_range = &this->item_to_value_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64)) )
  {
    v22 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
    item_id = std::get<0ul,unsigned int const,unsigned int>(v22);
    std::get<1ul,unsigned int const,unsigned int>(v22);
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(item_id);
    }
    if ( (unsigned int)ItemExcelConfigMgr::getItemType(p_item_config_mgr, *item_id) == 2 )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<data::MiracleTag>> const,unsigned int>(
              &this->item_to_tag_map,
              item_id) )
      {
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
          "checkMiracleRingTagConfig",
          86);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v8, (const char (*)[48])byte_1ADBFA00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, item_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        __for_range_0 = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::at(
                          &this->item_to_tag_map,
                          item_id);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 96, item_id);
        *(std::vector<data::MiracleTag>::const_iterator *)(v2 + 96) = std::vector<data::MiracleTag>::begin(__for_range_0);
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 128, item_id);
        *(std::vector<data::MiracleTag>::const_iterator *)(v2 + 128) = std::vector<data::MiracleTag>::end(__for_range_0);
        while ( __gnu_cxx::operator!=<data::MiracleTag const*,std::vector<data::MiracleTag>>(
                  (const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *)(v2 + 96),
                  (const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *)(v2 + 128)) )
        {
          tag = __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator*((const __gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *const)(v2 + 96));
          if ( !common::tools::MiscUtils::isContains<std::unordered_map<data::MiracleTag,unsigned int> const,data::MiracleTag>(
                  &this->tag_to_drop_map,
                  tag) )
          {
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
              "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
              "checkMiracleRingTagConfig",
              94);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    v10,
                    (const char (*)[63])byte_1ADBFA60);
            v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, item_id);
            v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    v12,
                    (const char (*)[11])byte_1ADBFAC0);
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
            v14 = ((unsigned __int8)tag & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)tag & 7) + 3) >= *(_BYTE *)(((unsigned __int64)tag >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(tag);
            }
            v15 = (__int64)data::enumValToStr((data::MiracleTag)*tag, v14);
            if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
              v15 = __asan_report_store8(v2 + 160, v14);
            *(_QWORD *)(v2 + 160) = v15;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v2 + 160));
            *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
            *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<data::MiracleTag const*,std::vector<data::MiracleTag>>::operator++((__gnu_cxx::__normal_iterator<const data::MiracleTag*,std::vector<data::MiracleTag> > *const)(v2 + 96));
        }
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
        "checkMiracleRingTagConfig",
        78);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(v6, (const char (*)[54])byte_1ADBF9A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, item_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  v16 = std::unordered_map<unsigned int,std::vector<data::MiracleTag>>::size(&this->item_to_tag_map);
  if ( v16 != std::unordered_map<unsigned int,unsigned int>::size(&this->item_to_value_map) )
  {
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
      "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
      "checkMiracleRingTagConfig",
      102);
    v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 384),
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(v17, (const char (*)[66])byte_1ADBFB00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    ret = -1;
  }
  result = ret;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 109: range 0000000014601804-0000000014601B98
int32_t __cdecl MiracleRingExcelConfigMgr::checkMiracleRingDropConfig(
        const MiracleRingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::tuple_element<1,const std::pair<const data::MiracleTag,unsigned int> >::type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  std::unordered_map<data::MiracleTag,unsigned int> *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_const_iterator<std::pair<const data::MiracleTag,unsigned int>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<1,const std::pair<const data::MiracleTag,unsigned int> >::type *drop_id; // [rsp+38h] [rbp-C8h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:111 64 8 13 __for_end:111 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = MiracleRingExcelConfigMgr::checkMiracleRingDropConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->tag_to_drop_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<data::MiracleTag,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<data::MiracleTag,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<data::MiracleTag,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<data::MiracleTag,unsigned int>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::MiracleTag const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,unsigned int>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::MiracleTag,unsigned int>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_const_iterator<std::pair<data::MiracleTag const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::MiracleTag,unsigned int>,false,false> *const)(v2 + 32));
    std::get<0ul,data::MiracleTag const,unsigned int>(v11);
    v5 = (std::tuple_element<1,const std::pair<const data::MiracleTag,unsigned int> >::type *)std::get<1ul,data::MiracleTag const,unsigned int>(v11);
    drop_id = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                            txt_config_mgr,
                            *drop_id,
                            ITEM_LIMIT_MIRACLE_RING_REWARD) != 1 )
    {
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
        "./src/txt_data_manual/MiracleRingExcelConfig.cpp",
        "checkMiracleRingDropConfig",
        115);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v6, (const char (*)[62])byte_1ADBFC20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, drop_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<data::MiracleTag const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::MiracleTag,unsigned int>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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

// Line 124: range 0000000014601B9A-0000000014601BE6
uint32_t __cdecl MiracleRingExcelConfigMgr::getLargestItemMiracleValue(const MiracleRingExcelConfigMgr *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->largest_item_miracle_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->largest_item_miracle_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->largest_item_miracle_value);
  }
  return this->largest_item_miracle_value;
};

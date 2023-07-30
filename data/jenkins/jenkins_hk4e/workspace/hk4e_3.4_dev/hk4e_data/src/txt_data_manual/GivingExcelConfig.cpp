// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/GivingExcelConfig.cpp

// Line 20: range 0000000014463FB6-0000000014463FEF
int32_t __cdecl GivingExcelConfigMgr::rewriteConfig(GivingExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  if ( GivingExcelConfigMgr::rewriteGivingData(this, txt_config_mgr) )
    return -1;
  else
    return 0;
};

// Line 29: range 0000000014463FF0-0000000014464029
int32_t __cdecl GivingExcelConfigMgr::checkConfig(GivingExcelConfigMgr *const this, const TxtConfigMgr *txt_config_mgr)
{
  if ( GivingExcelConfigMgr::checkGivingData(this, txt_config_mgr) )
    return -1;
  else
    return 0;
};

// Line 39: range 000000001446402A-00000000144641FF
bool __fastcall GivingExcelConfigMgr::checkExactGivingItems(
        const GivingExcelConfigMgr *const this,
        __int64 giving_id,
        const std::map<unsigned int,unsigned int> *item_map)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_exact_giving_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 giving_id:38 64 8 7 iter:40 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GivingExcelConfigMgr::checkExactGivingItems;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = giving_id;
  p_exact_giving_map = &this->exact_giving_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, giving_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_exact_giving_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  v7 = &this->exact_giving_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64));
    result = std::operator==<unsigned int,unsigned int,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned int>>>(
               &v10->second,
               item_map);
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

// Line 50: range 0000000014464200-00000000144643E0
bool __fastcall GivingExcelConfigMgr::checkGroupGivingItem(
        const GivingExcelConfigMgr *const this,
        __int64 giving_id,
        uint32_t item_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_group_giving_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 giving_id:49 48 4 10 item_id:49 64 8 7 iter:51 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GivingExcelConfigMgr::checkGroupGivingItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = giving_id;
  *(_DWORD *)(v3 + 48) = item_id;
  p_group_giving_map = &this->group_giving_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, giving_id);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_group_giving_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->group_giving_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &v10->second,
               (const unsigned int *)(v3 + 48));
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

// Line 61: range 00000000144643E2-000000001446470E
__int64 __fastcall GivingExcelConfigMgr::findGroupIdByGivingIdAndItemId(
        const GivingExcelConfigMgr *const this,
        __int64 giving_id,
        uint32_t item_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_vague_giving_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  bool v10; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v11; // rdx
  unsigned int *p_second; // rax
  std::map<unsigned int,unsigned int> *group_id_map; // [rsp+18h] [rbp-E8h]
  char v15[224]; // [rsp+20h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 12 giving_id:60 48 4 10 item_id:60 64 8 14 giving_iter:62 96 8 9 <unknown> 128 8 13 group"
                        "_iter:68 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GivingExcelConfigMgr::findGroupIdByGivingIdAndItemId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = giving_id;
  *(_DWORD *)(v3 + 48) = item_id;
  p_vague_giving_map = &this->vague_giving_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, giving_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_vague_giving_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->vague_giving_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    group_id_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64))->second;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 128) = std::map<unsigned int,unsigned int>::find(
                                                                           group_id_map,
                                                                           (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 160) = std::map<unsigned int,unsigned int>::end(group_id_map);
    v10 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v10 )
    {
      result = 0LL;
    }
    else
    {
      v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 128));
      p_second = &v11->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      result = v11->second;
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 78: range 0000000014464710-00000000144659B5
int32_t __cdecl GivingExcelConfigMgr::rewriteGivingData(GivingExcelConfigMgr *const this, TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int giving_method; // eax
  const unsigned int *v7; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // edx
  int v14; // eax
  char *v15; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  int v24; // edx
  const unsigned int *M_current; // r15
  const unsigned int *v26; // rcx
  char *v27; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v28; // rax
  int *v29; // rdx
  int v30; // ecx
  char v31; // al
  __int64 v32; // rsi
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  int v37; // eax
  char *v38; // rsi
  unsigned int *v39; // rax
  unsigned int *v40; // r8
  int *v41; // rdx
  int v42; // ecx
  char v43; // al
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  int v49; // edx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  data::GivingExcelConfigMap *__for_range; // [rsp+20h] [rbp-380h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::reference __in; // [rsp+28h] [rbp-378h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *giving_id; // [rsp+30h] [rbp-370h]
  std::tuple_element<1,std::pair<unsigned int const,data::GivingExcelConfig> >::type *config; // [rsp+38h] [rbp-368h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *giving_group_map; // [rsp+40h] [rbp-360h]
  std::vector<unsigned int> *__for_range_2; // [rsp+48h] [rbp-358h]
  data::GivingGroupExcelConfig *giving_group_config_ptr_0; // [rsp+50h] [rbp-350h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+58h] [rbp-348h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *item_set; // [rsp+60h] [rbp-340h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-338h]
  data::GivingGroupExcelConfig *giving_group_config_ptr; // [rsp+70h] [rbp-330h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *item_map; // [rsp+78h] [rbp-328h]
  std::vector<data::IdCountConfig> *__for_range_0; // [rsp+80h] [rbp-320h]
  const data::IdCountConfig *id_count_config; // [rsp+88h] [rbp-318h]
  char v69[784]; // [rsp+90h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 4 19 giving_group_id:103 64 4 19 giving_group_id:120 80 4 11 item_id:128 96 8 14 __for_beg"
                        "in:79 128 8 12 __for_end:79 160 8 14 __for_begin:88 192 8 12 __for_end:88 224 8 15 __for_begin:1"
                        "03 256 8 13 __for_end:103 288 8 15 __for_begin:120 320 8 13 __for_end:120 352 8 15 __for_begin:1"
                        "28 384 8 13 __for_end:128 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GivingExcelConfigMgr::rewriteGivingData;
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
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -202116109;
  __for_range = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::GivingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::GivingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GivingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v3 + 128)) )
    {
      v14 = 1;
      goto LABEL_90;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v3 + 96));
    giving_id = std::get<0ul,unsigned int const,data::GivingExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::GivingExcelConfig>(__in);
    common::tools::MiscUtils::removeEmptyElement<data::IdCountConfig,unsigned int data::IdCountConfig::*>(
      &config->exact_items,
      (unsigned int *)8);
    if ( *(_BYTE *)(((unsigned __int64)&config->giving_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->giving_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->giving_method);
    }
    giving_method = config->giving_method;
    if ( giving_method != 3 )
      break;
    giving_group_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                         &this->vague_giving_map_,
                         giving_id);
    __for_range_2 = &config->giving_group_ids;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 288, giving_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 320, giving_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v27 = (char *)(v3 + 320);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
      {
        v37 = 1;
        goto LABEL_83;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      v28 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
      v29 = (int *)v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      v30 = *v29;
      v31 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
      if ( v31 != 0 && v31 <= 3 )
      {
        LOBYTE(v27) = v31 != 0;
        __asan_report_store4(v3 + 64, v27);
      }
      *(_DWORD *)(v3 + 64) = v30;
      v32 = *(unsigned int *)(v3 + 64);
      giving_group_config_ptr_0 = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(this, v32);
      if ( !giving_group_config_ptr_0 )
        break;
      __for_range_3 = &giving_group_config_ptr_0->item_ids;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, v32);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 352) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, v32);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 384) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        v38 = (char *)(v3 + 384);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 352),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 384)) )
        {
          v49 = 1;
          goto LABEL_79;
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        v39 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
        v41 = (int *)v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v42 = *v41;
        v43 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
        if ( v43 != 0 && v43 <= 3 )
        {
          LOBYTE(v38) = v43 != 0;
          __asan_report_store4(v3 + 80, v38);
        }
        *(_DWORD *)(v3 + 80) = v42;
        v44 = std::map<unsigned int,unsigned int>::emplace<unsigned int &,unsigned int &>(
                giving_group_map,
                (unsigned int *)(v3 + 80),
                (unsigned int *)(v3 + 64),
                (unsigned int *)(v3 + 80),
                v40);
        if ( !v44.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 352));
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
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "rewriteGivingData",
        132);
      v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v46 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v45, (const char (*)[61])byte_1AD7C700);
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, (const unsigned int *)(v3 + 80));
      v48 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v47, (const char (*)[13])byte_1AD7C680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v49 = 0;
LABEL_79:
      *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v49 != 1 )
      {
        v37 = 0;
        goto LABEL_83;
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
    }
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GivingExcelConfig.cpp",
      "rewriteGivingData",
      125);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v34 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v33, (const char (*)[24])byte_1AD7C6C0);
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 64));
    v36 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v35, (const char (*)[13])byte_1AD7C680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, giving_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
    *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v37 = 0;
LABEL_83:
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
    if ( v37 != 1 )
    {
      v14 = 0;
      goto LABEL_90;
    }
LABEL_88:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v3 + 96));
  }
  if ( giving_method > 3 )
    goto LABEL_85;
  if ( giving_method == 1 )
  {
    item_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                 &this->exact_giving_map_,
                 giving_id);
    __for_range_0 = &config->exact_items;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, giving_id);
    *(std::vector<data::IdCountConfig>::iterator *)(v3 + 160) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, giving_id);
    *(std::vector<data::IdCountConfig>::iterator *)(v3 + 192) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig *,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 192)) )
      {
        v13 = 1;
        goto LABEL_29;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
      v8 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
             item_map,
             &id_count_config->id,
             &id_count_config->count,
             &id_count_config->id,
             v7);
      if ( !v8.second )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig *,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 160));
    }
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GivingExcelConfig.cpp",
      "rewriteGivingData",
      92);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 416),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v9, (const char (*)[37])byte_1AD7C620);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &id_count_config->id);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])byte_1AD7C680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, giving_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_29:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v14 = 0;
      goto LABEL_90;
    }
    goto LABEL_88;
  }
  if ( giving_method == 2 )
  {
    item_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](&this->group_giving_map_, giving_id);
    __for_range_1 = &config->giving_group_ids;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, giving_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 224) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, giving_id);
    *(std::vector<unsigned int>::iterator *)(v3 + 256) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v15 = (char *)(v3 + 256);
      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 224),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 256)) )
      {
        v24 = 1;
        goto LABEL_47;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
      v17 = (int *)v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      v18 = *v17;
      v19 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(v3 + 48, v15);
      }
      *(_DWORD *)(v3 + 48) = v18;
      giving_group_config_ptr = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(
                                  this,
                                  *(unsigned int *)(v3 + 48));
      if ( !giving_group_config_ptr )
        break;
      M_current = std::vector<unsigned int>::end(&giving_group_config_ptr->item_ids)._M_current;
      v26 = std::vector<unsigned int>::begin(&giving_group_config_ptr->item_ids)._M_current;
      std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
        item_set,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v26,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 224));
    }
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
      "./src/txt_data_manual/GivingExcelConfig.cpp",
      "rewriteGivingData",
      108);
    v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v20, (const char (*)[24])byte_1AD7C6C0);
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])byte_1AD7C680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, giving_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
    *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v24 = 0;
LABEL_47:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    if ( v24 != 1 )
    {
      v14 = 0;
      goto LABEL_90;
    }
    goto LABEL_88;
  }
LABEL_85:
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
    "./src/txt_data_manual/GivingExcelConfig.cpp",
    "rewriteGivingData",
    141);
  v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 672),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v51 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v50, (const char (*)[25])byte_1AD7C760);
  v52 = common::milog::MiLogStream::operator<<<data::GivingMethod,(data::GivingMethod*)0>(v51, &config->giving_method);
  v53 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v52, (const char (*)[13])byte_1AD7C680);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, giving_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
  v2 = -1;
  v14 = 0;
LABEL_90:
  if ( v14 == 1 )
    v2 = 0;
  if ( v69 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 149: range 00000000144659B6-0000000014467EFD
int32_t __cdecl GivingExcelConfigMgr::checkGivingData(
        GivingExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  char v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  int v15; // edx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  char *v34; // rsi
  unsigned int *v35; // rax
  int *v36; // rdx
  int v37; // ecx
  char v38; // al
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  int v43; // edx
  unsigned __int64 v44; // rax
  const unsigned int *M_current; // rsi
  unsigned __int64 v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  int giving_method; // eax
  char v50; // al
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  int v56; // eax
  __int64 v57; // rsi
  __int64 v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  char v61; // al
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v64; // rax
  GivingExcelConfigMgr *v65; // rcx
  __int64 v66; // rsi
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rdx
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rdx
  int v71; // eax
  char *v72; // rsi
  unsigned int *v73; // rax
  int *v74; // rdx
  int v75; // ecx
  char v76; // al
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  int v79; // eax
  __int64 v80; // rsi
  __int64 v81; // rdx
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  const unsigned int *__last; // [rsp+8h] [rbp-668h]
  std::set<unsigned int>::size_type __lasta; // [rsp+8h] [rbp-668h]
  data::GivingExcelConfigMap *__for_range; // [rsp+28h] [rbp-648h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::reference v93; // [rsp+30h] [rbp-640h]
  std::tuple_element<0,std::pair<unsigned int const,data::GivingExcelConfig> >::type *giving_id; // [rsp+38h] [rbp-638h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GivingExcelConfig> >::type *config; // [rsp+40h] [rbp-630h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+48h] [rbp-628h]
  const data::IdCountConfig *id_count_config; // [rsp+50h] [rbp-620h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+58h] [rbp-618h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+60h] [rbp-610h]
  const unsigned int *giving_group_id; // [rsp+68h] [rbp-608h]
  data::GivingGroupExcelConfig *giving_group_config_ptr; // [rsp+70h] [rbp-600h]
  const std::vector<unsigned int> *__for_range_4; // [rsp+78h] [rbp-5F8h]
  const data::MaterialExcelConfig *material_config_ptr_0; // [rsp+80h] [rbp-5F0h]
  const std::vector<data::IdCountConfig> *__for_range_2; // [rsp+88h] [rbp-5E8h]
  const data::IdCountConfig *id_count_config_0; // [rsp+90h] [rbp-5E0h]
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+98h] [rbp-5D8h]
  char v107[1488]; // [rsp+A0h] [rbp-5D0h] BYREF

  v3 = (unsigned __int64)v107;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1440LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "29 48 4 19 giving_group_id:184 64 4 11 item_id:244 80 8 15 __for_begin:150 112 8 13 __for_end:15"
                        "0 144 8 15 __for_begin:152 176 8 13 __for_end:152 208 8 15 __for_begin:184 240 8 13 __for_end:18"
                        "4 272 8 15 __for_begin:209 304 8 13 __for_end:209 336 8 15 __for_begin:236 368 8 13 __for_end:23"
                        "6 400 8 15 __for_begin:244 432 8 13 __for_end:244 464 32 9 <unknown> 528 32 9 <unknown> 592 32 9"
                        " <unknown> 656 32 9 <unknown> 720 32 9 <unknown> 784 32 9 <unknown> 848 32 9 <unknown> 912 32 9 "
                        "<unknown> 976 32 9 <unknown> 1040 32 9 <unknown> 1104 32 9 <unknown> 1168 32 9 <unknown> 1232 32"
                        " 9 <unknown> 1296 32 9 <unknown> 1360 48 9 <unknown>";
  *(_QWORD *)(v3 + 16) = GivingExcelConfigMgr::checkGivingData;
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
  v5[536862735] = -219021312;
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
  v5[536862764] = -202116109;
  __for_range = &this->giving_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::GivingExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::GivingExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::GivingExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::GivingExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::GivingExcelConfig>,false> *)(v3 + 112)) )
    {
      v16 = 1;
      goto LABEL_188;
    }
    v93 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v3 + 80));
    giving_id = std::get<0ul,unsigned int const,data::GivingExcelConfig>(v93);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GivingExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GivingExcelConfig>(v93);
    __for_range_0 = &config->exact_items;
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 144) = std::vector<data::IdCountConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 176) = std::vector<data::IdCountConfig>::end(__for_range_0);
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 144),
              (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 176)) )
      {
        v15 = 1;
        goto LABEL_30;
      }
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 144));
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&id_count_config->id);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, id_count_config->id) )
        goto LABEL_22;
      if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&id_count_config->count);
      }
      if ( id_count_config->count )
        v8 = 0;
      else
LABEL_22:
        v8 = 1;
      if ( v8 )
        break;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 144));
    }
    *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 464, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 464),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GivingExcelConfig.cpp",
      "checkGivingData",
      157);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 464),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v9, (const char (*)[43])byte_1AD7CA60);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &id_count_config->id);
    v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])byte_1AD7CAC0);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &id_count_config->count);
    v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])byte_1AD7C680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, giving_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
    *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v15 = 0;
LABEL_30:
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v16 = 0;
      goto LABEL_188;
    }
    v17 = ((_BYTE)config + 20) & 7;
    v18 = (*(_BYTE *)(((unsigned __int64)&config->is_repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&config->is_repeatable >> 3) + 0x7FFF8000));
    if ( (_BYTE)v18 )
      __asan_report_load1(&config->is_repeatable, v17, v18);
    if ( config->is_repeatable )
    {
      v19 = ((_BYTE)config + 92) & 7;
      v20 = (*(_BYTE *)(((unsigned __int64)&config->is_remove_item >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&config->is_remove_item >> 3) + 0x7FFF8000));
      if ( (_BYTE)v20 )
        __asan_report_load1(&config->is_remove_item, v19, v20);
      if ( !config->is_remove_item )
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GivingExcelConfig.cpp",
          "checkGivingData",
          166);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v21, (const char (*)[61])byte_1AD7CB00);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, giving_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        v2 = -1;
        v16 = 0;
        goto LABEL_188;
      }
    }
    v23 = ((_BYTE)config + 20) & 7;
    v24 = (*(_BYTE *)(((unsigned __int64)&config->is_repeatable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&config->is_repeatable >> 3) + 0x7FFF8000));
    if ( (_BYTE)v24 )
      __asan_report_load1(&config->is_repeatable, v23, v24);
    if ( !config->is_repeatable )
    {
      v25 = ((_BYTE)config + 93) & 7;
      v26 = (*(_BYTE *)(((unsigned __int64)&config->is_reset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&config->is_reset >> 3) + 0x7FFF8000));
      if ( (_BYTE)v26 )
        __asan_report_load1(&config->is_reset, v25, v26);
      if ( config->is_reset )
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
          "./src/txt_data_manual/GivingExcelConfig.cpp",
          "checkGivingData",
          173);
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v28 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v27, (const char (*)[55])byte_1AD7CB60);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, giving_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
        v2 = -1;
        v16 = 0;
        goto LABEL_188;
      }
    }
    v29 = ((_BYTE)config + 100) & 7;
    v30 = (*(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000));
    if ( (_BYTE)v30 )
      __asan_report_load1(&config->is_take_back, v29, v30);
    if ( config->is_take_back )
    {
      v29 = ((_BYTE)config + 92) & 7;
      v31 = (*(_BYTE *)(((unsigned __int64)&config->is_remove_item >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&config->is_remove_item >> 3) + 0x7FFF8000));
      if ( (_BYTE)v31 )
        __asan_report_load1(&config->is_remove_item, v29, v31);
      if ( !config->is_remove_item )
      {
        *(_DWORD *)(((v3 + 656) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 687) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 656, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 656),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GivingExcelConfig.cpp",
          "checkGivingData",
          180);
        v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 656),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v33 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v32, (const char (*)[64])byte_1AD7CBC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, giving_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 656));
        v2 = -1;
        v16 = 0;
        goto LABEL_188;
      }
    }
    __for_range_1 = &config->giving_group_ids;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, v29);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 208) = std::vector<unsigned int>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 240, v29);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::end(__for_range_1);
    while ( 1 )
    {
      v34 = (char *)(v3 + 240);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 208),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240)) )
      {
        v43 = 1;
        goto LABEL_75;
      }
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      v35 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
      v36 = (int *)v35;
      if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v35);
      }
      v37 = *v36;
      v38 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v38 != 0 && v38 <= 3 )
      {
        LOBYTE(v34) = v38 != 0;
        __asan_report_store4(v3 + 48, v34);
      }
      *(_DWORD *)(v3 + 48) = v37;
      if ( !data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(this, *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 208));
    }
    *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 720) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 751) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 720, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 720),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/GivingExcelConfig.cpp",
      "checkGivingData",
      188);
    v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 720),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v40 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v39, (const char (*)[24])byte_1AD7C6C0);
    v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v3 + 48));
    v42 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v41, (const char (*)[13])byte_1AD7C680);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, giving_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 720));
    *(_DWORD *)(((v3 + 720) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v43 = 0;
LABEL_75:
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v43 != 1 )
    {
      v16 = 0;
      goto LABEL_188;
    }
    v44 = ((v3 + 1360) >> 3) + 2147450880;
    *(_DWORD *)v44 = 0;
    *(_WORD *)(v44 + 4) = 0;
    __last = std::vector<unsigned int>::end(&config->giving_group_ids)._M_current;
    M_current = std::vector<unsigned int>::begin(&config->giving_group_ids)._M_current;
    std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
      (std::set<unsigned int> *const)(v3 + 1360),
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
      (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)__last);
    __lasta = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 1360));
    LOBYTE(__lasta) = __lasta != std::vector<unsigned int>::size(&config->giving_group_ids);
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1360));
    v46 = ((v3 + 1360) >> 3) + 2147450880;
    *(_DWORD *)v46 = -117901064;
    *(_WORD *)(v46 + 4) = -1800;
    if ( (_BYTE)__lasta )
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
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "checkGivingData",
        194);
      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 784),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v48 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v47, (const char (*)[33])byte_1AD7CC20);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 784));
      v2 = -1;
      v16 = 0;
      goto LABEL_188;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->giving_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->giving_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->giving_method);
    }
    giving_method = config->giving_method;
    if ( giving_method == 1 )
      break;
    if ( giving_method <= 0 || (unsigned int)(giving_method - 2) > 1 )
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
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "checkGivingData",
        263);
      v84 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1296),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v85 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v84, (const char (*)[25])byte_1AD7C760);
      v86 = common::milog::MiLogStream::operator<<<data::GivingMethod,(data::GivingMethod*)0>(
              v85,
              &config->giving_method);
      v87 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v86, (const char (*)[13])byte_1AD7C680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1296));
      v2 = -1;
      v16 = 0;
      goto LABEL_188;
    }
    if ( !std::vector<data::IdCountConfig>::empty(&config->exact_items)
      || std::vector<unsigned int>::empty(&config->giving_group_ids) )
    {
      goto LABEL_131;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->giving_group_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->giving_group_count);
    }
    if ( !config->giving_group_count )
LABEL_131:
      v61 = 1;
    else
      v61 = 0;
    if ( v61 )
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
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "checkGivingData",
        230);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1040),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v63 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v62, (const char (*)[49])byte_1AD7CDA0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1040));
      v2 = -1;
      v16 = 0;
      goto LABEL_188;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->giving_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->giving_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->giving_type);
    }
    if ( config->giving_type == GIVING_TYPE_GADGET )
    {
      __for_range_3 = &config->giving_group_ids;
      *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 336, M_current);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 336) = std::vector<unsigned int>::begin(__for_range_3);
      *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 368, M_current);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 368) = std::vector<unsigned int>::end(__for_range_3);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 336),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 368)) )
        {
          v71 = 1;
          goto LABEL_181;
        }
        v64 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
        giving_group_id = v64;
        v65 = this;
        if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v64);
        }
        v66 = *giving_group_id;
        giving_group_config_ptr = data::GivingExcelConfigMgrBase::findGivingGroupExcelConfig(v65, v66);
        if ( !giving_group_config_ptr )
          break;
        __for_range_4 = &giving_group_config_ptr->item_ids;
        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 400, v66);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 400) = std::vector<unsigned int>::begin(__for_range_4);
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 432, v66);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 432) = std::vector<unsigned int>::end(__for_range_4);
        while ( 1 )
        {
          v72 = (char *)(v3 + 432);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 400),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 432)) )
          {
            v79 = 1;
            goto LABEL_177;
          }
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          v73 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
          v74 = (int *)v73;
          if ( *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v73 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v73 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v73);
          }
          v75 = *v74;
          v76 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
          if ( v76 != 0 && v76 <= 3 )
          {
            LOBYTE(v72) = v76 != 0;
            __asan_report_store4(v3 + 64, v72);
          }
          *(_DWORD *)(v3 + 64) = v75;
          material_config_ptr_0 = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                    &txt_config_mgr->material_config_mgr,
                                    *(unsigned int *)(v3 + 64));
          if ( !material_config_ptr_0 )
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
              "./src/txt_data_manual/GivingExcelConfig.cpp",
              "checkGivingData",
              249);
            v77 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 1168),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v78 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v77,
                    (const char (*)[44])"findMaterialExcelConfig fails, material_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1168));
            *(_DWORD *)(((v3 + 1168) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v79 = 0;
            goto LABEL_177;
          }
          v80 = ((_BYTE)config + 100) & 7;
          v81 = (*(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v80 >= *(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000));
          if ( (_BYTE)v81 )
            __asan_report_load1(&config->is_take_back, v80, v81);
          if ( config->is_take_back )
          {
            if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr_0->material_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)material_config_ptr_0 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr_0->material_type >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&material_config_ptr_0->material_type);
            }
            if ( material_config_ptr_0->material_type != MATERIAL_QUEST )
              break;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 400));
        }
        *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1232) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1263) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1232, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1232),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/GivingExcelConfig.cpp",
          "checkGivingData",
          254);
        v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1232),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v83 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v82,
                (const char (*)[33])"material not quest, material_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v83, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1232));
        *(_DWORD *)(((v3 + 1232) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v79 = 0;
LABEL_177:
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 400) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 432) >> 3) + 0x7FFF8000) = -8;
        if ( v79 != 1 )
        {
          v71 = 0;
          goto LABEL_181;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 336));
      }
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
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "checkGivingData",
        241);
      v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1104),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v68 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v67, (const char (*)[24])byte_1AD7C6C0);
      v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, giving_group_id);
      v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v69, (const char (*)[13])byte_1AD7C680);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, giving_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1104));
      *(_DWORD *)(((v3 + 1104) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v71 = 0;
LABEL_181:
      *(_BYTE *)(((v3 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 368) >> 3) + 0x7FFF8000) = -8;
      if ( v71 != 1 )
      {
        v16 = 0;
        goto LABEL_188;
      }
    }
LABEL_186:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::GivingExcelConfig>,false,false> *const)(v3 + 80));
  }
  if ( std::vector<data::IdCountConfig>::empty(&config->exact_items)
    || !std::vector<unsigned int>::empty(&config->giving_group_ids) )
  {
    goto LABEL_92;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config->giving_group_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config->giving_group_count);
  }
  if ( config->giving_group_count )
LABEL_92:
    v50 = 1;
  else
    v50 = 0;
  if ( !v50 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config->giving_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->giving_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->giving_type);
    }
    if ( config->giving_type == GIVING_TYPE_GADGET )
    {
      __for_range_2 = &config->exact_items;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, M_current);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 272) = std::vector<data::IdCountConfig>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 304, M_current);
      *(std::vector<data::IdCountConfig>::const_iterator *)(v3 + 304) = std::vector<data::IdCountConfig>::end(__for_range_2);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 272),
                (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v3 + 304)) )
        {
          v56 = 1;
          goto LABEL_124;
        }
        id_count_config_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 272));
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&id_count_config_0->id);
        }
        material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                p_material_config_mgr,
                                id_count_config_0->id);
        if ( !material_config_ptr )
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
            "./src/txt_data_manual/GivingExcelConfig.cpp",
            "checkGivingData",
            214);
          v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 912),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v55 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v54,
                  (const char (*)[44])"findMaterialExcelConfig fails, material_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, &id_count_config_0->id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 912));
          *(_DWORD *)(((v3 + 912) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v56 = 0;
          goto LABEL_124;
        }
        v57 = ((_BYTE)config + 100) & 7;
        v58 = (*(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v57 >= *(_BYTE *)(((unsigned __int64)&config->is_take_back >> 3) + 0x7FFF8000));
        if ( (_BYTE)v58 )
          __asan_report_load1(&config->is_take_back, v57, v58);
        if ( config->is_take_back )
        {
          if ( *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)material_config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&material_config_ptr->material_type >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_load4(&material_config_ptr->material_type);
          }
          if ( material_config_ptr->material_type != MATERIAL_QUEST )
            break;
        }
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v3 + 272));
      }
      *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 976) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 79) & 7) >= *(_BYTE *)(((v3 + 1007) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 976, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 976),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/GivingExcelConfig.cpp",
        "checkGivingData",
        219);
      v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 976),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v60 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v59,
              (const char (*)[33])"material not quest, material_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &id_count_config_0->id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 976));
      *(_DWORD *)(((v3 + 976) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v56 = 0;
LABEL_124:
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 304) >> 3) + 0x7FFF8000) = -8;
      if ( v56 != 1 )
      {
        v16 = 0;
        goto LABEL_188;
      }
    }
    goto LABEL_186;
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
    "./src/txt_data_manual/GivingExcelConfig.cpp",
    "checkGivingData",
    203);
  v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 848),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v52 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v51, (const char (*)[55])byte_1AD7CC80);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, giving_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 848));
  v2 = -1;
  v16 = 0;
LABEL_188:
  if ( v16 == 1 )
    v2 = 0;
  if ( v107 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80AC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 180) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1440LL, v107);
  }
  return v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ItemLimitExcelConfig.cpp

// Line 20: range 0000000014497F87-00000000144980B0
bool __cdecl operator==(const ItemIndexKey *lhs, const ItemIndexKey *rhs)
{
  data::ItemType item_type; // ecx
  uint32_t index_value; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)lhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(lhs);
  }
  item_type = lhs->item_type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)rhs & 7) + 3) >= *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(rhs);
  }
  if ( item_type != rhs->item_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->index_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->index_value);
  }
  index_value = lhs->index_value;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->index_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->index_value);
  }
  return index_value == rhs->index_value;
};

// Line 25: range 00000000144980B1-000000001449811F
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ItemIndexKey *item_index_key)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax

  v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
         stream,
         (const char (*)[27])"item_index_key:[item_type:");
  v3 = common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
         v2,
         (const data::ItemType *)item_index_key);
  v4 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v3, (const char (*)[14])",index_value:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &item_index_key->index_value);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"]");
  return stream;
};

// Line 31: range 0000000014498120-0000000014498258
bool __cdecl operator==(const ItemLimitWhiteListIndex *lhs, const ItemLimitWhiteListIndex *rhs)
{
  data::ItemLimitWhiteType white_type; // ecx
  data::ItemLimitWhiteSubType sub_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)lhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(lhs);
  }
  white_type = lhs->white_type;
  if ( *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)rhs >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(rhs);
  }
  if ( white_type != rhs->white_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&lhs->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lhs->sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&lhs->sub_type);
  }
  sub_type = lhs->sub_type;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rhs + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rhs->sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&rhs->sub_type);
  }
  return sub_type == rhs->sub_type
      && std::operator==<unsigned int,std::allocator<unsigned int>>(&lhs->param_vec, &rhs->param_vec);
};

// Line 35: range 0000000014498259-00000000144984A3
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const ItemLimitWhiteListIndex *white_list_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *result; // rax
  char v16[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = operator<<;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         stream,
         (const char (*)[41])"item_limit_white_list_index:[white_type:");
  if ( *(_BYTE *)(((unsigned __int64)white_list_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)white_list_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(white_list_index);
  }
  v6 = (__int64)data::enumValToStr(white_list_index->white_type, (__int64)"item_limit_white_list_index:[white_type:");
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    v6 = __asan_report_store8(v2 + 32, "item_limit_white_list_index:[white_type:");
  *(_QWORD *)(v2 + 32) = v6;
  v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)(v2 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])",sub_type:");
  v9 = (((_BYTE)white_list_index + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&white_list_index->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)white_list_index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&white_list_index->sub_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&white_list_index->sub_type);
  }
  v10 = (__int64)data::enumValToStr(white_list_index->sub_type, v9);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    v10 = __asan_report_store8(v2 + 64, v9);
  *(_QWORD *)(v2 + 64) = v10;
  v11 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 64));
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])",params:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int>(v12, &white_list_index->param_vec);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])"]");
  result = stream;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 44: range 00000000144984A4-0000000014498C36
int32_t __cdecl ItemLimitExcelConfigMgr::loadConfig(ItemLimitExcelConfigMgr *const this, HK4EDesignConfig *config)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  __int64 v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 v17; // rax
  common::milog::MiLogStream *v18; // rax
  char v19[432]; // [rsp+10h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 3"
                        "2 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::loadConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  if ( data::ItemLimitExcelConfigMgrBase::loadConfig(this, config) )
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
      4u,
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "loadConfig",
      47);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      v5,
      (const char (*)[47])"ItemLimitExcelConfigMgrBase loadConfig failed ");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else if ( ItemLimitExcelConfigMgr::findConstValue<unsigned int>(
              this,
              LIMIT_CONST_VALUE_DAY_BONUS_COUNT,
              &this->bonus_count_daily_limit_) )
  {
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "loadConfig",
      57);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])"findConstValue ");
    v9 = (__int64)data::enumValToStr(LIMIT_CONST_VALUE_DAY_BONUS_COUNT, (__int64)"findConstValue ");
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v2 + 32, "findConstValue ");
    *(_QWORD *)(v2 + 32) = v9;
    v10 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])" fails");
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = -1;
  }
  else if ( ItemLimitExcelConfigMgr::findConstValue<bool>(
              this,
              LIMIT_CONST_VALUE_BONUS_OUTPUT_SWITCH_ONE,
              &this->is_detached_bonus_limit_can_forbid_) )
  {
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "loadConfig",
      58);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 256),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])"findConstValue ");
    v13 = (__int64)data::enumValToStr(LIMIT_CONST_VALUE_BONUS_OUTPUT_SWITCH_ONE, (__int64)"findConstValue ");
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_store8(v2 + 64, "findConstValue ");
    *(_QWORD *)(v2 + 64) = v13;
    v14 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v12, (const char *const *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" fails");
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = -1;
  }
  else if ( ItemLimitExcelConfigMgr::findConstValue<bool>(
              this,
              LIMIT_CONST_VALUE_BONUS_OUTPUT_SWITCH_TWO,
              &this->is_united_bonus_limit_can_forbid_) )
  {
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "loadConfig",
      59);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 320),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])"findConstValue ");
    v17 = (__int64)data::enumValToStr(LIMIT_CONST_VALUE_BONUS_OUTPUT_SWITCH_TWO, (__int64)"findConstValue ");
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_store8(v2 + 96, "findConstValue ");
    *(_QWORD *)(v2 + 96) = v17;
    v18 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)(v2 + 96));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" fails");
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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

// Line 67: range 0000000014498C38-000000001449940A
int32_t __cdecl ItemLimitExcelConfigMgr::rewriteConfig(
        ItemLimitExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  _DWORD *v6; // rax
  __int64 v7; // rsi
  data::ItemLimitType v8; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::ItemLimitRefreshType refresh_type; // ecx
  char v12; // dl
  OutputLimitConfig *v13; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  int v17; // r15d
  _DWORD *v18; // rax
  int v19; // edx
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  data::OutputControlLimitExcelConfigMap *__for_range; // [rsp+20h] [rbp-190h]
  std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-188h]
  std::tuple_element<0,std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *limit_type; // [rsp+30h] [rbp-180h]
  std::tuple_element<1,const std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *output_control_config; // [rsp+38h] [rbp-178h]
  char v28[368]; // [rsp+40h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 14 __for_begin:69 64 8 12 __for_end:69 96 32 9 <unknown> 160 32 9 <unknown> 224 64 22 out"
                        "put_limit_config:71";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::rewriteConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862729] = -202116109;
  __for_range = &this->output_control_limit_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 64)) )
  {
    v25 = std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 32));
    limit_type = std::get<0ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v25);
    output_control_config = (std::tuple_element<1,const std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *)std::get<1ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v25);
    v6 = (_DWORD *)(((v3 + 224) >> 3) + 2147450880);
    *v6 = 0;
    v6[1] = 0;
    v7 = ((unsigned __int8)limit_type & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)limit_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)limit_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(limit_type);
    }
    v8 = *limit_type;
    v9 = *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v7) = v9 != 0;
      __asan_report_store4(v3 + 224, v7);
    }
    *(_DWORD *)(v3 + 224) = v8;
    v10 = (((_BYTE)output_control_config + 68) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&output_control_config->refresh_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)output_control_config + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&output_control_config->refresh_type >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&output_control_config->refresh_type);
    }
    refresh_type = output_control_config->refresh_type;
    v12 = *(_BYTE *)(((v3 + 228) >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((v3 - 32 + 4) & 7) + 3) >= v12 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(v3 + 228, v10);
    }
    *(_DWORD *)(v3 + 228) = refresh_type;
    if ( *(char *)(((v3 + 232) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 32 + 63) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 232, 56LL);
    }
    *(_QWORD *)(v3 + 232) = 0LL;
    *(_QWORD *)(v3 + 240) = 0LL;
    *(_QWORD *)(v3 + 248) = 0LL;
    *(_QWORD *)(v3 + 256) = 0LL;
    *(_QWORD *)(v3 + 264) = 0LL;
    *(_QWORD *)(v3 + 272) = 0LL;
    *(_QWORD *)(v3 + 280) = 0LL;
    std::unordered_map<ItemIndexKey,unsigned int>::unordered_map((std::unordered_map<ItemIndexKey,unsigned int> *const)(v3 + 232));
    v14 = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::emplace<data::ItemLimitType const&,OutputLimitConfig&>(
            &this->output_limit_config_map_,
            limit_type,
            (OutputLimitConfig *)(v3 + 224),
            (const data::ItemLimitType *)&this->output_limit_config_map_,
            v13);
    if ( !v14.second )
    {
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "rewriteConfig",
        74);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v15, (const char (*)[28])byte_1AD87BE0);
      common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(v16, limit_type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v17 = 0;
    }
    else
    {
      v17 = 1;
    }
    OutputLimitConfig::~OutputLimitConfig((OutputLimitConfig *const)(v3 + 224));
    v18 = (_DWORD *)(((v3 + 224) >> 3) + 2147450880);
    *v18 = -117901064;
    v18[1] = -117901064;
    if ( v17 != 1 )
    {
      v19 = 0;
      goto LABEL_29;
    }
    std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 32));
  }
  v19 = 1;
LABEL_29:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v19 == 1 )
  {
    if ( ItemLimitExcelConfigMgr::rewriteOutputLimitConfig(this, txt_config_mgr)
      || ItemLimitExcelConfigMgr::rewriteOutputControlLimitConfig(this, txt_config_mgr)
      || ItemLimitExcelConfigMgr::rewriteItemLimitWhiteListConfig(this, txt_config_mgr) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "rewriteConfig",
        84);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v21, (const char (*)[21])"rewriteConfig failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
    }
    else
    {
      v2 = 0;
    }
  }
  result = v2;
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 92: range 000000001449940C-0000000014499634
int32_t __cdecl ItemLimitExcelConfigMgr::checkConfig(
        ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
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
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ItemLimitExcelConfigMgr::checkOutputLimitConfig(this, txt_config_mgr)
    || ItemLimitExcelConfigMgr::checkOutputControlLimitConfig(this, txt_config_mgr)
    || ItemLimitExcelConfigMgr::checkItemLimitWhiteListConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "checkConfig",
      98);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
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

// Line 107: range 0000000014499636-00000000144997F7
const OutputLimitConfig *__fastcall ItemLimitExcelConfigMgr::findOutputLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        __int64 item_limit_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<data::ItemLimitType,OutputLimitConfig> *p_output_limit_config_map; // rdx
  std::unordered_map<data::ItemLimitType,OutputLimitConfig> *v6; // rdx
  bool v7; // al
  const OutputLimitConfig *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 19 item_limit_type:106 64 8 8 iter:108 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::findOutputLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_limit_type;
  p_output_limit_config_map = &this->output_limit_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_limit_type);
  *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v2 + 64) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::find(
                                                                                              p_output_limit_config_map,
                                                                                              (const std::unordered_map<data::ItemLimitType,OutputLimitConfig>::key_type *)(v2 + 48));
  v6 = &this->output_limit_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v2 + 96) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::end(v6);
  v7 = std::__detail::operator==<std::pair<data::ItemLimitType const,OutputLimitConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,OutputLimitConfig>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false> *const)(v2 + 64))->second;
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

// Line 118: range 00000000144997F8-0000000014499C9D
__int64 __fastcall ItemLimitExcelConfigMgr::isItemAllowedByOutputControl(
        const ItemLimitExcelConfigMgr *const this,
        uint32_t item_id,
        const std::string *control_type_str,
        data::ItemLimitType item_limit_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v10; // r14
  __int64 v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const data::OutputControlLimitExcelConfig *output_control_config_ptr; // [rsp+28h] [rbp-118h]
  char v19[272]; // [rsp+30h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 11 item_id:117 48 4 19 item_limit_type:117 64 8 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ItemLimitExcelConfigMgr::isItemAllowedByOutputControl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862724] = -218959118;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 32) = item_id;
  *(_DWORD *)(v4 + 48) = item_limit_type;
  output_control_config_ptr = data::ItemLimitExcelConfigMgrBase::findOutputControlLimitExcelConfig(
                                this,
                                *(unsigned int *)(v4 + 48));
  if ( output_control_config_ptr )
  {
    if ( std::vector<std::string>::empty(&output_control_config_ptr->allowed_control_types)
      || common::tools::MiscUtils::isContains<std::string>(
           &output_control_config_ptr->allowed_control_types,
           control_type_str) )
    {
      result = 1LL;
    }
    else if ( common::tools::MiscUtils::isContains<unsigned int>(
                &output_control_config_ptr->allowed_item_ids,
                (const unsigned int *)(v4 + 32)) )
    {
      result = 1LL;
    }
    else
    {
      if ( *(char *)(((v4 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 96 + 31) & 7) >= *(_BYTE *)(((v4 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "isItemAllowedByOutputControl",
        134);
      v10 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
              (common::milog::MiLogStream *const)(v4 + 160),
              (const char (*)[76])byte_1AD87D80);
      v11 = (__int64)data::enumValToStr((data::ItemLimitType)*(_DWORD *)(v4 + 48), (__int64)byte_1AD87D80);
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
        v11 = __asan_report_store8(v4 + 64, byte_1AD87D80);
      *(_QWORD *)(v4 + 64) = v11;
      v12 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v10, (const char *const *)(v4 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" ItemID:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 32));
      v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])byte_1AD87E40);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, control_type_str);
      *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 160));
      result = 0LL;
    }
  }
  else
  {
    if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 127) & 7) >= *(_BYTE *)(((v4 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v4 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v4 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "isItemAllowedByOutputControl",
      122);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           (common::milog::MiLogStream *const)(v4 + 96),
           (const char (*)[57])"findOutputControlLimitExcelConfig fail, item_limit_type:");
    common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
      v7,
      (const data::ItemLimitType *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 96));
    result = 1LL;
  }
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 140: range 0000000014499C9E-000000001449B107
int32_t __cdecl ItemLimitExcelConfigMgr::rewriteOutputLimitConfig(
        ItemLimitExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  OutputLimitConfig *v6; // rsi
  int v7; // eax
  data::ItemLimitType *p_item_limit_type; // rsi
  data::ItemType item_type; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t index_value; // ecx
  char v13; // dl
  unsigned int *v14; // r8
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<const ItemIndexKey,unsigned int>,false,false>,bool> v21; // rax
  bool *v22; // r8
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  bool *p_is_allow_unspecified_item_limit; // rdx
  char *v28; // rsi
  char *v29; // rsi
  bool v30; // al
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  std::__detail::_Node_iterator<std::pair<const ItemIndexKey,bool>,false,false>::pointer v33; // rdx
  char v34; // cl
  bool second; // cl
  char v36; // dl
  __int64 v37; // rdx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  std::unordered_set<ItemIndexKey> *v41; // rax
  __int64 v42; // rdx
  std::unordered_set<ItemIndexKey> *v43; // rax
  int v44; // edx
  unsigned __int64 n; // rax
  std::tuple_element<1,std::pair<const ItemIndexKey,bool> >::type *v46; // rax
  __int64 v47; // rsi
  __int64 v48; // rdx
  std::tuple_element<0,std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *v49; // rsi
  std::unordered_map<ItemIndexKey,unsigned int> *p_item_limit_map; // rcx
  int *v51; // r8
  char v52; // al
  int32_t ret; // [rsp+14h] [rbp-38Ch]
  data::ItemLimitExcelConfigVec *__for_range; // [rsp+18h] [rbp-388h]
  data::ItemLimitExcelConfig *item_limit_config; // [rsp+20h] [rbp-380h]
  OutputLimitConfig *output_limit_config; // [rsp+28h] [rbp-378h]
  std::unordered_map<ItemIndexKey,bool> *__for_range_0; // [rsp+30h] [rbp-370h]
  const ItemIndexKey *item_index_key; // [rsp+38h] [rbp-368h]
  std::tuple_element<1,std::pair<const ItemIndexKey,bool> >::type *is_allow_unspecified_item_limit; // [rsp+40h] [rbp-360h]
  data::OutputControlLimitExcelConfigMap *__for_range_1; // [rsp+48h] [rbp-358h]
  std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false>::reference v62; // [rsp+50h] [rbp-350h]
  std::tuple_element<0,std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *limit_type; // [rsp+58h] [rbp-348h]
  char v64[816]; // [rsp+70h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 32 4 16 output_limit:152 48 4 9 <unknown> 64 8 15 __for_begin:144 96 8 13 __for_end:144 128 8"
                        " 18 item_index_key:154 160 8 8 iter:170 192 8 9 <unknown> 224 8 15 __for_begin:194 256 8 13 __fo"
                        "r_end:194 288 8 15 __for_begin:200 320 8 13 __for_end:200 352 12 9 <unknown> 384 16 9 <unknown> "
                        "416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 56 22 item_index_key_map:141";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::rewriteOutputLimitConfig;
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
  v5[536862731] = -219020288;
  v5[536862732] = -219021312;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  std::unordered_map<ItemIndexKey,bool>::unordered_map((std::unordered_map<ItemIndexKey,bool> *const)(v3 + 672));
  ret = 0;
  __for_range = &this->item_limit_excel_config_vec;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<data::ItemLimitExcelConfig>::iterator *)(v3 + 64) = std::vector<data::ItemLimitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<data::ItemLimitExcelConfig>::iterator *)(v3 + 96) = std::vector<data::ItemLimitExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (OutputLimitConfig *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<data::ItemLimitExcelConfig *,std::vector<data::ItemLimitExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig*,std::vector<data::ItemLimitExcelConfig> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig*,std::vector<data::ItemLimitExcelConfig> > *)(v3 + 96)) )
      break;
    item_limit_config = __gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig *,std::vector<data::ItemLimitExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig*,std::vector<data::ItemLimitExcelConfig> > *const)(v3 + 64));
    if ( (unsigned __int8)std::string::empty() )
    {
      v7 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, v6);
      *(_DWORD *)(v3 + 32) = 0;
      p_item_limit_type = &item_limit_config->item_limit_type;
      output_limit_config = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::operator[](
                              &this->output_limit_config_map_,
                              &item_limit_config->item_limit_type);
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&item_limit_config->item_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&item_limit_config->item_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&item_limit_config->item_type);
      }
      item_type = item_limit_config->item_type;
      v10 = *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(p_item_limit_type) = v10 != 0;
        __asan_report_store4(v3 + 128, p_item_limit_type);
      }
      *(_DWORD *)(v3 + 128) = item_type;
      v11 = (((_BYTE)item_limit_config + 12) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&item_limit_config->index_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)item_limit_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_limit_config->index_value >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&item_limit_config->index_value);
      }
      index_value = item_limit_config->index_value;
      v13 = *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((v3 - 124) & 7) + 3) >= v13 )
      {
        LOBYTE(v11) = v13 != 0;
        __asan_report_store4(v3 + 132, v11);
      }
      *(_DWORD *)(v3 + 132) = index_value;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &item_limit_config->output_limit_str,
             (unsigned int *)(v3 + 32),
             1) )
      {
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
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "rewriteOutputLimitConfig",
          157);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v15, (const char (*)[29])byte_1AD88060);
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v16,
                &item_limit_config->output_limit_str);
        v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])byte_1AD880A0);
        v19 = operator<<(v18, (const ItemIndexKey *)(v3 + 128));
        v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])byte_1AD880E0);
        v6 = output_limit_config;
        common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
          v20,
          &output_limit_config->item_limit_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
        *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
        v7 = 0;
      }
      else
      {
        v21 = std::unordered_map<ItemIndexKey,unsigned int>::emplace<ItemIndexKey&,unsigned int &>(
                &output_limit_config->item_limit_map,
                (ItemIndexKey *)(v3 + 128),
                (unsigned int *)(v3 + 32),
                (ItemIndexKey *)&output_limit_config->item_limit_map,
                v14);
        if ( !v21.second )
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
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "rewriteOutputLimitConfig",
            165);
          v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v24 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v23, (const char (*)[49])byte_1AD88120);
          v25 = operator<<(v24, (const ItemIndexKey *)(v3 + 128));
          v26 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v25, (const char (*)[17])byte_1AD880E0);
          v6 = output_limit_config;
          common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
            v26,
            &output_limit_config->item_limit_type);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
          *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
          v7 = 0;
        }
        else
        {
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
          p_is_allow_unspecified_item_limit = &item_limit_config->is_allow_unspecified_item_limit;
          if ( *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_store16();
          v28 = (char *)(v3 + 128);
          *(std::pair<std::__detail::_Node_iterator<std::pair<const ItemIndexKey,bool>,false,false>,bool> *)(v3 + 384) = std::unordered_map<ItemIndexKey,bool>::emplace<ItemIndexKey&,bool &>((std::unordered_map<ItemIndexKey,bool> *const)(v3 + 672), (ItemIndexKey *)(v3 + 128), p_is_allow_unspecified_item_limit, (ItemIndexKey *)(v3 + 128), v22);
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, v28);
          if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v3 + 384);
          *(_QWORD *)(v3 + 160) = *(_QWORD *)(v3 + 384);
          *(_WORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -1800;
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 192, v28);
          *(std::unordered_map<ItemIndexKey,bool>::iterator *)(v3 + 192) = std::unordered_map<ItemIndexKey,bool>::end((std::unordered_map<ItemIndexKey,bool> *const)(v3 + 672));
          v29 = (char *)(v3 + 192);
          v30 = std::__detail::operator==<std::pair<ItemIndexKey const,bool>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,bool>,false> *)(v3 + 160),
                  (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,bool>,false> *)(v3 + 192));
          *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
          if ( v30 )
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
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "rewriteOutputLimitConfig",
              173);
            v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 544),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v32 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    v31,
                    (const char (*)[30])"emplace fail! item_index_key:");
            v6 = (OutputLimitConfig *)(v3 + 128);
            operator<<(v32, (const ItemIndexKey *)(v3 + 128));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
            *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v7 = 1;
          }
          else
          {
            v33 = std::__detail::_Node_iterator<std::pair<ItemIndexKey const,bool>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const ItemIndexKey,bool>,false,false> *const)(v3 + 160));
            v34 = *(_BYTE *)(((unsigned __int64)&v33->second >> 3) + 0x7FFF8000);
            if ( v34 != 0 && (((unsigned __int8)v33 + 8) & 7) >= v34 )
            {
              LOBYTE(v29) = v34 != 0;
              __asan_report_load1(&v33->second, v29, v33);
            }
            second = v33->second;
            v36 = *(_BYTE *)(((unsigned __int64)&item_limit_config->is_allow_unspecified_item_limit >> 3) + 0x7FFF8000);
            LOBYTE(v29) = v36 != 0;
            v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)item_limit_config + 58) & 7) >= v36);
            if ( (_BYTE)v37 )
              __asan_report_load1(&item_limit_config->is_allow_unspecified_item_limit, v29, v37);
            if ( second == item_limit_config->is_allow_unspecified_item_limit )
            {
              if ( *(char *)(((unsigned __int64)&item_limit_config->is_forbid_alert >> 3) + 0x7FFF8000) < 0 )
                __asan_report_load1(&item_limit_config->is_forbid_alert, v29, &item_limit_config->is_forbid_alert);
              if ( item_limit_config->is_forbid_alert )
              {
                v41 = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::operator[](
                        &this->forbid_alert_item_limit_config_map_,
                        &item_limit_config->item_limit_type);
                std::unordered_set<ItemIndexKey>::insert(
                  v41,
                  (const std::unordered_set<ItemIndexKey>::value_type *)(v3 + 128));
              }
              v6 = (OutputLimitConfig *)(((_BYTE)item_limit_config + 57) & 7);
              v42 = (*(_BYTE *)(((unsigned __int64)&item_limit_config->is_forbid_output >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&item_limit_config->is_forbid_output >> 3) + 0x7FFF8000));
              if ( (_BYTE)v42 )
                __asan_report_load1(&item_limit_config->is_forbid_output, v6, v42);
              if ( item_limit_config->is_forbid_output )
              {
                v43 = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::operator[](
                        &this->can_forbid_output_item_limit_config_map_,
                        &item_limit_config->item_limit_type);
                v6 = (OutputLimitConfig *)(v3 + 128);
                std::unordered_set<ItemIndexKey>::insert(
                  v43,
                  (const std::unordered_set<ItemIndexKey>::value_type *)(v3 + 128));
              }
              v7 = 2;
            }
            else
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
                "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
                "rewriteOutputLimitConfig",
                178);
              v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 608),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v38,
                      (const char (*)[16])"item_index_key:");
              v40 = operator<<(v39, (const ItemIndexKey *)(v3 + 128));
              v6 = (OutputLimitConfig *)byte_1AD88200;
              common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v40, (const char (*)[65])byte_1AD88200);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
              *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
              v7 = 0;
            }
          }
        }
      }
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v7 && v7 != 2 )
    {
      v44 = 0;
      goto LABEL_64;
    }
    __gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig *,std::vector<data::ItemLimitExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ItemLimitExcelConfig*,std::vector<data::ItemLimitExcelConfig> > *const)(v3 + 64));
  }
  v44 = 1;
LABEL_64:
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v44 == 1 )
  {
    __for_range_0 = (std::unordered_map<ItemIndexKey,bool> *)(v3 + 672);
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::unordered_map<ItemIndexKey,bool>::iterator *)(v3 + 224) = std::unordered_map<ItemIndexKey,bool>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v6);
    *(std::unordered_map<ItemIndexKey,bool>::iterator *)(v3 + 256) = std::unordered_map<ItemIndexKey,bool>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<ItemIndexKey const,bool>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,bool>,false> *)(v3 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,bool>,false> *)(v3 + 256)) )
    {
      *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 1024;
      n = (unsigned __int64)std::__detail::_Node_iterator<std::pair<ItemIndexKey const,bool>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const ItemIndexKey,bool>,false,false> *const)(v3 + 224));
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 363) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 107) & 7) >= *(_BYTE *)(((v3 + 363) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 12LL);
      }
      if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
        && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
      {
        n = __asan_report_load_n(n, 12LL);
      }
      *(_QWORD *)(v3 + 352) = *(_QWORD *)n;
      *(_DWORD *)(v3 + 360) = *(_DWORD *)(n + 8);
      item_index_key = std::get<0ul,ItemIndexKey const,bool>((std::pair<const ItemIndexKey,bool> *)(v3 + 352));
      v46 = std::get<1ul,ItemIndexKey const,bool>((std::pair<const ItemIndexKey,bool> *)(v3 + 352));
      is_allow_unspecified_item_limit = v46;
      v47 = (unsigned __int8)v46 & 7;
      v48 = (*(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v47 >= *(_BYTE *)(((unsigned __int64)v46 >> 3) + 0x7FFF8000));
      if ( (_BYTE)v48 )
        __asan_report_load1(v46, v47, v48);
      if ( !*is_allow_unspecified_item_limit )
      {
        __for_range_1 = &this->output_control_limit_excel_config_map;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, v47);
        *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 288) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, v47);
        *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 320) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(__for_range_1);
        while ( std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 288),
                  (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 320)) )
        {
          v62 = std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 288));
          limit_type = std::get<0ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v62);
          std::get<1ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v62);
          v49 = limit_type;
          p_item_limit_map = &std::unordered_map<data::ItemLimitType,OutputLimitConfig>::operator[](
                                &this->output_limit_config_map_,
                                limit_type)->item_limit_map;
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v52 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v52 != 0 && v52 <= 3 )
          {
            LOBYTE(v49) = v52 != 0;
            __asan_report_store4(v3 + 48, v49);
          }
          *(_DWORD *)(v3 + 48) = 0;
          std::unordered_map<ItemIndexKey,unsigned int>::emplace<ItemIndexKey const&,int>(
            p_item_limit_map,
            item_index_key,
            (int *)(v3 + 48),
            (const ItemIndexKey *)p_item_limit_map,
            v51);
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 288));
        }
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      }
      std::__detail::_Node_iterator<std::pair<ItemIndexKey const,bool>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const ItemIndexKey,bool>,false,false> *const)(v3 + 224));
    }
    *(_WORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -1800;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
    v2 = ret;
  }
  std::unordered_map<ItemIndexKey,bool>::~unordered_map((std::unordered_map<ItemIndexKey,bool> *const)(v3 + 672));
  if ( v64 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
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

// Line 212: range 000000001449B108-000000001449B5E6
int32_t __cdecl ItemLimitExcelConfigMgr::checkOutputLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-144h]
  std::unordered_map<data::ItemLimitType,OutputLimitConfig> *__for_range; // [rsp+20h] [rbp-140h]
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false>::reference v12; // [rsp+28h] [rbp-138h]
  std::unordered_map<ItemIndexKey,unsigned int> *__for_range_0; // [rsp+40h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<const ItemIndexKey,unsigned int>,false,false>::reference v14; // [rsp+48h] [rbp-118h]
  std::tuple_element<0,std::pair<const ItemIndexKey,unsigned int> >::type *item_index_key; // [rsp+50h] [rbp-110h]
  char v16[256]; // [rsp+60h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:214 64 8 13 __for_end:214 96 8 15 __for_begin:216 128 8 13 __for_end:216 1"
                        "60 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::checkOutputLimitConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->output_limit_config_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v2 + 32) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v2 + 64) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<data::ItemLimitType const,OutputLimitConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v2 + 64)) )
      break;
    v12 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,OutputLimitConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,data::ItemLimitType const,OutputLimitConfig>(v12);
    __for_range_0 = &std::get<1ul,data::ItemLimitType const,OutputLimitConfig>(v12)->item_limit_map;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::unordered_map<ItemIndexKey,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<ItemIndexKey,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::unordered_map<ItemIndexKey,unsigned int>::const_iterator *)(v2 + 128) = std::unordered_map<ItemIndexKey,unsigned int>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<ItemIndexKey const,unsigned int>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,unsigned int>,false> *)(v2 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const ItemIndexKey,unsigned int>,false> *)(v2 + 128)) )
    {
      v14 = std::__detail::_Node_const_iterator<std::pair<ItemIndexKey const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const ItemIndexKey,unsigned int>,false,false> *const)(v2 + 96));
      item_index_key = std::get<0ul,ItemIndexKey const,unsigned int>(v14);
      std::get<1ul,ItemIndexKey const,unsigned int>(v14);
      if ( !ItemLimitExcelConfigMgr::isItemIndexKeyValid(this, txt_config_mgr, item_index_key) )
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkOutputLimitConfig",
          220);
        v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v6, (const char (*)[46])byte_1AD88340);
        operator<<(v7, item_index_key);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::__detail::_Node_const_iterator<std::pair<ItemIndexKey const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const ItemIndexKey,unsigned int>,false,false> *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,OutputLimitConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 232: range 000000001449B5E8-000000001449C302
int32_t __cdecl ItemLimitExcelConfigMgr::rewriteOutputControlLimitConfig(
        ItemLimitExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  __int64 p_daily_limit_str; // rsi
  int *p_daily_output_limit; // rdx
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int v15; // eax
  unsigned __int64 v16; // rax
  __int64 p_total_limit_str; // rsi
  int *p_total_output_limit; // rdx
  unsigned __int64 v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  __int64 p_activity_limit_str; // rsi
  int *p_activity_output_limit; // rdx
  unsigned __int64 v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int v34; // eax
  data::OutputControlLimitExcelConfigMap *__for_range; // [rsp+10h] [rbp-2B0h]
  std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false>::reference __in; // [rsp+18h] [rbp-2A8h]
  const data::ItemLimitType *item_limit_type; // [rsp+20h] [rbp-2A0h]
  std::tuple_element<1,std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *output_control_config; // [rsp+28h] [rbp-298h]
  char v40[656]; // [rsp+30h] [rbp-290h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(608LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 4 7 ret:236 64 8 15 __for_begin:233 96 8 13 __for_end:233 128 16 9 <unknown> 160 16 9 <unk"
                        "nown> 192 16 9 <unknown> 224 24 9 <unknown> 288 24 9 <unknown> 352 24 9 <unknown> 416 32 9 <unkn"
                        "own> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::rewriteOutputControlLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -234881024;
  v5[536862728] = -218959118;
  v5[536862729] = -234881024;
  v5[536862730] = -218959118;
  v5[536862731] = -234881024;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -202116109;
  __for_range = &this->output_control_limit_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 96)) )
  {
    __in = std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 64));
    item_limit_type = std::get<0ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(__in);
    output_control_config = std::get<1ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(__in);
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 48, v3 + 96);
    *(_DWORD *)(v3 + 48) = 0;
    v6 = ((v3 + 224) >> 3) + 2147450880;
    *(_WORD *)v6 = 0;
    *(_BYTE *)(v6 + 2) = 0;
    p_daily_limit_str = (__int64)&output_control_config->daily_limit_str;
    if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 9) & 7) >= *(_BYTE *)(((v3 + 247) >> 3) + 0x7FFF8000) )
    {
      p_daily_limit_str = 24LL;
      __asan_report_store_n(v3 + 224, 24LL);
    }
    TxtConfigMgr::makeOptionalLimitConfig(
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 224),
      (const std::string *)p_daily_limit_str);
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_daily_output_limit = (int *)&output_control_config->daily_output_limit;
    if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    std::tie<int,data::OptionalLimitConfig>(
      (int *)(v3 + 128),
      (data::OptionalLimitConfig *)(v3 + 48),
      p_daily_output_limit,
      (data::OptionalLimitConfig *)(v3 + 48));
    std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
      (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 128),
      (std::pair<int,data::OptionalLimitConfig> *)(v3 + 224));
    *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
    std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 224));
    v9 = ((v3 + 224) >> 3) + 2147450880;
    *(_WORD *)v9 = -1800;
    *(_BYTE *)(v9 + 2) = -8;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    if ( *(_DWORD *)(v3 + 48) )
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
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "rewriteOutputControlLimitConfig",
        240);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v10, (const char (*)[22])byte_1AD884E0);
      v12 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(v11, item_limit_type);
      v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])byte_1AD88520);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
              v13,
              &output_control_config->daily_limit_str);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])byte_1AD88560);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      v2 = *(_DWORD *)(v3 + 48);
      v15 = 0;
    }
    else
    {
      v16 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v16 = 0;
      *(_BYTE *)(v16 + 2) = 0;
      p_total_limit_str = (__int64)&output_control_config->total_limit_str;
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 55) & 7) >= *(_BYTE *)(((v3 + 311) >> 3) + 0x7FFF8000) )
      {
        p_total_limit_str = 24LL;
        __asan_report_store_n(v3 + 288, 24LL);
      }
      TxtConfigMgr::makeOptionalLimitConfig(
        (std::pair<int,data::OptionalLimitConfig> *)(v3 + 288),
        (const std::string *)p_total_limit_str);
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      p_total_output_limit = (int *)&output_control_config->total_output_limit;
      if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      std::tie<int,data::OptionalLimitConfig>(
        (int *)(v3 + 160),
        (data::OptionalLimitConfig *)(v3 + 48),
        p_total_output_limit,
        (data::OptionalLimitConfig *)(v3 + 48));
      std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
        (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 160),
        (std::pair<int,data::OptionalLimitConfig> *)(v3 + 288));
      *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
      std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 288));
      v19 = ((v3 + 288) >> 3) + 2147450880;
      *(_WORD *)v19 = -1800;
      *(_BYTE *)(v19 + 2) = -8;
      if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v3 + 48);
      if ( *(_DWORD *)(v3 + 48) )
      {
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
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "rewriteOutputControlLimitConfig",
          246);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 480),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v20, (const char (*)[22])byte_1AD884E0);
        v22 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(v21, item_limit_type);
        v23 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v22, (const char (*)[21])byte_1AD885A0);
        v24 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                v23,
                &output_control_config->total_limit_str);
        common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v24, (const char (*)[13])byte_1AD88560);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v2 = *(_DWORD *)(v3 + 48);
        v15 = 0;
      }
      else
      {
        v25 = ((v3 + 352) >> 3) + 2147450880;
        *(_WORD *)v25 = 0;
        *(_BYTE *)(v25 + 2) = 0;
        p_activity_limit_str = (__int64)&output_control_config->activity_limit_str;
        if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 119) & 7) >= *(_BYTE *)(((v3 + 375) >> 3) + 0x7FFF8000) )
        {
          p_activity_limit_str = 24LL;
          __asan_report_store_n(v3 + 352, 24LL);
        }
        TxtConfigMgr::makeOptionalLimitConfig(
          (std::pair<int,data::OptionalLimitConfig> *)(v3 + 352),
          (const std::string *)p_activity_limit_str);
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        p_activity_output_limit = (int *)&output_control_config->activity_output_limit;
        if ( *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::tie<int,data::OptionalLimitConfig>(
          (int *)(v3 + 192),
          (data::OptionalLimitConfig *)(v3 + 48),
          p_activity_output_limit,
          (data::OptionalLimitConfig *)(v3 + 48));
        std::tuple<int &,data::OptionalLimitConfig &>::operator=<int,data::OptionalLimitConfig>(
          (std::tuple<int&,data::OptionalLimitConfig&> *const)(v3 + 192),
          (std::pair<int,data::OptionalLimitConfig> *)(v3 + 352));
        *(_WORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -1800;
        std::pair<int,data::OptionalLimitConfig>::~pair((std::pair<int,data::OptionalLimitConfig> *const)(v3 + 352));
        v28 = ((v3 + 352) >> 3) + 2147450880;
        *(_WORD *)v28 = -1800;
        *(_BYTE *)(v28 + 2) = -8;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        if ( *(_DWORD *)(v3 + 48) )
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
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "rewriteOutputControlLimitConfig",
            252);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v29, (const char (*)[22])byte_1AD884E0);
          v31 = common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
                  v30,
                  item_limit_type);
          v32 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v31, (const char (*)[21])byte_1AD885E0);
          v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                  v32,
                  &output_control_config->activity_limit_str);
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v33, (const char (*)[13])byte_1AD88560);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v2 = *(_DWORD *)(v3 + 48);
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v15 != 1 )
    {
      v34 = 0;
      goto LABEL_53;
    }
    std::__detail::_Node_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 64));
  }
  v34 = 1;
LABEL_53:
  if ( v34 == 1 )
    v2 = 0;
  if ( v40 == (char *)v3 )
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

// Line 262: range 000000001449C304-000000001449CCA9
int32_t __cdecl ItemLimitExcelConfigMgr::checkOutputControlLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ItemLimitType *p_item_limit_type; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int v9; // edx
  char *v10; // rsi
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  data::OutputControlLimitExcelConfigMap *__for_range; // [rsp+10h] [rbp-240h]
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false>::reference v18; // [rsp+18h] [rbp-238h]
  std::tuple_element<1,const std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *output_control_config; // [rsp+28h] [rbp-228h]
  const std::map<data::ItemLimitType,std::pair<std::string,std::string >> *item_limit_type_enum_map; // [rsp+30h] [rbp-220h]
  data::OutputControlLimitExcelConfigMap *__for_range_0; // [rsp+38h] [rbp-218h]
  std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::reference v22; // [rsp+48h] [rbp-208h]
  std::tuple_element<0,std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::type *item_limit_type_0; // [rsp+50h] [rbp-200h]
  const std::tuple_element<1,std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::type *cname; // [rsp+60h] [rbp-1F0h]
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false>::reference v25; // [rsp+68h] [rbp-1E8h]
  std::tuple_element<0,std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *item_limit_type; // [rsp+70h] [rbp-1E0h]
  char v27[464]; // [rsp+80h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 15 __for_begin:263 64 8 13 __for_end:263 96 8 15 __for_begin:277 128 8 13 __for_end:277 1"
                        "60 8 15 __for_begin:286 192 8 13 __for_end:286 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::checkOutputControlLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -202116109;
  __for_range = &this->output_control_limit_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v3 + 32) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v3 + 64) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_item_limit_type = (data::ItemLimitType *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_18;
    }
    v18 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v18);
    output_control_config = (std::tuple_element<1,const std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig> >::type *)std::get<1ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v18);
    if ( *(_BYTE *)(((unsigned __int64)&output_control_config->item_limit_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&output_control_config->item_limit_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&output_control_config->item_limit_type);
    }
    if ( TxtConfigMgr::checkOutputControlConfig(
           txt_config_mgr,
           output_control_config,
           output_control_config->item_limit_type) )
    {
      break;
    }
    std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
    "checkOutputControlLimitConfig",
    268);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 224),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v7, (const char (*)[48])byte_1AD88740);
  p_item_limit_type = &output_control_config->item_limit_type;
  common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(
    v8,
    &output_control_config->item_limit_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_18:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    item_limit_type_enum_map = data::getItemLimitTypeEnumMap[abi:cxx11]();
    __for_range_0 = &this->output_control_limit_excel_config_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_item_limit_type);
    *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v3 + 96) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_item_limit_type);
    *(std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::const_iterator *)(v3 + 128) = std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (char *)(v3 + 128);
      if ( !std::__detail::operator!=<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false> *)(v3 + 128)) )
        break;
      v25 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 96));
      item_limit_type = std::get<0ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v25);
      std::get<1ul,data::ItemLimitType const,data::OutputControlLimitExcelConfig>(v25);
      if ( !common::tools::MiscUtils::isContains<std::map<data::ItemLimitType,std::pair<std::string,std::string>> const,data::ItemLimitType>(
              item_limit_type_enum_map,
              item_limit_type) )
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
          3u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkOutputControlLimitConfig",
          281);
        v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[25])byte_1AD887A0);
        common::milog::MiLogStream::operator<<<data::ItemLimitType,(data::ItemLimitType*)0>(v11, item_limit_type);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,data::OutputControlLimitExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,data::OutputControlLimitExcelConfig>,false,false> *const)(v3 + 96));
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v10);
    *(std::map<data::ItemLimitType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 160) = std::map<data::ItemLimitType,std::pair<std::string,std::string>>::begin(item_limit_type_enum_map);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v10);
    *(std::map<data::ItemLimitType,std::pair<std::string,std::string >>::const_iterator *)(v3 + 192) = std::map<data::ItemLimitType,std::pair<std::string,std::string>>::end(item_limit_type_enum_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::_Self *)(v3 + 160),
              (const std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > >::_Self *)(v3 + 192)) )
    {
      v22 = std::_Rb_tree_const_iterator<std::pair<data::ItemLimitType const,std::pair<std::string,std::string>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > > *const)(v3 + 160));
      item_limit_type_0 = std::get<0ul,data::ItemLimitType const,std::pair<std::string,std::string>>(v22);
      cname = std::get<1ul,data::ItemLimitType const,std::pair<std::string,std::string>>(v22);
      if ( (unsigned __int8)std::string::empty() != 1
        && !common::tools::MiscUtils::isContains<std::unordered_map<data::ItemLimitType,data::OutputControlLimitExcelConfig> const,data::ItemLimitType>(
              &this->output_control_limit_excel_config_map,
              item_limit_type_0) )
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
          3u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkOutputControlLimitConfig",
          291);
        v13 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                (common::milog::MiLogStream *const)(v3 + 352),
                (const char (*)[64])byte_1AD887E0);
        v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &cname->first);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v14, (const char (*)[32])byte_1AD88840);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
        *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
      }
      std::_Rb_tree_const_iterator<std::pair<data::ItemLimitType const,std::pair<std::string,std::string>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::ItemLimitType,std::pair<std::string,std::string > > > *const)(v3 + 160));
    }
    v2 = 0;
  }
  result = v2;
  if ( v27 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 300: range 000000001449CCAA-000000001449D4B0
bool __cdecl ItemLimitExcelConfigMgr::isItemIndexKeyValid(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const ItemIndexKey *item_index_key)
{
  common::milog::MiLogStream *v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::ItemType item_type; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  data::ItemType v8; // ecx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  bool result; // al
  uint32_t index_value; // r14d
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // r14d
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  data::ItemConfig *item_config_ptr; // [rsp+28h] [rbp-158h]
  char v25[336]; // [rsp+30h] [rbp-150h] BYREF

  v3 = (common::milog::MiLogStream *)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = (common::milog::MiLogStream *)v4;
  }
  v3->log_ = (common::milog::MiLog *)1102416563;
  v3->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v3->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ItemLimitExcelConfigMgr::isItemIndexKeyValid;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)item_index_key >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)item_index_key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_index_key >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(item_index_key);
  }
  item_type = item_index_key->item_type;
  if ( item_index_key->item_type == ITEM_FURNITURE )
    goto LABEL_14;
  if ( item_type > ITEM_FURNITURE )
    goto LABEL_37;
  if ( item_type == ITEM_WEAPON )
  {
    if ( *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_index_key + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&item_index_key->index_value);
    }
    index_value = item_index_key->index_value;
    if ( index_value <= WeaponExcelConfigMgr::getMaxWeaponRank(&txt_config_mgr->weapon_config_mgr) )
      goto LABEL_40;
    if ( *(char *)(((unsigned __int64)&v3[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v3[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v3 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "isItemIndexKeyValid",
      318);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])byte_1AD888C0);
    v16 = operator<<(v15, item_index_key);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v16, (const char (*)[20])byte_1AD88940);
    common::milog::MiLogStream::~MiLogStream(v3 + 3);
    result = 0;
    goto LABEL_41;
  }
  if ( item_type > ITEM_WEAPON )
  {
LABEL_37:
    if ( *(char *)(((unsigned __int64)&v3[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v3[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v3[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v3 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "isItemIndexKeyValid",
      330);
    v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v21, (const char (*)[25])byte_1AD889C0);
    common::milog::MiLogStream::operator<<<data::ItemType,(data::ItemType*)0>(
      v22,
      (const data::ItemType *)item_index_key);
    common::milog::MiLogStream::~MiLogStream(v3 + 7);
    result = 0;
    goto LABEL_41;
  }
  if ( item_type <= ITEM_MATERIAL )
  {
    if ( item_type <= ITEM_NONE )
      goto LABEL_37;
LABEL_14:
    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_index_key + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&item_index_key->index_value);
    }
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, item_index_key->index_value);
    if ( !item_config_ptr )
      goto LABEL_46;
    if ( *(_BYTE *)(((unsigned __int64)item_index_key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)item_index_key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_index_key >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(item_index_key);
    }
    v8 = item_index_key->item_type;
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( v8 != item_config_ptr->item_type )
    {
LABEL_46:
      if ( *(char *)(((unsigned __int64)&v3[1] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v3 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v3[1], 32LL);
      }
      common::milog::MiLogStream::create(
        v3 + 1,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "isItemIndexKeyValid",
        310);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v3 + 1,
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v9, (const char (*)[16])byte_1AD888C0);
      v11 = operator<<(v10, item_index_key);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v11, (const char (*)[32])byte_1AD88900);
      common::milog::MiLogStream::~MiLogStream(v3 + 1);
      result = 0;
      goto LABEL_41;
    }
LABEL_40:
    result = 1;
    goto LABEL_41;
  }
  if ( *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)item_index_key + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_index_key->index_value >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&item_index_key->index_value);
  }
  v17 = item_index_key->index_value;
  if ( v17 <= ReliquaryExcelConfigMgr::getMaxReliquaryRank(&txt_config_mgr->reliquary_config_mgr) )
    goto LABEL_40;
  if ( *(char *)(((unsigned __int64)&v3[5] >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v3 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v3[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&v3[5], 32LL);
  }
  common::milog::MiLogStream::create(
    v3 + 5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
    "isItemIndexKeyValid",
    325);
  v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v3 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
  v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v18, (const char (*)[16])byte_1AD888C0);
  v20 = operator<<(v19, item_index_key);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v20, (const char (*)[23])byte_1AD88980);
  common::milog::MiLogStream::~MiLogStream(v3 + 5);
  result = 0;
LABEL_41:
  if ( v25 == (char *)v3 )
  {
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v3->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 338: range 000000001449D4B2-000000001449D7DE
bool __cdecl ItemLimitExcelConfigMgr::isItemInOutputLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        uint32_t item_id)
{
  bool v3; // r15
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 v7; // rsi
  std::unordered_map<ItemIndexKey,unsigned int> *p_item_limit_map; // rdx
  int v9; // eax
  bool result; // al
  std::tuple_element<0,std::pair<int,ItemIndexKey> >::type *ret; // [rsp+20h] [rbp-E0h]
  const ItemIndexKey *item_index_key; // [rsp+28h] [rbp-D8h]
  std::unordered_map<data::ItemLimitType,OutputLimitConfig> *__for_range; // [rsp+30h] [rbp-D0h]
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false>::reference v15; // [rsp+38h] [rbp-C8h]
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 15 __for_begin:344 64 8 13 __for_end:344 96 12 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ItemLimitExcelConfigMgr::isItemInOutputLimitConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -218959360;
  v6[536862723] = -202177536;
  if ( *(char *)(((v4 + 96) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v4 + 107) >> 3) + 0x7FFF8000) != 0
    && (char)((v4 + 107) & 7) >= *(_BYTE *)(((v4 + 107) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v4 + 96, 12LL);
  }
  *(std::pair<int,ItemIndexKey> *)(v4 + 96) = TxtConfigMgr::getItemIndexKey(txt_config_mgr, item_id);
  ret = std::get<0ul,int,ItemIndexKey>((std::pair<int,ItemIndexKey> *)(v4 + 96));
  item_index_key = std::get<1ul,int,ItemIndexKey>((std::pair<int,ItemIndexKey> *)(v4 + 96));
  v7 = ((unsigned __int8)ret & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ret);
  }
  if ( *ret )
  {
    v3 = 0;
  }
  else
  {
    __for_range = &this->output_limit_config_map_;
    if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 32, v7);
    *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v4 + 32) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 64, v7);
    *(std::unordered_map<data::ItemLimitType,OutputLimitConfig>::const_iterator *)(v4 + 64) = std::unordered_map<data::ItemLimitType,OutputLimitConfig>::end(__for_range);
    while ( std::__detail::operator!=<std::pair<data::ItemLimitType const,OutputLimitConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v4 + 32),
              (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,OutputLimitConfig>,false> *)(v4 + 64)) )
    {
      v15 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,OutputLimitConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false> *const)(v4 + 32));
      std::get<0ul,data::ItemLimitType const,OutputLimitConfig>(v15);
      p_item_limit_map = &std::get<1ul,data::ItemLimitType const,OutputLimitConfig>(v15)->item_limit_map;
      if ( common::tools::MiscUtils::isContains<std::unordered_map<ItemIndexKey,unsigned int> const,ItemIndexKey>(
             p_item_limit_map,
             item_index_key) )
      {
        v3 = 1;
        v9 = 0;
        goto LABEL_20;
      }
      std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,OutputLimitConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,OutputLimitConfig>,false,false> *const)(v4 + 32));
    }
    v9 = 1;
LABEL_20:
    if ( v9 == 1 )
      v3 = 0;
  }
  result = v3;
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 356: range 000000001449D7E0-000000001449E394
int32_t __cdecl ItemLimitExcelConfigMgr::rewriteItemLimitWhiteListConfig(
        ItemLimitExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  HK4EDesignConfig *v5; // rax
  __int64 v6; // rsi
  std::vector<data::ItemLimitWhiteListExcelConfig>::value_type *v7; // rax
  std::vector<data::ItemLimitWhiteListExcelConfig> *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::vector<data::ItemLimitWhiteListExcelConfig>::size_type v12; // rax
  unsigned __int64 v13; // rax
  char *v14; // rsi
  data::ItemLimitWhiteType white_type; // ecx
  char v16; // al
  const char *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::pair<std::__detail::_Node_iterator<ItemLimitWhiteListIndex,true,false>,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-274h]
  data::ItemLimitWhiteListExcelConfigVec *__for_range; // [rsp+20h] [rbp-270h]
  data::ItemLimitWhiteListExcelConfig *config; // [rsp+28h] [rbp-268h]
  data::ItemLimitWhiteListExcelConfigVec *__for_range_0; // [rsp+30h] [rbp-260h]
  const data::ItemLimitWhiteListExcelConfig *config_0; // [rsp+38h] [rbp-258h]
  char v29[592]; // [rsp+40h] [rbp-250h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 28 removed_white_list_count:359 64 8 15 __for_begin:361 96 8 13 __for_end:361 128 8 9 <u"
                        "nknown> 160 8 15 __for_begin:377 192 8 13 __for_end:377 224 24 30 temp_white_list_config_vec:360"
                        " 288 32 9 <unknown> 352 32 9 index:379 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::rewriteItemLimitWhiteListConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -202116109;
  v5 = TxtConfigMgr::getConfig(txt_config_mgr);
  v6 = 4LL;
  if ( !Flag<ConfigOption>::isOpen(&v5->config_flag, enable_extra_white_list) )
  {
    if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v2 + 48, 4LL);
    *(_DWORD *)(v2 + 48) = 0;
    std::vector<data::ItemLimitWhiteListExcelConfig>::vector((std::vector<data::ItemLimitWhiteListExcelConfig> *const)(v2 + 224));
    __for_range = &this->item_limit_white_list_excel_config_vec;
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 64, 4LL);
    *(std::vector<data::ItemLimitWhiteListExcelConfig>::iterator *)(v2 + 64) = std::vector<data::ItemLimitWhiteListExcelConfig>::begin(__for_range);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, 4LL);
    *(std::vector<data::ItemLimitWhiteListExcelConfig>::iterator *)(v2 + 96) = std::vector<data::ItemLimitWhiteListExcelConfig>::end(__for_range);
    while ( __gnu_cxx::operator!=<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>(
              (const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *)(v2 + 64),
              (const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *)(v2 + 96)) )
    {
      config = __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *const)(v2 + 64));
      if ( *(char *)(((unsigned __int64)&config->is_extra_white_list >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config->is_extra_white_list, v2 + 96, &config->is_extra_white_list);
      if ( !config->is_extra_white_list )
      {
        v7 = std::move<data::ItemLimitWhiteListExcelConfig &>(config);
        std::vector<data::ItemLimitWhiteListExcelConfig>::push_back(
          (std::vector<data::ItemLimitWhiteListExcelConfig> *const)(v2 + 224),
          v7);
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        ++*(_DWORD *)(v2 + 48);
      }
      __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *const)(v2 + 64));
    }
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    v8 = std::move<std::vector<data::ItemLimitWhiteListExcelConfig> &>((std::vector<data::ItemLimitWhiteListExcelConfig> *)(v2 + 224));
    std::vector<data::ItemLimitWhiteListExcelConfig>::operator=(&this->item_limit_white_list_excel_config_vec, v8);
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
      1u,
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "rewriteItemLimitWhiteListConfig",
      373);
    v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           (common::milog::MiLogStream *const)(v2 + 288),
           (const char (*)[26])"removed_white_list_count:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v10,
            (const char (*)[24])" rest_white_list_count:");
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    v12 = std::vector<data::ItemLimitWhiteListExcelConfig>::size(&this->item_limit_white_list_excel_config_vec);
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      v12 = __asan_report_store8(v2 + 128, " rest_white_list_count:");
    *(_QWORD *)(v2 + 128) = v12;
    v6 = v2 + 128;
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, (const unsigned __int64 *)(v2 + 128));
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::vector<data::ItemLimitWhiteListExcelConfig>::~vector((std::vector<data::ItemLimitWhiteListExcelConfig> *const)(v2 + 224));
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    v13 = ((v2 + 224) >> 3) + 2147450880;
    *(_WORD *)v13 = -1800;
    *(_BYTE *)(v13 + 2) = -8;
  }
  ret = 0;
  __for_range_0 = &this->item_limit_white_list_excel_config_vec;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v6);
  *(std::vector<data::ItemLimitWhiteListExcelConfig>::iterator *)(v2 + 160) = std::vector<data::ItemLimitWhiteListExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v6);
  *(std::vector<data::ItemLimitWhiteListExcelConfig>::iterator *)(v2 + 192) = std::vector<data::ItemLimitWhiteListExcelConfig>::end(__for_range_0);
  while ( 1 )
  {
    v14 = (char *)(v2 + 192);
    if ( !__gnu_cxx::operator!=<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>(
            (const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *)(v2 + 160),
            (const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *)(v2 + 192)) )
      break;
    config_0 = __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *const)(v2 + 160));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    ItemLimitWhiteListIndex::ItemLimitWhiteListIndex((ItemLimitWhiteListIndex *const)(v2 + 352));
    if ( *(_BYTE *)(((unsigned __int64)&config_0->white_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_0->white_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_0->white_type);
    }
    white_type = config_0->white_type;
    v16 = *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v14) = v16 != 0;
      __asan_report_store4(v2 + 352, v14);
    }
    *(_DWORD *)(v2 + 352) = white_type;
    if ( (unsigned __int8)std::string::empty() != 1 )
    {
      v17 = (const char *)std::string::c_str(&config_0->sub_type_str);
      if ( (unsigned int)data::enumStrToVal(v17, v2 + 356) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "rewriteItemLimitWhiteListConfig",
          385);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v18, (const char (*)[25])byte_1AD88C20);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &config_0->sub_type_str);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v2 + 360), &config_0->param_list);
    v20 = std::unordered_set<ItemLimitWhiteListIndex>::emplace<ItemLimitWhiteListIndex&>(
            &this->item_limit_white_list_set_,
            (ItemLimitWhiteListIndex *)(v2 + 352),
            (ItemLimitWhiteListIndex *)&this->item_limit_white_list_set_);
    if ( !v20.second )
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "rewriteItemLimitWhiteListConfig",
        392);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v21,
              (const char (*)[29])"duplicate white list index: ");
      operator<<(v22, (const ItemLimitWhiteListIndex *)(v2 + 352));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    ItemLimitWhiteListIndex::~ItemLimitWhiteListIndex((ItemLimitWhiteListIndex *const)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    __gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig *,std::vector<data::ItemLimitWhiteListExcelConfig>>::operator++((__gnu_cxx::__normal_iterator<data::ItemLimitWhiteListExcelConfig*,std::vector<data::ItemLimitWhiteListExcelConfig> > *const)(v2 + 160));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 400: range 000000001449E396-000000001449ECB8
int32_t __cdecl ItemLimitExcelConfigMgr::checkItemLimitWhiteListConfig(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::map<data::ItemLimitWhiteType,std::pair<std::string,std::string >> *v5; // rax
  common::milog::MiLogStream *v6; // rax
  const std::map<data::ItemLimitWhiteSubType,std::pair<std::string,std::string >> *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const std::map<data::BonusSourceType,std::pair<std::string,std::string >> *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::map<data::ItemType,std::pair<std::string,std::string >> *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-1F0h]
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  std::unordered_set<ItemLimitWhiteListIndex> *__for_range; // [rsp+20h] [rbp-1D0h]
  const ItemLimitWhiteListIndex *index; // [rsp+28h] [rbp-1C8h]
  char v24[448]; // [rsp+30h] [rbp-1C0h] BYREF

  txt_config_mgra = txt_config_mgr;
  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 8 15 __for_begin:423 64 8 13 __for_end:423 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <u"
                        "nknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ItemLimitExcelConfigMgr::checkItemLimitWhiteListConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  v5 = data::getItemLimitWhiteTypeEnumMap[abi:cxx11]();
  if ( std::map<data::ItemLimitWhiteType,std::pair<std::string,std::string>>::size(v5) != 9 )
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "checkItemLimitWhiteListConfig",
      405);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)"data::ItemLimitWhiteType defination has change!";
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      v6,
      (const char (*)[48])"data::ItemLimitWhiteType defination has change!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  v7 = data::getItemLimitWhiteSubTypeEnumMap[abi:cxx11]();
  if ( std::map<data::ItemLimitWhiteSubType,std::pair<std::string,std::string>>::size(v7) != 5 )
  {
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "checkItemLimitWhiteListConfig",
      410);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)"data::ItemLimitWhiteSubType defination has change!";
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
      v8,
      (const char (*)[51])"data::ItemLimitWhiteSubType defination has change!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  v9 = data::getBonusSourceTypeEnumMap[abi:cxx11]();
  if ( std::map<data::BonusSourceType,std::pair<std::string,std::string>>::size(v9) != 3 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "checkItemLimitWhiteListConfig",
      415);
    v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)"data::BonusSourceType defination has change!";
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      v10,
      (const char (*)[45])"data::BonusSourceType defination has change!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  v11 = data::getItemTypeEnumMap[abi:cxx11]();
  if ( std::map<data::ItemType,std::pair<std::string,std::string>>::size(v11) != 7 )
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
      "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
      "checkItemLimitWhiteListConfig",
      420);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v2 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    txt_config_mgr = (const TxtConfigMgr *)"data::ItemType defination has change!";
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      v12,
      (const char (*)[38])"data::ItemType defination has change!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  __for_range = &this->item_limit_white_list_set_;
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_set<ItemLimitWhiteListIndex>::const_iterator *)(v2 + 32) = std::unordered_set<ItemLimitWhiteListIndex>::begin(__for_range);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_set<ItemLimitWhiteListIndex>::const_iterator *)(v2 + 64) = std::unordered_set<ItemLimitWhiteListIndex>::end(__for_range);
  while ( std::__detail::operator!=<ItemLimitWhiteListIndex,false>(
            (const std::__detail::_Node_iterator_base<ItemLimitWhiteListIndex,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<ItemLimitWhiteListIndex,false> *)(v2 + 64)) )
  {
    index = std::__detail::_Node_const_iterator<ItemLimitWhiteListIndex,true,false>::operator*((const std::__detail::_Node_const_iterator<ItemLimitWhiteListIndex,true,false> *const)(v2 + 32));
    if ( ItemLimitExcelConfigMgr::checkItemLimitWhiteListIndex(this, txt_config_mgra, index) )
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "checkItemLimitWhiteListConfig",
        427);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              v13,
              (const char (*)[42])"white list config check fail! white_type:");
      v15 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteType,(data::ItemLimitWhiteType*)0>(
              v14,
              &index->white_type);
      v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" sub_type:");
      v17 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
              v16,
              &index->sub_type);
      v18 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v17, (const char (*)[12])" param_vec:");
      common::milog::MiLogStream::operator<<<unsigned int>(v18, &index->param_vec);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<ItemLimitWhiteListIndex,true,false>::operator++((std::__detail::_Node_const_iterator<ItemLimitWhiteListIndex,true,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 436: range 000000001449ECBA-00000000144A29E7
int32_t __cdecl ItemLimitExcelConfigMgr::checkItemLimitWhiteListIndex(
        const ItemLimitExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr,
        const ItemLimitWhiteListIndex *index)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  int *v14; // rdx
  int v15; // ecx
  char v16; // al
  __int64 v17; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  int *v19; // rdx
  int v20; // ecx
  char v21; // al
  __int64 v22; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v23; // rax
  int *v24; // rdx
  int v25; // ecx
  char v26; // al
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  int v30; // eax
  uint32_t MaxReliquaryRank; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  uint32_t MaxWeaponRank; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // eax
  common::milog::MiLogStream *v46; // rax
  __int64 v47; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v48; // rax
  int *v49; // rdx
  int v50; // ecx
  char v51; // al
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  int v57; // eax
  common::milog::MiLogStream *v58; // rax
  __int64 v59; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v60; // rax
  int *v61; // rdx
  int v62; // ecx
  char v63; // al
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  int v69; // eax
  common::milog::MiLogStream *v70; // rax
  __int64 v71; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v72; // rax
  int *v73; // rdx
  int v74; // ecx
  char v75; // al
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  int v81; // eax
  common::milog::MiLogStream *v82; // rax
  __int64 v83; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v84; // rax
  int *v85; // rdx
  int v86; // ecx
  char v87; // al
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  int v93; // eax
  common::milog::MiLogStream *v94; // rax
  __int64 v95; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v96; // rax
  int *v97; // rdx
  int v98; // ecx
  char v99; // al
  __int64 v100; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v101; // rax
  int *v102; // rdx
  int v103; // ecx
  char v104; // al
  int v105; // eax
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  OpActivityExcelConfigMgr *p_op_activity_config_mgr; // rcx
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  int v117; // eax
  common::milog::MiLogStream *v118; // rax
  __int64 v119; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v120; // rax
  int *v121; // rdx
  int v122; // ecx
  char v123; // al
  __int64 v124; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v125; // rax
  int *v126; // rdx
  int v127; // ecx
  char v128; // al
  __int64 v129; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v130; // rax
  int *v131; // rdx
  int v132; // ecx
  char v133; // al
  char v134; // al
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  int v137; // eax
  uint32_t v138; // ecx
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  uint32_t v141; // ecx
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  int v149; // eax
  common::milog::MiLogStream *v150; // rax
  __int64 v151; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v152; // rax
  int *v153; // rdx
  int v154; // ecx
  char v155; // al
  __int64 v156; // rsi
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v157; // rax
  int *v158; // rdx
  int v159; // ecx
  char v160; // al
  ItemExcelConfigMgr *v161; // rcx
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rdx
  common::milog::MiLogStream *v168; // rax
  char v172[2544]; // [rsp+20h] [rbp-9F0h] BYREF

  v4 = (unsigned __int64)v172;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_6(2496LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "49 32 4 13 item_type:451 48 4 14 item_index:452 64 4 19 item_limit_type:453 80 4 19 item_limit_t"
                        "ype:505 96 4 11 drop_id:528 112 4 13 reward_id:551 128 4 12 goods_id:571 144 4 21 bonus_source_t"
                        "ype:591 160 4 13 config_id:592 176 4 13 item_type:627 192 4 13 item_rank:628 208 4 19 item_limit"
                        "_type:629 224 4 11 item_id:673 240 4 19 item_limit_type:674 256 32 9 <unknown> 320 32 9 <unknown"
                        "> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown>"
                        " 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> "
                        "1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unkno"
                        "wn> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <u"
                        "nknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 "
                        "9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240"
                        " 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ItemLimitExcelConfigMgr::checkItemLimitWhiteListIndex;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -234556924;
  v6[536862725] = -234556924;
  v6[536862726] = -234556924;
  v6[536862727] = -234556924;
  v6[536862729] = -218959118;
  v6[536862731] = -218959118;
  v6[536862733] = -218959118;
  v6[536862735] = -218959118;
  v6[536862737] = -218959118;
  v6[536862739] = -218959118;
  v6[536862741] = -218959118;
  v6[536862743] = -218959118;
  v6[536862745] = -218959118;
  v6[536862747] = -218959118;
  v6[536862749] = -218959118;
  v6[536862751] = -218959118;
  v6[536862753] = -218959118;
  v6[536862755] = -218959118;
  v6[536862757] = -218959118;
  v6[536862759] = -218959118;
  v6[536862761] = -218959118;
  v6[536862763] = -218959118;
  v6[536862765] = -218959118;
  v6[536862767] = -218959118;
  v6[536862769] = -218959118;
  v6[536862771] = -218959118;
  v6[536862773] = -218959118;
  v6[536862775] = -218959118;
  v6[536862777] = -218959118;
  v6[536862779] = -218959118;
  v6[536862781] = -218959118;
  v6[536862783] = -218959118;
  v6[536862785] = -218959118;
  v6[536862787] = -218959118;
  v6[536862789] = -218959118;
  v6[536862791] = -218959118;
  v6[536862793] = -218959118;
  v6[536862795] = -218959118;
  v6[536862797] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(index);
  }
  switch ( index->white_type )
  {
    case ITEM_LIMIT_WHITE_ITEM:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type )
      {
        if ( *(char *)(((v4 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          443);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v4 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])"sub type:");
        v9 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
               v8,
               &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 256));
        v3 = -1;
        v10 = 0;
        goto LABEL_71;
      }
      if ( std::vector<unsigned int>::size(&index->param_vec) != 3 )
      {
        if ( *(char *)(((v4 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          448);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v11,
          (const char (*)[27])"param_vec's size is not 3!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 320));
        v3 = -1;
        v10 = 0;
        goto LABEL_71;
      }
      v12 = 0LL;
      v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &index->param_vec,
                                                                                                  0LL);
      v14 = (int *)v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      v15 = *v14;
      v16 = *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000);
      if ( v16 != 0 && v16 <= 3 )
      {
        LOBYTE(v12) = v16 != 0;
        __asan_report_store4(v4 + 32, v12);
      }
      *(_DWORD *)(v4 + 32) = v15;
      v17 = 1LL;
      v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &index->param_vec,
                                                                                                  1uLL);
      v19 = (int *)v18;
      if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v18);
      }
      v20 = *v19;
      v21 = *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v17) = v21 != 0;
        __asan_report_store4(v4 + 48, v17);
      }
      *(_DWORD *)(v4 + 48) = v20;
      v22 = 2LL;
      v23 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &index->param_vec,
                                                                                                  2uLL);
      v24 = (int *)v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v23);
      }
      v25 = *v24;
      v26 = *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000);
      if ( v26 != 0 && v26 <= 3 )
      {
        LOBYTE(v22) = v26 != 0;
        __asan_report_store4(v4 + 64, v22);
      }
      *(_DWORD *)(v4 + 64) = v25;
      if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 32);
      if ( !data::isValidItemType(*(_DWORD *)(v4 + 32)) )
        goto LABEL_35;
      if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 32);
      if ( *(_DWORD *)(v4 + 32) == 5 )
LABEL_35:
        v27 = 1;
      else
        v27 = 0;
      if ( v27 )
      {
        if ( *(char *)(((v4 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          456);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v28,
                (const char (*)[19])"invalid item_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 384));
        v3 = -1;
        v10 = 0;
        goto LABEL_71;
      }
      if ( *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 32);
      v30 = *(_DWORD *)(v4 + 32);
      if ( v30 == 3 )
      {
        MaxReliquaryRank = ReliquaryExcelConfigMgr::getMaxReliquaryRank(&txt_config_mgr->reliquary_config_mgr);
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 48);
        if ( MaxReliquaryRank < *(_DWORD *)(v4 + 48) )
        {
          if ( *(char *)(((v4 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            464);
          v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v33 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v32,
                  (const char (*)[24])"invalid reliquary rank:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 448));
          v3 = -1;
          v10 = 0;
LABEL_71:
          if ( v10 )
            goto LABEL_303;
          goto LABEL_304;
        }
      }
      else
      {
        if ( v30 != 4 )
        {
          p_item_config_mgr = &txt_config_mgr->item_config_mgr;
          if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 48);
          if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, *(unsigned int *)(v4 + 48)) )
          {
            if ( *(char *)(((v4 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              478);
            v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v39 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v38,
                    (const char (*)[17])"invalid item_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 576));
            v3 = -1;
            v10 = 0;
            goto LABEL_71;
          }
          goto LABEL_64;
        }
        MaxWeaponRank = WeaponExcelConfigMgr::getMaxWeaponRank(&txt_config_mgr->weapon_config_mgr);
        if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 48);
        if ( MaxWeaponRank < *(_DWORD *)(v4 + 48) )
        {
          if ( *(char *)(((v4 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            471);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v35,
                  (const char (*)[21])"invalid weapon rank:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 512));
          v3 = -1;
          v10 = 0;
          goto LABEL_71;
        }
      }
LABEL_64:
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      if ( !data::isValidItemLimitType(*(_DWORD *)(v4 + 64)) )
      {
        if ( *(char *)(((v4 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          485);
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 640),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v41 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v40,
                (const char (*)[25])"invalid item_limit_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 640));
        v3 = -1;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      goto LABEL_71;
    case ITEM_LIMIT_WHITE_LIMIT_TYPE:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type == ITEM_LIMIT_WHITE_SUB_DAILY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_TOTAL_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_ACTIVITY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_LIMIT_TYPE_MATCH )
      {
        if ( std::vector<unsigned int>::size(&index->param_vec) == 1 )
        {
          v47 = 0LL;
          v48 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&index->param_vec, 0LL);
          v49 = (int *)v48;
          if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v48);
          }
          v50 = *v49;
          v51 = *(_BYTE *)(((v4 + 80) >> 3) + 0x7FFF8000);
          if ( v51 != 0 && v51 <= 3 )
          {
            LOBYTE(v47) = v51 != 0;
            __asan_report_store4(v4 + 80, v47);
          }
          *(_DWORD *)(v4 + 80) = v50;
          if ( !data::isValidItemLimitType(*(_DWORD *)(v4 + 80)) )
          {
            if ( *(char *)(((v4 + 832) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 863) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 832, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 832),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              508);
            v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 832),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v53 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v52,
                    (const char (*)[25])"invalid item_limit_type:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 832));
            v3 = -1;
            v45 = 0;
          }
          else
          {
            v45 = 1;
          }
        }
        else
        {
          if ( *(char *)(((v4 + 768) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 799) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 768, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 768),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            502);
          v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 768),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v46,
            (const char (*)[27])"param_vec's size is not 1!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 768));
          v3 = -1;
          v45 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 704) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 735) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 704, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 704),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          497);
        v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 704),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v43 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v42, (const char (*)[10])"sub type:");
        v44 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                v43,
                &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v44, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 704));
        v3 = -1;
        v45 = 0;
      }
      if ( v45 )
        goto LABEL_303;
      goto LABEL_304;
    case ITEM_LIMIT_WHITE_DROP_ID:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type == ITEM_LIMIT_WHITE_SUB_DAILY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_TOTAL_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_ACTIVITY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_LIMIT_TYPE_MATCH )
      {
        if ( std::vector<unsigned int>::size(&index->param_vec) == 1 )
        {
          v59 = 0LL;
          v60 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&index->param_vec, 0LL);
          v61 = (int *)v60;
          if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v60);
          }
          v62 = *v61;
          v63 = *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000);
          if ( v63 != 0 && v63 <= 3 )
          {
            LOBYTE(v59) = v63 != 0;
            __asan_report_store4(v4 + 96, v59);
          }
          *(_DWORD *)(v4 + 96) = v62;
          if ( data::DropExcelConfigMgrBase::findDropExcelConfig(
                 &txt_config_mgr->drop_config_mgr,
                 *(unsigned int *)(v4 + 96)) )
          {
            v57 = 1;
          }
          else
          {
            if ( *(char *)(((v4 + 1024) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 1055) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1024, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1024),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              531);
            v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 1024),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v65 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    v64,
                    (const char (*)[35])"findDropExcelConfig fail, drop_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v65, (const unsigned int *)(v4 + 96));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1024));
            v3 = -1;
            v57 = 0;
          }
        }
        else
        {
          if ( *(char *)(((v4 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            525);
          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 960),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v58,
            (const char (*)[27])"param_vec's size is not 1!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 960));
          v3 = -1;
          v57 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 896) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 927) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 896, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 896),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          520);
        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v55 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v54, (const char (*)[10])"sub type:");
        v56 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                v55,
                &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v56, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 896));
        v3 = -1;
        v57 = 0;
      }
      if ( v57 )
        goto LABEL_303;
      goto LABEL_304;
    case ITEM_LIMIT_WHITE_REWARD_ID:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type == ITEM_LIMIT_WHITE_SUB_DAILY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_TOTAL_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_ACTIVITY_LIMIT
        || index->sub_type == ITEM_LIMIT_WHITE_SUB_LIMIT_TYPE_MATCH )
      {
        if ( std::vector<unsigned int>::size(&index->param_vec) == 1 )
        {
          v71 = 0LL;
          v72 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&index->param_vec, 0LL);
          v73 = (int *)v72;
          if ( *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v72 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v72 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v72);
          }
          v74 = *v73;
          v75 = *(_BYTE *)(((v4 + 112) >> 3) + 0x7FFF8000);
          if ( v75 != 0 && v75 <= 3 )
          {
            LOBYTE(v71) = v75 != 0;
            __asan_report_store4(v4 + 112, v71);
          }
          *(_DWORD *)(v4 + 112) = v74;
          if ( data::RewardExcelConfigMgrBase::findRewardExcelConfig(
                 &txt_config_mgr->reward_config_mgr,
                 *(unsigned int *)(v4 + 112)) )
          {
            v69 = 1;
          }
          else
          {
            if ( *(char *)(((v4 + 1216) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1247) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 1216, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 1216),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              554);
            v76 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v4 + 1216),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v77 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    v76,
                    (const char (*)[39])"findRewardExcelConfig fail, reward_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v77,
              (const unsigned int *)(v4 + 112));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1216));
            v3 = -1;
            v69 = 0;
          }
        }
        else
        {
          if ( *(char *)(((v4 + 1152) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1183) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1152, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1152),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            548);
          v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 1152),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v70,
            (const char (*)[27])"param_vec's size is not 1!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1152));
          v3 = -1;
          v69 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 1088) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1119) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1088, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1088),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          543);
        v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1088),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v67 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v66, (const char (*)[10])"sub type:");
        v68 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                v67,
                &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v68, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1088));
        v3 = -1;
        v69 = 0;
      }
      if ( v69 )
        goto LABEL_303;
      goto LABEL_304;
    case ITEM_LIMIT_WHITE_GOODS_ID:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type )
      {
        if ( *(char *)(((v4 + 1280) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 1311) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1280, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1280),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          563);
        v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1280),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v79 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v78, (const char (*)[10])"sub type:");
        v80 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                v79,
                &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v80, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1280));
        v3 = -1;
        v81 = 0;
      }
      else if ( std::vector<unsigned int>::size(&index->param_vec) == 1 )
      {
        v83 = 0LL;
        v84 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &index->param_vec,
                                                                                                    0LL);
        v85 = (int *)v84;
        if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v84 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v84);
        }
        v86 = *v85;
        v87 = *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000);
        if ( v87 != 0 && v87 <= 3 )
        {
          LOBYTE(v83) = v87 != 0;
          __asan_report_store4(v4 + 128, v83);
        }
        *(_DWORD *)(v4 + 128) = v86;
        if ( data::ShopExcelConfigMgrBase::findShopGoodsExcelConfig(
               &txt_config_mgr->shop_config_mgr,
               *(unsigned int *)(v4 + 128)) )
        {
          v81 = 1;
        }
        else
        {
          if ( *(char *)(((v4 + 1408) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1439) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1408, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1408),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            574);
          v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v4 + 1408),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v89 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  v88,
                  (const char (*)[41])"findShopGoodsExcelConfig fail, goods_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v89, (const unsigned int *)(v4 + 128));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1408));
          v3 = -1;
          v81 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 1344) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1375) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1344, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1344),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          568);
        v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1344),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v82,
          (const char (*)[27])"param_vec's size is not 1!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1344));
        v3 = -1;
        v81 = 0;
      }
      if ( v81 )
        goto LABEL_303;
      goto LABEL_304;
    case ITEM_LIMIT_WHITE_BONUS_EXTRA_DROP:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type )
      {
        if ( *(char *)(((v4 + 1472) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1503) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1503) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1472, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1472),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          583);
        v90 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1472),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v91 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v90, (const char (*)[10])"sub type:");
        v92 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                v91,
                &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v92, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1472));
        v3 = -1;
        v93 = 0;
        goto LABEL_205;
      }
      if ( std::vector<unsigned int>::size(&index->param_vec) != 2 )
      {
        if ( *(char *)(((v4 + 1536) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 1567) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1536, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1536),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          588);
        v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v4 + 1536),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v94,
          (const char (*)[27])"param_vec's size is not 2!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1536));
        v3 = -1;
        v93 = 0;
        goto LABEL_205;
      }
      v95 = 0LL;
      v96 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  &index->param_vec,
                                                                                                  0LL);
      v97 = (int *)v96;
      if ( *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v96 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v96 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v96);
      }
      v98 = *v97;
      v99 = *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000);
      if ( v99 != 0 && v99 <= 3 )
      {
        LOBYTE(v95) = v99 != 0;
        __asan_report_store4(v4 + 144, v95);
      }
      *(_DWORD *)(v4 + 144) = v98;
      v100 = 1LL;
      v101 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &index->param_vec,
                                                                                                   1uLL);
      v102 = (int *)v101;
      if ( *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v101 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v101 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v101);
      }
      v103 = *v102;
      v104 = *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000);
      if ( v104 != 0 && v104 <= 3 )
      {
        LOBYTE(v100) = v104 != 0;
        __asan_report_store4(v4 + 160, v100);
      }
      *(_DWORD *)(v4 + 160) = v103;
      if ( *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 144);
      v105 = *(_DWORD *)(v4 + 144);
      if ( v105 == 1 )
      {
        p_reunion_config_mgr = &txt_config_mgr->reunion_config_mgr;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 160);
        if ( !data::ReunionExcelConfigMgrBase::findReunionPrivilegeExcelConfig(
                p_reunion_config_mgr,
                *(unsigned int *)(v4 + 160)) )
        {
          if ( *(char *)(((v4 + 1600) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1631) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1631) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1600, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1600),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            598);
          v107 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v4 + 1600),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v108 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   v107,
                   (const char (*)[49])"findReunionPrivilegeExcelConfig fail, config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v108, (const unsigned int *)(v4 + 160));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1600));
          v3 = -1;
          v93 = 0;
LABEL_205:
          if ( v93 )
            goto LABEL_303;
          goto LABEL_304;
        }
      }
      else
      {
        if ( v105 != 2 )
        {
          if ( *(char *)(((v4 + 1728) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1759) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 1759) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1728, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1728),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            610);
          v112 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v4 + 1728),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v113 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   v112,
                   (const char (*)[27])"invalid bonus_source_type:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v113, (const unsigned int *)(v4 + 144));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1728));
          v3 = -1;
          v93 = 0;
          goto LABEL_205;
        }
        p_op_activity_config_mgr = &txt_config_mgr->op_activity_config_mgr;
        if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 160);
        if ( !data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                p_op_activity_config_mgr,
                *(unsigned int *)(v4 + 160)) )
        {
          if ( *(char *)(((v4 + 1664) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 1695) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1695) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 1664, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 1664),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            605);
          v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v4 + 1664),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v111 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                   v110,
                   (const char (*)[43])"findOpActivityExcelConfig fail, config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, (const unsigned int *)(v4 + 160));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1664));
          v3 = -1;
          v93 = 0;
          goto LABEL_205;
        }
      }
      v93 = 1;
      goto LABEL_205;
    case ITEM_LIMIT_WHITE_ITEM_RANK:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type )
      {
        if ( *(char *)(((v4 + 1792) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1823) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 1823) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1792, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1792),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          619);
        v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 1792),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v115 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v114, (const char (*)[10])"sub type:");
        v116 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                 v115,
                 &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v116, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1792));
        v3 = -1;
        v117 = 0;
        goto LABEL_265;
      }
      if ( std::vector<unsigned int>::size(&index->param_vec) != 3 )
      {
        if ( *(char *)(((v4 + 1856) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 1887) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1856, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1856),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          624);
        v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 1856),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v118,
          (const char (*)[27])"param_vec's size is not 3!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1856));
        v3 = -1;
        v117 = 0;
        goto LABEL_265;
      }
      v119 = 0LL;
      v120 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &index->param_vec,
                                                                                                   0LL);
      v121 = (int *)v120;
      if ( *(_BYTE *)(((unsigned __int64)v120 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v120 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v120 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v120);
      }
      v122 = *v121;
      v123 = *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000);
      if ( v123 != 0 && v123 <= 3 )
      {
        LOBYTE(v119) = v123 != 0;
        __asan_report_store4(v4 + 176, v119);
      }
      *(_DWORD *)(v4 + 176) = v122;
      v124 = 1LL;
      v125 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &index->param_vec,
                                                                                                   1uLL);
      v126 = (int *)v125;
      if ( *(_BYTE *)(((unsigned __int64)v125 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v125 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v125 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v125);
      }
      v127 = *v126;
      v128 = *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000);
      if ( v128 != 0 && v128 <= 3 )
      {
        LOBYTE(v124) = v128 != 0;
        __asan_report_store4(v4 + 192, v124);
      }
      *(_DWORD *)(v4 + 192) = v127;
      v129 = 2LL;
      v130 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &index->param_vec,
                                                                                                   2uLL);
      v131 = (int *)v130;
      if ( *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v130 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v130 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v130);
      }
      v132 = *v131;
      v133 = *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000);
      if ( v133 != 0 && v133 <= 3 )
      {
        LOBYTE(v129) = v133 != 0;
        __asan_report_store4(v4 + 208, v129);
      }
      *(_DWORD *)(v4 + 208) = v132;
      if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 176);
      if ( !data::isValidItemType(*(_DWORD *)(v4 + 176)) )
        goto LABEL_235;
      if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 176);
      if ( *(_DWORD *)(v4 + 176) == 5 )
LABEL_235:
        v134 = 1;
      else
        v134 = 0;
      if ( v134 )
      {
        if ( *(char *)(((v4 + 1920) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 1951) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 1951) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 1920, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 1920),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          632);
        v135 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 1920),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v136 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 v135,
                 (const char (*)[19])"invalid item_type:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v136, (const unsigned int *)(v4 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1920));
        v3 = -1;
        v117 = 0;
        goto LABEL_265;
      }
      if ( *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 176);
      v137 = *(_DWORD *)(v4 + 176);
      if ( v137 != 3 )
      {
        if ( v137 == 4 )
        {
          v141 = WeaponExcelConfigMgr::getMaxWeaponRank(&txt_config_mgr->weapon_config_mgr);
          if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 192);
          if ( v141 < *(_DWORD *)(v4 + 192) )
          {
            if ( *(char *)(((v4 + 2048) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 2079) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 2079) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 2048, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 2048),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              647);
            v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v4 + 2048),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v143 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                     v142,
                     (const char (*)[21])"invalid weapon rank:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v143,
              (const unsigned int *)(v4 + 192));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2048));
            v3 = -1;
            v117 = 0;
            goto LABEL_265;
          }
        }
LABEL_258:
        if ( *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 208) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 208);
        if ( !data::isValidItemLimitType(*(_DWORD *)(v4 + 208)) )
        {
          if ( *(char *)(((v4 + 2112) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 2143) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 2143) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 2112, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 2112),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            656);
          v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v4 + 2112),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v145 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                   v144,
                   (const char (*)[25])"invalid item_limit_type:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v145, (const unsigned int *)(v4 + 208));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2112));
          v3 = -1;
          v117 = 0;
        }
        else
        {
          v117 = 1;
        }
        goto LABEL_265;
      }
      v138 = ReliquaryExcelConfigMgr::getMaxReliquaryRank(&txt_config_mgr->reliquary_config_mgr);
      if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 192);
      if ( v138 >= *(_DWORD *)(v4 + 192) )
        goto LABEL_258;
      if ( *(char *)(((v4 + 1984) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 2015) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 2015) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 1984, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 1984),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "checkItemLimitWhiteListIndex",
        640);
      v139 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v4 + 1984),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v140 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               v139,
               (const char (*)[24])"invalid reliquary rank:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, (const unsigned int *)(v4 + 192));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 1984));
      v3 = -1;
      v117 = 0;
LABEL_265:
      if ( v117 )
        goto LABEL_303;
LABEL_304:
      if ( v172 == (char *)v4 )
      {
        *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8044) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8054) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF805C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8064) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF806C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8074) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF807C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8084) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF808C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8094) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF809C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80A4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80AC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80B4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80BC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80C4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80CC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80D4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80DC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80E4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80EC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80F4) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF80FC) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8104) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF810C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8114) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF811C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8124) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF812C) = 0;
        *(_DWORD *)((v4 >> 3) + 0x7FFF8134) = 0;
      }
      else
      {
        *(_QWORD *)v4 = 1172321806LL;
        __asan_stack_free_6(v4, 2496LL, v172);
      }
      return v3;
    case ITEM_LIMIT_WHITE_ITEM_ID:
      if ( *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&index->sub_type);
      }
      if ( index->sub_type )
      {
        if ( *(char *)(((v4 + 2176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 2207) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 2207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 2176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 2176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          665);
        v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 2176),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v147 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v146, (const char (*)[10])"sub type:");
        v148 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteSubType,(data::ItemLimitWhiteSubType*)0>(
                 v147,
                 &index->sub_type);
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v148, (const char (*)[17])" not implemented");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2176));
        v3 = -1;
        v149 = 0;
      }
      else if ( std::vector<unsigned int>::size(&index->param_vec) == 2 )
      {
        v151 = 0LL;
        v152 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &index->param_vec,
                                                                                                     0LL);
        v153 = (int *)v152;
        if ( *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v152 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v152 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v152);
        }
        v154 = *v153;
        v155 = *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000);
        if ( v155 != 0 && v155 <= 3 )
        {
          LOBYTE(v151) = v155 != 0;
          __asan_report_store4(v4 + 224, v151);
        }
        *(_DWORD *)(v4 + 224) = v154;
        v156 = 1LL;
        v157 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                     &index->param_vec,
                                                                                                     1uLL);
        v158 = (int *)v157;
        if ( *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v157 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v157 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v157);
        }
        v159 = *v158;
        v160 = *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000);
        if ( v160 != 0 && v160 <= 3 )
        {
          LOBYTE(v156) = v160 != 0;
          __asan_report_store4(v4 + 240, v156);
        }
        *(_DWORD *)(v4 + 240) = v159;
        v161 = &txt_config_mgr->item_config_mgr;
        if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v4 + 224);
        if ( ItemExcelConfigMgr::findItemConfig(v161, *(unsigned int *)(v4 + 224)) )
        {
          if ( *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 240) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v4 + 240);
          if ( !data::isValidItemLimitType(*(_DWORD *)(v4 + 240)) )
          {
            if ( *(char *)(((v4 + 2368) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v4 + 2399) >> 3) + 0x7FFF8000) != 0
              && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 2399) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v4 + 2368, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v4 + 2368),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
              "checkItemLimitWhiteListIndex",
              682);
            v164 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v4 + 2368),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v165 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                     v164,
                     (const char (*)[25])"invalid item_limit_type:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v165,
              (const unsigned int *)(v4 + 240));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2368));
            v3 = -1;
            v149 = 0;
          }
          else
          {
            v149 = 1;
          }
        }
        else
        {
          if ( *(char *)(((v4 + 2304) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v4 + 2335) >> 3) + 0x7FFF8000) != 0
            && (char)((v4 - 64 + 95) & 7) >= *(_BYTE *)(((v4 + 2335) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v4 + 2304, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v4 + 2304),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
            "checkItemLimitWhiteListIndex",
            677);
          v162 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v4 + 2304),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v163 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                   v162,
                   (const char (*)[30])"findItemConfig fail, item_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v163, (const unsigned int *)(v4 + 224));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2304));
          v3 = -1;
          v149 = 0;
        }
      }
      else
      {
        if ( *(char *)(((v4 + 2240) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v4 + 2271) >> 3) + 0x7FFF8000) != 0
          && (char)((v4 - 64 + 31) & 7) >= *(_BYTE *)(((v4 + 2271) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v4 + 2240, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v4 + 2240),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
          "checkItemLimitWhiteListIndex",
          670);
        v150 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v4 + 2240),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          v150,
          (const char (*)[27])"param_vec's size is not 2!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2240));
        v3 = -1;
        v149 = 0;
      }
      if ( v149 )
LABEL_303:
        v3 = 0;
      goto LABEL_304;
    default:
      if ( *(char *)(((v4 + 2432) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 2463) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 - 97) & 7) >= *(_BYTE *)(((v4 + 2463) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 2432, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 2432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ItemLimitExcelConfig.cpp",
        "checkItemLimitWhiteListIndex",
        688);
      v166 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v4 + 2432),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v167 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v166, (const char (*)[12])"white type:");
      v168 = common::milog::MiLogStream::operator<<<data::ItemLimitWhiteType,(data::ItemLimitWhiteType*)0>(
               v167,
               &index->white_type);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v168, (const char (*)[17])" not implemented");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 2432));
      v3 = -1;
      goto LABEL_304;
  }
};

// Line 696: range 00000000144A29E8-00000000144A2C69
// local variable allocation has failed, the output may be wrong!
bool __cdecl ItemLimitExcelConfigMgr::isOutputControlInWhiteList(
        const ItemLimitExcelConfigMgr *const this,
        data::OutputControlType output_control_type,
        data::ItemLimitWhiteSubType sub_type,
        uint32_t param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // r14
  unsigned __int64 v8; // rax
  bool result; // al
  data::ItemLimitWhiteType white_type; // [rsp+2Ch] [rbp-B4h]
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 9 <unknown> 48 4 9 <unknown> 64 24 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ItemLimitExcelConfigMgr::isOutputControlInWhiteList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  if ( output_control_type == OUTPUT_CONTROL_REWARD )
  {
    white_type = ITEM_LIMIT_WHITE_REWARD_ID;
  }
  else
  {
    if ( output_control_type > OUTPUT_CONTROL_REWARD )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_16;
    }
    if ( output_control_type )
    {
      if ( output_control_type != OUTPUT_CONTROL_DROP )
        goto LABEL_12;
      white_type = ITEM_LIMIT_WHITE_DROP_ID;
    }
    else
    {
      white_type = ITEM_LIMIT_WHITE_LIMIT_TYPE;
    }
  }
  if ( *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v4 + 48, *(_QWORD *)&output_control_type);
  *(_DWORD *)(v4 + 48) = param;
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v4 + 32));
  std::vector<unsigned int>::vector(
    (std::vector<unsigned int> *const)(v4 + 64),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, v4 + 48),
    (const std::vector<unsigned int>::allocator_type *)(v4 + 32));
  v7 = ItemLimitExcelConfigMgr::isInItemLimitWhiteList(
         this,
         white_type,
         sub_type,
         (std::vector<unsigned int> *)(v4 + 64));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 64));
  v8 = ((v4 + 64) >> 3) + 2147450880;
  *(_WORD *)v8 = -1800;
  *(_BYTE *)(v8 + 2) = -8;
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v4 + 32));
LABEL_16:
  result = v7;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 715: range 00000000144A2C6A-00000000144A2DD1
bool __cdecl ItemLimitExcelConfigMgr::isInItemLimitWhiteList(
        const ItemLimitExcelConfigMgr *const this,
        data::ItemLimitWhiteType white_type,
        std::vector<unsigned int> *p_param_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int> *v6; // rax
  bool v7; // r14
  bool result; // al
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::isInItemLimitWhiteList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  v6 = std::move<std::vector<unsigned int> &>(p_param_vec);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32), v6);
  v7 = ItemLimitExcelConfigMgr::isInItemLimitWhiteList(
         this,
         white_type,
         ITEM_LIMIT_WHITE_SUB_NONE,
         (std::vector<unsigned int> *)(v3 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  result = v7;
  if ( v10 == (char *)v3 )
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
  return result;
};

// Line 719: range 00000000144A2DD2-00000000144A2FB9
// local variable allocation has failed, the output may be wrong!
bool __cdecl ItemLimitExcelConfigMgr::isInItemLimitWhiteList(
        const ItemLimitExcelConfigMgr *const this,
        data::ItemLimitWhiteType white_type,
        data::ItemLimitWhiteSubType sub_type,
        std::vector<unsigned int> *p_param_vec)
{
  ItemLimitWhiteListIndex *v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::vector<unsigned int> *v7; // rax
  bool v8; // r14
  bool result; // al
  char v12[144]; // [rsp+20h] [rbp-90h] BYREF

  v4 = (ItemLimitWhiteListIndex *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = (ItemLimitWhiteListIndex *)v5;
  }
  *(_QWORD *)&v4->white_type = 1102416563LL;
  v4->param_vec._M_impl._M_start = (std::_Vector_base<unsigned int>::pointer)"1 32 32 9 index:720";
  v4->param_vec._M_impl._M_finish = (std::_Vector_base<unsigned int>::pointer)ItemLimitExcelConfigMgr::isInItemLimitWhiteList;
  v6 = (unsigned __int64)v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450888) = -202116109;
  ItemLimitWhiteListIndex::ItemLimitWhiteListIndex(v4 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v4[1] >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&v4[1], *(_QWORD *)&white_type);
  }
  v4[1].white_type = white_type;
  if ( *(_BYTE *)(((unsigned __int64)&v4[1].sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v4 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4[1].sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&v4[1].sub_type, (((_BYTE)v4 + 36) & 7u) + 3);
  }
  v4[1].sub_type = sub_type;
  v7 = std::move<std::vector<unsigned int> &>(p_param_vec);
  std::vector<unsigned int>::operator=(&v4[1].param_vec, v7);
  v8 = ItemLimitExcelConfigMgr::isInItemLimitWhiteList(this, v4 + 1);
  ItemLimitWhiteListIndex::~ItemLimitWhiteListIndex(v4 + 1);
  result = v8;
  if ( v12 == (char *)v4 )
  {
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)&v4->white_type = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 727: range 00000000144A2FBA-00000000144A2FE5
bool __cdecl ItemLimitExcelConfigMgr::isInItemLimitWhiteList(
        const ItemLimitExcelConfigMgr *const this,
        const ItemLimitWhiteListIndex *index)
{
  return common::tools::MiscUtils::isContains<std::unordered_set<ItemLimitWhiteListIndex> const,ItemLimitWhiteListIndex>(
           &this->item_limit_white_list_set_,
           index);
};

// Line 732: range 00000000144A2FE6-00000000144A31C1
bool __fastcall ItemLimitExcelConfigMgr::isForbidAlertItemLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        __int64 limit_type,
        const ItemIndexKey *item_index_key)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>> *p_forbid_alert_item_limit_config_map; // rdx
  std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 limit_type:731 64 8 6 it:733 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::isForbidAlertItemLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = limit_type;
  p_forbid_alert_item_limit_config_map = &this->forbid_alert_item_limit_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, limit_type);
  *(std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::const_iterator *)(v3 + 64) = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::find(p_forbid_alert_item_limit_config_map, (const std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::key_type *)(v3 + 48));
  v7 = &this->forbid_alert_item_limit_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::const_iterator *)(v3 + 96) = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::end(v7);
  v8 = std::__detail::operator==<std::pair<data::ItemLimitType const,std::unordered_set<ItemIndexKey>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,std::unordered_set<ItemIndexKey>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::unordered_set<ItemIndexKey> const,ItemIndexKey>(
               &v10->second,
               item_index_key);
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

// Line 742: range 00000000144A31C2-00000000144A339D
bool __fastcall ItemLimitExcelConfigMgr::isCanForbidOutputItemLimitConfig(
        const ItemLimitExcelConfigMgr *const this,
        __int64 limit_type,
        const ItemIndexKey *item_index_key)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>> *p_can_forbid_output_item_limit_config_map; // rdx
  std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 14 limit_type:741 64 8 6 it:743 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::isCanForbidOutputItemLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = limit_type;
  p_can_forbid_output_item_limit_config_map = &this->can_forbid_output_item_limit_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, limit_type);
  *(std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::const_iterator *)(v3 + 64) = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::find(p_can_forbid_output_item_limit_config_map, (const std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::key_type *)(v3 + 48));
  v7 = &this->can_forbid_output_item_limit_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::const_iterator *)(v3 + 96) = std::unordered_map<data::ItemLimitType,std::unordered_set<ItemIndexKey>>::end(v7);
  v8 = std::__detail::operator==<std::pair<data::ItemLimitType const,std::unordered_set<ItemIndexKey>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<data::ItemLimitType const,std::unordered_set<ItemIndexKey>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<const data::ItemLimitType,std::unordered_set<ItemIndexKey> >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::unordered_set<ItemIndexKey> const,ItemIndexKey>(
               &v10->second,
               item_index_key);
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

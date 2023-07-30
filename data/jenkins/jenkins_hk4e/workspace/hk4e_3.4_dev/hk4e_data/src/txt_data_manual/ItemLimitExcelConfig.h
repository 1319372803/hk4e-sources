// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ItemLimitExcelConfig.h

// Line 30: range 00000000147598F2-000000001475998F
void __cdecl ItemLimitWhiteListIndex::ItemLimitWhiteListIndex(ItemLimitWhiteListIndex *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->white_type = ITEM_LIMIT_WHITE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->sub_type = ITEM_LIMIT_WHITE_SUB_NONE;
  std::vector<unsigned int>::vector(&this->param_vec);
};

// Line 30: range 0000000014CA6492-0000000014CA65AF
void __cdecl ItemLimitWhiteListIndex::ItemLimitWhiteListIndex(
        ItemLimitWhiteListIndex *const this,
        const ItemLimitWhiteListIndex *a2)
{
  data::ItemLimitWhiteType white_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ItemLimitWhiteSubType sub_type; // ecx
  char v6; // dl
  const ItemLimitWhiteListIndex *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  white_type = a2->white_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->white_type = white_type;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->sub_type);
  }
  sub_type = v7->sub_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->sub_type, v4);
  }
  this->sub_type = sub_type;
  std::vector<unsigned int>::vector(&this->param_vec, &v7->param_vec);
};

// Line 30: range 0000000014759990-00000000147599AE
void __cdecl ItemLimitWhiteListIndex::~ItemLimitWhiteListIndex(ItemLimitWhiteListIndex *const this)
{
  std::vector<unsigned int>::~vector(&this->param_vec);
};

// Line 43: range 0000000014736576-0000000014736615
std::size_t __cdecl std::hash<ItemIndexKey>::operator()(
        const std::hash<ItemIndexKey> *const this,
        const ItemIndexKey *k)
{
  unsigned __int64 v2; // rcx

  if ( *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)k & 7) + 3) >= *(_BYTE *)(((unsigned __int64)k >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(k);
  }
  v2 = (unsigned __int64)(unsigned int)k->item_type << 32;
  if ( *(_BYTE *)(((unsigned __int64)&k->index_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)k + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&k->index_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&k->index_value);
  }
  return v2 | k->index_value;
};

// Line 50: range 0000000014736616-00000000147368D7
std::size_t __cdecl std::hash<ItemLimitWhiteListIndex>::operator()(
        const std::hash<ItemLimitWhiteListIndex> *const this,
        const ItemLimitWhiteListIndex *index)
{
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // dl
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  unsigned int *v9; // rdx
  std::size_t result; // rax
  const ItemLimitWhiteListIndex *indexa; // [rsp+0h] [rbp-B0h]
  __int64 hash_value; // [rsp+20h] [rbp-90h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v14[128]; // [rsp+30h] [rbp-80h] BYREF

  indexa = index;
  v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)v3;
  }
  v2->_M_current = (const unsigned int *)1102416563;
  v2[1]._M_current = (const unsigned int *)"2 32 8 14 __for_begin:56 64 8 12 __for_end:56";
  v2[2]._M_current = (const unsigned int *)std::hash<ItemLimitWhiteListIndex>::operator();
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  v5 = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(index);
  }
  v6 = 1000000007 * (v5 + (unsigned int)index->white_type);
  v7 = *(_BYTE *)(((unsigned __int64)&index->sub_type >> 3) + 0x7FFF8000);
  LOBYTE(index) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)indexa + 4) & 7) + 3) >= v7 )
    __asan_report_load4(&indexa->sub_type);
  hash_value = v6 + (unsigned int)indexa->sub_type;
  __for_range = &indexa->param_vec;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], index);
  v2[4]._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], index);
  v2[8]._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(v2 + 4, v2 + 8) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(v2 + 4);
    v9 = (unsigned int *)v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    hash_value = 1000000007 * hash_value + *v9;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(v2 + 4);
  }
  result = hash_value;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_current = (const unsigned int *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 66: range 0000000014D36352-0000000014D363EF
void __cdecl OutputLimitConfig::OutputLimitConfig(OutputLimitConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->item_limit_type = ITEM_LIMIT_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_limit_refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->item_limit_refresh_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->item_limit_refresh_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->item_limit_refresh_type = ITEM_LIMIT_REFRESH_NONE;
  std::unordered_map<ItemIndexKey,unsigned int>::unordered_map(&this->item_limit_map);
};

// Line 66: range 0000000014D36110-0000000014D3622D
void __cdecl OutputLimitConfig::OutputLimitConfig(OutputLimitConfig *const this, const OutputLimitConfig *a2)
{
  data::ItemLimitType item_limit_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  data::ItemLimitRefreshType item_limit_refresh_type; // ecx
  char v6; // dl
  const OutputLimitConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  item_limit_type = a2->item_limit_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->item_limit_type = item_limit_type;
  v4 = (((_BYTE)v7 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->item_limit_refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->item_limit_refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->item_limit_refresh_type);
  }
  item_limit_refresh_type = v7->item_limit_refresh_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->item_limit_refresh_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->item_limit_refresh_type, v4);
  }
  this->item_limit_refresh_type = item_limit_refresh_type;
  std::unordered_map<ItemIndexKey,unsigned int>::unordered_map(&this->item_limit_map, &v7->item_limit_map);
};

// Line 66: range 00000000147594D0-00000000147594EE
void __cdecl OutputLimitConfig::~OutputLimitConfig(OutputLimitConfig *const this)
{
  std::unordered_map<ItemIndexKey,unsigned int>::~unordered_map(&this->item_limit_map);
};

// Line 131: range 00000000147CCD72-00000000147CCFFF
int32_t __cdecl ItemLimitExcelConfigMgr::findConstValue<bool>(
        ItemLimitExcelConfigMgr *const this,
        data::ItemLimitConstValueType name,
        bool *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  data::ItemLimitConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::findConstValue<bool>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ItemLimitExcelConfigMgrBase::findItemLimitConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strToNum<bool>(&config_ptr->value, value, 1);
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ItemLimitExcelConfig.h",
      "findConstValue",
      136);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[48])"findItemLimitConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findItemLimitConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findItemLimitConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 131: range 00000000147CCAE4-00000000147CCD71
int32_t __cdecl ItemLimitExcelConfigMgr::findConstValue<unsigned int>(
        ItemLimitExcelConfigMgr *const this,
        data::ItemLimitConstValueType name,
        unsigned int *value)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  int32_t result; // eax
  data::ItemLimitConstValueExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ItemLimitExcelConfigMgr::findConstValue<unsigned int>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862723] = -202116109;
  config_ptr = data::ItemLimitExcelConfigMgrBase::findItemLimitConstValueExcelConfig(this, (unsigned int)name);
  if ( config_ptr )
  {
    result = common::tools::StringUtils::strToNum<unsigned int>(&config_ptr->value, value, 1);
  }
  else
  {
    if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ItemLimitExcelConfig.h",
      "findConstValue",
      136);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v3 + 64),
           (const char (*)[48])"findItemLimitConstValueExcelConfig fails, name:");
    v7 = (__int64)data::enumValToStr(name, (__int64)"findItemLimitConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v3 + 32, "findItemLimitConstValueExcelConfig fails, name:");
    *(_QWORD *)(v3 + 32) = v7;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v3 + 32));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
    result = -1;
  }
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

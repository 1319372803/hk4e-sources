// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/OverflowTransformExcelConfig.gen.h

// Line 40: range 000000001477FF5A-00000000147800AB
void __cdecl data::OverflowTransformExcelConfig::OverflowTransformExcelConfig(
        data::OverflowTransformExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::OverflowTransformExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OverflowTransformExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->transform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transform_type, v1);
  }
  this->transform_type = OVERFLOW_TRANSFORM_NONE;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->transform_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->transform_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->transform_id, v3);
  }
  this->transform_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->transform_base_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transform_base_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transform_base_count, v3);
  }
  this->transform_base_count = 0;
  std::vector<data::IdCountConfig>::vector(&this->transform_results);
  if ( *(_BYTE *)(((unsigned __int64)&this->transform_item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->transform_item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->transform_item_limit_type, v3);
  }
  this->transform_item_limit_type = ITEM_LIMIT_NONE;
};

// Line 40: range 0000000014A0FD58-0000000014A0FF9C
void __cdecl data::OverflowTransformExcelConfig::OverflowTransformExcelConfig(
        data::OverflowTransformExcelConfig *const this,
        const data::OverflowTransformExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::OverflowTransformType transform_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t transform_id; // ecx
  char v7; // dl
  uint32_t transform_base_count; // ecx
  char v9; // al
  std::vector<data::IdCountConfig> *p_transform_results; // rsi
  data::ItemLimitType transform_item_limit_type; // ecx
  char v12; // al
  const data::OverflowTransformExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::OverflowTransformExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_OverflowTransformExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->transform_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->transform_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->transform_type);
  }
  transform_type = a2->transform_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->transform_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->transform_type, a2);
  }
  this->transform_type = transform_type;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->transform_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->transform_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->transform_id);
  }
  transform_id = v13->transform_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->transform_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->transform_id, v5);
  }
  this->transform_id = transform_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->transform_base_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->transform_base_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->transform_base_count);
  }
  transform_base_count = v13->transform_base_count;
  v9 = *(_BYTE *)(((unsigned __int64)&this->transform_base_count >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->transform_base_count, v5);
  }
  this->transform_base_count = transform_base_count;
  p_transform_results = &v13->transform_results;
  std::vector<data::IdCountConfig>::vector(&this->transform_results, &v13->transform_results);
  if ( *(_BYTE *)(((unsigned __int64)&v13->transform_item_limit_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->transform_item_limit_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->transform_item_limit_type);
  }
  transform_item_limit_type = v13->transform_item_limit_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->transform_item_limit_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_transform_results) = v12 != 0;
    __asan_report_store4(&this->transform_item_limit_type, p_transform_results);
  }
  this->transform_item_limit_type = transform_item_limit_type;
};

// Line 43: range 0000000014DE8778-0000000014DE87C9
void __cdecl data::OverflowTransformExcelConfig::~OverflowTransformExcelConfig(
        data::OverflowTransformExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::OverflowTransformExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_OverflowTransformExcelConfig = v2;
  std::vector<data::IdCountConfig>::~vector(&this->transform_results);
};

// Line 43: range 0000000014DE87CA-0000000014DE87F4
void __cdecl data::OverflowTransformExcelConfig::~OverflowTransformExcelConfig(
        data::OverflowTransformExcelConfig *const this)
{
  data::OverflowTransformExcelConfig::~OverflowTransformExcelConfig(this);
  operator delete(this, 0x38uLL);
};

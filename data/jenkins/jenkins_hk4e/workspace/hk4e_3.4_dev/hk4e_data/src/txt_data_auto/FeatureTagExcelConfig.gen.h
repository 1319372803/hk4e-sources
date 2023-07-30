// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/FeatureTagExcelConfig.gen.h

// Line 17: range 00000000147410DE-000000001474116D
void __cdecl data::FeatureTagGroupExcelConfig::FeatureTagGroupExcelConfig(data::FeatureTagGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FeatureTagGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FeatureTagGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_id, v1);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->tag_i_ds);
};

// Line 17: range 0000000014D17958-0000000014D17A2D
void __cdecl data::FeatureTagGroupExcelConfig::FeatureTagGroupExcelConfig(
        data::FeatureTagGroupExcelConfig *const this,
        const data::FeatureTagGroupExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t group_id; // ecx
  char v4; // al
  const data::FeatureTagGroupExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FeatureTagGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FeatureTagGroupExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->group_id);
  }
  group_id = a2->group_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->group_id, a2);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->tag_i_ds, &v5->tag_i_ds);
};

// Line 20: range 0000000014DE9618-0000000014DE9669
void __cdecl data::FeatureTagGroupExcelConfig::~FeatureTagGroupExcelConfig(
        data::FeatureTagGroupExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FeatureTagGroupExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FeatureTagGroupExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->tag_i_ds);
};

// Line 20: range 0000000014DE966A-0000000014DE9694
void __cdecl data::FeatureTagGroupExcelConfig::~FeatureTagGroupExcelConfig(
        data::FeatureTagGroupExcelConfig *const this)
{
  data::FeatureTagGroupExcelConfig::~FeatureTagGroupExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 32: range 0000000014D17B6E-0000000014D17CAD
void __cdecl data::FeatureTagExcelConfig::FeatureTagExcelConfig(
        data::FeatureTagExcelConfig *const this,
        const data::FeatureTagExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t tag_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::FeatureTagEnum feature_tag_enum; // ecx
  char v7; // dl
  const data::FeatureTagExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FeatureTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FeatureTagExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tag_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tag_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tag_id);
  }
  tag_id = a2->tag_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tag_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->tag_id, a2);
  }
  this->tag_id = tag_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->feature_tag_enum >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->feature_tag_enum >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->feature_tag_enum);
  }
  feature_tag_enum = v8->feature_tag_enum;
  v7 = *(_BYTE *)(((unsigned __int64)&this->feature_tag_enum >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->feature_tag_enum, v5);
  }
  this->feature_tag_enum = feature_tag_enum;
};

// Line 35: range 0000000014DE95AA-0000000014DE95EB
void __cdecl data::FeatureTagExcelConfig::~FeatureTagExcelConfig(data::FeatureTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FeatureTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FeatureTagExcelConfig = v2;
};

// Line 35: range 0000000014DE95EC-0000000014DE9616
void __cdecl data::FeatureTagExcelConfig::~FeatureTagExcelConfig(data::FeatureTagExcelConfig *const this)
{
  data::FeatureTagExcelConfig::~FeatureTagExcelConfig(this);
  operator delete(this, 0x10uLL);
};

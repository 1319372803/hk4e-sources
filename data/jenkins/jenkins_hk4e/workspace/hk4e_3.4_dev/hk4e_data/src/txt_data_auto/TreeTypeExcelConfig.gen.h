// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/TreeTypeExcelConfig.gen.h

// Line 55: range 000000000D37B50E-000000000D37B6C2
void __cdecl data::TreeDropExcelConfig::TreeDropExcelConfig(
        data::TreeDropExcelConfig *const this,
        const data::TreeDropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::TreeType tree_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t drop_id; // ecx
  char v7; // dl
  uint32_t talent_extra_drop_id; // ecx
  char v9; // al
  const data::TreeDropExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreeDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreeDropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->tree_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->tree_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->tree_type);
  }
  tree_type = a2->tree_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->tree_type, a2);
  }
  this->tree_type = tree_type;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->drop_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->drop_id);
  }
  drop_id = v10->drop_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->drop_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->drop_id, v5);
  }
  this->drop_id = drop_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->talent_extra_drop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->talent_extra_drop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->talent_extra_drop_id);
  }
  talent_extra_drop_id = v10->talent_extra_drop_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->talent_extra_drop_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->talent_extra_drop_id, v5);
  }
  this->talent_extra_drop_id = talent_extra_drop_id;
};

// Line 58: range 000000000D491856-000000000D491897
void __cdecl data::TreeDropExcelConfig::~TreeDropExcelConfig(data::TreeDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreeDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreeDropExcelConfig = v2;
};

// Line 58: range 000000000D491898-000000000D4918C2
void __cdecl data::TreeDropExcelConfig::~TreeDropExcelConfig(data::TreeDropExcelConfig *const this)
{
  data::TreeDropExcelConfig::~TreeDropExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 71: range 000000000CE215B0-000000000CE2167D
void __cdecl data::TreeTypeExcelConfig::TreeTypeExcelConfig(data::TreeTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreeTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreeTypeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->tree_pattern);
  if ( *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tree_type, v1);
  }
  this->tree_type = 0;
};

// Line 71: range 000000000D37B804-000000000D37B94E
void __cdecl data::TreeTypeExcelConfig::TreeTypeExcelConfig(
        data::TreeTypeExcelConfig *const this,
        const data::TreeTypeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::string *p_tree_pattern; // rsi
  data::TreeType tree_type; // ecx
  char v7; // al
  const data::TreeTypeExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreeTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreeTypeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->id);
  }
  id = a2->id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->id, a2);
  }
  this->id = id;
  p_tree_pattern = &v8->tree_pattern;
  std::string::basic_string(&this->tree_pattern, &v8->tree_pattern);
  if ( *(_BYTE *)(((unsigned __int64)&v8->tree_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v8->tree_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v8->tree_type);
  }
  tree_type = v8->tree_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->tree_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_tree_pattern) = v7 != 0;
    __asan_report_store4(&this->tree_type, p_tree_pattern);
  }
  this->tree_type = tree_type;
};

// Line 74: range 000000000D4917D8-000000000D491829
void __cdecl data::TreeTypeExcelConfig::~TreeTypeExcelConfig(data::TreeTypeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreeTypeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreeTypeExcelConfig = v2;
  std::string::~string(&this->tree_pattern);
};

// Line 74: range 000000000D49182A-000000000D491854
void __cdecl data::TreeTypeExcelConfig::~TreeTypeExcelConfig(data::TreeTypeExcelConfig *const this)
{
  data::TreeTypeExcelConfig::~TreeTypeExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CatalogExcelConfig.gen.h

// Line 89: range 00000000141AC2B6-00000000141AC3F5
void __cdecl data::AranaraCollectionExcelConfig::AranaraCollectionExcelConfig(
        data::AranaraCollectionExcelConfig *const this,
        const data::AranaraCollectionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::AranaraCollectionType aranara_collection_type; // ecx
  char v7; // dl
  const data::AranaraCollectionExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::AranaraCollectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AranaraCollectionExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->aranara_collection_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->aranara_collection_type >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->aranara_collection_type);
  }
  aranara_collection_type = v8->aranara_collection_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->aranara_collection_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->aranara_collection_type, v5);
  }
  this->aranara_collection_type = aranara_collection_type;
};

// Line 92: range 00000000142A2C3C-00000000142A2C7D
void __cdecl data::AranaraCollectionExcelConfig::~AranaraCollectionExcelConfig(
        data::AranaraCollectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AranaraCollectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AranaraCollectionExcelConfig = v2;
};

// Line 92: range 00000000142A2C7E-00000000142A2CA8
void __cdecl data::AranaraCollectionExcelConfig::~AranaraCollectionExcelConfig(
        data::AranaraCollectionExcelConfig *const this)
{
  data::AranaraCollectionExcelConfig::~AranaraCollectionExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 104: range 0000000013BEEEB8-0000000013BEEF9D
void __cdecl data::CatalogExcelConfig::CatalogExcelConfig(data::CatalogExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CatalogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CatalogExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->type = CATALOG_TYPE_NONE;
  std::vector<std::vector<unsigned int>>::vector(&this->tab_list);
  std::vector<unsigned int>::vector(&this->sync_watcher_list);
};

// Line 104: range 00000000141AC536-00000000141AC6D2
void __cdecl data::CatalogExcelConfig::CatalogExcelConfig(
        data::CatalogExcelConfig *const this,
        const data::CatalogExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::CatalogType type; // ecx
  char v7; // dl
  const data::CatalogExcelConfig *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CatalogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CatalogExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->type);
  }
  type = v8->type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->type, v5);
  }
  this->type = type;
  std::vector<std::vector<unsigned int>>::vector(&this->tab_list, &v8->tab_list);
  std::vector<unsigned int>::vector(&this->sync_watcher_list, &v8->sync_watcher_list);
};

// Line 107: range 00000000142A2BAE-00000000142A2C0F
void __cdecl data::CatalogExcelConfig::~CatalogExcelConfig(data::CatalogExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CatalogExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CatalogExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->sync_watcher_list);
  std::vector<std::vector<unsigned int>>::~vector(&this->tab_list);
};

// Line 107: range 00000000142A2C10-00000000142A2C3A
void __cdecl data::CatalogExcelConfig::~CatalogExcelConfig(data::CatalogExcelConfig *const this)
{
  data::CatalogExcelConfig::~CatalogExcelConfig(this);
  operator delete(this, 0x40uLL);
};

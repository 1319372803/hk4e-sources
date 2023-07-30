// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MiracleRingExcelConfig.gen.h

// Line 47: range 0000000014772FC4-0000000014773099
void __cdecl data::MiracleRingExcelConfig::MiracleRingExcelConfig(data::MiracleRingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MiracleRingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MiracleRingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_id, v1);
  }
  this->item_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->miracle_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->miracle_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->miracle_value, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->miracle_value = 0;
  std::vector<data::MiracleTag>::vector(&this->miracle_tag);
};

// Line 47: range 0000000014D50B26-0000000014D50C80
void __cdecl data::MiracleRingExcelConfig::MiracleRingExcelConfig(
        data::MiracleRingExcelConfig *const this,
        const data::MiracleRingExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t item_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t miracle_value; // ecx
  char v7; // dl
  const data::MiracleRingExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MiracleRingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MiracleRingExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_id);
  }
  item_id = a2->item_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->item_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->item_id, a2);
  }
  this->item_id = item_id;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->miracle_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->miracle_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->miracle_value);
  }
  miracle_value = v8->miracle_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->miracle_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->miracle_value, v5);
  }
  this->miracle_value = miracle_value;
  std::vector<data::MiracleTag>::vector(&this->miracle_tag, &v8->miracle_tag);
};

// Line 50: range 0000000014DE8B2A-0000000014DE8B7B
void __cdecl data::MiracleRingExcelConfig::~MiracleRingExcelConfig(data::MiracleRingExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MiracleRingExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MiracleRingExcelConfig = v2;
  std::vector<data::MiracleTag>::~vector(&this->miracle_tag);
};

// Line 50: range 0000000014DE8B7C-0000000014DE8BA6
void __cdecl data::MiracleRingExcelConfig::~MiracleRingExcelConfig(data::MiracleRingExcelConfig *const this)
{
  data::MiracleRingExcelConfig::~MiracleRingExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 63: range 000000001477309A-0000000014773129
void __cdecl data::MiracleRingDropExcelConfig::MiracleRingDropExcelConfig(data::MiracleRingDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MiracleRingDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MiracleRingDropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->miracle_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->miracle_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->miracle_tag, v1);
  }
  this->miracle_tag = TAG_NONE;
  std::vector<unsigned int>::vector(&this->drop_id);
};

// Line 63: range 0000000014D50DC2-0000000014D50E97
void __cdecl data::MiracleRingDropExcelConfig::MiracleRingDropExcelConfig(
        data::MiracleRingDropExcelConfig *const this,
        const data::MiracleRingDropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::MiracleTag miracle_tag; // ecx
  char v4; // al
  const data::MiracleRingDropExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MiracleRingDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MiracleRingDropExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->miracle_tag >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->miracle_tag >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->miracle_tag);
  }
  miracle_tag = a2->miracle_tag;
  v4 = *(_BYTE *)(((unsigned __int64)&this->miracle_tag >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->miracle_tag, a2);
  }
  this->miracle_tag = miracle_tag;
  std::vector<unsigned int>::vector(&this->drop_id, &v5->drop_id);
};

// Line 66: range 0000000014DE8AAC-0000000014DE8AFD
void __cdecl data::MiracleRingDropExcelConfig::~MiracleRingDropExcelConfig(
        data::MiracleRingDropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MiracleRingDropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MiracleRingDropExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->drop_id);
};

// Line 66: range 0000000014DE8AFE-0000000014DE8B28
void __cdecl data::MiracleRingDropExcelConfig::~MiracleRingDropExcelConfig(
        data::MiracleRingDropExcelConfig *const this)
{
  data::MiracleRingDropExcelConfig::~MiracleRingDropExcelConfig(this);
  operator delete(this, 0x28uLL);
};

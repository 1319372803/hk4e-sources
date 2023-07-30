// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/DisplayItemExcelConfig.gen.h

// Line 42: range 0000000013C00E0A-0000000013C00F21
void __cdecl data::DisplayItemExcelConfig::DisplayItemExcelConfig(data::DisplayItemExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this);
  v2 = (int (**)(...))(&`vtable for'data::DisplayItemExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank_level, v3);
  }
  this->rank_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->display_type, v3);
  }
  this->display_type = RELIQUARY_ITEM;
  if ( *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->param, (((_BYTE)this + 84) & 7u) + 3);
  }
  this->param = 0;
};

// Line 42: range 00000000141BFF4E-00000000141C0125
void __cdecl data::DisplayItemExcelConfig::DisplayItemExcelConfig(
        data::DisplayItemExcelConfig *const this,
        const data::DisplayItemExcelConfig *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t rank_level; // ecx
  char v5; // dl
  data::DisplayItemType display_type; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t param; // ecx
  char v10; // dl

  data::ItemConfig::ItemConfig((data::ItemConfig *const)this, (const data::ItemConfig *)a2);
  v2 = (int (**)(...))(&`vtable for'data::DisplayItemExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ItemConfig = v2;
  v3 = (((_BYTE)a2 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rank_level);
  }
  rank_level = a2->rank_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->rank_level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->rank_level, v3);
  }
  this->rank_level = rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&a2->display_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->display_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->display_type);
  }
  display_type = a2->display_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v3) = v7 != 0;
    __asan_report_store4(&this->display_type, v3);
  }
  this->display_type = display_type;
  v8 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->param);
  }
  param = a2->param;
  v10 = *(_BYTE *)(((unsigned __int64)&this->param >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->param, v8);
  }
  this->param = param;
};

// Line 46: range 00000000142A2F10-00000000142A2F5D
void __cdecl data::DisplayItemExcelConfig::~DisplayItemExcelConfig(data::DisplayItemExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DisplayItemExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ItemConfig = v2;
  data::ItemConfig::~ItemConfig((data::ItemConfig *const)this);
};

// Line 46: range 00000000142A2F5E-00000000142A2F88
void __cdecl data::DisplayItemExcelConfig::~DisplayItemExcelConfig(data::DisplayItemExcelConfig *const this)
{
  data::DisplayItemExcelConfig::~DisplayItemExcelConfig(this);
  operator delete(this, 0x58uLL);
};

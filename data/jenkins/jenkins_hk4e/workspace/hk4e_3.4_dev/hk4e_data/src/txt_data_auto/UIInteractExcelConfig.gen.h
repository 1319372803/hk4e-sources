// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/UIInteractExcelConfig.gen.h

// Line 37: range 000000000D37E8F4-000000000D37EA33
void __cdecl data::UIInteractExcelConfig::UIInteractExcelConfig(
        data::UIInteractExcelConfig *const this,
        const data::UIInteractExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::UIInteractType type; // ecx
  char v7; // dl
  const data::UIInteractExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::UIInteractExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_UIInteractExcelConfig = v2;
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
};

// Line 40: range 000000000D4912C4-000000000D491305
void __cdecl data::UIInteractExcelConfig::~UIInteractExcelConfig(data::UIInteractExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::UIInteractExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_UIInteractExcelConfig = v2;
};

// Line 40: range 000000000D491306-000000000D491330
void __cdecl data::UIInteractExcelConfig::~UIInteractExcelConfig(data::UIInteractExcelConfig *const this)
{
  data::UIInteractExcelConfig::~UIInteractExcelConfig(this);
  operator delete(this, 0x10uLL);
};

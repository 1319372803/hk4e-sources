// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/StateExcelConfig.gen.h

// Line 18: range 000000000D064B0A-000000000D064C49
void __cdecl data::ElementStateExcelConfig::ElementStateExcelConfig(
        data::ElementStateExcelConfig *const this,
        const data::ElementStateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ElementType element_type; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t rank; // ecx
  char v7; // dl
  const data::ElementStateExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ElementStateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ElementStateExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->element_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->element_type);
  }
  element_type = a2->element_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->element_type, a2);
  }
  this->element_type = element_type;
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->rank);
  }
  rank = v8->rank;
  v7 = *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->rank, v5);
  }
  this->rank = rank;
};

// Line 21: range 000000000D491256-000000000D491297
void __cdecl data::ElementStateExcelConfig::~ElementStateExcelConfig(data::ElementStateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ElementStateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ElementStateExcelConfig = v2;
};

// Line 21: range 000000000D491298-000000000D4912C2
void __cdecl data::ElementStateExcelConfig::~ElementStateExcelConfig(data::ElementStateExcelConfig *const this)
{
  data::ElementStateExcelConfig::~ElementStateExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 33: range 000000000CE186A4-000000000CE18779
void __cdecl data::StateExcelConfig::StateExcelConfig(data::StateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StateExcelConfig = v2;
  std::string::basic_string(&this->state_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_type, v1);
  }
  this->state_type = BUFF_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rank, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->rank = 0;
};

// Line 33: range 000000000D0653BA-000000000D065514
void __cdecl data::StateExcelConfig::StateExcelConfig(
        data::StateExcelConfig *const this,
        const data::StateExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_state_name; // rsi
  data::StateType state_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  uint32_t rank; // ecx
  char v8; // dl

  v2 = (int (**)(...))(&`vtable for'data::StateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_StateExcelConfig = v2;
  p_state_name = &a2->state_name;
  std::string::basic_string(&this->state_name, &a2->state_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->state_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->state_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->state_type);
  }
  state_type = a2->state_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->state_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_state_name) = v5 != 0;
    __asan_report_store4(&this->state_type, p_state_name);
  }
  this->state_type = state_type;
  v6 = (((_BYTE)a2 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rank >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rank >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rank);
  }
  rank = a2->rank;
  v8 = *(_BYTE *)(((unsigned __int64)&this->rank >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->rank, v6);
  }
  this->rank = rank;
};

// Line 36: range 000000000D4911D8-000000000D491229
void __cdecl data::StateExcelConfig::~StateExcelConfig(data::StateExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::StateExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_StateExcelConfig = v2;
  std::string::~string(&this->state_name);
};

// Line 36: range 000000000D49122A-000000000D491254
void __cdecl data::StateExcelConfig::~StateExcelConfig(data::StateExcelConfig *const this)
{
  data::StateExcelConfig::~StateExcelConfig(this);
  operator delete(this, 0x30uLL);
};

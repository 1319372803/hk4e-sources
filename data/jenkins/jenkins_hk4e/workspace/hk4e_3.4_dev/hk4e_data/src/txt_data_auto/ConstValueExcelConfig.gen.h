// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ConstValueExcelConfig.gen.h

// Line 417: range 000000000E1A7B34-000000000E1A7BC3
void __cdecl data::ConstValueExcelConfig::ConstValueExcelConfig(data::ConstValueExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConstValueExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->name, v1);
  }
  this->name = 0;
  std::vector<std::string>::vector(&this->value);
};

// Line 417: range 000000000E3AD992-000000000E3ADA67
void __cdecl data::ConstValueExcelConfig::ConstValueExcelConfig(
        data::ConstValueExcelConfig *const this,
        const data::ConstValueExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::ConstValueType name; // ecx
  char v4; // al
  const data::ConstValueExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConstValueExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->name >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->name >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->name);
  }
  name = a2->name;
  v4 = *(_BYTE *)(((unsigned __int64)&this->name >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->name, a2);
  }
  this->name = name;
  std::vector<std::string>::vector(&this->value, &v5->value);
};

// Line 420: range 000000000E432A86-000000000E432AD7
void __cdecl data::ConstValueExcelConfig::~ConstValueExcelConfig(data::ConstValueExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConstValueExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConstValueExcelConfig = v2;
  std::vector<std::string>::~vector(&this->value);
};

// Line 420: range 000000000E432AD8-000000000E432B02
void __cdecl data::ConstValueExcelConfig::~ConstValueExcelConfig(data::ConstValueExcelConfig *const this)
{
  data::ConstValueExcelConfig::~ConstValueExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/MultistageExcelConfig.gen.h

// Line 17: range 00000000147796AA-0000000014779736
void __cdecl data::MultistageExcelConfig::MultistageExcelConfig(data::MultistageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultistageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultistageExcelConfig = v2;
  std::string::basic_string(&this->stage_type);
  if ( *(char *)(((unsigned __int64)&this->is_main_group_can_unload >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_main_group_can_unload, v1, &this->is_main_group_can_unload);
  this->is_main_group_can_unload = 0;
};

// Line 17: range 0000000014D59374-0000000014D5944A
void __cdecl data::MultistageExcelConfig::MultistageExcelConfig(
        data::MultistageExcelConfig *const this,
        const data::MultistageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  std::string *p_stage_type; // rsi
  bool is_main_group_can_unload; // cl
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::MultistageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MultistageExcelConfig = v2;
  p_stage_type = &a2->stage_type;
  std::string::basic_string(&this->stage_type, &a2->stage_type);
  if ( *(char *)(((unsigned __int64)&a2->is_main_group_can_unload >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_main_group_can_unload, p_stage_type, &a2->is_main_group_can_unload);
  is_main_group_can_unload = a2->is_main_group_can_unload;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_main_group_can_unload >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_stage_type) = v5 != 0;
    __asan_report_store1(&this->is_main_group_can_unload, p_stage_type, &this->is_main_group_can_unload);
  }
  this->is_main_group_can_unload = is_main_group_can_unload;
};

// Line 20: range 0000000014DE7674-0000000014DE76C5
void __cdecl data::MultistageExcelConfig::~MultistageExcelConfig(data::MultistageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MultistageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MultistageExcelConfig = v2;
  std::string::~string(&this->stage_type);
};

// Line 20: range 0000000014DE76C6-0000000014DE76F0
void __cdecl data::MultistageExcelConfig::~MultistageExcelConfig(data::MultistageExcelConfig *const this)
{
  data::MultistageExcelConfig::~MultistageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

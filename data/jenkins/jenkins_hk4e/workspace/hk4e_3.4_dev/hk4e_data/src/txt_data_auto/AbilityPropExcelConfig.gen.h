// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/AbilityPropExcelConfig.gen.h

// Line 15: range 0000000012EADB0C-0000000012EADCA8
void __cdecl data::AbilityPropExcelConfig::AbilityPropExcelConfig(data::AbilityPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::AbilityPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityPropExcelConfig = v2;
  std::string::basic_string(&this->prop_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->overall_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->overall_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->overall_min, v1);
  }
  this->overall_min = 0.0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->overall_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->overall_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->overall_max, v3);
  }
  this->overall_max = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_tag_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_tag_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_tag_min, v3);
  }
  this->limit_tag_min = 0.0;
  v4 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_tag_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_tag_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_tag_max, v4);
  }
  this->limit_tag_max = 0.0;
  if ( *(char *)(((unsigned __int64)&this->succeed_owner >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->succeed_owner, v4, &this->succeed_owner);
  this->succeed_owner = 0;
};

// Line 15: range 0000000013384FCC-00000000133852A2
void __cdecl data::AbilityPropExcelConfig::AbilityPropExcelConfig(
        data::AbilityPropExcelConfig *const this,
        const data::AbilityPropExcelConfig *a2)
{
  int (**v2)(...); // rdx
  float overall_min; // xmm0_4
  float overall_max; // xmm0_4
  __int64 v5; // rsi
  float limit_tag_min; // xmm0_4
  float limit_tag_max; // xmm0_4
  __int64 v8; // rsi
  bool succeed_owner; // cl
  char v10; // al

  v2 = (int (**)(...))(&`vtable for'data::AbilityPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_AbilityPropExcelConfig = v2;
  std::string::basic_string(&this->prop_name, &a2->prop_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->overall_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->overall_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->overall_min);
  }
  overall_min = a2->overall_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->overall_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->overall_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->overall_min, &a2->prop_name);
  }
  this->overall_min = overall_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->overall_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->overall_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->overall_max);
  }
  overall_max = a2->overall_max;
  v5 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->overall_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->overall_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->overall_max, v5);
  }
  this->overall_max = overall_max;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_tag_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_tag_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_tag_min);
  }
  limit_tag_min = a2->limit_tag_min;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_tag_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_tag_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_tag_min, v5);
  }
  this->limit_tag_min = limit_tag_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_tag_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_tag_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_tag_max);
  }
  limit_tag_max = a2->limit_tag_max;
  v8 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_tag_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_tag_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_tag_max, v8);
  }
  this->limit_tag_max = limit_tag_max;
  if ( *(char *)(((unsigned __int64)&a2->succeed_owner >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->succeed_owner, v8, &a2->succeed_owner);
  succeed_owner = a2->succeed_owner;
  v10 = *(_BYTE *)(((unsigned __int64)&this->succeed_owner >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store1(&this->succeed_owner, v8, &this->succeed_owner);
  }
  this->succeed_owner = succeed_owner;
};

// Line 18: range 0000000013426C80-0000000013426CD1
void __cdecl data::AbilityPropExcelConfig::~AbilityPropExcelConfig(data::AbilityPropExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::AbilityPropExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_AbilityPropExcelConfig = v2;
  std::string::~string(&this->prop_name);
};

// Line 18: range 0000000013426CD2-0000000013426CFC
void __cdecl data::AbilityPropExcelConfig::~AbilityPropExcelConfig(data::AbilityPropExcelConfig *const this)
{
  data::AbilityPropExcelConfig::~AbilityPropExcelConfig(this);
  operator delete(this, 0x40uLL);
};

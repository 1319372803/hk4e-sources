// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ReviseLevelGrowExcelConfig.gen.h

// Line 17: range 000000001478A646-000000001478A6D5
void __cdecl data::ReviseLevelGrowExcelConfig::ReviseLevelGrowExcelConfig(data::ReviseLevelGrowExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReviseLevelGrowExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReviseLevelGrowExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->grade);
};

// Line 17: range 0000000014D72DF6-0000000014D72ECB
void __cdecl data::ReviseLevelGrowExcelConfig::ReviseLevelGrowExcelConfig(
        data::ReviseLevelGrowExcelConfig *const this,
        const data::ReviseLevelGrowExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ReviseLevelGrowExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReviseLevelGrowExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReviseLevelGrowExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->grade, &v5->grade);
};

// Line 20: range 0000000014DE99F0-0000000014DE9A41
void __cdecl data::ReviseLevelGrowExcelConfig::~ReviseLevelGrowExcelConfig(
        data::ReviseLevelGrowExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReviseLevelGrowExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReviseLevelGrowExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->grade);
};

// Line 20: range 0000000014DE9A42-0000000014DE9A6C
void __cdecl data::ReviseLevelGrowExcelConfig::~ReviseLevelGrowExcelConfig(
        data::ReviseLevelGrowExcelConfig *const this)
{
  data::ReviseLevelGrowExcelConfig::~ReviseLevelGrowExcelConfig(this);
  operator delete(this, 0x28uLL);
};

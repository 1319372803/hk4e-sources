// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GroupTagExcelConfig.gen.h

// Line 18: range 00000000147599B0-0000000014759A3F
void __cdecl data::GroupTagExcelConfig::GroupTagExcelConfig(data::GroupTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GroupTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupTagExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->tag_name);
};

// Line 18: range 0000000014D378A4-0000000014D37979
void __cdecl data::GroupTagExcelConfig::GroupTagExcelConfig(
        data::GroupTagExcelConfig *const this,
        const data::GroupTagExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::GroupTagExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::GroupTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_GroupTagExcelConfig = v2;
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
  std::string::basic_string(&this->tag_name, &v5->tag_name);
};

// Line 21: range 0000000014DE7578-0000000014DE75C9
void __cdecl data::GroupTagExcelConfig::~GroupTagExcelConfig(data::GroupTagExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::GroupTagExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_GroupTagExcelConfig = v2;
  std::string::~string(&this->tag_name);
};

// Line 21: range 0000000014DE75CA-0000000014DE75F4
void __cdecl data::GroupTagExcelConfig::~GroupTagExcelConfig(data::GroupTagExcelConfig *const this)
{
  data::GroupTagExcelConfig::~GroupTagExcelConfig(this);
  operator delete(this, 0x30uLL);
};

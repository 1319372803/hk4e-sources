// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/SensitiveWordExcelConfig.gen.h

// Line 16: range 000000001478E3C2-000000001478E451
void __cdecl data::SensitiveWordConfig::SensitiveWordConfig(data::SensitiveWordConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SensitiveWordConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SensitiveWordConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->word);
};

// Line 16: range 0000000014A3316E-0000000014A33243
void __cdecl data::SensitiveWordConfig::SensitiveWordConfig(
        data::SensitiveWordConfig *const this,
        const data::SensitiveWordConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::SensitiveWordConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SensitiveWordConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SensitiveWordConfig = v2;
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
  std::string::basic_string(&this->word, &v5->word);
};

// Line 19: range 0000000014DEB40E-0000000014DEB45F
void __cdecl data::SensitiveWordConfig::~SensitiveWordConfig(data::SensitiveWordConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SensitiveWordConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SensitiveWordConfig = v2;
  std::string::~string(&this->word);
};

// Line 19: range 0000000014DEB460-0000000014DEB48A
void __cdecl data::SensitiveWordConfig::~SensitiveWordConfig(data::SensitiveWordConfig *const this)
{
  data::SensitiveWordConfig::~SensitiveWordConfig(this);
  operator delete(this, 0x30uLL);
};

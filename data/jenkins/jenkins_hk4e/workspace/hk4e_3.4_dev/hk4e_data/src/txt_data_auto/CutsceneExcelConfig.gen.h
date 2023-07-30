// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/CutsceneExcelConfig.gen.h

// Line 16: range 0000000013BFAA16-0000000013BFAAA5
void __cdecl data::CutsceneExcelConfig::CutsceneExcelConfig(data::CutsceneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CutsceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CutsceneExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->path);
};

// Line 16: range 00000000141BC3E8-00000000141BC4BD
void __cdecl data::CutsceneExcelConfig::CutsceneExcelConfig(
        data::CutsceneExcelConfig *const this,
        const data::CutsceneExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::CutsceneExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::CutsceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_CutsceneExcelConfig = v2;
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
  std::string::basic_string(&this->path, &v5->path);
};

// Line 19: range 00000000142A1FBA-00000000142A200B
void __cdecl data::CutsceneExcelConfig::~CutsceneExcelConfig(data::CutsceneExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::CutsceneExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_CutsceneExcelConfig = v2;
  std::string::~string(&this->path);
};

// Line 19: range 00000000142A200C-00000000142A2036
void __cdecl data::CutsceneExcelConfig::~CutsceneExcelConfig(data::CutsceneExcelConfig *const this)
{
  data::CutsceneExcelConfig::~CutsceneExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/GadgetArgumentExcelConfig.gen.h

// Line 18: range 000000001474CD02-000000001474CD91
void __cdecl data::NightCrowArgumentExcelConfig::NightCrowArgumentExcelConfig(
        data::NightCrowArgumentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NightCrowArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NightCrowArgumentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->argument_id, v1);
  }
  this->argument_id = 0;
  std::vector<unsigned int>::vector(&this->gadget_state_list);
};

// Line 18: range 0000000014D26A06-0000000014D26ADB
void __cdecl data::NightCrowArgumentExcelConfig::NightCrowArgumentExcelConfig(
        data::NightCrowArgumentExcelConfig *const this,
        const data::NightCrowArgumentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t argument_id; // ecx
  char v4; // al
  const data::NightCrowArgumentExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::NightCrowArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_NightCrowArgumentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->argument_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->argument_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->argument_id);
  }
  argument_id = a2->argument_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->argument_id, a2);
  }
  this->argument_id = argument_id;
  std::vector<unsigned int>::vector(&this->gadget_state_list, &v5->gadget_state_list);
};

// Line 21: range 0000000014DE74FA-0000000014DE754B
void __cdecl data::NightCrowArgumentExcelConfig::~NightCrowArgumentExcelConfig(
        data::NightCrowArgumentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::NightCrowArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_NightCrowArgumentExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->gadget_state_list);
};

// Line 21: range 0000000014DE754C-0000000014DE7576
void __cdecl data::NightCrowArgumentExcelConfig::~NightCrowArgumentExcelConfig(
        data::NightCrowArgumentExcelConfig *const this)
{
  data::NightCrowArgumentExcelConfig::~NightCrowArgumentExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 33: range 000000001474CD92-000000001474CE31
void __cdecl data::DeshretObeliskArgumentExcelConfig::DeshretObeliskArgumentExcelConfig(
        data::DeshretObeliskArgumentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DeshretObeliskArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DeshretObeliskArgumentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->argument_id, v1);
  }
  this->argument_id = 0;
  std::vector<unsigned int>::vector(&this->group_id_list);
  std::vector<unsigned int>::vector(&this->gadget_id_list);
};

// Line 33: range 0000000014D26C1C-0000000014D26D33
void __cdecl data::DeshretObeliskArgumentExcelConfig::DeshretObeliskArgumentExcelConfig(
        data::DeshretObeliskArgumentExcelConfig *const this,
        const data::DeshretObeliskArgumentExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t argument_id; // ecx
  char v4; // al
  const data::DeshretObeliskArgumentExcelConfig *v5; // [rsp+0h] [rbp-20h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::DeshretObeliskArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_DeshretObeliskArgumentExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->argument_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->argument_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->argument_id);
  }
  argument_id = a2->argument_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->argument_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->argument_id, a2);
  }
  this->argument_id = argument_id;
  std::vector<unsigned int>::vector(&this->group_id_list, &v5->group_id_list);
  std::vector<unsigned int>::vector(&this->gadget_id_list, &v5->gadget_id_list);
};

// Line 36: range 0000000014DE746C-0000000014DE74CD
void __cdecl data::DeshretObeliskArgumentExcelConfig::~DeshretObeliskArgumentExcelConfig(
        data::DeshretObeliskArgumentExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::DeshretObeliskArgumentExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_DeshretObeliskArgumentExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->gadget_id_list);
  std::vector<unsigned int>::~vector(&this->group_id_list);
};

// Line 36: range 0000000014DE74CE-0000000014DE74F8
void __cdecl data::DeshretObeliskArgumentExcelConfig::~DeshretObeliskArgumentExcelConfig(
        data::DeshretObeliskArgumentExcelConfig *const this)
{
  data::DeshretObeliskArgumentExcelConfig::~DeshretObeliskArgumentExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ReminderExcelConfig.gen.h

// Line 92: range 0000000014784F42-0000000014784FD1
void __cdecl data::ReminderIndexExcelConfig::ReminderIndexExcelConfig(data::ReminderIndexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReminderIndexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReminderIndexExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->reminder_id);
};

// Line 92: range 0000000014D6D382-0000000014D6D457
void __cdecl data::ReminderIndexExcelConfig::ReminderIndexExcelConfig(
        data::ReminderIndexExcelConfig *const this,
        const data::ReminderIndexExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ReminderIndexExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReminderIndexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReminderIndexExcelConfig = v2;
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
  std::vector<unsigned int>::vector(&this->reminder_id, &v5->reminder_id);
};

// Line 95: range 0000000014DEB654-0000000014DEB6A5
void __cdecl data::ReminderIndexExcelConfig::~ReminderIndexExcelConfig(data::ReminderIndexExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReminderIndexExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReminderIndexExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->reminder_id);
};

// Line 95: range 0000000014DEB6A6-0000000014DEB6D0
void __cdecl data::ReminderIndexExcelConfig::~ReminderIndexExcelConfig(data::ReminderIndexExcelConfig *const this)
{
  data::ReminderIndexExcelConfig::~ReminderIndexExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 107: range 0000000014D6D598-0000000014D6D6DA
void __cdecl data::ReminderExcelConfig::ReminderExcelConfig(
        data::ReminderExcelConfig *const this,
        const data::ReminderExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  float show_time; // xmm0_4
  const data::ReminderExcelConfig *v6; // [rsp+0h] [rbp-10h]

  v6 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ReminderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ReminderExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v6->show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v6 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v6->show_time);
  }
  show_time = v6->show_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->show_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->show_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->show_time, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->show_time = show_time;
};

// Line 110: range 0000000014DEB5E6-0000000014DEB627
void __cdecl data::ReminderExcelConfig::~ReminderExcelConfig(data::ReminderExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ReminderExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ReminderExcelConfig = v2;
};

// Line 110: range 0000000014DEB628-0000000014DEB652
void __cdecl data::ReminderExcelConfig::~ReminderExcelConfig(data::ReminderExcelConfig *const this)
{
  data::ReminderExcelConfig::~ReminderExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 122: range 0000000014784FD2-0000000014785061
void __cdecl data::ServerMessageExcelConfig::ServerMessageExcelConfig(data::ServerMessageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ServerMessageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServerMessageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->lua_keys);
};

// Line 122: range 0000000014D6D81C-0000000014D6D8F1
void __cdecl data::ServerMessageExcelConfig::ServerMessageExcelConfig(
        data::ServerMessageExcelConfig *const this,
        const data::ServerMessageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::ServerMessageExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ServerMessageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ServerMessageExcelConfig = v2;
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
  std::string::basic_string(&this->lua_keys, &v5->lua_keys);
};

// Line 125: range 0000000014DEB568-0000000014DEB5B9
void __cdecl data::ServerMessageExcelConfig::~ServerMessageExcelConfig(data::ServerMessageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ServerMessageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ServerMessageExcelConfig = v2;
  std::string::~string(&this->lua_keys);
};

// Line 125: range 0000000014DEB5BA-0000000014DEB5E4
void __cdecl data::ServerMessageExcelConfig::~ServerMessageExcelConfig(data::ServerMessageExcelConfig *const this)
{
  data::ServerMessageExcelConfig::~ServerMessageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

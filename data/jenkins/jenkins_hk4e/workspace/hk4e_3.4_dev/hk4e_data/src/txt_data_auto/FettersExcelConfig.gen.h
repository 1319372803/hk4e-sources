// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/FettersExcelConfig.gen.h

// Line 72: range 0000000014742A7C-0000000014742AE9
void __cdecl data::FettersExcelConfig::FettersExcelConfig(data::FettersExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::FetterConfig::FetterConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::FettersExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  std::vector<unsigned int>::vector(&this->hide_costume_list);
  std::vector<unsigned int>::vector(&this->show_costume_list);
};

// Line 72: range 0000000014D18E9C-0000000014D18F62
void __cdecl data::FettersExcelConfig::FettersExcelConfig(
        data::FettersExcelConfig *const this,
        const data::FettersExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::FetterConfig::FetterConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::FettersExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterConfig = v2;
  std::vector<unsigned int>::vector(&this->hide_costume_list, &a2->hide_costume_list);
  std::vector<unsigned int>::vector(&this->show_costume_list, &a2->show_costume_list);
};

// Line 76: range 0000000014DEB0DE-0000000014DEB108
void __cdecl data::FettersExcelConfig::~FettersExcelConfig(data::FettersExcelConfig *const this)
{
  data::FettersExcelConfig::~FettersExcelConfig(this);
  operator delete(this, 0x88uLL);
};

// Line 76: range 0000000014DEB070-0000000014DEB0DD
void __cdecl data::FettersExcelConfig::~FettersExcelConfig(data::FettersExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FettersExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  std::vector<unsigned int>::~vector(&this->show_costume_list);
  std::vector<unsigned int>::~vector(&this->hide_costume_list);
  data::FetterConfig::~FetterConfig(this);
};

// Line 88: range 0000000014742AEA-0000000014742BBB
void __cdecl data::FetterInfoExcelConfig::FetterInfoExcelConfig(data::FetterInfoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::FetterConfig::FetterConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::FetterInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->info_birth_month >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->info_birth_month >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->info_birth_month, v1);
  }
  this->info_birth_month = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->info_birth_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->info_birth_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->info_birth_day, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->info_birth_day = 0;
};

// Line 88: range 0000000014D190A4-0000000014D191F6
void __cdecl data::FetterInfoExcelConfig::FetterInfoExcelConfig(
        data::FetterInfoExcelConfig *const this,
        const data::FetterInfoExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t info_birth_month; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t info_birth_day; // ecx
  char v7; // dl
  const data::FetterInfoExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  data::FetterConfig::FetterConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::FetterInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->info_birth_month >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->info_birth_month >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->info_birth_month);
  }
  info_birth_month = a2->info_birth_month;
  v4 = *(_BYTE *)(((unsigned __int64)&this->info_birth_month >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->info_birth_month, a2);
  }
  this->info_birth_month = info_birth_month;
  v5 = (((_BYTE)v8 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->info_birth_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->info_birth_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->info_birth_day);
  }
  info_birth_day = v8->info_birth_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->info_birth_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->info_birth_day, v5);
  }
  this->info_birth_day = info_birth_day;
};

// Line 92: range 0000000014DEAFF6-0000000014DEB043
void __cdecl data::FetterInfoExcelConfig::~FetterInfoExcelConfig(data::FetterInfoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  data::FetterConfig::~FetterConfig(this);
};

// Line 92: range 0000000014DEB044-0000000014DEB06E
void __cdecl data::FetterInfoExcelConfig::~FetterInfoExcelConfig(data::FetterInfoExcelConfig *const this)
{
  data::FetterInfoExcelConfig::~FetterInfoExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 104: range 0000000014742BBC-0000000014742C09
void __cdecl data::FetterStoryExcelConfig::FetterStoryExcelConfig(data::FetterStoryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::FetterConfig::FetterConfig(this);
  v2 = (int (**)(...))(&`vtable for'data::FetterStoryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
};

// Line 104: range 0000000014D19338-0000000014D19390
void __cdecl data::FetterStoryExcelConfig::FetterStoryExcelConfig(
        data::FetterStoryExcelConfig *const this,
        const data::FetterStoryExcelConfig *a2)
{
  int (**v2)(...); // rdx

  data::FetterConfig::FetterConfig(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::FetterStoryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterConfig = v2;
};

// Line 108: range 0000000014DEAF7C-0000000014DEAFC9
void __cdecl data::FetterStoryExcelConfig::~FetterStoryExcelConfig(data::FetterStoryExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterStoryExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterConfig = v2;
  data::FetterConfig::~FetterConfig(this);
};

// Line 108: range 0000000014DEAFCA-0000000014DEAFF4
void __cdecl data::FetterStoryExcelConfig::~FetterStoryExcelConfig(data::FetterStoryExcelConfig *const this)
{
  data::FetterStoryExcelConfig::~FetterStoryExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 116: range 000000001494EB44-000000001494ECF8
void __cdecl data::FetterCharacterCardExcelConfig::FetterCharacterCardExcelConfig(
        data::FetterCharacterCardExcelConfig *const this,
        const data::FetterCharacterCardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t avatar_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t fetter_level; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::FetterCharacterCardExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::FetterCharacterCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FetterCharacterCardExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_id);
  }
  avatar_id = a2->avatar_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->avatar_id, a2);
  }
  this->avatar_id = avatar_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->fetter_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->fetter_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->fetter_level);
  }
  fetter_level = v10->fetter_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->fetter_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->fetter_level, v5);
  }
  this->fetter_level = fetter_level;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 119: range 0000000014DEAF50-0000000014DEAF7A
void __cdecl data::FetterCharacterCardExcelConfig::~FetterCharacterCardExcelConfig(
        data::FetterCharacterCardExcelConfig *const this)
{
  data::FetterCharacterCardExcelConfig::~FetterCharacterCardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 119: range 0000000014DEAF0E-0000000014DEAF4F
void __cdecl data::FetterCharacterCardExcelConfig::~FetterCharacterCardExcelConfig(
        data::FetterCharacterCardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FetterCharacterCardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FetterCharacterCardExcelConfig = v2;
};

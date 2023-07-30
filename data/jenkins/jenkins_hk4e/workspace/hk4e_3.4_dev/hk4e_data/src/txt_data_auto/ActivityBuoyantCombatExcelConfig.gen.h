// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBuoyantCombatExcelConfig.gen.h

// Line 17: range 0000000012EB5368-0000000012EB543D
void __cdecl data::BuoyantCombatExcelConfig::BuoyantCombatExcelConfig(data::BuoyantCombatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BuoyantCombatExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
};

// Line 17: range 0000000013390E54-0000000013390FAE
void __cdecl data::BuoyantCombatExcelConfig::BuoyantCombatExcelConfig(
        data::BuoyantCombatExcelConfig *const this,
        const data::BuoyantCombatExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  const data::BuoyantCombatExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BuoyantCombatExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->activity_id);
  }
  activity_id = v8->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  std::vector<unsigned int>::vector(&this->level_id_list, &v8->level_id_list);
};

// Line 20: range 0000000013424646-0000000013424697
void __cdecl data::BuoyantCombatExcelConfig::~BuoyantCombatExcelConfig(data::BuoyantCombatExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BuoyantCombatExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 20: range 0000000013424698-00000000134246C2
void __cdecl data::BuoyantCombatExcelConfig::~BuoyantCombatExcelConfig(data::BuoyantCombatExcelConfig *const this)
{
  data::BuoyantCombatExcelConfig::~BuoyantCombatExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 33: range 0000000012EB543E-0000000012EB5561
void __cdecl data::BuoyantCombatLevelExcelConfig::BuoyantCombatLevelExcelConfig(
        data::BuoyantCombatLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BuoyantCombatLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v3);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  std::vector<unsigned int>::vector(&this->watcher_id);
  std::vector<unsigned int>::vector(&this->watcher_score);
};

// Line 33: range 00000000133910F0-0000000013391301
void __cdecl data::BuoyantCombatLevelExcelConfig::BuoyantCombatLevelExcelConfig(
        data::BuoyantCombatLevelExcelConfig *const this,
        const data::BuoyantCombatLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t gallery_id; // ecx
  char v7; // dl
  uint32_t day_index; // ecx
  char v9; // al
  const data::BuoyantCombatLevelExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BuoyantCombatLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->gallery_id);
  }
  gallery_id = v10->gallery_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&v10->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->day_index);
  }
  day_index = v10->day_index;
  v9 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  std::vector<unsigned int>::vector(&this->watcher_id, &v10->watcher_id);
  std::vector<unsigned int>::vector(&this->watcher_score, &v10->watcher_score);
};

// Line 36: range 00000000134245B8-0000000013424619
void __cdecl data::BuoyantCombatLevelExcelConfig::~BuoyantCombatLevelExcelConfig(
        data::BuoyantCombatLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BuoyantCombatLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BuoyantCombatLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_score);
  std::vector<unsigned int>::~vector(&this->watcher_id);
};

// Line 36: range 000000001342461A-0000000013424644
void __cdecl data::BuoyantCombatLevelExcelConfig::~BuoyantCombatLevelExcelConfig(
        data::BuoyantCombatLevelExcelConfig *const this)
{
  data::BuoyantCombatLevelExcelConfig::~BuoyantCombatLevelExcelConfig(this);
  operator delete(this, 0x48uLL);
};

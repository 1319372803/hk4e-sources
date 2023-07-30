// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMoonfinTrialExcelConfig.gen.h

// Line 43: range 0000000012ED1308-0000000012ED1461
void __cdecl data::MoonfinTrialExcelConfig::MoonfinTrialExcelConfig(data::MoonfinTrialExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MoonfinTrialExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  std::vector<unsigned int>::vector(&this->level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_fish_id, v3);
  }
  this->activity_fish_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_fish_gain_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_fish_gain_limit >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_fish_gain_limit, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->activity_fish_gain_limit = 0;
};

// Line 43: range 00000000133A941E-00000000133A9672
void __cdecl data::MoonfinTrialExcelConfig::MoonfinTrialExcelConfig(
        data::MoonfinTrialExcelConfig *const this,
        const data::MoonfinTrialExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_level_id_list; // rsi
  uint32_t activity_fish_id; // ecx
  char v10; // al
  __int64 v11; // rsi
  uint32_t activity_fish_gain_limit; // ecx
  char v13; // dl
  const data::MoonfinTrialExcelConfig *v14; // [rsp+0h] [rbp-10h]

  v14 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MoonfinTrialExcelConfig = v2;
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
  v5 = (((_BYTE)v14 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->activity_id);
  }
  activity_id = v14->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  p_level_id_list = &v14->level_id_list;
  std::vector<unsigned int>::vector(&this->level_id_list, &v14->level_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v14->activity_fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v14->activity_fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v14->activity_fish_id);
  }
  activity_fish_id = v14->activity_fish_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->activity_fish_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_level_id_list) = v10 != 0;
    __asan_report_store4(&this->activity_fish_id, p_level_id_list);
  }
  this->activity_fish_id = activity_fish_id;
  v11 = (((_BYTE)v14 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v14->activity_fish_gain_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->activity_fish_gain_limit >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v14->activity_fish_gain_limit);
  }
  activity_fish_gain_limit = v14->activity_fish_gain_limit;
  v13 = *(_BYTE *)(((unsigned __int64)&this->activity_fish_gain_limit >> 3) + 0x7FFF8000);
  if ( v13 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v13 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store4(&this->activity_fish_gain_limit, v11);
  }
  this->activity_fish_gain_limit = activity_fish_gain_limit;
};

// Line 46: range 0000000013423D7C-0000000013423DCD
void __cdecl data::MoonfinTrialExcelConfig::~MoonfinTrialExcelConfig(data::MoonfinTrialExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MoonfinTrialExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_id_list);
};

// Line 46: range 0000000013423DCE-0000000013423DF8
void __cdecl data::MoonfinTrialExcelConfig::~MoonfinTrialExcelConfig(data::MoonfinTrialExcelConfig *const this)
{
  data::MoonfinTrialExcelConfig::~MoonfinTrialExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 61: range 0000000012ED1462-0000000012ED163F
void __cdecl data::MoonfinTrialLevelExcelConfig::MoonfinTrialLevelExcelConfig(
        data::MoonfinTrialLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MoonfinTrialLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_type, v3);
  }
  this->level_type = MOONFIN_TRIAL_ACTIVITY_LEVEL_TYPE_QUEST;
  if ( *(_BYTE *)(((unsigned __int64)&this->specific_fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->specific_fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->specific_fish_id, v3);
  }
  this->specific_fish_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, v4);
  }
  this->challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->watcher_id);
};

// Line 61: range 00000000133A981C-00000000133A9B6A
void __cdecl data::MoonfinTrialLevelExcelConfig::MoonfinTrialLevelExcelConfig(
        data::MoonfinTrialLevelExcelConfig *const this,
        const data::MoonfinTrialLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::MoonfinTrialActivityLevelType level_type; // ecx
  char v7; // dl
  uint32_t specific_fish_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  uint32_t challenge_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t open_day; // ecx
  char v17; // dl
  const data::MoonfinTrialLevelExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_MoonfinTrialLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->level_id);
  }
  level_id = a2->level_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->level_id, a2);
  }
  this->level_id = level_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->level_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->level_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->level_type);
  }
  level_type = v18->level_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_type, v5);
  }
  this->level_type = level_type;
  if ( *(_BYTE *)(((unsigned __int64)&v18->specific_fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->specific_fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->specific_fish_id);
  }
  specific_fish_id = v18->specific_fish_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->specific_fish_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->specific_fish_id, v5);
  }
  this->specific_fish_id = specific_fish_id;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->gallery_id);
  }
  gallery_id = v18->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->challenge_id);
  }
  challenge_id = v18->challenge_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->challenge_id, v10);
  }
  this->challenge_id = challenge_id;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v17 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->open_day, v15);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->watcher_id, &v18->watcher_id);
};

// Line 64: range 0000000013423CFE-0000000013423D4F
void __cdecl data::MoonfinTrialLevelExcelConfig::~MoonfinTrialLevelExcelConfig(
        data::MoonfinTrialLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::MoonfinTrialLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_MoonfinTrialLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id);
};

// Line 64: range 0000000013423D50-0000000013423D7A
void __cdecl data::MoonfinTrialLevelExcelConfig::~MoonfinTrialLevelExcelConfig(
        data::MoonfinTrialLevelExcelConfig *const this)
{
  data::MoonfinTrialLevelExcelConfig::~MoonfinTrialLevelExcelConfig(this);
  operator delete(this, 0x38uLL);
};

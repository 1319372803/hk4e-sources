// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityTreasureSeelieExcelConfig.gen.h

// Line 17: range 0000000014192D4C-0000000014192F85
void __cdecl data::TreasureSeelieExcelConfig::TreasureSeelieExcelConfig(
        data::TreasureSeelieExcelConfig *const this,
        const data::TreasureSeelieExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t guide_child_quest_id; // ecx
  char v7; // dl
  uint32_t treasure_days; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t detector_widget_id; // ecx
  char v12; // dl
  const data::TreasureSeelieExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreasureSeelieExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreasureSeelieExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->guide_child_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->guide_child_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->guide_child_quest_id);
  }
  guide_child_quest_id = v13->guide_child_quest_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->guide_child_quest_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->guide_child_quest_id, v5);
  }
  this->guide_child_quest_id = guide_child_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->treasure_days >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->treasure_days >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->treasure_days);
  }
  treasure_days = v13->treasure_days;
  v9 = *(_BYTE *)(((unsigned __int64)&this->treasure_days >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->treasure_days, v5);
  }
  this->treasure_days = treasure_days;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->detector_widget_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->detector_widget_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->detector_widget_id);
  }
  detector_widget_id = v13->detector_widget_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->detector_widget_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->detector_widget_id, v10);
  }
  this->detector_widget_id = detector_widget_id;
};

// Line 20: range 00000000142A2B40-00000000142A2B81
void __cdecl data::TreasureSeelieExcelConfig::~TreasureSeelieExcelConfig(data::TreasureSeelieExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreasureSeelieExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureSeelieExcelConfig = v2;
};

// Line 20: range 00000000142A2B82-00000000142A2BAC
void __cdecl data::TreasureSeelieExcelConfig::~TreasureSeelieExcelConfig(data::TreasureSeelieExcelConfig *const this)
{
  data::TreasureSeelieExcelConfig::~TreasureSeelieExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 34: range 0000000013BD8340-0000000013BD8515
void __cdecl data::TreasureSeelieRegionExcelConfig::TreasureSeelieRegionExcelConfig(
        data::TreasureSeelieRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TreasureSeelieRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureSeelieRegionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id, v3);
  }
  this->schedule_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->chest_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->chest_group_id, v4);
  }
  this->chest_group_id = 0;
  std::vector<unsigned int>::vector(&this->chest_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_region_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_region_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_region_config_id, v4);
  }
  this->play_region_config_id = 0;
};

// Line 34: range 00000000141930C6-0000000014193404
void __cdecl data::TreasureSeelieRegionExcelConfig::TreasureSeelieRegionExcelConfig(
        data::TreasureSeelieRegionExcelConfig *const this,
        const data::TreasureSeelieRegionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t schedule_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  uint32_t chest_group_id; // ecx
  char v14; // al
  std::vector<unsigned int> *p_chest_config_id_list; // rsi
  uint32_t play_region_config_id; // ecx
  char v17; // al
  const data::TreasureSeelieRegionExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TreasureSeelieRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TreasureSeelieRegionExcelConfig = v2;
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
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->schedule_id);
  }
  schedule_id = v18->schedule_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->schedule_id, v5);
  }
  this->schedule_id = schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->open_day);
  }
  open_day = v18->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->chest_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->chest_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->chest_group_id);
  }
  chest_group_id = v18->chest_group_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->chest_group_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->chest_group_id, v10);
  }
  this->chest_group_id = chest_group_id;
  p_chest_config_id_list = &v18->chest_config_id_list;
  std::vector<unsigned int>::vector(&this->chest_config_id_list, &v18->chest_config_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v18->play_region_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->play_region_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->play_region_config_id);
  }
  play_region_config_id = v18->play_region_config_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->play_region_config_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_chest_config_id_list) = v17 != 0;
    __asan_report_store4(&this->play_region_config_id, p_chest_config_id_list);
  }
  this->play_region_config_id = play_region_config_id;
};

// Line 37: range 00000000142A2AC2-00000000142A2B13
void __cdecl data::TreasureSeelieRegionExcelConfig::~TreasureSeelieRegionExcelConfig(
        data::TreasureSeelieRegionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TreasureSeelieRegionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TreasureSeelieRegionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->chest_config_id_list);
};

// Line 37: range 00000000142A2B14-00000000142A2B3E
void __cdecl data::TreasureSeelieRegionExcelConfig::~TreasureSeelieRegionExcelConfig(
        data::TreasureSeelieRegionExcelConfig *const this)
{
  data::TreasureSeelieRegionExcelConfig::~TreasureSeelieRegionExcelConfig(this);
  operator delete(this, 0x40uLL);
};

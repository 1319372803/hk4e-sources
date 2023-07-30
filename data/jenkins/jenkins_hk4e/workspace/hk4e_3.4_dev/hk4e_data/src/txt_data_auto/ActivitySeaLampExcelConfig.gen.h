// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivitySeaLampExcelConfig.gen.h

// Line 70: range 0000000013BD30A8-0000000013BD3211
void __cdecl data::SeaLampSectionExcelConfig::SeaLampSectionExcelConfig(data::SeaLampSectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SeaLampSectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SeaLampSectionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->section_id, v3);
  }
  this->section_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v3);
  }
  this->activity_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->main_quest_id = 0;
  std::vector<unsigned int>::vector(&this->mini_quest_id);
  std::vector<unsigned int>::vector(&this->watcher_id_vec);
};

// Line 70: range 00000000133CCBE2-00000000133CCE78
void __cdecl data::SeaLampSectionExcelConfig::SeaLampSectionExcelConfig(
        data::SeaLampSectionExcelConfig *const this,
        const data::SeaLampSectionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t section_id; // ecx
  char v7; // dl
  uint32_t activity_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t main_quest_id; // ecx
  char v12; // dl
  const data::SeaLampSectionExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SeaLampSectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SeaLampSectionExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->section_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->section_id);
  }
  section_id = v13->section_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->section_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->section_id, v5);
  }
  this->section_id = section_id;
  if ( *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->activity_id);
  }
  activity_id = v13->activity_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->main_quest_id);
  }
  main_quest_id = v13->main_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->main_quest_id, v10);
  }
  this->main_quest_id = main_quest_id;
  std::vector<unsigned int>::vector(&this->mini_quest_id, &v13->mini_quest_id);
  std::vector<unsigned int>::vector(&this->watcher_id_vec, &v13->watcher_id_vec);
};

// Line 73: range 00000000132406A2-0000000013240703
void __cdecl data::SeaLampSectionExcelConfig::~SeaLampSectionExcelConfig(data::SeaLampSectionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SeaLampSectionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SeaLampSectionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_vec);
  std::vector<unsigned int>::~vector(&this->mini_quest_id);
};

// Line 73: range 0000000013240704-000000001324072E
void __cdecl data::SeaLampSectionExcelConfig::~SeaLampSectionExcelConfig(data::SeaLampSectionExcelConfig *const this)
{
  data::SeaLampSectionExcelConfig::~SeaLampSectionExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 89: range 0000000014185102-0000000014185241
void __cdecl data::LanV2ProjectionLevelExcelConfig::LanV2ProjectionLevelExcelConfig(
        data::LanV2ProjectionLevelExcelConfig *const this,
        const data::LanV2ProjectionLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  const data::LanV2ProjectionLevelExcelConfig *v8; // [rsp+0h] [rbp-10h]

  v8 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2ProjectionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2ProjectionLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v8 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v8->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v8 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v8->stage_id);
  }
  stage_id = v8->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
};

// Line 92: range 00000000142A58AC-00000000142A58ED
void __cdecl data::LanV2ProjectionLevelExcelConfig::~LanV2ProjectionLevelExcelConfig(
        data::LanV2ProjectionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2ProjectionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2ProjectionLevelExcelConfig = v2;
};

// Line 92: range 00000000142A58EE-00000000142A5918
void __cdecl data::LanV2ProjectionLevelExcelConfig::~LanV2ProjectionLevelExcelConfig(
        data::LanV2ProjectionLevelExcelConfig *const this)
{
  data::LanV2ProjectionLevelExcelConfig::~LanV2ProjectionLevelExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 104: range 0000000013BD3212-0000000013BD34C1
void __cdecl data::SalvageOverAllExcelConfig::SalvageOverAllExcelConfig(data::SalvageOverAllExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SalvageOverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageOverAllExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_duration, v3);
  }
  this->activity_duration = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_quest_id, v4);
  }
  this->pre_quest_id = 0;
  std::vector<float>::vector(&this->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->region_radius, v4);
  }
  this->region_radius = 0;
  v5 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->reminder_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->reminder_radius, v5);
  }
  this->reminder_radius = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reminder_id, v5);
  }
  this->reminder_id = 0;
  v6 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->destory_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->destory_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->destory_radius, v6);
  }
  this->destory_radius = 0;
  std::vector<std::string>::vector(&this->back_pos_names);
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reward_preview_id, v6);
  }
  this->reward_preview_id = 0;
};

// Line 104: range 0000000014185382-0000000014185881
void __cdecl data::SalvageOverAllExcelConfig::SalvageOverAllExcelConfig(
        data::SalvageOverAllExcelConfig *const this,
        const data::SalvageOverAllExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t activity_duration; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t pre_quest_id; // ecx
  char v12; // dl
  std::vector<float> *p_region_center; // rsi
  uint32_t region_radius; // ecx
  char v15; // al
  __int64 v16; // rsi
  uint32_t reminder_radius; // ecx
  char v18; // dl
  uint32_t reminder_id; // ecx
  char v20; // al
  __int64 v21; // rsi
  uint32_t destory_radius; // ecx
  char v23; // dl
  std::vector<std::string> *p_back_pos_names; // rsi
  uint32_t reward_preview_id; // ecx
  char v26; // al
  const data::SalvageOverAllExcelConfig *v27; // [rsp+0h] [rbp-20h]

  v27 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SalvageOverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SalvageOverAllExcelConfig = v2;
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
  v5 = (((_BYTE)v27 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->activity_id);
  }
  activity_id = v27->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v27->activity_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->activity_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->activity_duration);
  }
  activity_duration = v27->activity_duration;
  v9 = *(_BYTE *)(((unsigned __int64)&this->activity_duration >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->activity_duration, v5);
  }
  this->activity_duration = activity_duration;
  v10 = (((_BYTE)v27 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->pre_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->pre_quest_id);
  }
  pre_quest_id = v27->pre_quest_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->pre_quest_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->pre_quest_id, v10);
  }
  this->pre_quest_id = pre_quest_id;
  p_region_center = &v27->region_center;
  std::vector<float>::vector(&this->region_center, &v27->region_center);
  if ( *(_BYTE *)(((unsigned __int64)&v27->region_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->region_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->region_radius);
  }
  region_radius = v27->region_radius;
  v15 = *(_BYTE *)(((unsigned __int64)&this->region_radius >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_region_center) = v15 != 0;
    __asan_report_store4(&this->region_radius, p_region_center);
  }
  this->region_radius = region_radius;
  v16 = (((_BYTE)v27 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->reminder_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->reminder_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->reminder_radius);
  }
  reminder_radius = v27->reminder_radius;
  v18 = *(_BYTE *)(((unsigned __int64)&this->reminder_radius >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->reminder_radius, v16);
  }
  this->reminder_radius = reminder_radius;
  if ( *(_BYTE *)(((unsigned __int64)&v27->reminder_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->reminder_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->reminder_id);
  }
  reminder_id = v27->reminder_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->reminder_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->reminder_id, v16);
  }
  this->reminder_id = reminder_id;
  v21 = (((_BYTE)v27 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v27->destory_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v27 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v27->destory_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v27->destory_radius);
  }
  destory_radius = v27->destory_radius;
  v23 = *(_BYTE *)(((unsigned __int64)&this->destory_radius >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->destory_radius, v21);
  }
  this->destory_radius = destory_radius;
  p_back_pos_names = &v27->back_pos_names;
  std::vector<std::string>::vector(&this->back_pos_names, &v27->back_pos_names);
  if ( *(_BYTE *)(((unsigned __int64)&v27->reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v27->reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v27->reward_preview_id);
  }
  reward_preview_id = v27->reward_preview_id;
  v26 = *(_BYTE *)(((unsigned __int64)&this->reward_preview_id >> 3) + 0x7FFF8000);
  if ( v26 != 0 && v26 <= 3 )
  {
    LOBYTE(p_back_pos_names) = v26 != 0;
    __asan_report_store4(&this->reward_preview_id, p_back_pos_names);
  }
  this->reward_preview_id = reward_preview_id;
};

// Line 107: range 00000000142A5880-00000000142A58AA
void __cdecl data::SalvageOverAllExcelConfig::~SalvageOverAllExcelConfig(data::SalvageOverAllExcelConfig *const this)
{
  data::SalvageOverAllExcelConfig::~SalvageOverAllExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 107: range 00000000142A581E-00000000142A587F
void __cdecl data::SalvageOverAllExcelConfig::~SalvageOverAllExcelConfig(data::SalvageOverAllExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SalvageOverAllExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageOverAllExcelConfig = v2;
  std::vector<std::string>::~vector(&this->back_pos_names);
  std::vector<float>::~vector(&this->region_center);
};

// Line 128: range 00000000141859C2-0000000014185A7C
void __cdecl data::SalvageTypeDataExcelConfig::SalvageTypeDataExcelConfig(
        data::SalvageTypeDataExcelConfig *const this,
        const data::SalvageTypeDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  data::SalvagePlayType play_type; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::SalvageTypeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SalvageTypeDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->play_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->play_type);
  }
  play_type = a2->play_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->play_type, a2);
  }
  this->play_type = play_type;
};

// Line 131: range 00000000142A57B0-00000000142A57F1
void __cdecl data::SalvageTypeDataExcelConfig::~SalvageTypeDataExcelConfig(
        data::SalvageTypeDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SalvageTypeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageTypeDataExcelConfig = v2;
};

// Line 131: range 00000000142A57F2-00000000142A581C
void __cdecl data::SalvageTypeDataExcelConfig::~SalvageTypeDataExcelConfig(
        data::SalvageTypeDataExcelConfig *const this)
{
  data::SalvageTypeDataExcelConfig::~SalvageTypeDataExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 142: range 0000000013BD34C2-0000000013BD3605
void __cdecl data::SalvageStageDataExcelConfig::SalvageStageDataExcelConfig(
        data::SalvageStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SalvageStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageStageDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_day, v3);
  }
  this->start_day = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_cond_id, v3);
  }
  this->unlock_cond_id = 0;
  std::vector<unsigned int>::vector(&this->land_group_link_list);
  std::vector<unsigned int>::vector(&this->sea_group_link_list);
  std::vector<unsigned int>::vector(&this->unlock_challenge_group_link_list);
  std::vector<unsigned int>::vector(&this->salvage_challenge_id_list);
};

// Line 142: range 0000000014185BBE-0000000014185E2F
void __cdecl data::SalvageStageDataExcelConfig::SalvageStageDataExcelConfig(
        data::SalvageStageDataExcelConfig *const this,
        const data::SalvageStageDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t start_day; // ecx
  char v7; // dl
  uint32_t unlock_cond_id; // ecx
  char v9; // al
  const data::SalvageStageDataExcelConfig *v10; // [rsp+0h] [rbp-20h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SalvageStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SalvageStageDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->start_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->start_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->start_day);
  }
  start_day = v10->start_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->start_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->start_day, v5);
  }
  this->start_day = start_day;
  if ( *(_BYTE *)(((unsigned __int64)&v10->unlock_cond_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->unlock_cond_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->unlock_cond_id);
  }
  unlock_cond_id = v10->unlock_cond_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->unlock_cond_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->unlock_cond_id, v5);
  }
  this->unlock_cond_id = unlock_cond_id;
  std::vector<unsigned int>::vector(&this->land_group_link_list, &v10->land_group_link_list);
  std::vector<unsigned int>::vector(&this->sea_group_link_list, &v10->sea_group_link_list);
  std::vector<unsigned int>::vector(&this->unlock_challenge_group_link_list, &v10->unlock_challenge_group_link_list);
  std::vector<unsigned int>::vector(&this->salvage_challenge_id_list, &v10->salvage_challenge_id_list);
};

// Line 145: range 00000000142A5784-00000000142A57AE
void __cdecl data::SalvageStageDataExcelConfig::~SalvageStageDataExcelConfig(
        data::SalvageStageDataExcelConfig *const this)
{
  data::SalvageStageDataExcelConfig::~SalvageStageDataExcelConfig(this);
  operator delete(this, 0x78uLL);
};

// Line 145: range 00000000142A5702-00000000142A5783
void __cdecl data::SalvageStageDataExcelConfig::~SalvageStageDataExcelConfig(
        data::SalvageStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SalvageStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageStageDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->salvage_challenge_id_list);
  std::vector<unsigned int>::~vector(&this->unlock_challenge_group_link_list);
  std::vector<unsigned int>::~vector(&this->sea_group_link_list);
  std::vector<unsigned int>::~vector(&this->land_group_link_list);
};

// Line 162: range 0000000013BD3606-0000000013BD37BD
void __cdecl data::SalvageChallengeDataExcelConfig::SalvageChallengeDataExcelConfig(
        data::SalvageChallengeDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::SalvageChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageChallengeDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->play_type, v3);
  }
  this->play_type = SALVAGE_PLAY_TYPE_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->group_link_id, v3);
  }
  this->group_link_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->player_point_config_id);
  std::vector<unsigned int>::vector(&this->boat_point_config_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vehicle_gadget_id, v4);
  }
  this->vehicle_gadget_id = 0;
  std::vector<unsigned int>::vector(&this->watcher_ids);
};

// Line 162: range 00000000133CD69A-00000000133CD9D5
void __cdecl data::SalvageChallengeDataExcelConfig::SalvageChallengeDataExcelConfig(
        data::SalvageChallengeDataExcelConfig *const this,
        const data::SalvageChallengeDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::SalvagePlayType play_type; // ecx
  char v7; // dl
  uint32_t group_link_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  std::vector<unsigned int> *p_boat_point_config_id; // rsi
  uint32_t vehicle_gadget_id; // ecx
  char v15; // al
  const data::SalvageChallengeDataExcelConfig *v16; // [rsp+0h] [rbp-20h]

  v16 = a2;
  v2 = (int (**)(...))(&`vtable for'data::SalvageChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_SalvageChallengeDataExcelConfig = v2;
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
  v5 = (((_BYTE)v16 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->play_type);
  }
  play_type = v16->play_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->play_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->play_type, v5);
  }
  this->play_type = play_type;
  if ( *(_BYTE *)(((unsigned __int64)&v16->group_link_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->group_link_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->group_link_id);
  }
  group_link_id = v16->group_link_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->group_link_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->group_link_id, v5);
  }
  this->group_link_id = group_link_id;
  v10 = (((_BYTE)v16 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v16->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v16 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v16->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v16->gallery_id);
  }
  gallery_id = v16->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->player_point_config_id, &v16->player_point_config_id);
  p_boat_point_config_id = &v16->boat_point_config_id;
  std::vector<unsigned int>::vector(&this->boat_point_config_id, &v16->boat_point_config_id);
  if ( *(_BYTE *)(((unsigned __int64)&v16->vehicle_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v16->vehicle_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v16->vehicle_gadget_id);
  }
  vehicle_gadget_id = v16->vehicle_gadget_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->vehicle_gadget_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(p_boat_point_config_id) = v15 != 0;
    __asan_report_store4(&this->vehicle_gadget_id, p_boat_point_config_id);
  }
  this->vehicle_gadget_id = vehicle_gadget_id;
  std::vector<unsigned int>::vector(&this->watcher_ids, &v16->watcher_ids);
};

// Line 165: range 00000000132F2244-00000000132F22B5
void __cdecl data::SalvageChallengeDataExcelConfig::~SalvageChallengeDataExcelConfig(
        data::SalvageChallengeDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::SalvageChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_SalvageChallengeDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_ids);
  std::vector<unsigned int>::~vector(&this->boat_point_config_id);
  std::vector<unsigned int>::~vector(&this->player_point_config_id);
};

// Line 165: range 00000000132F22B6-00000000132F22E0
void __cdecl data::SalvageChallengeDataExcelConfig::~SalvageChallengeDataExcelConfig(
        data::SalvageChallengeDataExcelConfig *const this)
{
  data::SalvageChallengeDataExcelConfig::~SalvageChallengeDataExcelConfig(this);
  operator delete(this, 0x68uLL);
};

// Line 183: range 00000000140CF3B6-00000000140CF445
void __cdecl data::FireElementAdditionConfig::FireElementAdditionConfig(data::FireElementAdditionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireElementAdditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireElementAdditionConfig = v2;
  std::vector<unsigned int>::vector(&this->range);
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ratio, v1);
  }
  this->ratio = 0;
};

// Line 183: range 0000000014184F3C-0000000014185011
void __cdecl data::FireElementAdditionConfig::FireElementAdditionConfig(
        data::FireElementAdditionConfig *const this,
        const data::FireElementAdditionConfig *a2)
{
  int (**v2)(...); // rdx
  std::vector<unsigned int> *p_range; // rsi
  uint32_t ratio; // ecx
  char v5; // al

  v2 = (int (**)(...))(&`vtable for'data::FireElementAdditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_FireElementAdditionConfig = v2;
  p_range = &a2->range;
  std::vector<unsigned int>::vector(&this->range, &a2->range);
  if ( *(_BYTE *)(((unsigned __int64)&a2->ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->ratio);
  }
  ratio = a2->ratio;
  v5 = *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_range) = v5 != 0;
    __asan_report_store4(&this->ratio, p_range);
  }
  this->ratio = ratio;
};

// Line 186: range 0000000013FE472C-0000000013FE477D
void __cdecl data::FireElementAdditionConfig::~FireElementAdditionConfig(data::FireElementAdditionConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::FireElementAdditionConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_FireElementAdditionConfig = v2;
  std::vector<unsigned int>::~vector(&this->range);
};

// Line 186: range 0000000013FE477E-0000000013FE47A8
void __cdecl data::FireElementAdditionConfig::~FireElementAdditionConfig(data::FireElementAdditionConfig *const this)
{
  data::FireElementAdditionConfig::~FireElementAdditionConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 196: range 0000000013BD3812-0000000013BD396F
void __cdecl data::LanV2FireworksOverallDataExcelConfig::LanV2FireworksOverallDataExcelConfig(
        data::LanV2FireworksOverallDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksOverallDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksOverallDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_stamina_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->init_stamina_value, v3);
  }
  this->init_stamina_value = 0;
  std::vector<data::FireElementAdditionConfig>::vector(&this->fire_element_addition_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_formula_exponent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_formula_exponent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_formula_exponent, v3);
  }
  this->score_formula_exponent = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_formula_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_formula_offset >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_formula_offset, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->score_formula_offset = 0.0;
};

// Line 196: range 000000001418602A-0000000014186284
void __cdecl data::LanV2FireworksOverallDataExcelConfig::LanV2FireworksOverallDataExcelConfig(
        data::LanV2FireworksOverallDataExcelConfig *const this,
        const data::LanV2FireworksOverallDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t init_stamina_value; // ecx
  char v7; // dl
  float score_formula_exponent; // xmm0_4
  float score_formula_offset; // xmm0_4
  const data::LanV2FireworksOverallDataExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksOverallDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2FireworksOverallDataExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->init_stamina_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->init_stamina_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->init_stamina_value);
  }
  init_stamina_value = v10->init_stamina_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->init_stamina_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->init_stamina_value, v5);
  }
  this->init_stamina_value = init_stamina_value;
  std::vector<data::FireElementAdditionConfig>::vector(
    &this->fire_element_addition_list,
    &v10->fire_element_addition_list);
  if ( *(_BYTE *)(((unsigned __int64)&v10->score_formula_exponent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->score_formula_exponent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->score_formula_exponent);
  }
  score_formula_exponent = v10->score_formula_exponent;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_formula_exponent >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_formula_exponent >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_formula_exponent, &v10->fire_element_addition_list);
  }
  this->score_formula_exponent = score_formula_exponent;
  if ( *(_BYTE *)(((unsigned __int64)&v10->score_formula_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->score_formula_offset >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->score_formula_offset);
  }
  score_formula_offset = v10->score_formula_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_formula_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_formula_offset >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_formula_offset, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->score_formula_offset = score_formula_offset;
};

// Line 199: range 00000000142A56D6-00000000142A5700
void __cdecl data::LanV2FireworksOverallDataExcelConfig::~LanV2FireworksOverallDataExcelConfig(
        data::LanV2FireworksOverallDataExcelConfig *const this)
{
  data::LanV2FireworksOverallDataExcelConfig::~LanV2FireworksOverallDataExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 199: range 00000000142A5684-00000000142A56D5
void __cdecl data::LanV2FireworksOverallDataExcelConfig::~LanV2FireworksOverallDataExcelConfig(
        data::LanV2FireworksOverallDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksOverallDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksOverallDataExcelConfig = v2;
  std::vector<data::FireElementAdditionConfig>::~vector(&this->fire_element_addition_list);
};

// Line 214: range 0000000013BD3970-0000000013BD3A93
void __cdecl data::LanV2FireworksStageDataExcelConfig::LanV2FireworksStageDataExcelConfig(
        data::LanV2FireworksStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksStageDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, v3);
  }
  this->open_day = 0;
  std::vector<unsigned int>::vector(&this->challenge_id_list);
  std::vector<unsigned int>::vector(&this->guide_quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_quest_reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->guide_quest_reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->guide_quest_reward_preview_id, v3);
  }
  this->guide_quest_reward_preview_id = 0;
};

// Line 214: range 00000000141863C6-00000000141865D7
void __cdecl data::LanV2FireworksStageDataExcelConfig::LanV2FireworksStageDataExcelConfig(
        data::LanV2FireworksStageDataExcelConfig *const this,
        const data::LanV2FireworksStageDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_guide_quest_id; // rsi
  uint32_t guide_quest_reward_preview_id; // ecx
  char v10; // al
  const data::LanV2FireworksStageDataExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2FireworksStageDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->stage_id);
  }
  stage_id = a2->stage_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->stage_id, a2);
  }
  this->stage_id = stage_id;
  v5 = (((_BYTE)v11 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->open_day);
  }
  open_day = v11->open_day;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  std::vector<unsigned int>::vector(&this->challenge_id_list, &v11->challenge_id_list);
  p_guide_quest_id = &v11->guide_quest_id;
  std::vector<unsigned int>::vector(&this->guide_quest_id, &v11->guide_quest_id);
  if ( *(_BYTE *)(((unsigned __int64)&v11->guide_quest_reward_preview_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->guide_quest_reward_preview_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->guide_quest_reward_preview_id);
  }
  guide_quest_reward_preview_id = v11->guide_quest_reward_preview_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->guide_quest_reward_preview_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_guide_quest_id) = v10 != 0;
    __asan_report_store4(&this->guide_quest_reward_preview_id, p_guide_quest_id);
  }
  this->guide_quest_reward_preview_id = guide_quest_reward_preview_id;
};

// Line 217: range 00000000142A55F6-00000000142A5657
void __cdecl data::LanV2FireworksStageDataExcelConfig::~LanV2FireworksStageDataExcelConfig(
        data::LanV2FireworksStageDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksStageDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksStageDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->guide_quest_id);
  std::vector<unsigned int>::~vector(&this->challenge_id_list);
};

// Line 217: range 00000000142A5658-00000000142A5682
void __cdecl data::LanV2FireworksStageDataExcelConfig::~LanV2FireworksStageDataExcelConfig(
        data::LanV2FireworksStageDataExcelConfig *const this)
{
  data::LanV2FireworksStageDataExcelConfig::~LanV2FireworksStageDataExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 232: range 0000000013BD3A94-0000000013BD3C9E
void __cdecl data::LanV2FireworksChallengeDataExcelConfig::LanV2FireworksChallengeDataExcelConfig(
        data::LanV2FireworksChallengeDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksChallengeDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->challenge_id, v1);
  }
  this->challenge_id = 0;
  std::string::basic_string(&this->title);
  std::string::basic_string(&this->icon);
  std::vector<unsigned int>::vector(&this->factor_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->init_fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_fire_element_value, v1);
  }
  this->init_fire_element_value = 0;
  v3 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->full_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->full_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->full_score, v3);
  }
  this->full_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_ability_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_ability_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_ability_score, v3);
  }
  this->unlock_ability_score = 0;
  v4 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_fireworks_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_fireworks_score >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_fireworks_score, v4);
  }
  this->unlock_fireworks_score = 0;
  std::vector<unsigned int>::vector(&this->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->add_stamina_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->add_stamina_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->add_stamina_value, v4);
  }
  this->add_stamina_value = 0;
};

// Line 232: range 0000000014186718-0000000014186B02
void __cdecl data::LanV2FireworksChallengeDataExcelConfig::LanV2FireworksChallengeDataExcelConfig(
        data::LanV2FireworksChallengeDataExcelConfig *const this,
        const data::LanV2FireworksChallengeDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t challenge_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_factor_id_list; // rsi
  uint32_t init_fire_element_value; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t full_score; // ecx
  char v10; // dl
  uint32_t unlock_ability_score; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t unlock_fireworks_score; // ecx
  char v15; // dl
  std::vector<unsigned int> *p_watcher_id_list; // rsi
  uint32_t add_stamina_value; // ecx
  char v18; // al
  const data::LanV2FireworksChallengeDataExcelConfig *v19; // [rsp+0h] [rbp-20h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2FireworksChallengeDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->challenge_id);
  }
  challenge_id = a2->challenge_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->challenge_id, a2);
  }
  this->challenge_id = challenge_id;
  std::string::basic_string(&this->title, &v19->title);
  std::string::basic_string(&this->icon, &v19->icon);
  p_factor_id_list = &v19->factor_id_list;
  std::vector<unsigned int>::vector(&this->factor_id_list, &v19->factor_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->init_fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->init_fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->init_fire_element_value);
  }
  init_fire_element_value = v19->init_fire_element_value;
  v7 = *(_BYTE *)(((unsigned __int64)&this->init_fire_element_value >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_factor_id_list) = v7 != 0;
    __asan_report_store4(&this->init_fire_element_value, p_factor_id_list);
  }
  this->init_fire_element_value = init_fire_element_value;
  v8 = (((_BYTE)v19 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->full_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->full_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->full_score);
  }
  full_score = v19->full_score;
  v10 = *(_BYTE *)(((unsigned __int64)&this->full_score >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->full_score, v8);
  }
  this->full_score = full_score;
  if ( *(_BYTE *)(((unsigned __int64)&v19->unlock_ability_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->unlock_ability_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->unlock_ability_score);
  }
  unlock_ability_score = v19->unlock_ability_score;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_ability_score >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v8) = v12 != 0;
    __asan_report_store4(&this->unlock_ability_score, v8);
  }
  this->unlock_ability_score = unlock_ability_score;
  v13 = (((_BYTE)v19 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->unlock_fireworks_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->unlock_fireworks_score >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->unlock_fireworks_score);
  }
  unlock_fireworks_score = v19->unlock_fireworks_score;
  v15 = *(_BYTE *)(((unsigned __int64)&this->unlock_fireworks_score >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->unlock_fireworks_score, v13);
  }
  this->unlock_fireworks_score = unlock_fireworks_score;
  p_watcher_id_list = &v19->watcher_id_list;
  std::vector<unsigned int>::vector(&this->watcher_id_list, &v19->watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v19->add_stamina_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->add_stamina_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->add_stamina_value);
  }
  add_stamina_value = v19->add_stamina_value;
  v18 = *(_BYTE *)(((unsigned __int64)&this->add_stamina_value >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(p_watcher_id_list) = v18 != 0;
    __asan_report_store4(&this->add_stamina_value, p_watcher_id_list);
  }
  this->add_stamina_value = add_stamina_value;
};

// Line 235: range 00000000142A5548-00000000142A55C9
void __cdecl data::LanV2FireworksChallengeDataExcelConfig::~LanV2FireworksChallengeDataExcelConfig(
        data::LanV2FireworksChallengeDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksChallengeDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksChallengeDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->watcher_id_list);
  std::vector<unsigned int>::~vector(&this->factor_id_list);
  std::string::~string(&this->icon);
  std::string::~string(&this->title);
};

// Line 235: range 00000000142A55CA-00000000142A55F4
void __cdecl data::LanV2FireworksChallengeDataExcelConfig::~LanV2FireworksChallengeDataExcelConfig(
        data::LanV2FireworksChallengeDataExcelConfig *const this)
{
  data::LanV2FireworksChallengeDataExcelConfig::~LanV2FireworksChallengeDataExcelConfig(this);
  operator delete(this, 0x98uLL);
};

// Line 255: range 0000000013BD3CA0-0000000013BD3DC3
void __cdecl data::LanV2FireworksFactorDataExcelConfig::LanV2FireworksFactorDataExcelConfig(
        data::LanV2FireworksFactorDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksFactorDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksFactorDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_id, v1);
  }
  this->factor_id = 0;
  std::vector<unsigned int>::vector(&this->perfect_range);
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_length, v1);
  }
  this->factor_length = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->type, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->type = FIREWORKS_REFORM_PARAM_NONE_0;
  std::vector<unsigned int>::vector(&this->color_range);
};

// Line 255: range 0000000014186C44-0000000014186E55
void __cdecl data::LanV2FireworksFactorDataExcelConfig::LanV2FireworksFactorDataExcelConfig(
        data::LanV2FireworksFactorDataExcelConfig *const this,
        const data::LanV2FireworksFactorDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t factor_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_perfect_range; // rsi
  uint32_t factor_length; // ecx
  char v7; // al
  __int64 v8; // rsi
  data::FireworksReformParamType type; // ecx
  char v10; // dl
  const data::LanV2FireworksFactorDataExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksFactorDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2FireworksFactorDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->factor_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->factor_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->factor_id);
  }
  factor_id = a2->factor_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->factor_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->factor_id, a2);
  }
  this->factor_id = factor_id;
  p_perfect_range = &v11->perfect_range;
  std::vector<unsigned int>::vector(&this->perfect_range, &v11->perfect_range);
  if ( *(_BYTE *)(((unsigned __int64)&v11->factor_length >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->factor_length >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->factor_length);
  }
  factor_length = v11->factor_length;
  v7 = *(_BYTE *)(((unsigned __int64)&this->factor_length >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_perfect_range) = v7 != 0;
    __asan_report_store4(&this->factor_length, p_perfect_range);
  }
  this->factor_length = factor_length;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->type);
  }
  type = v11->type;
  v10 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->type, v8);
  }
  this->type = type;
  std::vector<unsigned int>::vector(&this->color_range, &v11->color_range);
};

// Line 258: range 00000000142A551C-00000000142A5546
void __cdecl data::LanV2FireworksFactorDataExcelConfig::~LanV2FireworksFactorDataExcelConfig(
        data::LanV2FireworksFactorDataExcelConfig *const this)
{
  data::LanV2FireworksFactorDataExcelConfig::~LanV2FireworksFactorDataExcelConfig(this);
  operator delete(this, 0x48uLL);
};

// Line 258: range 00000000142A54BA-00000000142A551B
void __cdecl data::LanV2FireworksFactorDataExcelConfig::~LanV2FireworksFactorDataExcelConfig(
        data::LanV2FireworksFactorDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksFactorDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksFactorDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->color_range);
  std::vector<unsigned int>::~vector(&this->perfect_range);
};

// Line 273: range 0000000013BD3DC4-0000000013BD4025
void __cdecl data::LanV2FireworksSkillDataExcelConfig::LanV2FireworksSkillDataExcelConfig(
        data::LanV2FireworksSkillDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksSkillDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksSkillDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->skill_id, v1);
  }
  this->skill_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->skill_type, v3);
  }
  this->skill_type = FIREWORKS_REFORM_SKILL_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->stamina_value_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stamina_value_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stamina_value_cost, v3);
  }
  this->stamina_value_cost = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unlock_challenge_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->unlock_challenge_id, v4);
  }
  this->unlock_challenge_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delta_fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delta_fire_element_value, v4);
  }
  this->delta_fire_element_value = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->lucky_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lucky_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->lucky_prob, v5);
  }
  this->lucky_prob = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_add_value_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->factor_add_value_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->factor_add_value_min, v5);
  }
  this->factor_add_value_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->factor_add_value_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->factor_add_value_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->factor_add_value_max, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->factor_add_value_max = 0;
  std::vector<unsigned int>::vector(&this->effect_params);
};

// Line 273: range 0000000014186F96-00000000141873DE
void __cdecl data::LanV2FireworksSkillDataExcelConfig::LanV2FireworksSkillDataExcelConfig(
        data::LanV2FireworksSkillDataExcelConfig *const this,
        const data::LanV2FireworksSkillDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t skill_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::FireworksReformSkillType skill_type; // ecx
  char v7; // dl
  uint32_t stamina_value_cost; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t unlock_challenge_id; // ecx
  char v12; // dl
  int32_t delta_fire_element_value; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t lucky_prob; // ecx
  char v17; // dl
  uint32_t factor_add_value_min; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t factor_add_value_max; // ecx
  char v22; // dl
  const data::LanV2FireworksSkillDataExcelConfig *v23; // [rsp+0h] [rbp-10h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksSkillDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2FireworksSkillDataExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->skill_id);
  }
  skill_id = a2->skill_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->skill_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->skill_id, a2);
  }
  this->skill_id = skill_id;
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->skill_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->skill_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->skill_type);
  }
  skill_type = v23->skill_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->skill_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->skill_type, v5);
  }
  this->skill_type = skill_type;
  if ( *(_BYTE *)(((unsigned __int64)&v23->stamina_value_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->stamina_value_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->stamina_value_cost);
  }
  stamina_value_cost = v23->stamina_value_cost;
  v9 = *(_BYTE *)(((unsigned __int64)&this->stamina_value_cost >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->stamina_value_cost, v5);
  }
  this->stamina_value_cost = stamina_value_cost;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->unlock_challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->unlock_challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->unlock_challenge_id);
  }
  unlock_challenge_id = v23->unlock_challenge_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->unlock_challenge_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->unlock_challenge_id, v10);
  }
  this->unlock_challenge_id = unlock_challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->delta_fire_element_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->delta_fire_element_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->delta_fire_element_value);
  }
  delta_fire_element_value = v23->delta_fire_element_value;
  v14 = *(_BYTE *)(((unsigned __int64)&this->delta_fire_element_value >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->delta_fire_element_value, v10);
  }
  this->delta_fire_element_value = delta_fire_element_value;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->lucky_prob >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->lucky_prob >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->lucky_prob);
  }
  lucky_prob = v23->lucky_prob;
  v17 = *(_BYTE *)(((unsigned __int64)&this->lucky_prob >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->lucky_prob, v15);
  }
  this->lucky_prob = lucky_prob;
  if ( *(_BYTE *)(((unsigned __int64)&v23->factor_add_value_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->factor_add_value_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->factor_add_value_min);
  }
  factor_add_value_min = v23->factor_add_value_min;
  v19 = *(_BYTE *)(((unsigned __int64)&this->factor_add_value_min >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->factor_add_value_min, v15);
  }
  this->factor_add_value_min = factor_add_value_min;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->factor_add_value_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->factor_add_value_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->factor_add_value_max);
  }
  factor_add_value_max = v23->factor_add_value_max;
  v22 = *(_BYTE *)(((unsigned __int64)&this->factor_add_value_max >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->factor_add_value_max, v20);
  }
  this->factor_add_value_max = factor_add_value_max;
  std::vector<unsigned int>::vector(&this->effect_params, &v23->effect_params);
};

// Line 276: range 00000000142A543C-00000000142A548D
void __cdecl data::LanV2FireworksSkillDataExcelConfig::~LanV2FireworksSkillDataExcelConfig(
        data::LanV2FireworksSkillDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2FireworksSkillDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2FireworksSkillDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->effect_params);
};

// Line 276: range 00000000142A548E-00000000142A54B8
void __cdecl data::LanV2FireworksSkillDataExcelConfig::~LanV2FireworksSkillDataExcelConfig(
        data::LanV2FireworksSkillDataExcelConfig *const this)
{
  data::LanV2FireworksSkillDataExcelConfig::~LanV2FireworksSkillDataExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 295: range 0000000013BD4026-0000000013BD426E
void __cdecl data::LanV2OverAllDataExcelConfig::LanV2OverAllDataExcelConfig(
        data::LanV2OverAllDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::LanV2OverAllDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2OverAllDataExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_dungeon_id, v3);
  }
  this->boss_dungeon_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->boss_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->boss_reward_id, v4);
  }
  this->boss_reward_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->boss_start_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->boss_start_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->boss_start_day, v4);
  }
  this->boss_start_day = 0;
  std::vector<unsigned int>::vector(&this->boss_watcher_id_list);
  std::vector<unsigned int>::vector(&this->boss_exhibition_id_list);
  std::vector<unsigned int>::vector(&this->clothes_watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->clothes_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clothes_reward_id, v4);
  }
  this->clothes_reward_id = 0;
  std::vector<unsigned int>::vector(&this->boss_card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_play_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_play_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_play_duration, v4);
  }
  this->activity_play_duration = 0;
};

// Line 295: range 0000000014187520-000000001418797F
void __cdecl data::LanV2OverAllDataExcelConfig::LanV2OverAllDataExcelConfig(
        data::LanV2OverAllDataExcelConfig *const this,
        const data::LanV2OverAllDataExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t activity_id; // ecx
  char v7; // dl
  uint32_t boss_dungeon_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t boss_reward_id; // ecx
  char v12; // dl
  uint32_t boss_start_day; // ecx
  char v14; // al
  std::vector<unsigned int> *p_clothes_watcher_id_list; // rsi
  uint32_t clothes_reward_id; // ecx
  char v17; // al
  std::vector<unsigned int> *p_boss_card_id_list; // rsi
  uint32_t activity_play_duration; // ecx
  char v20; // al
  const data::LanV2OverAllDataExcelConfig *v21; // [rsp+0h] [rbp-20h]

  v21 = a2;
  v2 = (int (**)(...))(&`vtable for'data::LanV2OverAllDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_LanV2OverAllDataExcelConfig = v2;
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
  v5 = (((_BYTE)v21 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->activity_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->activity_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->activity_id);
  }
  activity_id = v21->activity_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->activity_id, v5);
  }
  this->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->boss_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->boss_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->boss_dungeon_id);
  }
  boss_dungeon_id = v21->boss_dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->boss_dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->boss_dungeon_id, v5);
  }
  this->boss_dungeon_id = boss_dungeon_id;
  v10 = (((_BYTE)v21 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v21->boss_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v21 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v21->boss_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v21->boss_reward_id);
  }
  boss_reward_id = v21->boss_reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->boss_reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->boss_reward_id, v10);
  }
  this->boss_reward_id = boss_reward_id;
  if ( *(_BYTE *)(((unsigned __int64)&v21->boss_start_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->boss_start_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->boss_start_day);
  }
  boss_start_day = v21->boss_start_day;
  v14 = *(_BYTE *)(((unsigned __int64)&this->boss_start_day >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->boss_start_day, v10);
  }
  this->boss_start_day = boss_start_day;
  std::vector<unsigned int>::vector(&this->boss_watcher_id_list, &v21->boss_watcher_id_list);
  std::vector<unsigned int>::vector(&this->boss_exhibition_id_list, &v21->boss_exhibition_id_list);
  p_clothes_watcher_id_list = &v21->clothes_watcher_id_list;
  std::vector<unsigned int>::vector(&this->clothes_watcher_id_list, &v21->clothes_watcher_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->clothes_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->clothes_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->clothes_reward_id);
  }
  clothes_reward_id = v21->clothes_reward_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->clothes_reward_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_clothes_watcher_id_list) = v17 != 0;
    __asan_report_store4(&this->clothes_reward_id, p_clothes_watcher_id_list);
  }
  this->clothes_reward_id = clothes_reward_id;
  p_boss_card_id_list = &v21->boss_card_id_list;
  std::vector<unsigned int>::vector(&this->boss_card_id_list, &v21->boss_card_id_list);
  if ( *(_BYTE *)(((unsigned __int64)&v21->activity_play_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->activity_play_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->activity_play_duration);
  }
  activity_play_duration = v21->activity_play_duration;
  v20 = *(_BYTE *)(((unsigned __int64)&this->activity_play_duration >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(p_boss_card_id_list) = v20 != 0;
    __asan_report_store4(&this->activity_play_duration, p_boss_card_id_list);
  }
  this->activity_play_duration = activity_play_duration;
};

// Line 298: range 00000000142A538E-00000000142A540F
void __cdecl data::LanV2OverAllDataExcelConfig::~LanV2OverAllDataExcelConfig(
        data::LanV2OverAllDataExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::LanV2OverAllDataExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_LanV2OverAllDataExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->boss_card_id_list);
  std::vector<unsigned int>::~vector(&this->clothes_watcher_id_list);
  std::vector<unsigned int>::~vector(&this->boss_exhibition_id_list);
  std::vector<unsigned int>::~vector(&this->boss_watcher_id_list);
};

// Line 298: range 00000000142A5410-00000000142A543A
void __cdecl data::LanV2OverAllDataExcelConfig::~LanV2OverAllDataExcelConfig(
        data::LanV2OverAllDataExcelConfig *const this)
{
  data::LanV2OverAllDataExcelConfig::~LanV2OverAllDataExcelConfig(this);
  operator delete(this, 0x90uLL);
};

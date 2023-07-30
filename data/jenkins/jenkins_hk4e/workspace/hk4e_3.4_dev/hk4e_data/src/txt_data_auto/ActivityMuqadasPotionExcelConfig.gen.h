// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityMuqadasPotionExcelConfig.gen.h

// Line 17: range 00000000133C48B8-00000000133C4BEB
void __cdecl data::ActivityMuqadasPotionExcelConfig::ActivityMuqadasPotionExcelConfig(
        data::ActivityMuqadasPotionExcelConfig *const this,
        const data::ActivityMuqadasPotionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t activity_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t level_time_limit; // ecx
  char v7; // dl
  uint32_t energy_limit; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t skill_num_limit; // ecx
  char v12; // dl
  uint32_t init_skill_num; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t once_capture_limit; // ecx
  char v17; // dl
  const data::ActivityMuqadasPotionExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMuqadasPotionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMuqadasPotionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->activity_id);
  }
  activity_id = a2->activity_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->activity_id, a2);
  }
  this->activity_id = activity_id;
  v5 = (((_BYTE)v18 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->level_time_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->level_time_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->level_time_limit);
  }
  level_time_limit = v18->level_time_limit;
  v7 = *(_BYTE *)(((unsigned __int64)&this->level_time_limit >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->level_time_limit, v5);
  }
  this->level_time_limit = level_time_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v18->energy_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->energy_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->energy_limit);
  }
  energy_limit = v18->energy_limit;
  v9 = *(_BYTE *)(((unsigned __int64)&this->energy_limit >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->energy_limit, v5);
  }
  this->energy_limit = energy_limit;
  v10 = (((_BYTE)v18 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->skill_num_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->skill_num_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->skill_num_limit);
  }
  skill_num_limit = v18->skill_num_limit;
  v12 = *(_BYTE *)(((unsigned __int64)&this->skill_num_limit >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->skill_num_limit, v10);
  }
  this->skill_num_limit = skill_num_limit;
  if ( *(_BYTE *)(((unsigned __int64)&v18->init_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->init_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->init_skill_num);
  }
  init_skill_num = v18->init_skill_num;
  v14 = *(_BYTE *)(((unsigned __int64)&this->init_skill_num >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->init_skill_num, v10);
  }
  this->init_skill_num = init_skill_num;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->once_capture_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->once_capture_limit >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->once_capture_limit);
  }
  once_capture_limit = v18->once_capture_limit;
  v17 = *(_BYTE *)(((unsigned __int64)&this->once_capture_limit >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->once_capture_limit, v15);
  }
  this->once_capture_limit = once_capture_limit;
};

// Line 20: range 0000000013421B8C-0000000013421BCD
void __cdecl data::ActivityMuqadasPotionExcelConfig::~ActivityMuqadasPotionExcelConfig(
        data::ActivityMuqadasPotionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMuqadasPotionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMuqadasPotionExcelConfig = v2;
};

// Line 20: range 0000000013421BCE-0000000013421BF8
void __cdecl data::ActivityMuqadasPotionExcelConfig::~ActivityMuqadasPotionExcelConfig(
        data::ActivityMuqadasPotionExcelConfig *const this)
{
  data::ActivityMuqadasPotionExcelConfig::~ActivityMuqadasPotionExcelConfig(this);
  operator delete(this, 0x20uLL);
};

// Line 36: range 0000000012ED1640-0000000012ED1799
void __cdecl data::ActivityMuqadasPotionLevelExcelConfig::ActivityMuqadasPotionLevelExcelConfig(
        data::ActivityMuqadasPotionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityMuqadasPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMuqadasPotionLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day_index, v3);
  }
  this->open_day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
};

// Line 36: range 00000000133C4D2C-00000000133C4F80
void __cdecl data::ActivityMuqadasPotionLevelExcelConfig::ActivityMuqadasPotionLevelExcelConfig(
        data::ActivityMuqadasPotionLevelExcelConfig *const this,
        const data::ActivityMuqadasPotionLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t open_day_index; // ecx
  char v7; // dl
  uint32_t dungeon_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  const data::ActivityMuqadasPotionLevelExcelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityMuqadasPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityMuqadasPotionLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->open_day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->open_day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->open_day_index);
  }
  open_day_index = v13->open_day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->open_day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->open_day_index, v5);
  }
  this->open_day_index = open_day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->dungeon_id);
  }
  dungeon_id = v13->dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gallery_id);
  }
  gallery_id = v13->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v13->trial_avatar_list);
};

// Line 39: range 0000000013421B0E-0000000013421B5F
void __cdecl data::ActivityMuqadasPotionLevelExcelConfig::~ActivityMuqadasPotionLevelExcelConfig(
        data::ActivityMuqadasPotionLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityMuqadasPotionLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityMuqadasPotionLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
};

// Line 39: range 0000000013421B60-0000000013421B8A
void __cdecl data::ActivityMuqadasPotionLevelExcelConfig::~ActivityMuqadasPotionLevelExcelConfig(
        data::ActivityMuqadasPotionLevelExcelConfig *const this)
{
  data::ActivityMuqadasPotionLevelExcelConfig::~ActivityMuqadasPotionLevelExcelConfig(this);
  operator delete(this, 0x30uLL);
};

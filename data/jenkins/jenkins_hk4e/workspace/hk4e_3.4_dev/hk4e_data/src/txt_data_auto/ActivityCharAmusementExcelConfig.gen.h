// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityCharAmusementExcelConfig.gen.h

// Line 65: range 0000000012EB7A70-0000000012EB7B83
void __cdecl data::ActivityCharAmusementOverallExcelConfig::ActivityCharAmusementOverallExcelConfig(
        data::ActivityCharAmusementOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  std::vector<unsigned int>::vector(&this->level_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v1);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->random_level_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->random_level_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->random_level_count, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->random_level_count = 0;
};

// Line 65: range 0000000013396036-0000000013396205
void __cdecl data::ActivityCharAmusementOverallExcelConfig::ActivityCharAmusementOverallExcelConfig(
        data::ActivityCharAmusementOverallExcelConfig *const this,
        const data::ActivityCharAmusementOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_level_list; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t random_level_count; // ecx
  char v10; // dl
  const data::ActivityCharAmusementOverallExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCharAmusementOverallExcelConfig = v2;
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
  p_level_list = &v11->level_list;
  std::vector<unsigned int>::vector(&this->level_list, &v11->level_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->dungeon_id);
  }
  dungeon_id = v11->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_level_list) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, p_level_list);
  }
  this->dungeon_id = dungeon_id;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->random_level_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->random_level_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->random_level_count);
  }
  random_level_count = v11->random_level_count;
  v10 = *(_BYTE *)(((unsigned __int64)&this->random_level_count >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->random_level_count, v8);
  }
  this->random_level_count = random_level_count;
};

// Line 68: range 0000000013421632-0000000013421683
void __cdecl data::ActivityCharAmusementOverallExcelConfig::~ActivityCharAmusementOverallExcelConfig(
        data::ActivityCharAmusementOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_list);
};

// Line 68: range 0000000013421684-00000000134216AE
void __cdecl data::ActivityCharAmusementOverallExcelConfig::~ActivityCharAmusementOverallExcelConfig(
        data::ActivityCharAmusementOverallExcelConfig *const this)
{
  data::ActivityCharAmusementOverallExcelConfig::~ActivityCharAmusementOverallExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 82: range 0000000012EB7B84-0000000012EB7C97
void __cdecl data::ActivityCharAmusementStageExcelConfig::ActivityCharAmusementStageExcelConfig(
        data::ActivityCharAmusementStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_id, v1);
  }
  this->stage_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stage_type, v3);
  }
  this->stage_type = STAGE_TYPE_NONE_0;
  std::vector<unsigned int>::vector(&this->level_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
};

// Line 82: range 0000000013396346-0000000013396515
void __cdecl data::ActivityCharAmusementStageExcelConfig::ActivityCharAmusementStageExcelConfig(
        data::ActivityCharAmusementStageExcelConfig *const this,
        const data::ActivityCharAmusementStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t stage_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::ActivityCharAmusementStageType stage_type; // ecx
  char v7; // dl
  std::vector<unsigned int> *p_level_list; // rsi
  uint32_t day_index; // ecx
  char v10; // al
  const data::ActivityCharAmusementStageExcelConfig *v11; // [rsp+0h] [rbp-10h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCharAmusementStageExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v11->stage_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->stage_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->stage_type);
  }
  stage_type = v11->stage_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_type, v5);
  }
  this->stage_type = stage_type;
  p_level_list = &v11->level_list;
  std::vector<unsigned int>::vector(&this->level_list, &v11->level_list);
  if ( *(_BYTE *)(((unsigned __int64)&v11->day_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->day_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->day_index);
  }
  day_index = v11->day_index;
  v10 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(p_level_list) = v10 != 0;
    __asan_report_store4(&this->day_index, p_level_list);
  }
  this->day_index = day_index;
};

// Line 85: range 00000000134215B4-0000000013421605
void __cdecl data::ActivityCharAmusementStageExcelConfig::~ActivityCharAmusementStageExcelConfig(
        data::ActivityCharAmusementStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->level_list);
};

// Line 85: range 0000000013421606-0000000013421630
void __cdecl data::ActivityCharAmusementStageExcelConfig::~ActivityCharAmusementStageExcelConfig(
        data::ActivityCharAmusementStageExcelConfig *const this)
{
  data::ActivityCharAmusementStageExcelConfig::~ActivityCharAmusementStageExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 99: range 0000000012EB7C98-0000000012EB7E75
void __cdecl data::ActivityCharAmusementLevelExcelConfig::ActivityCharAmusementLevelExcelConfig(
        data::ActivityCharAmusementLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_id, v1);
  }
  this->level_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->weight, v3);
  }
  this->weight = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->level_type, v3);
  }
  this->level_type = LEVEL_TYPE_NONE;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, v4);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->single_target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->single_target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->single_target, v4);
  }
  this->single_target = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mp_target, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->mp_target = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_list);
};

// Line 99: range 0000000013382FBC-000000001338330A
void __cdecl data::ActivityCharAmusementLevelExcelConfig::ActivityCharAmusementLevelExcelConfig(
        data::ActivityCharAmusementLevelExcelConfig *const this,
        const data::ActivityCharAmusementLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t level_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t weight; // ecx
  char v7; // dl
  data::ActivityCharAmusementLevelType level_type; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  uint32_t single_target; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t mp_target; // ecx
  char v17; // dl
  const data::ActivityCharAmusementLevelExcelConfig *v18; // [rsp+0h] [rbp-10h]

  v18 = a2;
  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ActivityCharAmusementLevelExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->weight >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->weight);
  }
  weight = v18->weight;
  v7 = *(_BYTE *)(((unsigned __int64)&this->weight >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->weight, v5);
  }
  this->weight = weight;
  if ( *(_BYTE *)(((unsigned __int64)&v18->level_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->level_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->level_type);
  }
  level_type = v18->level_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->level_type, v5);
  }
  this->level_type = level_type;
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
  if ( *(_BYTE *)(((unsigned __int64)&v18->single_target >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->single_target >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->single_target);
  }
  single_target = v18->single_target;
  v14 = *(_BYTE *)(((unsigned __int64)&this->single_target >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->single_target, v10);
  }
  this->single_target = single_target;
  v15 = (((_BYTE)v18 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v18->mp_target >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->mp_target >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->mp_target);
  }
  mp_target = v18->mp_target;
  v17 = *(_BYTE *)(((unsigned __int64)&this->mp_target >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->mp_target, v15);
  }
  this->mp_target = mp_target;
  std::vector<unsigned int>::vector(&this->trial_avatar_list, &v18->trial_avatar_list);
};

// Line 102: range 0000000013421536-0000000013421587
void __cdecl data::ActivityCharAmusementLevelExcelConfig::~ActivityCharAmusementLevelExcelConfig(
        data::ActivityCharAmusementLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ActivityCharAmusementLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ActivityCharAmusementLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->trial_avatar_list);
};

// Line 102: range 0000000013421588-00000000134215B2
void __cdecl data::ActivityCharAmusementLevelExcelConfig::~ActivityCharAmusementLevelExcelConfig(
        data::ActivityCharAmusementLevelExcelConfig *const this)
{
  data::ActivityCharAmusementLevelExcelConfig::~ActivityCharAmusementLevelExcelConfig(this);
  operator delete(this, 0x38uLL);
};

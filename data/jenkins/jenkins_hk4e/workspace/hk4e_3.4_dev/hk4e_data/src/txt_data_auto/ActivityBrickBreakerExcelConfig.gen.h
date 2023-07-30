// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityBrickBreakerExcelConfig.gen.h

// Line 72: range 0000000012EB4B1C-0000000012EB4C4F
void __cdecl data::BrickBreakerStageExcelConfig::BrickBreakerStageExcelConfig(
        data::BrickBreakerStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerStageExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::vector<unsigned int>::vector(&this->world_level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_level, v1);
  }
  this->dungeon_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_day, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->open_day = 0;
  std::vector<std::vector<unsigned int>>::vector(&this->world_watcher);
  std::vector<unsigned int>::vector(&this->dungeon_watcher);
};

// Line 72: range 000000001338F174-000000001338F3B5
void __cdecl data::BrickBreakerStageExcelConfig::BrickBreakerStageExcelConfig(
        data::BrickBreakerStageExcelConfig *const this,
        const data::BrickBreakerStageExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  std::vector<unsigned int> *p_world_level_id; // rsi
  uint32_t dungeon_level; // ecx
  char v7; // al
  __int64 v8; // rsi
  uint32_t open_day; // ecx
  char v10; // dl
  const data::BrickBreakerStageExcelConfig *v11; // [rsp+0h] [rbp-20h]

  v11 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerStageExcelConfig = v2;
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
  p_world_level_id = &v11->world_level_id;
  std::vector<unsigned int>::vector(&this->world_level_id, &v11->world_level_id);
  if ( *(_BYTE *)(((unsigned __int64)&v11->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v11->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v11->dungeon_level);
  }
  dungeon_level = v11->dungeon_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_world_level_id) = v7 != 0;
    __asan_report_store4(&this->dungeon_level, p_world_level_id);
  }
  this->dungeon_level = dungeon_level;
  v8 = (((_BYTE)v11 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->open_day >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v11->open_day);
  }
  open_day = v11->open_day;
  v10 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->open_day, v8);
  }
  this->open_day = open_day;
  std::vector<std::vector<unsigned int>>::vector(&this->world_watcher, &v11->world_watcher);
  std::vector<unsigned int>::vector(&this->dungeon_watcher, &v11->dungeon_watcher);
};

// Line 75: range 0000000013421280-00000000134212F1
void __cdecl data::BrickBreakerStageExcelConfig::~BrickBreakerStageExcelConfig(
        data::BrickBreakerStageExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerStageExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerStageExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->dungeon_watcher);
  std::vector<std::vector<unsigned int>>::~vector(&this->world_watcher);
  std::vector<unsigned int>::~vector(&this->world_level_id);
};

// Line 75: range 00000000134212F2-000000001342131C
void __cdecl data::BrickBreakerStageExcelConfig::~BrickBreakerStageExcelConfig(
        data::BrickBreakerStageExcelConfig *const this)
{
  data::BrickBreakerStageExcelConfig::~BrickBreakerStageExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 91: range 0000000012EB4C50-0000000012EB4F5C
void __cdecl data::BrickBreakerWorldLevelExcelConfig::BrickBreakerWorldLevelExcelConfig(
        data::BrickBreakerWorldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerWorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerWorldLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->world_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->world_level_id, v3);
  }
  this->world_level_id = 0;
  if ( *(char *)(((unsigned __int64)&this->is_hard >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_hard, v3, &this->is_hard);
  this->is_hard = 0;
  v4 = ((_BYTE)this + 17) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_plot >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_plot >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_plot, v4, v5);
  this->is_plot = 0;
  v6 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_time, v6);
  }
  this->limit_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_ball, v6);
  }
  this->limit_ball = 0;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_skill_count, v7);
  }
  this->max_skill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->scene_id, v7);
  }
  this->scene_id = 0;
  v8 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v8);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->transport_point_list);
  std::vector<unsigned int>::vector(&this->duration_list);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v8);
  }
  this->gallery_id = 0;
  std::vector<data::ElementType>::vector(&this->ban_element_list);
  std::vector<unsigned int>::vector(&this->score_param_list);
};

// Line 91: range 000000001338F4F6-000000001338FAD6
void __cdecl data::BrickBreakerWorldLevelExcelConfig::BrickBreakerWorldLevelExcelConfig(
        data::BrickBreakerWorldLevelExcelConfig *const this,
        const data::BrickBreakerWorldLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t world_level_id; // ecx
  char v7; // dl
  bool is_hard; // cl
  char v9; // al
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool is_plot; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  uint32_t limit_time; // ecx
  char v17; // dl
  uint32_t limit_ball; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t max_skill_count; // ecx
  char v22; // dl
  uint32_t scene_id; // ecx
  char v24; // al
  __int64 v25; // rsi
  uint32_t group_id; // ecx
  char v27; // dl
  std::vector<unsigned int> *p_duration_list; // rsi
  uint32_t gallery_id; // ecx
  char v30; // al
  const data::BrickBreakerWorldLevelExcelConfig *v31; // [rsp+0h] [rbp-20h]

  v31 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerWorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerWorldLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v31 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->world_level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->world_level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->world_level_id);
  }
  world_level_id = v31->world_level_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->world_level_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->world_level_id, v5);
  this->world_level_id = world_level_id;
  if ( *(char *)(((unsigned __int64)&v31->is_hard >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v31->is_hard, v5, &v31->is_hard);
  is_hard = v31->is_hard;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_hard >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store1(&this->is_hard, v5, &this->is_hard);
  }
  this->is_hard = is_hard;
  v10 = ((_BYTE)v31 + 17) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v31->is_plot >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v31->is_plot >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v31->is_plot, v10, v11);
  is_plot = v31->is_plot;
  v13 = *(_BYTE *)(((unsigned __int64)&this->is_plot >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 17) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_plot, v10, v14);
  this->is_plot = is_plot;
  v15 = (((_BYTE)v31 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->limit_time);
  }
  limit_time = v31->limit_time;
  v17 = *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->limit_time, v15);
  }
  this->limit_time = limit_time;
  if ( *(_BYTE *)(((unsigned __int64)&v31->limit_ball >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->limit_ball >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->limit_ball);
  }
  limit_ball = v31->limit_ball;
  v19 = *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->limit_ball, v15);
  }
  this->limit_ball = limit_ball;
  v20 = (((_BYTE)v31 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->max_skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->max_skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->max_skill_count);
  }
  max_skill_count = v31->max_skill_count;
  v22 = *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->max_skill_count, v20);
  }
  this->max_skill_count = max_skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&v31->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->scene_id);
  }
  scene_id = v31->scene_id;
  v24 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v24 != 0 && v24 <= 3 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store4(&this->scene_id, v20);
  }
  this->scene_id = scene_id;
  v25 = (((_BYTE)v31 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v31->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v31 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v31->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v31->group_id);
  }
  group_id = v31->group_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v27 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->group_id, v25);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->transport_point_list, &v31->transport_point_list);
  p_duration_list = &v31->duration_list;
  std::vector<unsigned int>::vector(&this->duration_list, &v31->duration_list);
  if ( *(_BYTE *)(((unsigned __int64)&v31->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v31->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v31->gallery_id);
  }
  gallery_id = v31->gallery_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(p_duration_list) = v30 != 0;
    __asan_report_store4(&this->gallery_id, p_duration_list);
  }
  this->gallery_id = gallery_id;
  std::vector<data::ElementType>::vector(&this->ban_element_list, &v31->ban_element_list);
  std::vector<unsigned int>::vector(&this->score_param_list, &v31->score_param_list);
};

// Line 94: range 00000000134211D2-0000000013421253
void __cdecl data::BrickBreakerWorldLevelExcelConfig::~BrickBreakerWorldLevelExcelConfig(
        data::BrickBreakerWorldLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerWorldLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerWorldLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_param_list);
  std::vector<data::ElementType>::~vector(&this->ban_element_list);
  std::vector<unsigned int>::~vector(&this->duration_list);
  std::vector<unsigned int>::~vector(&this->transport_point_list);
};

// Line 94: range 0000000013421254-000000001342127E
void __cdecl data::BrickBreakerWorldLevelExcelConfig::~BrickBreakerWorldLevelExcelConfig(
        data::BrickBreakerWorldLevelExcelConfig *const this)
{
  data::BrickBreakerWorldLevelExcelConfig::~BrickBreakerWorldLevelExcelConfig(this);
  operator delete(this, 0x90uLL);
};

// Line 118: range 0000000012EB4F5E-0000000012EB51CF
void __cdecl data::BrickBreakerDungeonLevelExcelConfig::BrickBreakerDungeonLevelExcelConfig(
        data::BrickBreakerDungeonLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerDungeonLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerDungeonLevelExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->per_world_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->per_world_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->per_world_level_id, v3);
  }
  this->per_world_level_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_time, v4);
  }
  this->limit_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_ball, v4);
  }
  this->limit_ball = 0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_skill_count, v5);
  }
  this->max_skill_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v5);
  }
  this->gallery_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->group_id = 0;
  std::vector<data::ElementType>::vector(&this->ban_element_list);
  std::vector<unsigned int>::vector(&this->score_param_list);
};

// Line 118: range 000000001338FC18-00000000133900A2
void __cdecl data::BrickBreakerDungeonLevelExcelConfig::BrickBreakerDungeonLevelExcelConfig(
        data::BrickBreakerDungeonLevelExcelConfig *const this,
        const data::BrickBreakerDungeonLevelExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t dungeon_id; // ecx
  char v7; // dl
  uint32_t per_world_level_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t limit_time; // ecx
  char v12; // dl
  uint32_t limit_ball; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t max_skill_count; // ecx
  char v17; // dl
  uint32_t gallery_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t group_id; // ecx
  char v22; // dl
  const data::BrickBreakerDungeonLevelExcelConfig *v23; // [rsp+0h] [rbp-20h]

  v23 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerDungeonLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerDungeonLevelExcelConfig = v2;
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
  v5 = (((_BYTE)v23 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->dungeon_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->dungeon_id);
  }
  dungeon_id = v23->dungeon_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v23->per_world_level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->per_world_level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->per_world_level_id);
  }
  per_world_level_id = v23->per_world_level_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->per_world_level_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->per_world_level_id, v5);
  }
  this->per_world_level_id = per_world_level_id;
  v10 = (((_BYTE)v23 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->limit_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->limit_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->limit_time);
  }
  limit_time = v23->limit_time;
  v12 = *(_BYTE *)(((unsigned __int64)&this->limit_time >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->limit_time, v10);
  }
  this->limit_time = limit_time;
  if ( *(_BYTE *)(((unsigned __int64)&v23->limit_ball >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->limit_ball >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->limit_ball);
  }
  limit_ball = v23->limit_ball;
  v14 = *(_BYTE *)(((unsigned __int64)&this->limit_ball >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->limit_ball, v10);
  }
  this->limit_ball = limit_ball;
  v15 = (((_BYTE)v23 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->max_skill_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->max_skill_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->max_skill_count);
  }
  max_skill_count = v23->max_skill_count;
  v17 = *(_BYTE *)(((unsigned __int64)&this->max_skill_count >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->max_skill_count, v15);
  }
  this->max_skill_count = max_skill_count;
  if ( *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v23->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v23->gallery_id);
  }
  gallery_id = v23->gallery_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->gallery_id, v15);
  }
  this->gallery_id = gallery_id;
  v20 = (((_BYTE)v23 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v23 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v23->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v23->group_id);
  }
  group_id = v23->group_id;
  v22 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v22 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v22 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->group_id, v20);
  }
  this->group_id = group_id;
  std::vector<data::ElementType>::vector(&this->ban_element_list, &v23->ban_element_list);
  std::vector<unsigned int>::vector(&this->score_param_list, &v23->score_param_list);
};

// Line 121: range 00000000134211A6-00000000134211D0
void __cdecl data::BrickBreakerDungeonLevelExcelConfig::~BrickBreakerDungeonLevelExcelConfig(
        data::BrickBreakerDungeonLevelExcelConfig *const this)
{
  data::BrickBreakerDungeonLevelExcelConfig::~BrickBreakerDungeonLevelExcelConfig(this);
  operator delete(this, 0x58uLL);
};

// Line 121: range 0000000013421144-00000000134211A5
void __cdecl data::BrickBreakerDungeonLevelExcelConfig::~BrickBreakerDungeonLevelExcelConfig(
        data::BrickBreakerDungeonLevelExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerDungeonLevelExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerDungeonLevelExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->score_param_list);
  std::vector<data::ElementType>::~vector(&this->ban_element_list);
};

// Line 141: range 0000000012EB51D0-0000000012EB5367
void __cdecl data::BrickBreakerSkillExcelConfig::BrickBreakerSkillExcelConfig(
        data::BrickBreakerSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerSkillExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_level, v3);
  }
  this->max_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->advanced_skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->advanced_skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->advanced_skill_id, v3);
  }
  this->advanced_skill_id = 0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ability_group_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ability_group_index, v4);
  }
  this->ability_group_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->unlock_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->unlock_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->unlock_world_level, v4);
  }
  this->unlock_world_level = 0;
  std::vector<unsigned int>::vector(&this->upgrade_dungeon_level_list);
};

// Line 141: range 00000000133901E4-00000000133904AD
void __cdecl data::BrickBreakerSkillExcelConfig::BrickBreakerSkillExcelConfig(
        data::BrickBreakerSkillExcelConfig *const this,
        const data::BrickBreakerSkillExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t max_level; // ecx
  char v7; // dl
  uint32_t advanced_skill_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t ability_group_index; // ecx
  char v12; // dl
  uint32_t unlock_world_level; // ecx
  char v14; // al
  const data::BrickBreakerSkillExcelConfig *v15; // [rsp+0h] [rbp-10h]

  v15 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerSkillExcelConfig = v2;
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
  v5 = (((_BYTE)v15 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->max_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->max_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->max_level);
  }
  max_level = v15->max_level;
  v7 = *(_BYTE *)(((unsigned __int64)&this->max_level >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->max_level, v5);
  }
  this->max_level = max_level;
  if ( *(_BYTE *)(((unsigned __int64)&v15->advanced_skill_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->advanced_skill_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->advanced_skill_id);
  }
  advanced_skill_id = v15->advanced_skill_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->advanced_skill_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->advanced_skill_id, v5);
  }
  this->advanced_skill_id = advanced_skill_id;
  v10 = (((_BYTE)v15 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v15->ability_group_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v15 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->ability_group_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v15->ability_group_index);
  }
  ability_group_index = v15->ability_group_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->ability_group_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->ability_group_index, v10);
  }
  this->ability_group_index = ability_group_index;
  if ( *(_BYTE *)(((unsigned __int64)&v15->unlock_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v15->unlock_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v15->unlock_world_level);
  }
  unlock_world_level = v15->unlock_world_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->unlock_world_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->unlock_world_level, v10);
  }
  this->unlock_world_level = unlock_world_level;
  std::vector<unsigned int>::vector(&this->upgrade_dungeon_level_list, &v15->upgrade_dungeon_level_list);
};

// Line 144: range 0000000013421118-0000000013421142
void __cdecl data::BrickBreakerSkillExcelConfig::~BrickBreakerSkillExcelConfig(
        data::BrickBreakerSkillExcelConfig *const this)
{
  data::BrickBreakerSkillExcelConfig::~BrickBreakerSkillExcelConfig(this);
  operator delete(this, 0x38uLL);
};

// Line 144: range 00000000134210C6-0000000013421117
void __cdecl data::BrickBreakerSkillExcelConfig::~BrickBreakerSkillExcelConfig(
        data::BrickBreakerSkillExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerSkillExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerSkillExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->upgrade_dungeon_level_list);
};

// Line 160: range 00000000133905EE-00000000133906A8
void __cdecl data::BrickBreakerInfoExcelConfig::BrickBreakerInfoExcelConfig(
        data::BrickBreakerInfoExcelConfig *const this,
        const data::BrickBreakerInfoExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerInfoExcelConfig = v2;
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
};

// Line 163: range 000000001342109A-00000000134210C4
void __cdecl data::BrickBreakerInfoExcelConfig::~BrickBreakerInfoExcelConfig(
        data::BrickBreakerInfoExcelConfig *const this)
{
  data::BrickBreakerInfoExcelConfig::~BrickBreakerInfoExcelConfig(this);
  operator delete(this, 0x10uLL);
};

// Line 163: range 0000000013421058-0000000013421099
void __cdecl data::BrickBreakerInfoExcelConfig::~BrickBreakerInfoExcelConfig(
        data::BrickBreakerInfoExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerInfoExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerInfoExcelConfig = v2;
};

// Line 174: range 00000000133907EA-0000000013390B92
void __cdecl data::BrickBreakerQuestExcelConfig::BrickBreakerQuestExcelConfig(
        data::BrickBreakerQuestExcelConfig *const this,
        const data::BrickBreakerQuestExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t stage_id; // ecx
  char v7; // dl
  uint32_t open_day; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::BrickBreakerLevelType level_type; // ecx
  char v12; // dl
  uint32_t level_id; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t start_sub_quest_id; // ecx
  char v17; // dl
  uint32_t finish_sub_quest_id; // ecx
  char v19; // al
  const data::BrickBreakerQuestExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_BrickBreakerQuestExcelConfig = v2;
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
  v5 = (((_BYTE)v20 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->stage_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->stage_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->stage_id);
  }
  stage_id = v20->stage_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->stage_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->stage_id, v5);
  }
  this->stage_id = stage_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->open_day >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->open_day >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->open_day);
  }
  open_day = v20->open_day;
  v9 = *(_BYTE *)(((unsigned __int64)&this->open_day >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->open_day, v5);
  }
  this->open_day = open_day;
  v10 = (((_BYTE)v20 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->level_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->level_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->level_type);
  }
  level_type = v20->level_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->level_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->level_type, v10);
  }
  this->level_type = level_type;
  if ( *(_BYTE *)(((unsigned __int64)&v20->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->level_id);
  }
  level_id = v20->level_id;
  v14 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->level_id, v10);
  }
  this->level_id = level_id;
  v15 = (((_BYTE)v20 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->start_sub_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->start_sub_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->start_sub_quest_id);
  }
  start_sub_quest_id = v20->start_sub_quest_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->start_sub_quest_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v17 )
  {
    LOBYTE(v15) = v17 != 0;
    __asan_report_store4(&this->start_sub_quest_id, v15);
  }
  this->start_sub_quest_id = start_sub_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&v20->finish_sub_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->finish_sub_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->finish_sub_quest_id);
  }
  finish_sub_quest_id = v20->finish_sub_quest_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->finish_sub_quest_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store4(&this->finish_sub_quest_id, v15);
  }
  this->finish_sub_quest_id = finish_sub_quest_id;
};

// Line 177: range 000000001342102C-0000000013421056
void __cdecl data::BrickBreakerQuestExcelConfig::~BrickBreakerQuestExcelConfig(
        data::BrickBreakerQuestExcelConfig *const this)
{
  data::BrickBreakerQuestExcelConfig::~BrickBreakerQuestExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 177: range 0000000013420FEA-000000001342102B
void __cdecl data::BrickBreakerQuestExcelConfig::~BrickBreakerQuestExcelConfig(
        data::BrickBreakerQuestExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::BrickBreakerQuestExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_BrickBreakerQuestExcelConfig = v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/scene_script_config.h

// Line 34: range 000000000F78D9A4-000000000F78DA73
void __cdecl GroupReplaceableInfo::GroupReplaceableInfo(GroupReplaceableInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->version = 0;
  v3 = ((_BYTE)this + 8) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->new_bin_only >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->new_bin_only >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->new_bin_only, v3, v4);
  this->new_bin_only = 1;
};

// Line 48: range 000000000D3A0A4E-000000000D3A0A6C
void __cdecl PolygonGridConfig::~PolygonGridConfig(PolygonGridConfig *const this)
{
  std::shared_ptr<InteriorCheckablePolygon>::~shared_ptr(&this->polygon_ptr);
};

// Line 62: range 000000000F78DA74-000000000F78DB09
void __cdecl GroupBusinessInfo::GroupBusinessInfo(GroupBusinessInfo *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->type = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sub_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sub_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->sub_type = 0;
};

// Line 69: range 000000000F78DB0A-000000000F78E06D
void __cdecl GroupInfoScriptConfig::GroupInfoScriptConfig(GroupInfoScriptConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->group_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->block_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->block_id = 0;
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  v2 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->area_id, v2);
  }
  this->area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_id, v2);
  }
  this->refresh_id = 0;
  std::vector<GroupLifeConfig>::vector(&this->life_cycle_vec);
  if ( *(char *)(((unsigned __int64)&this->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dynamic_load, v2, &this->is_dynamic_load);
  this->is_dynamic_load = 0;
  std::set<unsigned int>::set(&this->weather_set);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id, v2);
  }
  this->activity_id = 0;
  std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::multimap(&this->cond_mmap);
  if ( *(char *)(((unsigned __int64)&this->is_unload_when_disconnect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_unload_when_disconnect, v2, &this->is_unload_when_disconnect);
  this->is_unload_when_disconnect = 0;
  v3 = (((_BYTE)this - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->load_strategy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->load_strategy >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->load_strategy, v3);
  }
  this->load_strategy = GROUP_LOAD_ALL;
  if ( *(char *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_across_block, v3, &this->is_across_block);
  this->is_across_block = 0;
  GroupReplaceableInfo::GroupReplaceableInfo(&this->replaceable_info);
  if ( *(char *)(((unsigned __int64)&this->is_ignore_world_level_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_ignore_world_level_revise, v3, &this->is_ignore_world_level_revise);
  this->is_ignore_world_level_revise = 0;
  GroupBusinessInfo::GroupBusinessInfo(&this->business_info);
  v4 = ((_BYTE)this - 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_force_unload_nodelay >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_force_unload_nodelay >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_force_unload_nodelay, v4, v5);
  this->is_force_unload_nodelay = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->client_silent_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->client_silent_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->client_silent_version, v4);
  }
  this->client_silent_version = 0;
  v6 = ((_BYTE)this - 44) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_force_silent_reload >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_force_silent_reload >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_force_silent_reload, v6, v7);
  this->is_force_silent_reload = 0;
  v8 = ((_BYTE)this - 43) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_force_clean_sub_entity, v8, v9);
  this->is_force_clean_sub_entity = 0;
  std::vector<unsigned int>::vector(&this->forbid_monster_die_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vision_type, v8);
  }
  this->vision_type = 1;
  v10 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_revise_level_grow_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->activity_revise_level_grow_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->activity_revise_level_grow_id, v10);
  }
  this->activity_revise_level_grow_id = 0;
  std::vector<unsigned int>::vector(&this->related_level_tag_series_vec);
  std::vector<unsigned int>::vector(&this->group_tag_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rely_start_world_level_limit_activity_id, v10);
  }
  this->rely_start_world_level_limit_activity_id = 0;
  v11 = ((_BYTE)this + 44) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_load_by_vision_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_load_by_vision_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_load_by_vision_type, v11, v12);
  this->is_load_by_vision_type = 0;
};

// Line 69: range 000000000F9B9ABC-000000000F9BA7F8
void __cdecl GroupInfoScriptConfig::GroupInfoScriptConfig(
        GroupInfoScriptConfig *const this,
        const GroupInfoScriptConfig *a2)
{
  uint32_t group_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t block_id; // ecx
  char v6; // dl
  __int64 v7; // rsi
  uint32_t area_id; // ecx
  char v9; // dl
  uint32_t refresh_id; // ecx
  char v11; // al
  std::vector<GroupLifeConfig> *p_life_cycle_vec; // rsi
  bool is_dynamic_load; // cl
  char v14; // al
  std::set<unsigned int> *p_weather_set; // rsi
  uint32_t activity_id; // ecx
  char v17; // al
  std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>> *p_cond_mmap; // rsi
  bool is_unload_when_disconnect; // cl
  char v20; // al
  __int64 v21; // rsi
  proto::GroupLoadStrategy load_strategy; // ecx
  char v23; // dl
  bool is_across_block; // cl
  char v25; // al
  char v26; // dl
  __int64 v27; // rsi
  bool is_ignore_world_level_revise; // cl
  char v29; // al
  __int64 v30; // rsi
  __int64 v31; // rdx
  bool is_force_unload_nodelay; // cl
  char v33; // dl
  __int64 v34; // rdx
  uint32_t client_silent_version; // ecx
  char v36; // al
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool is_force_silent_reload; // cl
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  bool is_force_clean_sub_entity; // cl
  char v45; // dl
  __int64 v46; // rdx
  std::vector<unsigned int> *p_forbid_monster_die_type_vec; // rsi
  uint32_t vision_type; // ecx
  char v49; // al
  __int64 v50; // rsi
  uint32_t activity_revise_level_grow_id; // ecx
  char v52; // dl
  std::vector<unsigned int> *p_group_tag_vec; // rsi
  uint32_t rely_start_world_level_limit_activity_id; // ecx
  char v55; // al
  __int64 v56; // rsi
  __int64 v57; // rdx
  bool is_load_by_vision_type; // cl
  char v59; // dl
  __int64 v60; // rdx
  const GroupInfoScriptConfig *v61; // [rsp+0h] [rbp-20h]

  v61 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  group_id = a2->group_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->group_id = group_id;
  v4 = (((_BYTE)v61 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->block_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->block_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->block_id);
  }
  block_id = v61->block_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->block_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->block_id, v4);
  }
  this->block_id = block_id;
  if ( *(char *)(((unsigned __int64)&this->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&this->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&v61->pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&v61->pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v61 + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&v61->pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v61->pos, 12LL);
  }
  this->pos = v61->pos;
  v7 = (((_BYTE)v61 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->area_id);
  }
  area_id = v61->area_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->area_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->area_id, v7);
  }
  this->area_id = area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v61->refresh_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->refresh_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->refresh_id);
  }
  refresh_id = v61->refresh_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->refresh_id >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store4(&this->refresh_id, v7);
  }
  this->refresh_id = refresh_id;
  p_life_cycle_vec = &v61->life_cycle_vec;
  std::vector<GroupLifeConfig>::vector(&this->life_cycle_vec, &v61->life_cycle_vec);
  if ( *(char *)(((unsigned __int64)&v61->is_dynamic_load >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v61->is_dynamic_load, p_life_cycle_vec, &v61->is_dynamic_load);
  is_dynamic_load = v61->is_dynamic_load;
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_dynamic_load >> 3) + 0x7FFF8000);
  if ( v14 < 0 )
  {
    LOBYTE(p_life_cycle_vec) = v14 != 0;
    __asan_report_store1(&this->is_dynamic_load, p_life_cycle_vec, &this->is_dynamic_load);
  }
  this->is_dynamic_load = is_dynamic_load;
  p_weather_set = &v61->weather_set;
  std::set<unsigned int>::set(&this->weather_set, &v61->weather_set);
  if ( *(_BYTE *)(((unsigned __int64)&v61->activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->activity_id);
  }
  activity_id = v61->activity_id;
  v17 = *(_BYTE *)(((unsigned __int64)&this->activity_id >> 3) + 0x7FFF8000);
  if ( v17 != 0 && v17 <= 3 )
  {
    LOBYTE(p_weather_set) = v17 != 0;
    __asan_report_store4(&this->activity_id, p_weather_set);
  }
  this->activity_id = activity_id;
  p_cond_mmap = &v61->cond_mmap;
  std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::multimap(&this->cond_mmap, &v61->cond_mmap);
  if ( *(char *)(((unsigned __int64)&v61->is_unload_when_disconnect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v61->is_unload_when_disconnect, p_cond_mmap, &v61->is_unload_when_disconnect);
  is_unload_when_disconnect = v61->is_unload_when_disconnect;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_unload_when_disconnect >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_cond_mmap) = v20 != 0;
    __asan_report_store1(&this->is_unload_when_disconnect, p_cond_mmap, &this->is_unload_when_disconnect);
  }
  this->is_unload_when_disconnect = is_unload_when_disconnect;
  v21 = (((_BYTE)v61 - 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->load_strategy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->load_strategy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->load_strategy);
  }
  load_strategy = v61->load_strategy;
  v23 = *(_BYTE *)(((unsigned __int64)&this->load_strategy >> 3) + 0x7FFF8000);
  LOBYTE(v21) = v23 != 0;
  if ( v23 != 0 && (char)((((_BYTE)this - 84) & 7) + 3) >= v23 )
    __asan_report_store4(&this->load_strategy, v21);
  this->load_strategy = load_strategy;
  if ( *(char *)(((unsigned __int64)&v61->is_across_block >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v61->is_across_block, v21, &v61->is_across_block);
  is_across_block = v61->is_across_block;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_across_block >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store1(&this->is_across_block, v21, &this->is_across_block);
  }
  this->is_across_block = is_across_block;
  if ( (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->replaceable_info >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->replaceable_info >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->replaceable_info.new_bin_only + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 65) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->replaceable_info.new_bin_only + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->replaceable_info, 12LL);
  }
  v26 = *(_BYTE *)(((unsigned __int64)(&v61->replaceable_info.new_bin_only + 3) >> 3) + 0x7FFF8000);
  v27 = v26 != 0;
  if ( ((((unsigned __int8)v61 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&v61->replaceable_info >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&v61->replaceable_info >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v27 & ((((unsigned __int8)v61 - 65) & 7) >= v26) )
  {
    v27 = 12LL;
    __asan_report_load_n(&v61->replaceable_info, 12LL);
  }
  this->replaceable_info = v61->replaceable_info;
  if ( *(char *)(((unsigned __int64)&v61->is_ignore_world_level_revise >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v61->is_ignore_world_level_revise, v27, &v61->is_ignore_world_level_revise);
  is_ignore_world_level_revise = v61->is_ignore_world_level_revise;
  v29 = *(_BYTE *)(((unsigned __int64)&this->is_ignore_world_level_revise >> 3) + 0x7FFF8000);
  if ( v29 < 0 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store1(&this->is_ignore_world_level_revise, v27, &this->is_ignore_world_level_revise);
  }
  this->is_ignore_world_level_revise = is_ignore_world_level_revise;
  if ( (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->business_info >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->business_info >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->business_info.sub_type + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)((((unsigned __int64)&this->business_info.sub_type + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->business_info, 8LL);
  }
  if ( (((unsigned __int8)v61 - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&v61->business_info >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v61->business_info >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v61->business_info.sub_type + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v61 - 53) & 7) >= *(_BYTE *)((((unsigned __int64)&v61->business_info.sub_type + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v61->business_info, 8LL);
  }
  this->business_info = v61->business_info;
  v30 = ((_BYTE)v61 - 52) & 7;
  v31 = (*(_BYTE *)(((unsigned __int64)&v61->is_force_unload_nodelay >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v30 >= *(_BYTE *)(((unsigned __int64)&v61->is_force_unload_nodelay >> 3) + 0x7FFF8000));
  if ( (_BYTE)v31 )
    __asan_report_load1(&v61->is_force_unload_nodelay, v30, v31);
  is_force_unload_nodelay = v61->is_force_unload_nodelay;
  v33 = *(_BYTE *)(((unsigned __int64)&this->is_force_unload_nodelay >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v33 != 0;
  v34 = (v33 != 0) & (unsigned __int8)((((unsigned __int8)this - 52) & 7) >= v33);
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->is_force_unload_nodelay, v30, v34);
  this->is_force_unload_nodelay = is_force_unload_nodelay;
  if ( *(_BYTE *)(((unsigned __int64)&v61->client_silent_version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->client_silent_version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->client_silent_version);
  }
  client_silent_version = v61->client_silent_version;
  v36 = *(_BYTE *)(((unsigned __int64)&this->client_silent_version >> 3) + 0x7FFF8000);
  if ( v36 != 0 && v36 <= 3 )
  {
    LOBYTE(v30) = v36 != 0;
    __asan_report_store4(&this->client_silent_version, v30);
  }
  this->client_silent_version = client_silent_version;
  v37 = ((_BYTE)v61 - 44) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&v61->is_force_silent_reload >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&v61->is_force_silent_reload >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&v61->is_force_silent_reload, v37, v38);
  is_force_silent_reload = v61->is_force_silent_reload;
  v40 = *(_BYTE *)(((unsigned __int64)&this->is_force_silent_reload >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this - 44) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->is_force_silent_reload, v37, v41);
  this->is_force_silent_reload = is_force_silent_reload;
  v42 = ((_BYTE)v61 - 43) & 7;
  v43 = (*(_BYTE *)(((unsigned __int64)&v61->is_force_clean_sub_entity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v42 >= *(_BYTE *)(((unsigned __int64)&v61->is_force_clean_sub_entity >> 3) + 0x7FFF8000));
  if ( (_BYTE)v43 )
    __asan_report_load1(&v61->is_force_clean_sub_entity, v42, v43);
  is_force_clean_sub_entity = v61->is_force_clean_sub_entity;
  v45 = *(_BYTE *)(((unsigned __int64)&this->is_force_clean_sub_entity >> 3) + 0x7FFF8000);
  LOBYTE(v42) = v45 != 0;
  v46 = (v45 != 0) & (unsigned __int8)((((unsigned __int8)this - 43) & 7) >= v45);
  if ( (_BYTE)v46 )
    __asan_report_store1(&this->is_force_clean_sub_entity, v42, v46);
  this->is_force_clean_sub_entity = is_force_clean_sub_entity;
  p_forbid_monster_die_type_vec = &v61->forbid_monster_die_type_vec;
  std::vector<unsigned int>::vector(&this->forbid_monster_die_type_vec, &v61->forbid_monster_die_type_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v61->vision_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->vision_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->vision_type);
  }
  vision_type = v61->vision_type;
  v49 = *(_BYTE *)(((unsigned __int64)&this->vision_type >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(p_forbid_monster_die_type_vec) = v49 != 0;
    __asan_report_store4(&this->vision_type, p_forbid_monster_die_type_vec);
  }
  this->vision_type = vision_type;
  v50 = (((_BYTE)v61 - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v61->activity_revise_level_grow_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v61 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v61->activity_revise_level_grow_id >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v61->activity_revise_level_grow_id);
  }
  activity_revise_level_grow_id = v61->activity_revise_level_grow_id;
  v52 = *(_BYTE *)(((unsigned __int64)&this->activity_revise_level_grow_id >> 3) + 0x7FFF8000);
  if ( v52 != 0 && (char)((((_BYTE)this - 12) & 7) + 3) >= v52 )
  {
    LOBYTE(v50) = v52 != 0;
    __asan_report_store4(&this->activity_revise_level_grow_id, v50);
  }
  this->activity_revise_level_grow_id = activity_revise_level_grow_id;
  std::vector<unsigned int>::vector(&this->related_level_tag_series_vec, &v61->related_level_tag_series_vec);
  p_group_tag_vec = &v61->group_tag_vec;
  std::vector<unsigned int>::vector(&this->group_tag_vec, &v61->group_tag_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v61->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v61->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v61->rely_start_world_level_limit_activity_id);
  }
  rely_start_world_level_limit_activity_id = v61->rely_start_world_level_limit_activity_id;
  v55 = *(_BYTE *)(((unsigned __int64)&this->rely_start_world_level_limit_activity_id >> 3) + 0x7FFF8000);
  if ( v55 != 0 && v55 <= 3 )
  {
    LOBYTE(p_group_tag_vec) = v55 != 0;
    __asan_report_store4(&this->rely_start_world_level_limit_activity_id, p_group_tag_vec);
  }
  this->rely_start_world_level_limit_activity_id = rely_start_world_level_limit_activity_id;
  v56 = ((_BYTE)v61 + 44) & 7;
  v57 = (*(_BYTE *)(((unsigned __int64)&v61->is_load_by_vision_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v56 >= *(_BYTE *)(((unsigned __int64)&v61->is_load_by_vision_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v57 )
    __asan_report_load1(&v61->is_load_by_vision_type, v56, v57);
  is_load_by_vision_type = v61->is_load_by_vision_type;
  v59 = *(_BYTE *)(((unsigned __int64)&this->is_load_by_vision_type >> 3) + 0x7FFF8000);
  LOBYTE(v56) = v59 != 0;
  v60 = (v59 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v59);
  if ( (_BYTE)v60 )
    __asan_report_store1(&this->is_load_by_vision_type, v56, v60);
  this->is_load_by_vision_type = is_load_by_vision_type;
};

// Line 69: range 000000000F78E06E-000000000F78E0E2
void __cdecl GroupInfoScriptConfig::~GroupInfoScriptConfig(GroupInfoScriptConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->group_tag_vec);
  std::vector<unsigned int>::~vector(&this->related_level_tag_series_vec);
  std::vector<unsigned int>::~vector(&this->forbid_monster_die_type_vec);
  std::multimap<unsigned int,std::pair<unsigned int,ActivityGroupType>>::~multimap(&this->cond_mmap);
  std::set<unsigned int>::~set(&this->weather_set);
  std::vector<GroupLifeConfig>::~vector(&this->life_cycle_vec);
};

// Line 101: range 000000000F9B9764-000000000F9B97BB
void __cdecl BlockScriptConfig::BlockScriptConfig(BlockScriptConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->block_id = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->group_set);
};

// Line 101: range 000000000F9FF0D0-000000000F9FF168
void __cdecl BlockScriptConfig::BlockScriptConfig(BlockScriptConfig *const this, const BlockScriptConfig *a2)
{
  uint32_t block_id; // ecx
  char v3; // al
  const BlockScriptConfig *v4; // [rsp+0h] [rbp-10h]

  v4 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  block_id = a2->block_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->block_id = block_id;
  std::unordered_set<unsigned int>::unordered_set(&this->group_set, &v4->group_set);
};

// Line 101: range 000000000F995CBA-000000000F995CD8
void __cdecl BlockScriptConfig::~BlockScriptConfig(BlockScriptConfig *const this)
{
  std::unordered_set<unsigned int>::~unordered_set(&this->group_set);
};

// Line 108: range 000000000F78D89C-000000000F78D8DE
void __cdecl DummyPointScriptConfig::DummyPointScriptConfig(DummyPointScriptConfig *const this)
{
  Vector3::Vector3(&this->pos, 0.0, 0.0, 0.0);
  Vector3::Vector3(&this->rot, 0.0, 0.0, 0.0);
};

// Line 118: range 000000000F8F45F6-000000000F8F478E
void __cdecl ClimateGridConfig::ClimateGridConfig(ClimateGridConfig *const this, ClimateGridConfig *a2)
{
  uint32_t climate_area_id; // ecx
  char v3; // al
  float min_height; // xmm0_4
  __int64 v5; // rsi
  float max_height; // xmm0_4
  ClimateGridConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  climate_area_id = a2->climate_area_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->climate_area_id = climate_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v7->min_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->min_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->min_height);
  }
  min_height = v7->min_height;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_height, v5);
  }
  this->min_height = min_height;
  if ( *(_BYTE *)(((unsigned __int64)&v7->max_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->max_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->max_height);
  }
  max_height = v7->max_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_height, v5);
  }
  this->max_height = max_height;
  std::shared_ptr<InteriorCheckablePolygon>::shared_ptr(&this->polygon_ptr, &v7->polygon_ptr);
};

// Line 118: range 000000000D3A0A06-000000000D3A0A24
void __cdecl ClimateGridConfig::~ClimateGridConfig(ClimateGridConfig *const this)
{
  std::shared_ptr<InteriorCheckablePolygon>::~shared_ptr(&this->polygon_ptr);
};

// Line 127: range 000000000F8F4EFC-000000000F8F5094
void __cdecl PolygonGridConfig::PolygonGridConfig(PolygonGridConfig *const this, PolygonGridConfig *a2)
{
  uint32_t polygon_id; // ecx
  char v3; // al
  float min_height; // xmm0_4
  __int64 v5; // rsi
  float max_height; // xmm0_4
  PolygonGridConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  polygon_id = a2->polygon_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->polygon_id = polygon_id;
  if ( *(_BYTE *)(((unsigned __int64)&v7->min_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->min_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->min_height);
  }
  min_height = v7->min_height;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_height, v5);
  }
  this->min_height = min_height;
  if ( *(_BYTE *)(((unsigned __int64)&v7->max_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v7->max_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v7->max_height);
  }
  max_height = v7->max_height;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_height >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_height, v5);
  }
  this->max_height = max_height;
  std::shared_ptr<InteriorCheckablePolygon>::shared_ptr(&this->polygon_ptr, &v7->polygon_ptr);
};

// Line 143: range 000000000CE016B4-000000000CE0174D
void __cdecl OneoffGatherPointTypeGridConfig::OneoffGatherPointTypeGridConfig(
        OneoffGatherPointTypeGridConfig *const this,
        uint32_t group_id,
        uint32_t config_id)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->group_id = group_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->config_id, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->config_id = config_id;
};

// Line 148: range 000000000CFDE74C-000000000CFDE834
void __cdecl SceneGridConfig::SceneGridConfig(SceneGridConfig *const this)
{
  __int64 v1; // rsi

  std::vector<unsigned int>::vector(&this->group_id_vec);
  std::vector<std::pair<unsigned int,bool>>::vector(&this->weather_grid_vec);
  std::vector<ClimateGridConfig>::vector(&this->climate_grid_vec);
  std::vector<PolygonGridConfig>::vector(&this->polygon_grid_vec);
  std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::unordered_map(&this->oneoff_gather_point_type_grid_vec_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->x >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->x >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->x, v1);
  }
  this->x = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->y, (((_BYTE)this - 100) & 7u) + 3);
  }
  this->y = 0;
};

// Line 148: range 000000000D4A9D2E-000000000D4A9D88
void __cdecl SceneGridConfig::~SceneGridConfig(SceneGridConfig *const this)
{
  std::unordered_map<unsigned int,std::multimap<float,OneoffGatherPointTypeGridConfig>>::~unordered_map(&this->oneoff_gather_point_type_grid_vec_map);
  std::vector<PolygonGridConfig>::~vector(&this->polygon_grid_vec);
  std::vector<ClimateGridConfig>::~vector(&this->climate_grid_vec);
  std::vector<std::pair<unsigned int,bool>>::~vector(&this->weather_grid_vec);
  std::vector<unsigned int>::~vector(&this->group_id_vec);
};

// Line 162: range 000000000F9BBE3E-000000000F9BCC3E
void __cdecl SceneScriptConfig::SceneScriptConfig(SceneScriptConfig *const this, const SceneScriptConfig *a2)
{
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *p_oneoff_gather_point_type_to_group_config_set_map; // rsi
  uint32_t scene_id; // ecx
  char v4; // al
  float die_y; // xmm0_4
  __int64 v6; // rsi
  uint32_t city_id; // ecx
  char v8; // al
  std::vector<DummyPointScriptConfig> *p_born_point_vec; // rsi
  HK4EDesignConfig *config; // rdx
  uint32_t next_pool_monster_config_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  uint32_t room_show_scene_id; // ecx
  char v15; // dl

  std::unordered_map<unsigned int,unsigned int>::unordered_map(
    &this->oneoff_gather_point_type_count_map_,
    &a2->oneoff_gather_point_type_count_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::map(
    &this->oneoff_gather_group_config_to_point_type_map_,
    &a2->oneoff_gather_group_config_to_point_type_map_);
  p_oneoff_gather_point_type_to_group_config_set_map = &a2->oneoff_gather_point_type_to_group_config_set_map_;
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::unordered_map(
    &this->oneoff_gather_point_type_to_group_config_set_map_,
    p_oneoff_gather_point_type_to_group_config_set_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_pos >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->begin_pos, p_oneoff_gather_point_type_to_group_config_set_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->begin_pos >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->begin_pos);
  this->begin_pos = a2->begin_pos;
  if ( *(_BYTE *)(((unsigned __int64)&this->size >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->size, p_oneoff_gather_point_type_to_group_config_set_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->size >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->size);
  this->size = a2->size;
  if ( *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->scene_id);
  }
  scene_id = a2->scene_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_oneoff_gather_point_type_to_group_config_set_map) = v4 != 0;
    __asan_report_store4(&this->scene_id, p_oneoff_gather_point_type_to_group_config_set_map);
  }
  this->scene_id = scene_id;
  if ( (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grid_anchor_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->grid_anchor_pos.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 69) & 7) >= *(_BYTE *)((((unsigned __int64)&this->grid_anchor_pos.y + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grid_anchor_pos, 8LL);
  }
  if ( (((unsigned __int8)a2 - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grid_anchor_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grid_anchor_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->grid_anchor_pos.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 69) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->grid_anchor_pos.y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grid_anchor_pos, 8LL);
  }
  this->grid_anchor_pos = a2->grid_anchor_pos;
  if ( (((unsigned __int8)this - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grid_map_begin_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->grid_map_begin_pos.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 61) & 7) >= *(_BYTE *)((((unsigned __int64)&this->grid_map_begin_pos.y + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grid_map_begin_pos, 8LL);
  }
  if ( (((unsigned __int8)a2 - 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grid_map_begin_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grid_map_begin_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->grid_map_begin_pos.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 61) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->grid_map_begin_pos.y + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grid_map_begin_pos, 8LL);
  }
  this->grid_map_begin_pos = a2->grid_map_begin_pos;
  if ( (((unsigned __int8)this - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->grid_map_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->grid_map_size.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 53) & 7) >= *(_BYTE *)((((unsigned __int64)&this->grid_map_size.y + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->grid_map_size, 8LL);
  }
  if ( (((unsigned __int8)a2 - 60) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->grid_map_size >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->grid_map_size >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->grid_map_size.y + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 53) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->grid_map_size.y + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->grid_map_size, 8LL);
  }
  this->grid_map_size = a2->grid_map_size;
  if ( (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_pos, 12LL);
  }
  if ( (((unsigned __int8)a2 - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->born_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_pos, 12LL);
  }
  this->born_pos = a2->born_pos;
  if ( *(char *)(((unsigned __int64)&this->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&this->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->born_rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->born_rot >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->born_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->born_rot, 12LL);
  }
  this->born_rot = a2->born_rot;
  if ( *(_BYTE *)(((unsigned __int64)&a2->die_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->die_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->die_y);
  }
  die_y = a2->die_y;
  v6 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->die_y, v6);
  }
  this->die_y = die_y;
  if ( *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->city_id);
  }
  city_id = a2->city_id;
  v8 = *(_BYTE *)(((unsigned __int64)&this->city_id >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->city_id, v6);
  }
  this->city_id = city_id;
  p_born_point_vec = &a2->born_point_vec;
  std::vector<DummyPointScriptConfig>::vector(&this->born_point_vec, &a2->born_point_vec);
  if ( *(_BYTE *)(((unsigned __int64)&a2->config >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->config);
  config = a2->config;
  if ( *(_BYTE *)(((unsigned __int64)&this->config >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->config, p_born_point_vec);
  this->config = config;
  if ( *(_BYTE *)(((unsigned __int64)&a2->next_pool_monster_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->next_pool_monster_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->next_pool_monster_config_id);
  }
  next_pool_monster_config_id = a2->next_pool_monster_config_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->next_pool_monster_config_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_born_point_vec) = v12 != 0;
    __asan_report_store4(&this->next_pool_monster_config_id, p_born_point_vec);
  }
  this->next_pool_monster_config_id = next_pool_monster_config_id;
  v13 = (((_BYTE)a2 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->room_show_scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->room_show_scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->room_show_scene_id);
  }
  room_show_scene_id = a2->room_show_scene_id;
  v15 = *(_BYTE *)(((unsigned __int64)&this->room_show_scene_id >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v15 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->room_show_scene_id, v13);
  }
  this->room_show_scene_id = room_show_scene_id;
  if ( *(char *)(((unsigned __int64)&this->room_show_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->room_show_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&this->room_show_pos.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->room_show_pos, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->room_show_pos >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&a2->room_show_pos.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 35) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->room_show_pos.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->room_show_pos, 12LL);
  }
  this->room_show_pos = a2->room_show_pos;
  if ( (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->room_show_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->room_show_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->room_show_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&this->room_show_rot.z + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->room_show_rot, 12LL);
  }
  if ( (((unsigned __int8)a2 + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->room_show_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->room_show_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&a2->room_show_rot.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&a2->room_show_rot.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->room_show_rot, 12LL);
  }
  this->room_show_rot = a2->room_show_rot;
  std::unordered_map<std::string,DummyPointScriptConfig>::unordered_map(
    &this->dummy_point_config_map,
    &a2->dummy_point_config_map);
  std::unordered_map<unsigned int,DummyPointScriptConfig>::unordered_map(
    &this->new_dummy_point_config_map,
    &a2->new_dummy_point_config_map);
  std::unordered_map<unsigned int,BlockScriptConfig>::unordered_map(&this->block_config_map, &a2->block_config_map);
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::unordered_map(&this->group_info_map, &a2->group_info_map);
  std::unordered_map<unsigned int,GroupScriptConfig>::unordered_map(&this->group_config_map, &a2->group_config_map);
  std::shared_ptr<LuaScript>::shared_ptr(&this->script_ptr, &a2->script_ptr);
  std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::vector(
    &this->static_group_load_mesh_vec,
    &a2->static_group_load_mesh_vec);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::unordered_map(
    &this->activity_group_vec_map,
    &a2->activity_group_vec_map);
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::unordered_map(
    &this->monster_pool_map,
    &a2->monster_pool_map);
  std::vector<unsigned int>::vector(&this->sort_dynamic_group_vec, &a2->sort_dynamic_group_vec);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::unordered_map(
    &this->region_vision_type_exclude_set_map,
    &a2->region_vision_type_exclude_set_map);
  std::unordered_map<data::EventType,unsigned int>::unordered_map(
    &this->dungeon_broadcast_evt_group_count_map,
    &a2->dungeon_broadcast_evt_group_count_map);
};

// Line 162: range 000000000F78D776-000000000F78D89A
void __cdecl SceneScriptConfig::~SceneScriptConfig(SceneScriptConfig *const this)
{
  std::unordered_map<data::EventType,unsigned int>::~unordered_map(&this->dungeon_broadcast_evt_group_count_map);
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::~unordered_map(&this->region_vision_type_exclude_set_map);
  std::vector<unsigned int>::~vector(&this->sort_dynamic_group_vec);
  std::unordered_map<unsigned int,std::map<unsigned int,MonsterScriptConfig>>::~unordered_map(&this->monster_pool_map);
  std::unordered_map<unsigned int,std::vector<unsigned int>>::~unordered_map(&this->activity_group_vec_map);
  std::vector<std::shared_ptr<Mesh<SceneGridConfig,MeshAllocator<SceneGridConfig>>>>::~vector(&this->static_group_load_mesh_vec);
  std::shared_ptr<LuaScript>::~shared_ptr(&this->script_ptr);
  std::unordered_map<unsigned int,GroupScriptConfig>::~unordered_map(&this->group_config_map);
  std::unordered_map<unsigned int,GroupInfoScriptConfig>::~unordered_map(&this->group_info_map);
  std::unordered_map<unsigned int,BlockScriptConfig>::~unordered_map(&this->block_config_map);
  std::unordered_map<unsigned int,DummyPointScriptConfig>::~unordered_map(&this->new_dummy_point_config_map);
  std::unordered_map<std::string,DummyPointScriptConfig>::~unordered_map(&this->dummy_point_config_map);
  std::vector<DummyPointScriptConfig>::~vector(&this->born_point_vec);
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~unordered_map(&this->oneoff_gather_point_type_to_group_config_set_map_);
  std::map<std::pair<unsigned int,unsigned int>,unsigned int>::~map(&this->oneoff_gather_group_config_to_point_type_map_);
  std::unordered_map<unsigned int,unsigned int>::~unordered_map(&this->oneoff_gather_point_type_count_map_);
};

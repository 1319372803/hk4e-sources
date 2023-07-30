// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigGraphicSetting.h

// Line 266: range 000000000D773D80-000000000D773FB5
void __cdecl data::ConfigGraphicsSettingEntry::ConfigGraphicsSettingEntry(data::ConfigGraphicsSettingEntry *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->entry_type = Invalid_2;
  std::vector<std::string>::vector(&this->available_options);
  std::vector<float>::vector(&this->perf_cost_ratios);
  if ( *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->display_type, v1);
  }
  this->display_type = Grade;
  v2 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slider_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slider_min, v2);
  }
  this->slider_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slider_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slider_max, v2);
  }
  this->slider_max = 0.0;
  v3 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slider_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slider_interval, v3);
  }
  this->slider_interval = 1.0;
  if ( *(char *)(((unsigned __int64)&this->should_cloud_game_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->should_cloud_game_show, v3, &this->should_cloud_game_show);
  this->should_cloud_game_show = 0;
  v4 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->sort_option >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sort_option >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->sort_option, v4);
  }
  this->sort_option = None_16;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 266: range 000000000D773FB6-000000000D773FE4
void __cdecl data::ConfigGraphicsSettingEntry::~ConfigGraphicsSettingEntry(
        data::ConfigGraphicsSettingEntry *const this)
{
  std::vector<float>::~vector(&this->perf_cost_ratios);
  std::vector<std::string>::~vector(&this->available_options);
};

// Line 440: range 000000000D775E44-000000000D7765B3
void __cdecl data::ConfigComprehensiveQualitySetting::ConfigComprehensiveQualitySetting(
        data::ConfigComprehensiveQualitySetting *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  char v18[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigComprehensiveQualitySetting::ConfigComprehensiveQualitySetting;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->local_lighting_shadow = 1;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_blend_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_blend_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_blend_distance, v5);
  }
  this->terrain_blend_distance = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->shader_loddistance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shader_loddistance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shader_loddistance, v5);
  }
  this->shader_loddistance = -1;
  std::string::basic_string(&this->shader_quality_keyword);
  std::string::basic_string(&this->level_streaming_config);
  std::string::basic_string(&this->enviro_config);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->ui_cache_config,
    "iOSDefault",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->light_view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->light_view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->light_view_distance_ratio, "iOSDefault");
  }
  this->light_view_distance_ratio = 1.0;
  v6 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grass_quality, v6);
  }
  this->grass_quality = Num;
  if ( *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->light_on_level, v6);
  }
  this->light_on_level = Invalid_1;
  std::string::basic_string(&this->entity_lodconfig);
  if ( *(char *)(((unsigned __int64)&this->enable_remote_avatar_lod >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_remote_avatar_lod, v6, &this->enable_remote_avatar_lod);
  this->enable_remote_avatar_lod = 0;
  v7 = ((_BYTE)this - 63) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_dynamic_light >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_dynamic_light >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->enable_dynamic_light, v7, v8);
  this->enable_dynamic_light = 1;
  v9 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_tint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_tint_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_tint_distance, v9);
  }
  this->fade_tint_distance = 70.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_tint_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_tint_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_tint_size, v9);
  }
  this->fade_tint_size = 80.0;
  v10 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_budget, v10);
  }
  this->texture_streaming_budget = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_tint_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_tint_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_tint_quality, v10);
  }
  this->fade_tint_quality = Middle_3;
  v11 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_distance, v11);
  }
  this->terrain_distance = 1000.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_normal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->terrain_normal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->terrain_normal, v11);
  }
  this->terrain_normal = 100.0;
  v12 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->shell_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shell_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->shell_count, v12);
  }
  this->shell_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->shell_max_objects_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shell_max_objects_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shell_max_objects_count, v12);
  }
  this->shell_max_objects_count = 0;
  v13 = ((_BYTE)this - 28) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->use_crowd_cone_view_optim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->use_crowd_cone_view_optim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->use_crowd_cone_view_optim, v13, v14);
  this->use_crowd_cone_view_optim = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->crowd_max_screen_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crowd_max_screen_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->crowd_max_screen_num, v13);
  }
  this->crowd_max_screen_num = 40;
  v15 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->crowd_cone_view_update_period >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crowd_cone_view_update_period >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crowd_cone_view_update_period, v15);
  }
  this->crowd_cone_view_update_period = 5;
  if ( *(_BYTE *)(((unsigned __int64)&this->crowd_max_spawn_grade >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crowd_max_spawn_grade >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->crowd_max_spawn_grade, v15);
  }
  this->crowd_max_spawn_grade = High_6;
  v16 = ((_BYTE)this - 12) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_json_loaded, v16, v17);
  this->is_json_loaded = 0;
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 440: range 000000000DD13026-000000000DD13C12
void __cdecl data::ConfigComprehensiveQualitySetting::ConfigComprehensiveQualitySetting(
        data::ConfigComprehensiveQualitySetting *const this,
        const data::ConfigComprehensiveQualitySetting *a2)
{
  bool local_lighting_shadow; // cl
  char v3; // al
  __int64 v4; // rsi
  int32_t terrain_blend_distance; // ecx
  char v6; // dl
  int32_t shader_loddistance; // ecx
  char v8; // al
  float light_view_distance_ratio; // xmm0_4
  __int64 v10; // rsi
  data::GrassQualityLevel grass_quality; // ecx
  char v12; // dl
  data::LightLevel light_on_level; // ecx
  char v14; // al
  std::string *p_entity_lodconfig; // rsi
  bool enable_remote_avatar_lod; // cl
  char v17; // al
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool enable_dynamic_light; // cl
  char v21; // dl
  __int64 v22; // rdx
  float fade_tint_distance; // xmm0_4
  __int64 v24; // rsi
  float fade_tint_size; // xmm0_4
  float texture_streaming_budget; // xmm0_4
  __int64 v27; // rsi
  data::FadeTintQualityLevel fade_tint_quality; // ecx
  char v29; // al
  float terrain_distance; // xmm0_4
  __int64 v31; // rsi
  float terrain_normal; // xmm0_4
  __int64 v33; // rsi
  int32_t shell_count; // ecx
  char v35; // dl
  int32_t shell_max_objects_count; // ecx
  char v37; // al
  __int64 v38; // rsi
  __int64 v39; // rdx
  bool use_crowd_cone_view_optim; // cl
  char v41; // dl
  __int64 v42; // rdx
  int32_t crowd_max_screen_num; // ecx
  char v44; // al
  __int64 v45; // rsi
  int32_t crowd_cone_view_update_period; // ecx
  char v47; // dl
  data::ConfigCrowdInstSpawnGradeEnum crowd_max_spawn_grade; // ecx
  char v49; // al
  __int64 v50; // rsi
  __int64 v51; // rdx
  bool is_json_loaded; // cl
  char v53; // dl
  __int64 v54; // rdx
  const data::ConfigComprehensiveQualitySetting *v55; // [rsp+0h] [rbp-20h]

  v55 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  local_lighting_shadow = a2->local_lighting_shadow;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->local_lighting_shadow = local_lighting_shadow;
  v4 = (((_BYTE)v55 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v55->terrain_blend_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->terrain_blend_distance >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->terrain_blend_distance);
  }
  terrain_blend_distance = v55->terrain_blend_distance;
  v6 = *(_BYTE *)(((unsigned __int64)&this->terrain_blend_distance >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->terrain_blend_distance, v4);
  }
  this->terrain_blend_distance = terrain_blend_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v55->shader_loddistance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->shader_loddistance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->shader_loddistance);
  }
  shader_loddistance = v55->shader_loddistance;
  v8 = *(_BYTE *)(((unsigned __int64)&this->shader_loddistance >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->shader_loddistance, v4);
  }
  this->shader_loddistance = shader_loddistance;
  std::string::basic_string(&this->shader_quality_keyword, &v55->shader_quality_keyword);
  std::string::basic_string(&this->level_streaming_config, &v55->level_streaming_config);
  std::string::basic_string(&this->enviro_config, &v55->enviro_config);
  std::string::basic_string(&this->ui_cache_config, &v55->ui_cache_config);
  if ( *(_BYTE *)(((unsigned __int64)&v55->light_view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->light_view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->light_view_distance_ratio);
  }
  light_view_distance_ratio = v55->light_view_distance_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->light_view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->light_view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->light_view_distance_ratio, &v55->ui_cache_config);
  }
  this->light_view_distance_ratio = light_view_distance_ratio;
  v10 = (((_BYTE)v55 - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v55->grass_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->grass_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->grass_quality);
  }
  grass_quality = v55->grass_quality;
  v12 = *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this - 108) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->grass_quality, v10);
  }
  this->grass_quality = grass_quality;
  if ( *(_BYTE *)(((unsigned __int64)&v55->light_on_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->light_on_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->light_on_level);
  }
  light_on_level = v55->light_on_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->light_on_level, v10);
  }
  this->light_on_level = light_on_level;
  p_entity_lodconfig = &v55->entity_lodconfig;
  std::string::basic_string(&this->entity_lodconfig, &v55->entity_lodconfig);
  if ( *(char *)(((unsigned __int64)&v55->enable_remote_avatar_lod >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v55->enable_remote_avatar_lod, p_entity_lodconfig, &v55->enable_remote_avatar_lod);
  enable_remote_avatar_lod = v55->enable_remote_avatar_lod;
  v17 = *(_BYTE *)(((unsigned __int64)&this->enable_remote_avatar_lod >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(p_entity_lodconfig) = v17 != 0;
    __asan_report_store1(&this->enable_remote_avatar_lod, p_entity_lodconfig, &this->enable_remote_avatar_lod);
  }
  this->enable_remote_avatar_lod = enable_remote_avatar_lod;
  v18 = ((_BYTE)v55 - 63) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&v55->enable_dynamic_light >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&v55->enable_dynamic_light >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&v55->enable_dynamic_light, v18, v19);
  enable_dynamic_light = v55->enable_dynamic_light;
  v21 = *(_BYTE *)(((unsigned __int64)&this->enable_dynamic_light >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this - 63) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->enable_dynamic_light, v18, v22);
  this->enable_dynamic_light = enable_dynamic_light;
  if ( *(_BYTE *)(((unsigned __int64)&v55->fade_tint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->fade_tint_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->fade_tint_distance);
  }
  fade_tint_distance = v55->fade_tint_distance;
  v24 = (((_BYTE)this - 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_tint_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_tint_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_tint_distance, v24);
  }
  this->fade_tint_distance = fade_tint_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v55->fade_tint_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->fade_tint_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->fade_tint_size);
  }
  fade_tint_size = v55->fade_tint_size;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_tint_size >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_tint_size >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_tint_size, v24);
  }
  this->fade_tint_size = fade_tint_size;
  if ( *(_BYTE *)(((unsigned __int64)&v55->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->texture_streaming_budget >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->texture_streaming_budget);
  }
  texture_streaming_budget = v55->texture_streaming_budget;
  v27 = (((_BYTE)this - 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_budget, v27);
  }
  this->texture_streaming_budget = texture_streaming_budget;
  if ( *(_BYTE *)(((unsigned __int64)&v55->fade_tint_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->fade_tint_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->fade_tint_quality);
  }
  fade_tint_quality = v55->fade_tint_quality;
  v29 = *(_BYTE *)(((unsigned __int64)&this->fade_tint_quality >> 3) + 0x7FFF8000);
  if ( v29 != 0 && v29 <= 3 )
  {
    LOBYTE(v27) = v29 != 0;
    __asan_report_store4(&this->fade_tint_quality, v27);
  }
  this->fade_tint_quality = fade_tint_quality;
  if ( *(_BYTE *)(((unsigned __int64)&v55->terrain_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->terrain_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->terrain_distance);
  }
  terrain_distance = v55->terrain_distance;
  v31 = (((_BYTE)this - 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->terrain_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->terrain_distance, v31);
  }
  this->terrain_distance = terrain_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v55->terrain_normal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->terrain_normal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->terrain_normal);
  }
  terrain_normal = v55->terrain_normal;
  if ( *(_BYTE *)(((unsigned __int64)&this->terrain_normal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->terrain_normal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->terrain_normal, v31);
  }
  this->terrain_normal = terrain_normal;
  v33 = (((_BYTE)v55 - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v55->shell_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->shell_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->shell_count);
  }
  shell_count = v55->shell_count;
  v35 = *(_BYTE *)(((unsigned __int64)&this->shell_count >> 3) + 0x7FFF8000);
  if ( v35 != 0 && (char)((((_BYTE)this - 36) & 7) + 3) >= v35 )
  {
    LOBYTE(v33) = v35 != 0;
    __asan_report_store4(&this->shell_count, v33);
  }
  this->shell_count = shell_count;
  if ( *(_BYTE *)(((unsigned __int64)&v55->shell_max_objects_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->shell_max_objects_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->shell_max_objects_count);
  }
  shell_max_objects_count = v55->shell_max_objects_count;
  v37 = *(_BYTE *)(((unsigned __int64)&this->shell_max_objects_count >> 3) + 0x7FFF8000);
  if ( v37 != 0 && v37 <= 3 )
  {
    LOBYTE(v33) = v37 != 0;
    __asan_report_store4(&this->shell_max_objects_count, v33);
  }
  this->shell_max_objects_count = shell_max_objects_count;
  v38 = ((_BYTE)v55 - 28) & 7;
  v39 = (*(_BYTE *)(((unsigned __int64)&v55->use_crowd_cone_view_optim >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v38 >= *(_BYTE *)(((unsigned __int64)&v55->use_crowd_cone_view_optim >> 3) + 0x7FFF8000));
  if ( (_BYTE)v39 )
    __asan_report_load1(&v55->use_crowd_cone_view_optim, v38, v39);
  use_crowd_cone_view_optim = v55->use_crowd_cone_view_optim;
  v41 = *(_BYTE *)(((unsigned __int64)&this->use_crowd_cone_view_optim >> 3) + 0x7FFF8000);
  LOBYTE(v38) = v41 != 0;
  v42 = (v41 != 0) & (unsigned __int8)((((unsigned __int8)this - 28) & 7) >= v41);
  if ( (_BYTE)v42 )
    __asan_report_store1(&this->use_crowd_cone_view_optim, v38, v42);
  this->use_crowd_cone_view_optim = use_crowd_cone_view_optim;
  if ( *(_BYTE *)(((unsigned __int64)&v55->crowd_max_screen_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->crowd_max_screen_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->crowd_max_screen_num);
  }
  crowd_max_screen_num = v55->crowd_max_screen_num;
  v44 = *(_BYTE *)(((unsigned __int64)&this->crowd_max_screen_num >> 3) + 0x7FFF8000);
  if ( v44 != 0 && v44 <= 3 )
  {
    LOBYTE(v38) = v44 != 0;
    __asan_report_store4(&this->crowd_max_screen_num, v38);
  }
  this->crowd_max_screen_num = crowd_max_screen_num;
  v45 = (((_BYTE)v55 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v55->crowd_cone_view_update_period >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v55 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v55->crowd_cone_view_update_period >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v55->crowd_cone_view_update_period);
  }
  crowd_cone_view_update_period = v55->crowd_cone_view_update_period;
  v47 = *(_BYTE *)(((unsigned __int64)&this->crowd_cone_view_update_period >> 3) + 0x7FFF8000);
  if ( v47 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v47 )
  {
    LOBYTE(v45) = v47 != 0;
    __asan_report_store4(&this->crowd_cone_view_update_period, v45);
  }
  this->crowd_cone_view_update_period = crowd_cone_view_update_period;
  if ( *(_BYTE *)(((unsigned __int64)&v55->crowd_max_spawn_grade >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v55->crowd_max_spawn_grade >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v55->crowd_max_spawn_grade);
  }
  crowd_max_spawn_grade = v55->crowd_max_spawn_grade;
  v49 = *(_BYTE *)(((unsigned __int64)&this->crowd_max_spawn_grade >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(v45) = v49 != 0;
    __asan_report_store4(&this->crowd_max_spawn_grade, v45);
  }
  this->crowd_max_spawn_grade = crowd_max_spawn_grade;
  v50 = ((_BYTE)v55 - 12) & 7;
  v51 = (*(_BYTE *)(((unsigned __int64)&v55->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v50 >= *(_BYTE *)(((unsigned __int64)&v55->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v51 )
    __asan_report_load1(&v55->is_json_loaded, v50, v51);
  is_json_loaded = v55->is_json_loaded;
  v53 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v53 != 0;
  v54 = (v53 != 0) & (unsigned __int8)((((unsigned __int8)this - 12) & 7) >= v53);
  if ( (_BYTE)v54 )
    __asan_report_store1(&this->is_json_loaded, v50, v54);
  this->is_json_loaded = is_json_loaded;
};

// Line 440: range 000000000D7765B4-000000000D776614
void __cdecl data::ConfigComprehensiveQualitySetting::~ConfigComprehensiveQualitySetting(
        data::ConfigComprehensiveQualitySetting *const this)
{
  std::string::~string(&this->entity_lodconfig);
  std::string::~string(&this->ui_cache_config);
  std::string::~string(&this->enviro_config);
  std::string::~string(&this->level_streaming_config);
  std::string::~string(&this->shader_quality_keyword);
};

// Line 546: range 000000000D7766B2-000000000D776717
void __cdecl data::ConfigGraphicsRequirement::ConfigGraphicsRequirement(data::ConfigGraphicsRequirement *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::vector<std::string>::vector(&this->values);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 546: range 000000000DF4C07C-000000000DF4C155
void __cdecl data::ConfigGraphicsRequirement::ConfigGraphicsRequirement(
        data::ConfigGraphicsRequirement *const this,
        const data::ConfigGraphicsRequirement *a2)
{
  data::StringArray *p_values; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_values = &a2->values;
  std::vector<std::string>::vector(&this->values, p_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_values) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 546: range 000000000D959EC8-000000000D959F7E
void __cdecl data::ConfigGraphicsRequirement::ConfigGraphicsRequirement(
        data::ConfigGraphicsRequirement *const this,
        data::ConfigGraphicsRequirement *a2)
{
  std::vector<std::string> *p_values; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  p_values = &a2->values;
  std::vector<std::string>::vector(&this->values, p_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_values) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 546: range 000000000D776718-000000000D776742
void __cdecl data::ConfigGraphicsRequirement::~ConfigGraphicsRequirement(data::ConfigGraphicsRequirement *const this)
{
  std::vector<std::string>::~vector(&this->values);
  std::string::~string(this);
};

// Line 569: range 000000000D9563AE-000000000D9567CF
void __cdecl data::ConfigGraphicsSettingEntry::ConfigGraphicsSettingEntry(
        data::ConfigGraphicsSettingEntry *const this,
        data::ConfigGraphicsSettingEntry *a2)
{
  data::GraphicsSettingEntryType entry_type; // ecx
  char v3; // al
  data::FloatArray *p_perf_cost_ratios; // rsi
  data::SettingEntryDisplayType display_type; // ecx
  char v6; // al
  float slider_min; // xmm0_4
  __int64 v8; // rsi
  float slider_max; // xmm0_4
  float slider_interval; // xmm0_4
  __int64 v11; // rsi
  bool should_cloud_game_show; // cl
  char v13; // al
  __int64 v14; // rsi
  data::ConfigGraphicSettingEntrySortType sort_option; // ecx
  char v16; // dl
  bool is_json_loaded; // cl
  char v18; // al
  data::ConfigGraphicsSettingEntry *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  entry_type = a2->entry_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->entry_type = entry_type;
  std::vector<std::string>::vector(&this->available_options, &v19->available_options);
  p_perf_cost_ratios = &v19->perf_cost_ratios;
  std::vector<float>::vector(&this->perf_cost_ratios, &v19->perf_cost_ratios);
  if ( *(_BYTE *)(((unsigned __int64)&v19->display_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->display_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->display_type);
  }
  display_type = v19->display_type;
  v6 = *(_BYTE *)(((unsigned __int64)&this->display_type >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_perf_cost_ratios) = v6 != 0;
    __asan_report_store4(&this->display_type, p_perf_cost_ratios);
  }
  this->display_type = display_type;
  if ( *(_BYTE *)(((unsigned __int64)&v19->slider_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->slider_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->slider_min);
  }
  slider_min = v19->slider_min;
  v8 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slider_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slider_min, v8);
  }
  this->slider_min = slider_min;
  if ( *(_BYTE *)(((unsigned __int64)&v19->slider_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->slider_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->slider_max);
  }
  slider_max = v19->slider_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slider_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slider_max, v8);
  }
  this->slider_max = slider_max;
  if ( *(_BYTE *)(((unsigned __int64)&v19->slider_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->slider_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->slider_interval);
  }
  slider_interval = v19->slider_interval;
  v11 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->slider_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slider_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->slider_interval, v11);
  }
  this->slider_interval = slider_interval;
  if ( *(char *)(((unsigned __int64)&v19->should_cloud_game_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->should_cloud_game_show, v11, &v19->should_cloud_game_show);
  should_cloud_game_show = v19->should_cloud_game_show;
  v13 = *(_BYTE *)(((unsigned __int64)&this->should_cloud_game_show >> 3) + 0x7FFF8000);
  if ( v13 < 0 )
  {
    LOBYTE(v11) = v13 != 0;
    __asan_report_store1(&this->should_cloud_game_show, v11, &this->should_cloud_game_show);
  }
  this->should_cloud_game_show = should_cloud_game_show;
  v14 = (((_BYTE)v19 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->sort_option >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->sort_option >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->sort_option);
  }
  sort_option = v19->sort_option;
  v16 = *(_BYTE *)(((unsigned __int64)&this->sort_option >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v16 != 0;
  if ( v16 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v16 )
    __asan_report_store4(&this->sort_option, v14);
  this->sort_option = sort_option;
  if ( *(char *)(((unsigned __int64)&v19->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v19->is_json_loaded, v14, &v19->is_json_loaded);
  is_json_loaded = v19->is_json_loaded;
  v18 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v18 < 0 )
  {
    LOBYTE(v14) = v18 != 0;
    __asan_report_store1(&this->is_json_loaded, v14, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 645: range 000000000D7769CE-000000000D777265
void __cdecl data::ConfigGraphicsRecommendSetting::ConfigGraphicsRecommendSetting(
        data::ConfigGraphicsRecommendSetting *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  char v12[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigGraphicsRecommendSetting::ConfigGraphicsRecommendSetting;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202116351;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->performance_quality,
    "High",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->virtual_joystick_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->virtual_joystick_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->virtual_joystick_radius, "High");
  }
  this->virtual_joystick_radius = -1.0;
  std::string::basic_string(&this->level_streaming_config);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->ui_cache_config,
    "iOSDefault",
    (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->light_on_level, "iOSDefault");
  }
  this->light_on_level = Invalid_1;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirements);
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_budget, "iOSDefault");
  }
  this->texture_streaming_budget = -1.0;
  v4 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_cutscene_texture_streaming >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enable_cutscene_texture_streaming >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enable_cutscene_texture_streaming, v4);
  }
  this->enable_cutscene_texture_streaming = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enabled >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enabled >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_enabled, v4);
  }
  this->texture_streaming_enabled = -1;
  v5 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_offset >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_offset, v5);
  }
  this->texture_streaming_offset = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_uicamera_full_resolution >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->enable_uicamera_full_resolution >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->enable_uicamera_full_resolution, v5);
  }
  this->enable_uicamera_full_resolution = -1;
  v6 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->preload_uiscene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->preload_uiscene >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->preload_uiscene, v6);
  }
  this->preload_uiscene = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_do_f >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disable_do_f >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disable_do_f, v6);
  }
  this->disable_do_f = -1;
  v7 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->enable_subpass >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->enable_subpass >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->enable_subpass, v7);
  }
  this->enable_subpass = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->use_per_object_light_in_forward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->use_per_object_light_in_forward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->use_per_object_light_in_forward, v7);
  }
  this->use_per_object_light_in_forward = -1;
  std::vector<data::ConfigRenderResolution>::vector(&this->render_resolutions);
  std::string::basic_string(&this->quality_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->default_volatile_grade >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_volatile_grade >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_volatile_grade, v7);
  }
  this->default_volatile_grade = -1;
  v8 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_outline_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_outline_thresh >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_outline_thresh, v8);
  }
  this->avatar_outline_thresh = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_shadow_thresh >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_shadow_thresh >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_shadow_thresh, v8);
  }
  this->avatar_shadow_thresh = -1.0;
  v9 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_motion_vector_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_motion_vector_thresh >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_motion_vector_thresh, v9);
  }
  this->avatar_motion_vector_thresh = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->view_distance_ratio, v9);
  }
  this->view_distance_ratio = -1.0;
  v10 = (((_BYTE)this - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->grass_quality, v10);
  }
  this->grass_quality = Num;
  if ( *(_BYTE *)(((unsigned __int64)&this->crowd_spawn_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->crowd_spawn_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->crowd_spawn_distance, v10);
  }
  this->crowd_spawn_distance = 60;
  v11 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->crowd_despawn_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->crowd_despawn_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->crowd_despawn_distance, v11);
  }
  this->crowd_despawn_distance = 80;
  std::string::basic_string(&this->entity_lodconfig);
  std::vector<std::string>::vector(&this->device_extra_frame_rate);
  std::unordered_map<data::VolatileType,int>::unordered_map(&this->override_render_res_grade);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v11, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 645: range 000000000DD14B60-000000000DD157A5
void __cdecl data::ConfigGraphicsRecommendSetting::ConfigGraphicsRecommendSetting(
        data::ConfigGraphicsRecommendSetting *const this,
        const data::ConfigGraphicsRecommendSetting *a2)
{
  float virtual_joystick_radius; // xmm0_4
  std::string *p_ui_cache_config; // rsi
  data::LightLevel light_on_level; // ecx
  char v5; // al
  float texture_streaming_budget; // xmm0_4
  __int64 v7; // rsi
  int32_t enable_cutscene_texture_streaming; // ecx
  char v9; // dl
  int32_t texture_streaming_enabled; // ecx
  char v11; // al
  float texture_streaming_offset; // xmm0_4
  __int64 v13; // rsi
  int32_t enable_uicamera_full_resolution; // ecx
  char v15; // al
  __int64 v16; // rsi
  int32_t preload_uiscene; // ecx
  char v18; // dl
  int32_t disable_do_f; // ecx
  char v20; // al
  __int64 v21; // rsi
  int32_t enable_subpass; // ecx
  char v23; // dl
  int32_t use_per_object_light_in_forward; // ecx
  char v25; // al
  std::string *p_quality_level; // rsi
  int32_t default_volatile_grade; // ecx
  char v28; // al
  float avatar_outline_thresh; // xmm0_4
  __int64 v30; // rsi
  float avatar_shadow_thresh; // xmm0_4
  float avatar_motion_vector_thresh; // xmm0_4
  __int64 v33; // rsi
  float view_distance_ratio; // xmm0_4
  __int64 v35; // rsi
  data::GrassQualityLevel grass_quality; // ecx
  char v37; // dl
  int32_t crowd_spawn_distance; // ecx
  char v39; // al
  __int64 v40; // rsi
  int32_t crowd_despawn_distance; // ecx
  char v42; // dl
  data::ConfigGraphicsVolatileToRenderGradeMap *p_override_render_res_grade; // rsi
  bool is_json_loaded; // cl
  char v45; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->virtual_joystick_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->virtual_joystick_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->virtual_joystick_radius);
  }
  virtual_joystick_radius = a2->virtual_joystick_radius;
  if ( *(_BYTE *)(((unsigned __int64)&this->virtual_joystick_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->virtual_joystick_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->virtual_joystick_radius, a2);
  }
  this->virtual_joystick_radius = virtual_joystick_radius;
  std::string::basic_string(&this->level_streaming_config, &a2->level_streaming_config);
  p_ui_cache_config = &a2->ui_cache_config;
  std::string::basic_string(&this->ui_cache_config, &a2->ui_cache_config);
  if ( *(_BYTE *)(((unsigned __int64)&a2->light_on_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->light_on_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->light_on_level);
  }
  light_on_level = a2->light_on_level;
  v5 = *(_BYTE *)(((unsigned __int64)&this->light_on_level >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_ui_cache_config) = v5 != 0;
    __asan_report_store4(&this->light_on_level, p_ui_cache_config);
  }
  this->light_on_level = light_on_level;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirements, &a2->requirements);
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_budget);
  }
  texture_streaming_budget = a2->texture_streaming_budget;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_budget, &a2->requirements);
  }
  this->texture_streaming_budget = texture_streaming_budget;
  v7 = (((_BYTE)a2 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enable_cutscene_texture_streaming >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enable_cutscene_texture_streaming >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enable_cutscene_texture_streaming);
  }
  enable_cutscene_texture_streaming = a2->enable_cutscene_texture_streaming;
  v9 = *(_BYTE *)(((unsigned __int64)&this->enable_cutscene_texture_streaming >> 3) + 0x7FFF8000);
  if ( v9 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v9 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store4(&this->enable_cutscene_texture_streaming, v7);
  }
  this->enable_cutscene_texture_streaming = enable_cutscene_texture_streaming;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enabled >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enabled >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_enabled);
  }
  texture_streaming_enabled = a2->texture_streaming_enabled;
  v11 = *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enabled >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store4(&this->texture_streaming_enabled, v7);
  }
  this->texture_streaming_enabled = texture_streaming_enabled;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_offset >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->texture_streaming_offset);
  }
  texture_streaming_offset = a2->texture_streaming_offset;
  v13 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_offset >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_offset >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_offset, v13);
  }
  this->texture_streaming_offset = texture_streaming_offset;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enable_uicamera_full_resolution >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->enable_uicamera_full_resolution >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->enable_uicamera_full_resolution);
  }
  enable_uicamera_full_resolution = a2->enable_uicamera_full_resolution;
  v15 = *(_BYTE *)(((unsigned __int64)&this->enable_uicamera_full_resolution >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->enable_uicamera_full_resolution, v13);
  }
  this->enable_uicamera_full_resolution = enable_uicamera_full_resolution;
  v16 = (((_BYTE)a2 - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->preload_uiscene >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->preload_uiscene >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->preload_uiscene);
  }
  preload_uiscene = a2->preload_uiscene;
  v18 = *(_BYTE *)(((unsigned __int64)&this->preload_uiscene >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->preload_uiscene, v16);
  }
  this->preload_uiscene = preload_uiscene;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disable_do_f >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disable_do_f >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disable_do_f);
  }
  disable_do_f = a2->disable_do_f;
  v20 = *(_BYTE *)(((unsigned __int64)&this->disable_do_f >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->disable_do_f, v16);
  }
  this->disable_do_f = disable_do_f;
  v21 = (((_BYTE)a2 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->enable_subpass >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->enable_subpass >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->enable_subpass);
  }
  enable_subpass = a2->enable_subpass;
  v23 = *(_BYTE *)(((unsigned __int64)&this->enable_subpass >> 3) + 0x7FFF8000);
  if ( v23 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v23 )
  {
    LOBYTE(v21) = v23 != 0;
    __asan_report_store4(&this->enable_subpass, v21);
  }
  this->enable_subpass = enable_subpass;
  if ( *(_BYTE *)(((unsigned __int64)&a2->use_per_object_light_in_forward >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->use_per_object_light_in_forward >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->use_per_object_light_in_forward);
  }
  use_per_object_light_in_forward = a2->use_per_object_light_in_forward;
  v25 = *(_BYTE *)(((unsigned __int64)&this->use_per_object_light_in_forward >> 3) + 0x7FFF8000);
  if ( v25 != 0 && v25 <= 3 )
  {
    LOBYTE(v21) = v25 != 0;
    __asan_report_store4(&this->use_per_object_light_in_forward, v21);
  }
  this->use_per_object_light_in_forward = use_per_object_light_in_forward;
  std::vector<data::ConfigRenderResolution>::vector(&this->render_resolutions, &a2->render_resolutions);
  p_quality_level = &a2->quality_level;
  std::string::basic_string(&this->quality_level, &a2->quality_level);
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_volatile_grade >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_volatile_grade >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_volatile_grade);
  }
  default_volatile_grade = a2->default_volatile_grade;
  v28 = *(_BYTE *)(((unsigned __int64)&this->default_volatile_grade >> 3) + 0x7FFF8000);
  if ( v28 != 0 && v28 <= 3 )
  {
    LOBYTE(p_quality_level) = v28 != 0;
    __asan_report_store4(&this->default_volatile_grade, p_quality_level);
  }
  this->default_volatile_grade = default_volatile_grade;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_outline_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_outline_thresh >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_outline_thresh);
  }
  avatar_outline_thresh = a2->avatar_outline_thresh;
  v30 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_outline_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_outline_thresh >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_outline_thresh, v30);
  }
  this->avatar_outline_thresh = avatar_outline_thresh;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_shadow_thresh >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->avatar_shadow_thresh >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->avatar_shadow_thresh);
  }
  avatar_shadow_thresh = a2->avatar_shadow_thresh;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_shadow_thresh >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_shadow_thresh >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->avatar_shadow_thresh, v30);
  }
  this->avatar_shadow_thresh = avatar_shadow_thresh;
  if ( *(_BYTE *)(((unsigned __int64)&a2->avatar_motion_vector_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->avatar_motion_vector_thresh >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->avatar_motion_vector_thresh);
  }
  avatar_motion_vector_thresh = a2->avatar_motion_vector_thresh;
  v33 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_motion_vector_thresh >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_motion_vector_thresh >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->avatar_motion_vector_thresh, v33);
  }
  this->avatar_motion_vector_thresh = avatar_motion_vector_thresh;
  if ( *(_BYTE *)(((unsigned __int64)&a2->view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->view_distance_ratio);
  }
  view_distance_ratio = a2->view_distance_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->view_distance_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->view_distance_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->view_distance_ratio, v33);
  }
  this->view_distance_ratio = view_distance_ratio;
  v35 = (((_BYTE)a2 - 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->grass_quality >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->grass_quality >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->grass_quality);
  }
  grass_quality = a2->grass_quality;
  v37 = *(_BYTE *)(((unsigned __int64)&this->grass_quality >> 3) + 0x7FFF8000);
  if ( v37 != 0 && (char)((((_BYTE)this - 4) & 7) + 3) >= v37 )
  {
    LOBYTE(v35) = v37 != 0;
    __asan_report_store4(&this->grass_quality, v35);
  }
  this->grass_quality = grass_quality;
  if ( *(_BYTE *)(((unsigned __int64)&a2->crowd_spawn_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->crowd_spawn_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->crowd_spawn_distance);
  }
  crowd_spawn_distance = a2->crowd_spawn_distance;
  v39 = *(_BYTE *)(((unsigned __int64)&this->crowd_spawn_distance >> 3) + 0x7FFF8000);
  if ( v39 != 0 && v39 <= 3 )
  {
    LOBYTE(v35) = v39 != 0;
    __asan_report_store4(&this->crowd_spawn_distance, v35);
  }
  this->crowd_spawn_distance = crowd_spawn_distance;
  v40 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->crowd_despawn_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->crowd_despawn_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->crowd_despawn_distance);
  }
  crowd_despawn_distance = a2->crowd_despawn_distance;
  v42 = *(_BYTE *)(((unsigned __int64)&this->crowd_despawn_distance >> 3) + 0x7FFF8000);
  if ( v42 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v42 )
  {
    LOBYTE(v40) = v42 != 0;
    __asan_report_store4(&this->crowd_despawn_distance, v40);
  }
  this->crowd_despawn_distance = crowd_despawn_distance;
  std::string::basic_string(&this->entity_lodconfig, &a2->entity_lodconfig);
  std::vector<std::string>::vector(&this->device_extra_frame_rate, &a2->device_extra_frame_rate);
  p_override_render_res_grade = &a2->override_render_res_grade;
  std::unordered_map<data::VolatileType,int>::unordered_map(
    &this->override_render_res_grade,
    &a2->override_render_res_grade);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_override_render_res_grade, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v45 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v45 < 0 )
  {
    LOBYTE(p_override_render_res_grade) = v45 != 0;
    __asan_report_store1(&this->is_json_loaded, p_override_render_res_grade, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 645: range 000000000D777266-000000000D77730A
void __cdecl data::ConfigGraphicsRecommendSetting::~ConfigGraphicsRecommendSetting(
        data::ConfigGraphicsRecommendSetting *const this)
{
  std::unordered_map<data::VolatileType,int>::~unordered_map(&this->override_render_res_grade);
  std::vector<std::string>::~vector(&this->device_extra_frame_rate);
  std::string::~string(&this->entity_lodconfig);
  std::string::~string(&this->quality_level);
  std::vector<data::ConfigRenderResolution>::~vector(&this->render_resolutions);
  std::vector<data::ConfigGraphicsRequirement>::~vector(&this->requirements);
  std::string::~string(&this->ui_cache_config);
  std::string::~string(&this->level_streaming_config);
  std::string::~string(this);
};

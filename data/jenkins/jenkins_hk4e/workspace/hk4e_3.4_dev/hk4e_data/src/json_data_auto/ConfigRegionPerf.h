// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRegionPerf.h

// Line 20: range 0000000012178FEA-000000001217946D
void __cdecl data::ConfigRegionPerf::ConfigRegionPerf(data::ConfigRegionPerf *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi

  std::vector<unsigned int>::vector(&this->area_idarray);
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_budget, v1);
  }
  this->texture_streaming_budget = 0.0;
  std::string::basic_string(&this->streaming_profile_ratio_config_name);
  if ( *(char *)(((unsigned __int64)&this->disable_common_preload >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_common_preload, v1, &this->disable_common_preload);
  this->disable_common_preload = 0;
  v2 = ((_BYTE)this + 65) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->disable_entity_preload_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->disable_entity_preload_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->disable_entity_preload_effect, v2, v3);
  this->disable_entity_preload_effect = 0;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array);
  if ( *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hiz_aabbscale, v2);
  }
  this->hiz_aabbscale = -1.0;
  v4 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distant_shadow_bound, v4);
  }
  this->distant_shadow_bound = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shadow_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shadow_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_shadow_quality, v4);
  }
  this->max_shadow_quality = VeryHigh_3;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shadow_resolution >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_shadow_resolution >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_shadow_resolution, v5);
  }
  this->max_shadow_resolution = VeryHigh_4;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_enable_adjust, v5);
  }
  this->texture_streaming_enable_adjust = -1;
  v6 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_guard_min, v6);
  }
  this->texture_streaming_guard_min = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_guard_max, v6);
  }
  this->texture_streaming_guard_max = -1.0;
  v7 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_near_protect_distance, v7);
  }
  this->texture_streaming_near_protect_distance = -1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_near_mip_level_min, v7);
  }
  this->texture_streaming_near_mip_level_min = -1;
  v8 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_important_renderer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_important_renderer >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_enable_important_renderer, v8);
  }
  this->texture_streaming_enable_important_renderer = -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_custom_fallback, v8);
  }
  this->texture_streaming_custom_fallback = -1;
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_fallback_guard, v9);
  }
  this->texture_streaming_fallback_guard = -1.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v9, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 20: range 000000001237EE16-000000001237F671
void __cdecl data::ConfigRegionPerf::ConfigRegionPerf(data::ConfigRegionPerf *const this, data::ConfigRegionPerf *a2)
{
  float texture_streaming_budget; // xmm0_4
  std::string *p_streaming_profile_ratio_config_name; // rsi
  bool disable_common_preload; // cl
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool disable_entity_preload_effect; // cl
  char v9; // dl
  __int64 v10; // rdx
  float hiz_aabbscale; // xmm0_4
  float distant_shadow_bound; // xmm0_4
  __int64 v13; // rsi
  data::ShadowQuality max_shadow_quality; // ecx
  char v15; // al
  __int64 v16; // rsi
  data::ConfigShadowResolution max_shadow_resolution; // ecx
  char v18; // dl
  int32_t texture_streaming_enable_adjust; // ecx
  char v20; // al
  float texture_streaming_guard_min; // xmm0_4
  __int64 v22; // rsi
  float texture_streaming_guard_max; // xmm0_4
  float texture_streaming_near_protect_distance; // xmm0_4
  __int64 v25; // rsi
  int32_t texture_streaming_near_mip_level_min; // ecx
  char v27; // al
  __int64 v28; // rsi
  int32_t texture_streaming_enable_important_renderer; // ecx
  char v30; // dl
  int32_t texture_streaming_custom_fallback; // ecx
  char v32; // al
  float texture_streaming_fallback_guard; // xmm0_4
  __int64 v34; // rsi
  bool is_json_loaded; // cl
  char v36; // al

  std::vector<unsigned int>::vector(&this->area_idarray, &a2->area_idarray);
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_budget);
  }
  texture_streaming_budget = a2->texture_streaming_budget;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_budget, a2);
  }
  this->texture_streaming_budget = texture_streaming_budget;
  p_streaming_profile_ratio_config_name = &a2->streaming_profile_ratio_config_name;
  std::string::basic_string(&this->streaming_profile_ratio_config_name, &a2->streaming_profile_ratio_config_name);
  if ( *(char *)(((unsigned __int64)&a2->disable_common_preload >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_common_preload, p_streaming_profile_ratio_config_name, &a2->disable_common_preload);
  disable_common_preload = a2->disable_common_preload;
  v5 = *(_BYTE *)(((unsigned __int64)&this->disable_common_preload >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_streaming_profile_ratio_config_name) = v5 != 0;
    __asan_report_store1(
      &this->disable_common_preload,
      p_streaming_profile_ratio_config_name,
      &this->disable_common_preload);
  }
  this->disable_common_preload = disable_common_preload;
  v6 = ((_BYTE)a2 + 65) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->disable_entity_preload_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->disable_entity_preload_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->disable_entity_preload_effect, v6, v7);
  disable_entity_preload_effect = a2->disable_entity_preload_effect;
  v9 = *(_BYTE *)(((unsigned __int64)&this->disable_entity_preload_effect >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->disable_entity_preload_effect, v6, v10);
  this->disable_entity_preload_effect = disable_entity_preload_effect;
  std::vector<data::ConfigGraphicsRequirement>::vector(&this->requirement_array, &a2->requirement_array);
  if ( *(_BYTE *)(((unsigned __int64)&a2->hiz_aabbscale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->hiz_aabbscale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->hiz_aabbscale);
  }
  hiz_aabbscale = a2->hiz_aabbscale;
  if ( *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->hiz_aabbscale, &a2->requirement_array);
  }
  this->hiz_aabbscale = hiz_aabbscale;
  if ( *(_BYTE *)(((unsigned __int64)&a2->distant_shadow_bound >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->distant_shadow_bound >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->distant_shadow_bound);
  }
  distant_shadow_bound = a2->distant_shadow_bound;
  v13 = (((_BYTE)this + 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->distant_shadow_bound, v13);
  }
  this->distant_shadow_bound = distant_shadow_bound;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_shadow_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_shadow_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_shadow_quality);
  }
  max_shadow_quality = a2->max_shadow_quality;
  v15 = *(_BYTE *)(((unsigned __int64)&this->max_shadow_quality >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(&this->max_shadow_quality, v13);
  }
  this->max_shadow_quality = max_shadow_quality;
  v16 = (((_BYTE)a2 + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_shadow_resolution >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_shadow_resolution >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_shadow_resolution);
  }
  max_shadow_resolution = a2->max_shadow_resolution;
  v18 = *(_BYTE *)(((unsigned __int64)&this->max_shadow_resolution >> 3) + 0x7FFF8000);
  if ( v18 != 0 && (char)((((_BYTE)this + 108) & 7) + 3) >= v18 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->max_shadow_resolution, v16);
  }
  this->max_shadow_resolution = max_shadow_resolution;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_enable_adjust);
  }
  texture_streaming_enable_adjust = a2->texture_streaming_enable_adjust;
  v20 = *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_adjust >> 3) + 0x7FFF8000);
  if ( v20 != 0 && v20 <= 3 )
  {
    LOBYTE(v16) = v20 != 0;
    __asan_report_store4(&this->texture_streaming_enable_adjust, v16);
  }
  this->texture_streaming_enable_adjust = texture_streaming_enable_adjust;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_guard_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_guard_min >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->texture_streaming_guard_min);
  }
  texture_streaming_guard_min = a2->texture_streaming_guard_min;
  v22 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_guard_min, v22);
  }
  this->texture_streaming_guard_min = texture_streaming_guard_min;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_guard_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_guard_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_guard_max);
  }
  texture_streaming_guard_max = a2->texture_streaming_guard_max;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->texture_streaming_guard_max, v22);
  }
  this->texture_streaming_guard_max = texture_streaming_guard_max;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_near_protect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_near_protect_distance >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->texture_streaming_near_protect_distance);
  }
  texture_streaming_near_protect_distance = a2->texture_streaming_near_protect_distance;
  v25 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_near_protect_distance, v25);
  }
  this->texture_streaming_near_protect_distance = texture_streaming_near_protect_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_near_mip_level_min);
  }
  texture_streaming_near_mip_level_min = a2->texture_streaming_near_mip_level_min;
  v27 = *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v25) = v27 != 0;
    __asan_report_store4(&this->texture_streaming_near_mip_level_min, v25);
  }
  this->texture_streaming_near_mip_level_min = texture_streaming_near_mip_level_min;
  v28 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enable_important_renderer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_enable_important_renderer >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->texture_streaming_enable_important_renderer);
  }
  texture_streaming_enable_important_renderer = a2->texture_streaming_enable_important_renderer;
  v30 = *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_important_renderer >> 3) + 0x7FFF8000);
  if ( v30 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v30 )
  {
    LOBYTE(v28) = v30 != 0;
    __asan_report_store4(&this->texture_streaming_enable_important_renderer, v28);
  }
  this->texture_streaming_enable_important_renderer = texture_streaming_enable_important_renderer;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->texture_streaming_custom_fallback);
  }
  texture_streaming_custom_fallback = a2->texture_streaming_custom_fallback;
  v32 = *(_BYTE *)(((unsigned __int64)&this->texture_streaming_custom_fallback >> 3) + 0x7FFF8000);
  if ( v32 != 0 && v32 <= 3 )
  {
    LOBYTE(v28) = v32 != 0;
    __asan_report_store4(&this->texture_streaming_custom_fallback, v28);
  }
  this->texture_streaming_custom_fallback = texture_streaming_custom_fallback;
  if ( *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_fallback_guard >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->texture_streaming_fallback_guard >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->texture_streaming_fallback_guard);
  }
  texture_streaming_fallback_guard = a2->texture_streaming_fallback_guard;
  v34 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->texture_streaming_fallback_guard, v34);
  }
  this->texture_streaming_fallback_guard = texture_streaming_fallback_guard;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v34, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v36 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v36 < 0 )
  {
    LOBYTE(v34) = v36 != 0;
    __asan_report_store1(&this->is_json_loaded, v34, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 20: range 000000001217946E-00000000121794A8
void __cdecl data::ConfigRegionPerf::~ConfigRegionPerf(data::ConfigRegionPerf *const this)
{
  std::vector<data::ConfigGraphicsRequirement>::~vector(&this->requirement_array);
  std::string::~string(&this->streaming_profile_ratio_config_name);
  std::vector<unsigned int>::~vector(&this->area_idarray);
};

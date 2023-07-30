// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelMonster.h

// Line 19: range 000000001214AB36-000000001214AC05
void __cdecl data::ConfigLevelMonsterAIPatrol::ConfigLevelMonsterAIPatrol(data::ConfigLevelMonsterAIPatrol *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->ai_patrol_group_id = 0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->ai_patrol_is_leader >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->ai_patrol_is_leader >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->ai_patrol_is_leader, v1, v2);
  this->ai_patrol_is_leader = 0;
  v3 = ((_BYTE)this + 5) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 43: range 000000001214AC06-000000001214B6FD
void __cdecl data::ConfigLevelMonsterUnit::ConfigLevelMonsterUnit(data::ConfigLevelMonsterUnit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rdx
  char v33[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterUnit::ConfigLevelMonsterUnit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->group_id = 0;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->map_inst_id, v5);
  }
  this->map_inst_id = 0;
  if ( *(char *)(((unsigned __int64)&this->spawned_by_evt_pattern >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->spawned_by_evt_pattern, v5, &this->spawned_by_evt_pattern);
  this->spawned_by_evt_pattern = 0;
  v6 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->route_id, v6);
  }
  this->route_id = 0;
  data::ConfigLevelMonsterAIPatrol::ConfigLevelMonsterAIPatrol(&this->ai_patrol_setting);
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ai_group_id, v6);
  }
  this->ai_group_id = 0;
  v7 = ((_BYTE)this + 28) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->override_defend_area_range >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->override_defend_area_range >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->override_defend_area_range, v7, v8);
  this->override_defend_area_range = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->defend_area_range, v7);
  }
  this->defend_area_range = 0.0;
  v9 = ((_BYTE)this + 36) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->override_force_alert_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->override_force_alert_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->override_force_alert_distance, v9, v10);
  this->override_force_alert_distance = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_alert_distance_limit, v9);
  }
  this->force_alert_distance_limit = 45.0;
  v11 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defend_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->defend_area_id, v11);
  }
  this->defend_area_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->wander_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wander_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wander_area_id, v11);
  }
  this->wander_area_id = 0;
  v12 = ((_BYTE)this + 52) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->override_clear_threat_target_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->override_clear_threat_target_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->override_clear_threat_target_distance, v12, v13);
  this->override_clear_threat_target_distance = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_target_distance, v12);
  }
  this->clear_threat_target_distance = 0.0;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->ai_neuron_setting,
    "DefaultSetting",
    (const std::allocator<char> *)(v2 + 48));
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v2 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->ai_sensing_template,
    "DefaultTemplate",
    (const std::allocator<char> *)(v2 + 64));
  std::allocator<char>::~allocator(v2 + 64);
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( *(char *)(((unsigned __int64)&this->force_combat_on_spawn >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->force_combat_on_spawn, "DefaultTemplate", &this->force_combat_on_spawn);
  this->force_combat_on_spawn = 0;
  v14 = ((_BYTE)this - 127) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->disable_wander >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->disable_wander >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->disable_wander, v14, v15);
  this->disable_wander = 0;
  v16 = ((_BYTE)this - 126) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->stand_on_distant_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->stand_on_distant_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->stand_on_distant_mesh, v16, v17);
  this->stand_on_distant_mesh = 0;
  v18 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->landing_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->landing_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->landing_point_id, v18);
  }
  this->landing_point_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extraction_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extraction_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->extraction_point_id, v18);
  }
  this->extraction_point_id = 0;
  v19 = ((_BYTE)this - 116) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->override_use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->override_use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->override_use_navmesh, v19, v20);
  this->override_use_navmesh = 0;
  v21 = ((_BYTE)this - 115) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->use_navmesh, v21, v22);
  this->use_navmesh = 1;
  v23 = ((_BYTE)this - 114) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->override_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->override_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->override_to_the_moon, v23, v24);
  this->override_to_the_moon = 0;
  v25 = ((_BYTE)this - 113) & 7;
  v26 = (*(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v26 )
    __asan_report_store1(&this->use_to_the_moon, v25, v26);
  this->use_to_the_moon = 0;
  if ( *(char *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->billboard__has_uibar, v25, &this->billboard__has_uibar);
  this->billboard__has_uibar = 0;
  v27 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__show_uibar_dis, v27);
  }
  this->billboard__show_uibar_dis = 64.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__hide_uibar_dis, v27);
  }
  this->billboard__hide_uibar_dis = 100.0;
  v28 = ((_BYTE)this - 100) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_store1(&this->billboard__uibar_need_enter_combat, v28, v29);
  this->billboard__uibar_need_enter_combat = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__hp_bar_style, v28);
  }
  this->billboard__hp_bar_style = Auto_0;
  v30 = (((_BYTE)this - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__multi_bar_sort_id, v30);
  }
  this->billboard__multi_bar_sort_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__multi_bar_num, v30);
  }
  this->billboard__multi_bar_num = 0;
  std::string::basic_string(&this->reuse_not_remove_ability_tag);
  if ( *(char *)(((unsigned __int64)&this->has_sneak_indicator >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_sneak_indicator, v30, &this->has_sneak_indicator);
  this->has_sneak_indicator = 0;
  v31 = ((_BYTE)this - 47) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->is_json_loaded, v31, v32);
  this->is_json_loaded = 0;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 43: range 000000001231C9C4-000000001231DA43
void __cdecl data::ConfigLevelMonsterUnit::ConfigLevelMonsterUnit(
        data::ConfigLevelMonsterUnit *const this,
        data::ConfigLevelMonsterUnit *a2)
{
  uint32_t group_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t map_inst_id; // ecx
  char v6; // dl
  bool spawned_by_evt_pattern; // cl
  char v8; // al
  __int64 v9; // rsi
  int32_t route_id; // ecx
  char v11; // dl
  uint32_t ai_group_id; // ecx
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool override_defend_area_range; // cl
  char v17; // dl
  __int64 v18; // rdx
  float defend_area_range; // xmm0_4
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool override_force_alert_distance; // cl
  char v23; // dl
  __int64 v24; // rdx
  float force_alert_distance_limit; // xmm0_4
  __int64 v26; // rsi
  uint32_t defend_area_id; // ecx
  char v28; // dl
  uint32_t wander_area_id; // ecx
  char v30; // al
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool override_clear_threat_target_distance; // cl
  char v34; // dl
  __int64 v35; // rdx
  float clear_threat_target_distance; // xmm0_4
  std::string *p_ai_sensing_template; // rsi
  bool force_combat_on_spawn; // cl
  char v39; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool disable_wander; // cl
  char v43; // dl
  __int64 v44; // rdx
  __int64 v45; // rsi
  __int64 v46; // rdx
  bool stand_on_distant_mesh; // cl
  char v48; // dl
  __int64 v49; // rdx
  __int64 v50; // rsi
  uint32_t landing_point_id; // ecx
  char v52; // dl
  uint32_t extraction_point_id; // ecx
  char v54; // al
  __int64 v55; // rsi
  __int64 v56; // rdx
  bool override_use_navmesh; // cl
  char v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdx
  bool use_navmesh; // cl
  char v63; // dl
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  bool override_to_the_moon; // cl
  char v68; // dl
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rdx
  bool use_to_the_moon; // cl
  char v73; // dl
  __int64 v74; // rdx
  bool billboard__has_uibar; // cl
  char v76; // al
  float billboard__show_uibar_dis; // xmm0_4
  __int64 v78; // rsi
  float billboard__hide_uibar_dis; // xmm0_4
  __int64 v80; // rsi
  __int64 v81; // rdx
  bool billboard__uibar_need_enter_combat; // cl
  char v83; // dl
  __int64 v84; // rdx
  data::HpBarStyle billboard__hp_bar_style; // ecx
  char v86; // al
  __int64 v87; // rsi
  uint32_t billboard__multi_bar_sort_id; // ecx
  char v89; // dl
  uint32_t billboard__multi_bar_num; // ecx
  char v91; // al
  std::string *p_reuse_not_remove_ability_tag; // rsi
  bool has_sneak_indicator; // cl
  char v94; // al
  __int64 v95; // rsi
  __int64 v96; // rdx
  bool is_json_loaded; // cl
  char v98; // dl
  __int64 v99; // rdx
  data::ConfigLevelMonsterUnit *v100; // [rsp+0h] [rbp-10h]

  v100 = a2;
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
  v4 = (((_BYTE)v100 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v100->map_inst_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->map_inst_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->map_inst_id);
  }
  map_inst_id = v100->map_inst_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->map_inst_id, v4);
  this->map_inst_id = map_inst_id;
  if ( *(char *)(((unsigned __int64)&v100->spawned_by_evt_pattern >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v100->spawned_by_evt_pattern, v4, &v100->spawned_by_evt_pattern);
  spawned_by_evt_pattern = v100->spawned_by_evt_pattern;
  v8 = *(_BYTE *)(((unsigned __int64)&this->spawned_by_evt_pattern >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store1(&this->spawned_by_evt_pattern, v4, &this->spawned_by_evt_pattern);
  }
  this->spawned_by_evt_pattern = spawned_by_evt_pattern;
  v9 = (((_BYTE)v100 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v100->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->route_id);
  }
  route_id = v100->route_id;
  v11 = *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v11 != 0;
  if ( v11 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v11 )
    __asan_report_store4(&this->route_id, v9);
  this->route_id = route_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_patrol_setting >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->ai_patrol_setting, v9);
  if ( *(_BYTE *)(((unsigned __int64)&v100->ai_patrol_setting >> 3) + 0x7FFF8000) )
    __asan_report_load8(&v100->ai_patrol_setting);
  this->ai_patrol_setting = v100->ai_patrol_setting;
  if ( *(_BYTE *)(((unsigned __int64)&v100->ai_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->ai_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->ai_group_id);
  }
  ai_group_id = v100->ai_group_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->ai_group_id >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->ai_group_id, v9);
  }
  this->ai_group_id = ai_group_id;
  v14 = ((_BYTE)v100 + 28) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&v100->override_defend_area_range >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&v100->override_defend_area_range >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&v100->override_defend_area_range, v14, v15);
  override_defend_area_range = v100->override_defend_area_range;
  v17 = *(_BYTE *)(((unsigned __int64)&this->override_defend_area_range >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->override_defend_area_range, v14, v18);
  this->override_defend_area_range = override_defend_area_range;
  if ( *(_BYTE *)(((unsigned __int64)&v100->defend_area_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->defend_area_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->defend_area_range);
  }
  defend_area_range = v100->defend_area_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->defend_area_range, v14);
  }
  this->defend_area_range = defend_area_range;
  v20 = ((_BYTE)v100 + 36) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&v100->override_force_alert_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&v100->override_force_alert_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&v100->override_force_alert_distance, v20, v21);
  override_force_alert_distance = v100->override_force_alert_distance;
  v23 = *(_BYTE *)(((unsigned __int64)&this->override_force_alert_distance >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->override_force_alert_distance, v20, v24);
  this->override_force_alert_distance = override_force_alert_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v100->force_alert_distance_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->force_alert_distance_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->force_alert_distance_limit);
  }
  force_alert_distance_limit = v100->force_alert_distance_limit;
  if ( *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_alert_distance_limit, v20);
  }
  this->force_alert_distance_limit = force_alert_distance_limit;
  v26 = (((_BYTE)v100 + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v100->defend_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->defend_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->defend_area_id);
  }
  defend_area_id = v100->defend_area_id;
  v28 = *(_BYTE *)(((unsigned __int64)&this->defend_area_id >> 3) + 0x7FFF8000);
  if ( v28 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v28 )
  {
    LOBYTE(v26) = v28 != 0;
    __asan_report_store4(&this->defend_area_id, v26);
  }
  this->defend_area_id = defend_area_id;
  if ( *(_BYTE *)(((unsigned __int64)&v100->wander_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->wander_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->wander_area_id);
  }
  wander_area_id = v100->wander_area_id;
  v30 = *(_BYTE *)(((unsigned __int64)&this->wander_area_id >> 3) + 0x7FFF8000);
  if ( v30 != 0 && v30 <= 3 )
  {
    LOBYTE(v26) = v30 != 0;
    __asan_report_store4(&this->wander_area_id, v26);
  }
  this->wander_area_id = wander_area_id;
  v31 = ((_BYTE)v100 + 52) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&v100->override_clear_threat_target_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&v100->override_clear_threat_target_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&v100->override_clear_threat_target_distance, v31, v32);
  override_clear_threat_target_distance = v100->override_clear_threat_target_distance;
  v34 = *(_BYTE *)(((unsigned __int64)&this->override_clear_threat_target_distance >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->override_clear_threat_target_distance, v31, v35);
  this->override_clear_threat_target_distance = override_clear_threat_target_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v100->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->clear_threat_target_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->clear_threat_target_distance);
  }
  clear_threat_target_distance = v100->clear_threat_target_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->clear_threat_target_distance, v31);
  }
  this->clear_threat_target_distance = clear_threat_target_distance;
  std::string::basic_string(&this->ai_neuron_setting, &v100->ai_neuron_setting);
  p_ai_sensing_template = &v100->ai_sensing_template;
  std::string::basic_string(&this->ai_sensing_template, &v100->ai_sensing_template);
  if ( *(char *)(((unsigned __int64)&v100->force_combat_on_spawn >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v100->force_combat_on_spawn, p_ai_sensing_template, &v100->force_combat_on_spawn);
  force_combat_on_spawn = v100->force_combat_on_spawn;
  v39 = *(_BYTE *)(((unsigned __int64)&this->force_combat_on_spawn >> 3) + 0x7FFF8000);
  if ( v39 < 0 )
  {
    LOBYTE(p_ai_sensing_template) = v39 != 0;
    __asan_report_store1(&this->force_combat_on_spawn, p_ai_sensing_template, &this->force_combat_on_spawn);
  }
  this->force_combat_on_spawn = force_combat_on_spawn;
  v40 = ((_BYTE)v100 - 127) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&v100->disable_wander >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&v100->disable_wander >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&v100->disable_wander, v40, v41);
  disable_wander = v100->disable_wander;
  v43 = *(_BYTE *)(((unsigned __int64)&this->disable_wander >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this - 127) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->disable_wander, v40, v44);
  this->disable_wander = disable_wander;
  v45 = ((_BYTE)v100 - 126) & 7;
  v46 = (*(_BYTE *)(((unsigned __int64)&v100->stand_on_distant_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v45 >= *(_BYTE *)(((unsigned __int64)&v100->stand_on_distant_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v46 )
    __asan_report_load1(&v100->stand_on_distant_mesh, v45, v46);
  stand_on_distant_mesh = v100->stand_on_distant_mesh;
  v48 = *(_BYTE *)(((unsigned __int64)&this->stand_on_distant_mesh >> 3) + 0x7FFF8000);
  LOBYTE(v45) = v48 != 0;
  v49 = (v48 != 0) & (unsigned __int8)((((unsigned __int8)this - 126) & 7) >= v48);
  if ( (_BYTE)v49 )
    __asan_report_store1(&this->stand_on_distant_mesh, v45, v49);
  this->stand_on_distant_mesh = stand_on_distant_mesh;
  v50 = (((_BYTE)v100 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v100->landing_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->landing_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->landing_point_id);
  }
  landing_point_id = v100->landing_point_id;
  v52 = *(_BYTE *)(((unsigned __int64)&this->landing_point_id >> 3) + 0x7FFF8000);
  if ( v52 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v52 )
  {
    LOBYTE(v50) = v52 != 0;
    __asan_report_store4(&this->landing_point_id, v50);
  }
  this->landing_point_id = landing_point_id;
  if ( *(_BYTE *)(((unsigned __int64)&v100->extraction_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->extraction_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->extraction_point_id);
  }
  extraction_point_id = v100->extraction_point_id;
  v54 = *(_BYTE *)(((unsigned __int64)&this->extraction_point_id >> 3) + 0x7FFF8000);
  if ( v54 != 0 && v54 <= 3 )
  {
    LOBYTE(v50) = v54 != 0;
    __asan_report_store4(&this->extraction_point_id, v50);
  }
  this->extraction_point_id = extraction_point_id;
  v55 = ((_BYTE)v100 - 116) & 7;
  v56 = (*(_BYTE *)(((unsigned __int64)&v100->override_use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v55 >= *(_BYTE *)(((unsigned __int64)&v100->override_use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v56 )
    __asan_report_load1(&v100->override_use_navmesh, v55, v56);
  override_use_navmesh = v100->override_use_navmesh;
  v58 = *(_BYTE *)(((unsigned __int64)&this->override_use_navmesh >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v58 != 0;
  v59 = (v58 != 0) & (unsigned __int8)((((unsigned __int8)this - 116) & 7) >= v58);
  if ( (_BYTE)v59 )
    __asan_report_store1(&this->override_use_navmesh, v55, v59);
  this->override_use_navmesh = override_use_navmesh;
  v60 = ((_BYTE)v100 - 115) & 7;
  v61 = (*(_BYTE *)(((unsigned __int64)&v100->use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v60 >= *(_BYTE *)(((unsigned __int64)&v100->use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v61 )
    __asan_report_load1(&v100->use_navmesh, v60, v61);
  use_navmesh = v100->use_navmesh;
  v63 = *(_BYTE *)(((unsigned __int64)&this->use_navmesh >> 3) + 0x7FFF8000);
  LOBYTE(v60) = v63 != 0;
  v64 = (v63 != 0) & (unsigned __int8)((((unsigned __int8)this - 115) & 7) >= v63);
  if ( (_BYTE)v64 )
    __asan_report_store1(&this->use_navmesh, v60, v64);
  this->use_navmesh = use_navmesh;
  v65 = ((_BYTE)v100 - 114) & 7;
  v66 = (*(_BYTE *)(((unsigned __int64)&v100->override_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v65 >= *(_BYTE *)(((unsigned __int64)&v100->override_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v66 )
    __asan_report_load1(&v100->override_to_the_moon, v65, v66);
  override_to_the_moon = v100->override_to_the_moon;
  v68 = *(_BYTE *)(((unsigned __int64)&this->override_to_the_moon >> 3) + 0x7FFF8000);
  LOBYTE(v65) = v68 != 0;
  v69 = (v68 != 0) & (unsigned __int8)((((unsigned __int8)this - 114) & 7) >= v68);
  if ( (_BYTE)v69 )
    __asan_report_store1(&this->override_to_the_moon, v65, v69);
  this->override_to_the_moon = override_to_the_moon;
  v70 = ((_BYTE)v100 - 113) & 7;
  v71 = (*(_BYTE *)(((unsigned __int64)&v100->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v70 >= *(_BYTE *)(((unsigned __int64)&v100->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v71 )
    __asan_report_load1(&v100->use_to_the_moon, v70, v71);
  use_to_the_moon = v100->use_to_the_moon;
  v73 = *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000);
  LOBYTE(v70) = v73 != 0;
  v74 = (v73 != 0) & (unsigned __int8)((((unsigned __int8)this - 113) & 7) >= v73);
  if ( (_BYTE)v74 )
    __asan_report_store1(&this->use_to_the_moon, v70, v74);
  this->use_to_the_moon = use_to_the_moon;
  if ( *(char *)(((unsigned __int64)&v100->billboard__has_uibar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v100->billboard__has_uibar, v70, &v100->billboard__has_uibar);
  billboard__has_uibar = v100->billboard__has_uibar;
  v76 = *(_BYTE *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000);
  if ( v76 < 0 )
  {
    LOBYTE(v70) = v76 != 0;
    __asan_report_store1(&this->billboard__has_uibar, v70, &this->billboard__has_uibar);
  }
  this->billboard__has_uibar = billboard__has_uibar;
  if ( *(_BYTE *)(((unsigned __int64)&v100->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->billboard__show_uibar_dis >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->billboard__show_uibar_dis);
  }
  billboard__show_uibar_dis = v100->billboard__show_uibar_dis;
  v78 = (((_BYTE)this - 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->billboard__show_uibar_dis, v78);
  }
  this->billboard__show_uibar_dis = billboard__show_uibar_dis;
  if ( *(_BYTE *)(((unsigned __int64)&v100->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->billboard__hide_uibar_dis);
  }
  billboard__hide_uibar_dis = v100->billboard__hide_uibar_dis;
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->billboard__hide_uibar_dis, v78);
  }
  this->billboard__hide_uibar_dis = billboard__hide_uibar_dis;
  v80 = ((_BYTE)v100 - 100) & 7;
  v81 = (*(_BYTE *)(((unsigned __int64)&v100->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v80 >= *(_BYTE *)(((unsigned __int64)&v100->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v81 )
    __asan_report_load1(&v100->billboard__uibar_need_enter_combat, v80, v81);
  billboard__uibar_need_enter_combat = v100->billboard__uibar_need_enter_combat;
  v83 = *(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000);
  LOBYTE(v80) = v83 != 0;
  v84 = (v83 != 0) & (unsigned __int8)((((unsigned __int8)this - 100) & 7) >= v83);
  if ( (_BYTE)v84 )
    __asan_report_store1(&this->billboard__uibar_need_enter_combat, v80, v84);
  this->billboard__uibar_need_enter_combat = billboard__uibar_need_enter_combat;
  if ( *(_BYTE *)(((unsigned __int64)&v100->billboard__hp_bar_style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->billboard__hp_bar_style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->billboard__hp_bar_style);
  }
  billboard__hp_bar_style = v100->billboard__hp_bar_style;
  v86 = *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000);
  if ( v86 != 0 && v86 <= 3 )
  {
    LOBYTE(v80) = v86 != 0;
    __asan_report_store4(&this->billboard__hp_bar_style, v80);
  }
  this->billboard__hp_bar_style = billboard__hp_bar_style;
  v87 = (((_BYTE)v100 - 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v100->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v100 - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v100->billboard__multi_bar_sort_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&v100->billboard__multi_bar_sort_id);
  }
  billboard__multi_bar_sort_id = v100->billboard__multi_bar_sort_id;
  v89 = *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000);
  if ( v89 != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= v89 )
  {
    LOBYTE(v87) = v89 != 0;
    __asan_report_store4(&this->billboard__multi_bar_sort_id, v87);
  }
  this->billboard__multi_bar_sort_id = billboard__multi_bar_sort_id;
  if ( *(_BYTE *)(((unsigned __int64)&v100->billboard__multi_bar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v100->billboard__multi_bar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v100->billboard__multi_bar_num);
  }
  billboard__multi_bar_num = v100->billboard__multi_bar_num;
  v91 = *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000);
  if ( v91 != 0 && v91 <= 3 )
  {
    LOBYTE(v87) = v91 != 0;
    __asan_report_store4(&this->billboard__multi_bar_num, v87);
  }
  this->billboard__multi_bar_num = billboard__multi_bar_num;
  p_reuse_not_remove_ability_tag = &v100->reuse_not_remove_ability_tag;
  std::string::basic_string(&this->reuse_not_remove_ability_tag, &v100->reuse_not_remove_ability_tag);
  if ( *(char *)(((unsigned __int64)&v100->has_sneak_indicator >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v100->has_sneak_indicator, p_reuse_not_remove_ability_tag, &v100->has_sneak_indicator);
  has_sneak_indicator = v100->has_sneak_indicator;
  v94 = *(_BYTE *)(((unsigned __int64)&this->has_sneak_indicator >> 3) + 0x7FFF8000);
  if ( v94 < 0 )
  {
    LOBYTE(p_reuse_not_remove_ability_tag) = v94 != 0;
    __asan_report_store1(&this->has_sneak_indicator, p_reuse_not_remove_ability_tag, &this->has_sneak_indicator);
  }
  this->has_sneak_indicator = has_sneak_indicator;
  v95 = ((_BYTE)v100 - 47) & 7;
  v96 = (*(_BYTE *)(((unsigned __int64)&v100->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v95 >= *(_BYTE *)(((unsigned __int64)&v100->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v96 )
    __asan_report_load1(&v100->is_json_loaded, v95, v96);
  is_json_loaded = v100->is_json_loaded;
  v98 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v95) = v98 != 0;
  v99 = (v98 != 0) & (unsigned __int8)((((unsigned __int8)this - 47) & 7) >= v98);
  if ( (_BYTE)v99 )
    __asan_report_store1(&this->is_json_loaded, v95, v99);
  this->is_json_loaded = is_json_loaded;
};

// Line 43: range 000000001214B6FE-000000001214B73E
void __cdecl data::ConfigLevelMonsterUnit::~ConfigLevelMonsterUnit(data::ConfigLevelMonsterUnit *const this)
{
  std::string::~string(&this->reuse_not_remove_ability_tag);
  std::string::~string(&this->ai_sensing_template);
  std::string::~string(&this->ai_neuron_setting);
};

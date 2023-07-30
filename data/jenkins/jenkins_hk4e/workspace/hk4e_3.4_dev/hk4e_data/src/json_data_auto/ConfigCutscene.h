// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCutscene.h

// Line 54: range 000000000DEFD800-000000000DEFD8DC
void __cdecl data::ConfigCutscenePreTask::ConfigCutscenePreTask(data::ConfigCutscenePreTask *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->duration = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_day_time, v2);
  }
  this->target_day_time = 0.0;
  std::string::basic_string(&this->target_weather);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 54: range 0000000013D941C6-0000000013D9435F
void __cdecl data::ConfigCutscenePreTask::ConfigCutscenePreTask(
        data::ConfigCutscenePreTask *const this,
        const data::ConfigCutscenePreTask *a2)
{
  float duration; // xmm0_4
  float target_day_time; // xmm0_4
  std::string *p_target_weather; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  duration = a2->duration;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->duration = duration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_day_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->target_day_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->target_day_time);
  }
  target_day_time = a2->target_day_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->target_day_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->target_day_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->target_day_time = target_day_time;
  p_target_weather = &a2->target_weather;
  std::string::basic_string(&this->target_weather, &a2->target_weather);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_target_weather, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_target_weather) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_target_weather, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 54: range 0000000013D94360-0000000013D9437E
void __cdecl data::ConfigCutscenePreTask::~ConfigCutscenePreTask(data::ConfigCutscenePreTask *const this)
{
  std::string::~string(&this->target_weather);
};

// Line 79: range 000000000DEFD8DE-000000000DEFE07D
void __cdecl data::ConfigBaseCutscene::ConfigBaseCutscene(data::ConfigBaseCutscene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rdx

  std::enable_shared_from_this<data::ConfigBaseCutscene>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseCutscene>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseCutscene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseCutscene = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = NONE_24;
  data::ConfigCutscenePreTask::ConfigCutscenePreTask(&this->pre_task_cfg);
  if ( *(char *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_skip, v1, &this->can_skip);
  this->can_skip = 1;
  v3 = ((_BYTE)this + 81) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->can_skip_if_played, v3, v4);
  this->can_skip_if_played = 0;
  v5 = ((_BYTE)this + 82) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->force_can_skip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->force_can_skip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->force_can_skip, v5, v6);
  this->force_can_skip = 0;
  v7 = ((_BYTE)this + 83) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->skip_general_dialog >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->skip_general_dialog >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->skip_general_dialog, v7, v8);
  this->skip_general_dialog = 0;
  v9 = ((_BYTE)this + 84) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->can >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->can >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->can, v9, v10);
  this->can = 0;
  v11 = ((_BYTE)this + 85) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->clear_black_screen >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->clear_black_screen >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->clear_black_screen, v11, v12);
  this->clear_black_screen = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_when_finish, v11);
  }
  this->fade_out_when_finish = 0.0;
  v13 = ((_BYTE)this + 92) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->direct_transmit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->direct_transmit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->direct_transmit, v13, v14);
  this->direct_transmit = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_transmit, v13);
  }
  this->delay_transmit = 0.0;
  std::string::basic_string(&this->lua_data_path);
  std::string::basic_string(&this->res_path);
  std::string::basic_string(&this->cast_list_path);
  std::string::basic_string(&this->entity_ban);
  if ( *(char *)(((unsigned __int64)&this->ban_gadget_effect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ban_gadget_effect, v13, &this->ban_gadget_effect);
  this->ban_gadget_effect = 0;
  v15 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_pos_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_pos_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_pos_type, v15);
  }
  this->start_pos_type = FREE_1;
  data::Vector::Vector(&this->start_offset);
  if ( *(char *)(((unsigned __int64)&this->need_xzeuler >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->need_xzeuler, v15, &this->need_xzeuler);
  this->need_xzeuler = 0;
  v16 = ((_BYTE)this + 1) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->need_yeuler >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->need_yeuler >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->need_yeuler, v16, v17);
  this->need_yeuler = 0;
  v18 = ((_BYTE)this + 2) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->keep_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->keep_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->keep_camera, v18, v19);
  this->keep_camera = 0;
  v20 = ((_BYTE)this + 3) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->use_target_pos, v20, v21);
  this->use_target_pos = 0;
  data::Vector::Vector(&this->target_pos);
  v22 = ((_BYTE)this + 20) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->modify_last_pose_offset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->modify_last_pose_offset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->modify_last_pose_offset, v22, v23);
  this->modify_last_pose_offset = 0;
  v24 = ((_BYTE)this + 21) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->attack_mode_recover >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->attack_mode_recover >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->attack_mode_recover, v24, v25);
  this->attack_mode_recover = 1;
  std::vector<int>::vector(&this->crowd_lod0_list);
  if ( *(char *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_camera_displacement, v24, &this->enable_camera_displacement);
  this->enable_camera_displacement = 0;
  v26 = (((_BYTE)this + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->entity_runtime_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entity_runtime_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->entity_runtime_id, v26);
  }
  this->entity_runtime_id = 0;
  if ( *(char *)(((unsigned __int64)&this->clear_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->clear_avatar_local_gadget, v26, &this->clear_avatar_local_gadget);
  this->clear_avatar_local_gadget = 0;
  v27 = ((_BYTE)this + 57) & 7;
  v28 = (*(_BYTE *)(((unsigned __int64)&this->disable_gpuculling >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v27 >= *(_BYTE *)(((unsigned __int64)&this->disable_gpuculling >> 3) + 0x7FFF8000));
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->disable_gpuculling, v27, v28);
  this->disable_gpuculling = 0;
  v29 = ((_BYTE)this + 58) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->can_player_loop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->can_player_loop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->can_player_loop, v29, v30);
  this->can_player_loop = 0;
  v31 = (((_BYTE)this + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->main_quest_id, v31);
  }
  this->main_quest_id = 0;
  if ( *(char *)(((unsigned __int64)&this->disable_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_avatar_local_gadget, v31, &this->disable_avatar_local_gadget);
  this->disable_avatar_local_gadget = 1;
  v32 = ((_BYTE)this + 65) & 7;
  v33 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v32 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->is_json_loaded, v32, v33);
  this->is_json_loaded = 0;
};

// Line 79: range 000000001428573C-00000000142867BD
void __cdecl data::ConfigBaseCutscene::ConfigBaseCutscene(
        data::ConfigBaseCutscene *const this,
        const data::ConfigBaseCutscene *a2)
{
  std::enable_shared_from_this<data::ConfigBaseCutscene> *v2; // rsi
  int (**v3)(...); // rdx
  data::CutsceneType type; // ecx
  char v5; // al
  data::ConfigCutscenePreTask *p_pre_task_cfg; // rsi
  bool can_skip; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool can_skip_if_played; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool force_can_skip; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool skip_general_dialog; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool can; // cl
  char v27; // dl
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  bool clear_black_screen; // cl
  char v32; // dl
  __int64 v33; // rdx
  float fade_out_when_finish; // xmm0_4
  __int64 v35; // rsi
  __int64 v36; // rdx
  bool direct_transmit; // cl
  char v38; // dl
  __int64 v39; // rdx
  float delay_transmit; // xmm0_4
  std::string *p_entity_ban; // rsi
  bool ban_gadget_effect; // cl
  char v43; // al
  __int64 v44; // rsi
  data::CutsceneInitPosType start_pos_type; // ecx
  char v46; // dl
  __int64 v47; // rdx
  bool need_xzeuler; // cl
  char v49; // al
  __int64 v50; // rsi
  __int64 v51; // rdx
  bool need_yeuler; // cl
  char v53; // dl
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // rdx
  bool keep_camera; // cl
  char v58; // dl
  __int64 v59; // rdx
  __int64 v60; // rsi
  __int64 v61; // rdx
  bool use_target_pos; // cl
  char v63; // dl
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rdx
  bool modify_last_pose_offset; // cl
  char v69; // dl
  __int64 v70; // rdx
  __int64 v71; // rsi
  __int64 v72; // rdx
  bool attack_mode_recover; // cl
  char v74; // dl
  __int64 v75; // rdx
  data::Int32Array *p_crowd_lod0_list; // rsi
  bool enable_camera_displacement; // cl
  char v78; // al
  __int64 v79; // rsi
  uint32_t entity_runtime_id; // ecx
  char v81; // dl
  bool clear_avatar_local_gadget; // cl
  char v83; // al
  __int64 v84; // rsi
  __int64 v85; // rdx
  bool disable_gpuculling; // cl
  char v87; // dl
  __int64 v88; // rdx
  __int64 v89; // rsi
  __int64 v90; // rdx
  bool can_player_loop; // cl
  char v92; // dl
  __int64 v93; // rdx
  __int64 v94; // rsi
  uint32_t main_quest_id; // ecx
  char v96; // dl
  bool disable_avatar_local_gadget; // cl
  char v98; // al
  __int64 v99; // rsi
  __int64 v100; // rdx
  bool is_json_loaded; // cl
  char v102; // dl
  __int64 v103; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigBaseCutscene>;
  std::enable_shared_from_this<data::ConfigBaseCutscene>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigBaseCutscene>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigBaseCutscene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigBaseCutscene = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->type, v2);
  }
  this->type = type;
  p_pre_task_cfg = &a2->pre_task_cfg;
  data::ConfigCutscenePreTask::ConfigCutscenePreTask(&this->pre_task_cfg, &a2->pre_task_cfg);
  if ( *(char *)(((unsigned __int64)&a2->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_skip, p_pre_task_cfg, &a2->can_skip);
  can_skip = a2->can_skip;
  v8 = *(_BYTE *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_pre_task_cfg) = v8 != 0;
    __asan_report_store1(&this->can_skip, p_pre_task_cfg, &this->can_skip);
  }
  this->can_skip = can_skip;
  v9 = ((_BYTE)a2 + 81) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->can_skip_if_played, v9, v10);
  can_skip_if_played = a2->can_skip_if_played;
  v12 = *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->can_skip_if_played, v9, v13);
  this->can_skip_if_played = can_skip_if_played;
  v14 = ((_BYTE)a2 + 82) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->force_can_skip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->force_can_skip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->force_can_skip, v14, v15);
  force_can_skip = a2->force_can_skip;
  v17 = *(_BYTE *)(((unsigned __int64)&this->force_can_skip >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 82) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->force_can_skip, v14, v18);
  this->force_can_skip = force_can_skip;
  v19 = ((_BYTE)a2 + 83) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&a2->skip_general_dialog >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&a2->skip_general_dialog >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&a2->skip_general_dialog, v19, v20);
  skip_general_dialog = a2->skip_general_dialog;
  v22 = *(_BYTE *)(((unsigned __int64)&this->skip_general_dialog >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this + 83) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->skip_general_dialog, v19, v23);
  this->skip_general_dialog = skip_general_dialog;
  v24 = ((_BYTE)a2 + 84) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&a2->can >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&a2->can >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&a2->can, v24, v25);
  can = a2->can;
  v27 = *(_BYTE *)(((unsigned __int64)&this->can >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this + 84) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->can, v24, v28);
  this->can = can;
  v29 = ((_BYTE)a2 + 85) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&a2->clear_black_screen >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&a2->clear_black_screen >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_load1(&a2->clear_black_screen, v29, v30);
  clear_black_screen = a2->clear_black_screen;
  v32 = *(_BYTE *)(((unsigned __int64)&this->clear_black_screen >> 3) + 0x7FFF8000);
  LOBYTE(v29) = v32 != 0;
  v33 = (v32 != 0) & (unsigned __int8)((((unsigned __int8)this + 85) & 7) >= v32);
  if ( (_BYTE)v33 )
    __asan_report_store1(&this->clear_black_screen, v29, v33);
  this->clear_black_screen = clear_black_screen;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_out_when_finish >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fade_out_when_finish >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fade_out_when_finish);
  }
  fade_out_when_finish = a2->fade_out_when_finish;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_when_finish >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_when_finish, v29);
  }
  this->fade_out_when_finish = fade_out_when_finish;
  v35 = ((_BYTE)a2 + 92) & 7;
  v36 = (*(_BYTE *)(((unsigned __int64)&a2->direct_transmit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v35 >= *(_BYTE *)(((unsigned __int64)&a2->direct_transmit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v36 )
    __asan_report_load1(&a2->direct_transmit, v35, v36);
  direct_transmit = a2->direct_transmit;
  v38 = *(_BYTE *)(((unsigned __int64)&this->direct_transmit >> 3) + 0x7FFF8000);
  LOBYTE(v35) = v38 != 0;
  v39 = (v38 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v38);
  if ( (_BYTE)v39 )
    __asan_report_store1(&this->direct_transmit, v35, v39);
  this->direct_transmit = direct_transmit;
  if ( *(_BYTE *)(((unsigned __int64)&a2->delay_transmit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->delay_transmit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->delay_transmit);
  }
  delay_transmit = a2->delay_transmit;
  if ( *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->delay_transmit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->delay_transmit, v35);
  }
  this->delay_transmit = delay_transmit;
  std::string::basic_string(&this->lua_data_path, &a2->lua_data_path);
  std::string::basic_string(&this->res_path, &a2->res_path);
  std::string::basic_string(&this->cast_list_path, &a2->cast_list_path);
  p_entity_ban = &a2->entity_ban;
  std::string::basic_string(&this->entity_ban, &a2->entity_ban);
  if ( *(char *)(((unsigned __int64)&a2->ban_gadget_effect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->ban_gadget_effect, p_entity_ban, &a2->ban_gadget_effect);
  ban_gadget_effect = a2->ban_gadget_effect;
  v43 = *(_BYTE *)(((unsigned __int64)&this->ban_gadget_effect >> 3) + 0x7FFF8000);
  if ( v43 < 0 )
  {
    LOBYTE(p_entity_ban) = v43 != 0;
    __asan_report_store1(&this->ban_gadget_effect, p_entity_ban, &this->ban_gadget_effect);
  }
  this->ban_gadget_effect = ban_gadget_effect;
  v44 = (((_BYTE)a2 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->start_pos_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->start_pos_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->start_pos_type);
  }
  start_pos_type = a2->start_pos_type;
  v46 = *(_BYTE *)(((unsigned __int64)&this->start_pos_type >> 3) + 0x7FFF8000);
  LOBYTE(v44) = v46 != 0;
  if ( v46 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v46 )
    __asan_report_store4(&this->start_pos_type, v44);
  this->start_pos_type = start_pos_type;
  if ( *(_WORD *)(((unsigned __int64)&this->start_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->start_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->start_offset);
  v47 = *(_QWORD *)&a2->start_offset.z;
  *(_QWORD *)&this->start_offset.x = *(_QWORD *)&a2->start_offset.x;
  *(_QWORD *)&this->start_offset.z = v47;
  if ( *(char *)(((unsigned __int64)&a2->need_xzeuler >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->need_xzeuler, v44, &a2->need_xzeuler);
  need_xzeuler = a2->need_xzeuler;
  v49 = *(_BYTE *)(((unsigned __int64)&this->need_xzeuler >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(v44) = v49 != 0;
    __asan_report_store1(&this->need_xzeuler, v44, &this->need_xzeuler);
  }
  this->need_xzeuler = need_xzeuler;
  v50 = ((_BYTE)a2 + 1) & 7;
  v51 = (*(_BYTE *)(((unsigned __int64)&a2->need_yeuler >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v50 >= *(_BYTE *)(((unsigned __int64)&a2->need_yeuler >> 3) + 0x7FFF8000));
  if ( (_BYTE)v51 )
    __asan_report_load1(&a2->need_yeuler, v50, v51);
  need_yeuler = a2->need_yeuler;
  v53 = *(_BYTE *)(((unsigned __int64)&this->need_yeuler >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v53 != 0;
  v54 = (v53 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v53);
  if ( (_BYTE)v54 )
    __asan_report_store1(&this->need_yeuler, v50, v54);
  this->need_yeuler = need_yeuler;
  v55 = ((_BYTE)a2 + 2) & 7;
  v56 = (*(_BYTE *)(((unsigned __int64)&a2->keep_camera >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v55 >= *(_BYTE *)(((unsigned __int64)&a2->keep_camera >> 3) + 0x7FFF8000));
  if ( (_BYTE)v56 )
    __asan_report_load1(&a2->keep_camera, v55, v56);
  keep_camera = a2->keep_camera;
  v58 = *(_BYTE *)(((unsigned __int64)&this->keep_camera >> 3) + 0x7FFF8000);
  LOBYTE(v55) = v58 != 0;
  v59 = (v58 != 0) & (unsigned __int8)((((unsigned __int8)this + 2) & 7) >= v58);
  if ( (_BYTE)v59 )
    __asan_report_store1(&this->keep_camera, v55, v59);
  this->keep_camera = keep_camera;
  v60 = ((_BYTE)a2 + 3) & 7;
  v61 = (*(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v60 >= *(_BYTE *)(((unsigned __int64)&a2->use_target_pos >> 3) + 0x7FFF8000));
  if ( (_BYTE)v61 )
    __asan_report_load1(&a2->use_target_pos, v60, v61);
  use_target_pos = a2->use_target_pos;
  v63 = *(_BYTE *)(((unsigned __int64)&this->use_target_pos >> 3) + 0x7FFF8000);
  LOBYTE(v60) = v63 != 0;
  v64 = (v63 != 0) & (unsigned __int8)((((unsigned __int8)this + 3) & 7) >= v63);
  if ( (_BYTE)v64 )
    __asan_report_store1(&this->use_target_pos, v60, v64);
  this->use_target_pos = use_target_pos;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->target_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->target_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->target_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->target_pos.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->target_pos, 16LL);
  }
  if ( (((unsigned __int8)a2 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->target_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->target_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->target_pos.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->target_pos.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->target_pos, 16LL);
  }
  v65 = *(_QWORD *)&a2->target_pos.z;
  *(_QWORD *)&this->target_pos.x = *(_QWORD *)&a2->target_pos.x;
  *(_QWORD *)&this->target_pos.z = v65;
  v66 = ((_BYTE)a2 + 20) & 7;
  v67 = (*(_BYTE *)(((unsigned __int64)&a2->modify_last_pose_offset >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v66 >= *(_BYTE *)(((unsigned __int64)&a2->modify_last_pose_offset >> 3) + 0x7FFF8000));
  if ( (_BYTE)v67 )
    __asan_report_load1(&a2->modify_last_pose_offset, v66, v67);
  modify_last_pose_offset = a2->modify_last_pose_offset;
  v69 = *(_BYTE *)(((unsigned __int64)&this->modify_last_pose_offset >> 3) + 0x7FFF8000);
  LOBYTE(v66) = v69 != 0;
  v70 = (v69 != 0) & (unsigned __int8)((((unsigned __int8)this + 20) & 7) >= v69);
  if ( (_BYTE)v70 )
    __asan_report_store1(&this->modify_last_pose_offset, v66, v70);
  this->modify_last_pose_offset = modify_last_pose_offset;
  v71 = ((_BYTE)a2 + 21) & 7;
  v72 = (*(_BYTE *)(((unsigned __int64)&a2->attack_mode_recover >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v71 >= *(_BYTE *)(((unsigned __int64)&a2->attack_mode_recover >> 3) + 0x7FFF8000));
  if ( (_BYTE)v72 )
    __asan_report_load1(&a2->attack_mode_recover, v71, v72);
  attack_mode_recover = a2->attack_mode_recover;
  v74 = *(_BYTE *)(((unsigned __int64)&this->attack_mode_recover >> 3) + 0x7FFF8000);
  LOBYTE(v71) = v74 != 0;
  v75 = (v74 != 0) & (unsigned __int8)((((unsigned __int8)this + 21) & 7) >= v74);
  if ( (_BYTE)v75 )
    __asan_report_store1(&this->attack_mode_recover, v71, v75);
  this->attack_mode_recover = attack_mode_recover;
  p_crowd_lod0_list = &a2->crowd_lod0_list;
  std::vector<int>::vector(&this->crowd_lod0_list, &a2->crowd_lod0_list);
  if ( *(char *)(((unsigned __int64)&a2->enable_camera_displacement >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_camera_displacement, p_crowd_lod0_list, &a2->enable_camera_displacement);
  enable_camera_displacement = a2->enable_camera_displacement;
  v78 = *(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000);
  if ( v78 < 0 )
  {
    LOBYTE(p_crowd_lod0_list) = v78 != 0;
    __asan_report_store1(&this->enable_camera_displacement, p_crowd_lod0_list, &this->enable_camera_displacement);
  }
  this->enable_camera_displacement = enable_camera_displacement;
  v79 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->entity_runtime_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->entity_runtime_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->entity_runtime_id);
  }
  entity_runtime_id = a2->entity_runtime_id;
  v81 = *(_BYTE *)(((unsigned __int64)&this->entity_runtime_id >> 3) + 0x7FFF8000);
  LOBYTE(v79) = v81 != 0;
  if ( v81 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v81 )
    __asan_report_store4(&this->entity_runtime_id, v79);
  this->entity_runtime_id = entity_runtime_id;
  if ( *(char *)(((unsigned __int64)&a2->clear_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->clear_avatar_local_gadget, v79, &a2->clear_avatar_local_gadget);
  clear_avatar_local_gadget = a2->clear_avatar_local_gadget;
  v83 = *(_BYTE *)(((unsigned __int64)&this->clear_avatar_local_gadget >> 3) + 0x7FFF8000);
  if ( v83 < 0 )
  {
    LOBYTE(v79) = v83 != 0;
    __asan_report_store1(&this->clear_avatar_local_gadget, v79, &this->clear_avatar_local_gadget);
  }
  this->clear_avatar_local_gadget = clear_avatar_local_gadget;
  v84 = ((_BYTE)a2 + 57) & 7;
  v85 = (*(_BYTE *)(((unsigned __int64)&a2->disable_gpuculling >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v84 >= *(_BYTE *)(((unsigned __int64)&a2->disable_gpuculling >> 3) + 0x7FFF8000));
  if ( (_BYTE)v85 )
    __asan_report_load1(&a2->disable_gpuculling, v84, v85);
  disable_gpuculling = a2->disable_gpuculling;
  v87 = *(_BYTE *)(((unsigned __int64)&this->disable_gpuculling >> 3) + 0x7FFF8000);
  LOBYTE(v84) = v87 != 0;
  v88 = (v87 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v87);
  if ( (_BYTE)v88 )
    __asan_report_store1(&this->disable_gpuculling, v84, v88);
  this->disable_gpuculling = disable_gpuculling;
  v89 = ((_BYTE)a2 + 58) & 7;
  v90 = (*(_BYTE *)(((unsigned __int64)&a2->can_player_loop >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v89 >= *(_BYTE *)(((unsigned __int64)&a2->can_player_loop >> 3) + 0x7FFF8000));
  if ( (_BYTE)v90 )
    __asan_report_load1(&a2->can_player_loop, v89, v90);
  can_player_loop = a2->can_player_loop;
  v92 = *(_BYTE *)(((unsigned __int64)&this->can_player_loop >> 3) + 0x7FFF8000);
  LOBYTE(v89) = v92 != 0;
  v93 = (v92 != 0) & (unsigned __int8)((((unsigned __int8)this + 58) & 7) >= v92);
  if ( (_BYTE)v93 )
    __asan_report_store1(&this->can_player_loop, v89, v93);
  this->can_player_loop = can_player_loop;
  v94 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->main_quest_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->main_quest_id);
  }
  main_quest_id = a2->main_quest_id;
  v96 = *(_BYTE *)(((unsigned __int64)&this->main_quest_id >> 3) + 0x7FFF8000);
  LOBYTE(v94) = v96 != 0;
  if ( v96 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v96 )
    __asan_report_store4(&this->main_quest_id, v94);
  this->main_quest_id = main_quest_id;
  if ( *(char *)(((unsigned __int64)&a2->disable_avatar_local_gadget >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_avatar_local_gadget, v94, &a2->disable_avatar_local_gadget);
  disable_avatar_local_gadget = a2->disable_avatar_local_gadget;
  v98 = *(_BYTE *)(((unsigned __int64)&this->disable_avatar_local_gadget >> 3) + 0x7FFF8000);
  if ( v98 < 0 )
  {
    LOBYTE(v94) = v98 != 0;
    __asan_report_store1(&this->disable_avatar_local_gadget, v94, &this->disable_avatar_local_gadget);
  }
  this->disable_avatar_local_gadget = disable_avatar_local_gadget;
  v99 = ((_BYTE)a2 + 65) & 7;
  v100 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v99 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v100 )
    __asan_report_load1(&a2->is_json_loaded, v99, v100);
  is_json_loaded = a2->is_json_loaded;
  v102 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v99) = v102 != 0;
  v103 = (v102 != 0) & (unsigned __int8)((((unsigned __int8)this + 65) & 7) >= v102);
  if ( (_BYTE)v103 )
    __asan_report_store1(&this->is_json_loaded, v99, v103);
  this->is_json_loaded = is_json_loaded;
};

// Line 119: range 0000000014257F84-0000000014257FAE
void __cdecl data::ConfigBaseCutscene::~ConfigBaseCutscene(data::ConfigBaseCutscene *const this)
{
  data::ConfigBaseCutscene::~ConfigBaseCutscene(this);
  operator delete(this, 0x148uLL);
};

// Line 119: range 0000000014257ECA-0000000014257F83
void __cdecl data::ConfigBaseCutscene::~ConfigBaseCutscene(data::ConfigBaseCutscene *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigBaseCutscene + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseCutscene = v2;
  std::vector<int>::~vector(&this->crowd_lod0_list);
  std::string::~string(&this->entity_ban);
  std::string::~string(&this->cast_list_path);
  std::string::~string(&this->res_path);
  std::string::~string(&this->lua_data_path);
  data::ConfigCutscenePreTask::~ConfigCutscenePreTask(&this->pre_task_cfg);
  std::enable_shared_from_this<data::ConfigBaseCutscene>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigBaseCutscene>);
};

// Line 124: range 0000000013BCB118-0000000013BCB128
const char *__cdecl data::ConfigBaseCutscene::getTypeName(const data::ConfigBaseCutscene *const this)
{
  return "ConfigBaseCutscene";
};

// Line 125: range 0000000013BCB12A-0000000013BCB2C6
int32_t __cdecl data::ConfigBaseCutscene::getHashNum(const data::ConfigBaseCutscene *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigBaseCutscene::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigBaseCutscene",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 144: range 0000000014257FB0-000000001425811D
void __cdecl data::ConfigTimeline::ConfigTimeline(data::ConfigTimeline *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdx

  data::ConfigBaseCutscene::ConfigBaseCutscene((data::ConfigBaseCutscene *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeline + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseCutscene = v2;
  v3 = ((_BYTE)this + 66) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sync_load, v3, v4);
  this->sync_load = 0;
  v5 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_in_duration, v5);
  }
  this->fade_in_duration = 1.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_duration, v5);
  }
  this->fade_out_duration = 0.0;
  v6 = ((_BYTE)this + 76) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->force_gc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->force_gc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->force_gc, v6, v7);
  this->force_gc = 1;
};

// Line 144: range 0000000014286AA6-0000000014286D26
void __cdecl data::ConfigTimeline::ConfigTimeline(data::ConfigTimeline *const this, const data::ConfigTimeline *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool sync_load; // cl
  char v6; // dl
  __int64 v7; // rdx
  float fade_in_duration; // xmm0_4
  __int64 v9; // rsi
  float fade_out_duration; // xmm0_4
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool force_gc; // cl
  char v14; // dl
  __int64 v15; // rdx

  data::ConfigBaseCutscene::ConfigBaseCutscene(
    (data::ConfigBaseCutscene *const)this,
    (const data::ConfigBaseCutscene *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeline + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigBaseCutscene = v2;
  v3 = ((_BYTE)a2 + 66) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->sync_load, v3, v4);
  sync_load = a2->sync_load;
  v6 = *(_BYTE *)(((unsigned __int64)&this->sync_load >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 66) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->sync_load, v3, v7);
  this->sync_load = sync_load;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->fade_in_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->fade_in_duration);
  }
  fade_in_duration = a2->fade_in_duration;
  v9 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_in_duration, v9);
  }
  this->fade_in_duration = fade_in_duration;
  if ( *(_BYTE *)(((unsigned __int64)&a2->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->fade_out_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->fade_out_duration);
  }
  fade_out_duration = a2->fade_out_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_out_duration, v9);
  }
  this->fade_out_duration = fade_out_duration;
  v11 = ((_BYTE)a2 + 76) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&a2->force_gc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&a2->force_gc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&a2->force_gc, v11, v12);
  force_gc = a2->force_gc;
  v14 = *(_BYTE *)(((unsigned __int64)&this->force_gc >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 76) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->force_gc, v11, v15);
  this->force_gc = force_gc;
};

// Line 154: range 00000000142A1286-00000000142A12D3
void __cdecl data::ConfigTimeline::~ConfigTimeline(data::ConfigTimeline *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTimeline + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigBaseCutscene = v2;
  data::ConfigBaseCutscene::~ConfigBaseCutscene((data::ConfigBaseCutscene *const)this);
};

// Line 154: range 00000000142A12D4-00000000142A12FE
void __cdecl data::ConfigTimeline::~ConfigTimeline(data::ConfigTimeline *const this)
{
  data::ConfigTimeline::~ConfigTimeline(this);
  operator delete(this, 0x150uLL);
};

// Line 159: range 0000000013BCB2C8-0000000013BCB2D8
const char *__cdecl data::ConfigTimeline::getTypeName(const data::ConfigTimeline *const this)
{
  return "ConfigTimeline";
};

// Line 160: range 0000000013BCB2DA-0000000013BCB476
int32_t __cdecl data::ConfigTimeline::getHashNum(const data::ConfigTimeline *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigTimeline::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTimeline",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 176: range 0000000014287010-0000000014287051
void __cdecl data::ConfigTimelineFactory::ConfigTimelineFactory(data::ConfigTimelineFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTimelineFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTimelineFactory = v2;
};

// Line 243: range 000000001428761A-00000000142876E9
void __cdecl data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(data::ConfigVideoCommonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  std::enable_shared_from_this<data::ConfigVideoCommonEvent>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVideoCommonEvent>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoCommonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->event_type, v1);
  }
  this->event_type = 0;
  v3 = ((_BYTE)this + 28) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 243: range 0000000014287C2E-0000000014287D83
void __cdecl data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(
        data::ConfigVideoCommonEvent *const this,
        const data::ConfigVideoCommonEvent *a2)
{
  std::enable_shared_from_this<data::ConfigVideoCommonEvent> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigVideoEventType event_type; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool is_json_loaded; // cl
  char v9; // dl
  __int64 v10; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigVideoCommonEvent>;
  std::enable_shared_from_this<data::ConfigVideoCommonEvent>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigVideoCommonEvent>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigVideoCommonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigVideoCommonEvent = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->event_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->event_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->event_type);
  }
  event_type = a2->event_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->event_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->event_type, v2);
  }
  this->event_type = event_type;
  v6 = ((_BYTE)a2 + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->is_json_loaded, v6, v7);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 28) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v6, v10);
  this->is_json_loaded = is_json_loaded;
};

// Line 251: range 0000000014287FCC-000000001428801D
void __cdecl data::ConfigVideoCommonEvent::~ConfigVideoCommonEvent(data::ConfigVideoCommonEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoCommonEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  std::enable_shared_from_this<data::ConfigVideoCommonEvent>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigVideoCommonEvent>);
};

// Line 251: range 000000001428801E-0000000014288048
void __cdecl data::ConfigVideoCommonEvent::~ConfigVideoCommonEvent(data::ConfigVideoCommonEvent *const this)
{
  data::ConfigVideoCommonEvent::~ConfigVideoCommonEvent(this);
  operator delete(this, 0x20uLL);
};

// Line 256: range 0000000013BCB478-0000000013BCB488
const char *__cdecl data::ConfigVideoCommonEvent::getTypeName(const data::ConfigVideoCommonEvent *const this)
{
  return "ConfigVideoCommonEvent";
};

// Line 257: range 0000000013BCB48A-0000000013BCB626
int32_t __cdecl data::ConfigVideoCommonEvent::getHashNum(const data::ConfigVideoCommonEvent *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVideoCommonEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVideoCommonEvent",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 276: range 000000001428804A-00000000142880D5
void __cdecl data::ConfigVideoPlayAudioEvent::ConfigVideoPlayAudioEvent(data::ConfigVideoPlayAudioEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAudioEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->audio_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->audio_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->audio_event_id, v1);
  }
  this->audio_event_id = 0;
};

// Line 276: range 00000000142885D6-00000000142886A3
void __cdecl data::ConfigVideoPlayAudioEvent::ConfigVideoPlayAudioEvent(
        data::ConfigVideoPlayAudioEvent *const this,
        const data::ConfigVideoPlayAudioEvent *a2)
{
  int (**v2)(...); // rdx
  uint32_t audio_event_id; // ecx
  char v4; // al

  data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAudioEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigVideoCommonEvent = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->audio_event_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->audio_event_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->audio_event_id);
  }
  audio_event_id = a2->audio_event_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->audio_event_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->audio_event_id, a2);
  }
  this->audio_event_id = audio_event_id;
};

// Line 283: range 00000000142A125A-00000000142A1284
void __cdecl data::ConfigVideoPlayAudioEvent::~ConfigVideoPlayAudioEvent(data::ConfigVideoPlayAudioEvent *const this)
{
  data::ConfigVideoPlayAudioEvent::~ConfigVideoPlayAudioEvent(this);
  operator delete(this, 0x28uLL);
};

// Line 283: range 00000000142A120C-00000000142A1259
void __cdecl data::ConfigVideoPlayAudioEvent::~ConfigVideoPlayAudioEvent(data::ConfigVideoPlayAudioEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAudioEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  data::ConfigVideoCommonEvent::~ConfigVideoCommonEvent(this);
};

// Line 288: range 0000000013BCB628-0000000013BCB638
const char *__cdecl data::ConfigVideoPlayAudioEvent::getTypeName(const data::ConfigVideoPlayAudioEvent *const this)
{
  return "ConfigVideoPlayAudioEvent";
};

// Line 289: range 0000000013BCB63A-0000000013BCB7D6
int32_t __cdecl data::ConfigVideoPlayAudioEvent::getHashNum(const data::ConfigVideoPlayAudioEvent *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVideoPlayAudioEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVideoPlayAudioEvent",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 305: range 00000000142888EC-000000001428892D
void __cdecl data::ConfigVideoPlayAudioEventFactory::ConfigVideoPlayAudioEventFactory(
        data::ConfigVideoPlayAudioEventFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoPlayAudioEventFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoPlayAudioEventFactory = v2;
};

// Line 313: range 0000000014288C36-0000000014288CCE
void __cdecl data::ConfigVideoShowNameCardDialogEvent::ConfigVideoShowNameCardDialogEvent(
        data::ConfigVideoShowNameCardDialogEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoShowNameCardDialogEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  std::string::basic_string(&this->prefab_path);
  if ( *(char *)(((unsigned __int64)&this->enable_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_show, v1, &this->enable_show);
  this->enable_show = 0;
};

// Line 313: range 00000000142890EA-00000000142891F6
void __cdecl data::ConfigVideoShowNameCardDialogEvent::ConfigVideoShowNameCardDialogEvent(
        data::ConfigVideoShowNameCardDialogEvent *const this,
        const data::ConfigVideoShowNameCardDialogEvent *a2)
{
  int (**v2)(...); // rdx
  std::string *p_prefab_path; // rsi
  bool enable_show; // cl
  char v5; // al

  data::ConfigVideoCommonEvent::ConfigVideoCommonEvent(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoShowNameCardDialogEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigVideoCommonEvent = v2;
  p_prefab_path = &a2->prefab_path;
  std::string::basic_string(&this->prefab_path, &a2->prefab_path);
  if ( *(char *)(((unsigned __int64)&a2->enable_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->enable_show, p_prefab_path, &a2->enable_show);
  enable_show = a2->enable_show;
  v5 = *(_BYTE *)(((unsigned __int64)&this->enable_show >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_prefab_path) = v5 != 0;
    __asan_report_store1(&this->enable_show, p_prefab_path, &this->enable_show);
  }
  this->enable_show = enable_show;
};

// Line 321: range 00000000142A1182-00000000142A11DF
void __cdecl data::ConfigVideoShowNameCardDialogEvent::~ConfigVideoShowNameCardDialogEvent(
        data::ConfigVideoShowNameCardDialogEvent *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoShowNameCardDialogEvent + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoCommonEvent = v2;
  std::string::~string(&this->prefab_path);
  data::ConfigVideoCommonEvent::~ConfigVideoCommonEvent(this);
};

// Line 321: range 00000000142A11E0-00000000142A120A
void __cdecl data::ConfigVideoShowNameCardDialogEvent::~ConfigVideoShowNameCardDialogEvent(
        data::ConfigVideoShowNameCardDialogEvent *const this)
{
  data::ConfigVideoShowNameCardDialogEvent::~ConfigVideoShowNameCardDialogEvent(this);
  operator delete(this, 0x48uLL);
};

// Line 326: range 0000000013BCB7D8-0000000013BCB7E8
const char *__cdecl data::ConfigVideoShowNameCardDialogEvent::getTypeName(
        const data::ConfigVideoShowNameCardDialogEvent *const this)
{
  return "ConfigVideoShowNameCardDialogEvent";
};

// Line 327: range 0000000013BCB7EA-0000000013BCB986
int32_t __cdecl data::ConfigVideoShowNameCardDialogEvent::getHashNum(
        const data::ConfigVideoShowNameCardDialogEvent *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t StringHash; // r14d
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigVideoShowNameCardDialogEvent::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigVideoShowNameCardDialogEvent",
    (const std::allocator<char> *)(v1 + 48));
  StringHash = getStringHash((const std::string *)(v1 + 64));
  std::string::~string((void *)(v1 + 64));
  *(_DWORD *)(((v1 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  result = StringHash;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 343: range 00000000142894E0-0000000014289521
void __cdecl data::ConfigVideoShowNameCardDialogEventFactory::ConfigVideoShowNameCardDialogEventFactory(
        data::ConfigVideoShowNameCardDialogEventFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigVideoShowNameCardDialogEventFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigVideoShowNameCardDialogEventFactory = v2;
};

// Line 358: range 0000000013C1B216-0000000013C1B4B1
void __cdecl data::ConfigVideo::ConfigVideo(data::ConfigVideo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->hero_diff = 0;
  std::string::basic_string(&this->video_name);
  std::string::basic_string(&this->video_name_other);
  if ( *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->subtitle_id, v1);
  }
  this->subtitle_id = 0;
  v2 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->subtitle_id_other >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->subtitle_id_other >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->subtitle_id_other, v2);
  }
  this->subtitle_id_other = 0;
  if ( *(char *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_skip, v2, &this->can_skip);
  this->can_skip = 0;
  v3 = ((_BYTE)this + 81) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->can_skip_if_played, v3, v4);
  this->can_skip_if_played = 0;
  data::ColorVector::ColorVector(&this->bg_color);
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_in_duration, v3);
  }
  this->fade_in_duration = 0.0;
  v5 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_out_duration, v5);
  }
  this->fade_out_duration = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->video_screen_adaptation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->video_screen_adaptation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->video_screen_adaptation, v5);
  }
  this->video_screen_adaptation = 0;
  std::unordered_map<std::string,data::VideoPlatformSetting>::unordered_map(&this->platform_settings);
  std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::vector(&this->event_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 358: range 00000000141F36B8-00000000141F3CD9
void __cdecl data::ConfigVideo::ConfigVideo(data::ConfigVideo *const this, const data::ConfigVideo *a2)
{
  bool hero_diff; // cl
  char v3; // al
  std::string *p_video_name_other; // rsi
  uint32_t subtitle_id; // ecx
  char v6; // al
  __int64 v7; // rsi
  uint32_t subtitle_id_other; // ecx
  char v9; // dl
  bool can_skip; // cl
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool can_skip_if_played; // cl
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rdx
  float fade_in_duration; // xmm0_4
  float fade_out_duration; // xmm0_4
  __int64 v20; // rsi
  uint32_t video_screen_adaptation; // ecx
  char v22; // al
  data::ConfigVideoEventList *p_event_list; // rsi
  bool is_json_loaded; // cl
  char v25; // al
  const data::ConfigVideo *v26; // [rsp+0h] [rbp-20h]

  v26 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  hero_diff = a2->hero_diff;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->hero_diff = hero_diff;
  std::string::basic_string(&this->video_name, &v26->video_name);
  p_video_name_other = &v26->video_name_other;
  std::string::basic_string(&this->video_name_other, &v26->video_name_other);
  if ( *(_BYTE *)(((unsigned __int64)&v26->subtitle_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->subtitle_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->subtitle_id);
  }
  subtitle_id = v26->subtitle_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->subtitle_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_video_name_other) = v6 != 0;
    __asan_report_store4(&this->subtitle_id, p_video_name_other);
  }
  this->subtitle_id = subtitle_id;
  v7 = (((_BYTE)v26 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v26->subtitle_id_other >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->subtitle_id_other >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->subtitle_id_other);
  }
  subtitle_id_other = v26->subtitle_id_other;
  v9 = *(_BYTE *)(((unsigned __int64)&this->subtitle_id_other >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v9 != 0;
  if ( v9 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v9 )
    __asan_report_store4(&this->subtitle_id_other, v7);
  this->subtitle_id_other = subtitle_id_other;
  if ( *(char *)(((unsigned __int64)&v26->can_skip >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v26->can_skip, v7, &v26->can_skip);
  can_skip = v26->can_skip;
  v11 = *(_BYTE *)(((unsigned __int64)&this->can_skip >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(v7) = v11 != 0;
    __asan_report_store1(&this->can_skip, v7, &this->can_skip);
  }
  this->can_skip = can_skip;
  v12 = ((_BYTE)v26 + 81) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&v26->can_skip_if_played >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&v26->can_skip_if_played >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&v26->can_skip_if_played, v12, v13);
  can_skip_if_played = v26->can_skip_if_played;
  v15 = *(_BYTE *)(((unsigned __int64)&this->can_skip_if_played >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 81) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->can_skip_if_played, v12, v16);
  this->can_skip_if_played = can_skip_if_played;
  if ( (((unsigned __int8)this + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->bg_color >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->bg_color >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->bg_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->bg_color.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->bg_color, 20LL);
  }
  if ( (((unsigned __int8)v26 + 84) & 7) >= *(_BYTE *)(((unsigned __int64)&v26->bg_color >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v26->bg_color >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v26->bg_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v26 + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&v26->bg_color.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v26->bg_color, 20LL);
  }
  v17 = *(_QWORD *)&v26->bg_color.b;
  *(_QWORD *)&this->bg_color.r = *(_QWORD *)&v26->bg_color.r;
  *(_QWORD *)&this->bg_color.b = v17;
  *(_DWORD *)&this->bg_color.is_json_loaded = *(_DWORD *)&v26->bg_color.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&v26->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->fade_in_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->fade_in_duration);
  }
  fade_in_duration = v26->fade_in_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_in_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->fade_in_duration, v26);
  }
  this->fade_in_duration = fade_in_duration;
  if ( *(_BYTE *)(((unsigned __int64)&v26->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v26 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->fade_out_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v26->fade_out_duration);
  }
  fade_out_duration = v26->fade_out_duration;
  v20 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fade_out_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fade_out_duration, v20);
  }
  this->fade_out_duration = fade_out_duration;
  if ( *(_BYTE *)(((unsigned __int64)&v26->video_screen_adaptation >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v26->video_screen_adaptation >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v26->video_screen_adaptation);
  }
  video_screen_adaptation = v26->video_screen_adaptation;
  v22 = *(_BYTE *)(((unsigned __int64)&this->video_screen_adaptation >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->video_screen_adaptation, v20);
  }
  this->video_screen_adaptation = video_screen_adaptation;
  std::unordered_map<std::string,data::VideoPlatformSetting>::unordered_map(
    &this->platform_settings,
    &v26->platform_settings);
  p_event_list = &v26->event_list;
  std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::vector(&this->event_list, &v26->event_list);
  if ( *(char *)(((unsigned __int64)&v26->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v26->is_json_loaded, p_event_list, &v26->is_json_loaded);
  is_json_loaded = v26->is_json_loaded;
  v25 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_event_list) = v25 != 0;
    __asan_report_store1(&this->is_json_loaded, p_event_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 358: range 0000000013C1B4B2-0000000013C1B502
void __cdecl data::ConfigVideo::~ConfigVideo(data::ConfigVideo *const this)
{
  std::vector<std::shared_ptr<data::ConfigVideoCommonEvent>>::~vector(&this->event_list);
  std::unordered_map<std::string,data::VideoPlatformSetting>::~unordered_map(&this->platform_settings);
  std::string::~string(&this->video_name_other);
  std::string::~string(&this->video_name);
};

// Line 393: range 0000000013C1B504-0000000013C1B611
void __cdecl data::ConfigCutsceneContext::ConfigCutsceneContext(data::ConfigCutsceneContext *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->type = CUTSCENE_0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->enable_force_streaming >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->enable_force_streaming >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->enable_force_streaming, v2, v3);
  this->enable_force_streaming = 1;
  if ( *(_WORD *)(((unsigned __int64)&this->cutscene_config >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigTimeline>();
  data::ConfigVideo::ConfigVideo(&this->video_config);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 393: range 00000000141F3CDA-00000000141F3EB4
void __cdecl data::ConfigCutsceneContext::ConfigCutsceneContext(
        data::ConfigCutsceneContext *const this,
        const data::ConfigCutsceneContext *a2)
{
  data::CutsceneIndexType type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool enable_force_streaming; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigVideo *p_video_config; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigCutsceneContext *v12; // [rsp+0h] [rbp-20h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  type = a2->type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->type = type;
  v4 = ((_BYTE)v12 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->enable_force_streaming >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->enable_force_streaming >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->enable_force_streaming, v4, v5);
  enable_force_streaming = v12->enable_force_streaming;
  v7 = *(_BYTE *)(((unsigned __int64)&this->enable_force_streaming >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->enable_force_streaming, v4, v8);
  this->enable_force_streaming = enable_force_streaming;
  std::shared_ptr<data::ConfigTimeline>::shared_ptr(&this->cutscene_config, &v12->cutscene_config);
  p_video_config = &v12->video_config;
  data::ConfigVideo::ConfigVideo(&this->video_config, &v12->video_config);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_video_config, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_video_config) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_video_config, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 393: range 0000000013C1B612-0000000013C1B640
void __cdecl data::ConfigCutsceneContext::~ConfigCutsceneContext(data::ConfigCutsceneContext *const this)
{
  data::ConfigVideo::~ConfigVideo(&this->video_config);
  std::shared_ptr<data::ConfigTimeline>::~shared_ptr(&this->cutscene_config);
};

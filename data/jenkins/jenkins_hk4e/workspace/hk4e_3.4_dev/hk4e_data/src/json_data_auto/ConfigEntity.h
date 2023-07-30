// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigEntity.h

// Line 45: range 000000000ED78E26-000000000ED78EBB
void __cdecl data::ConfigCustomAttackSphere::ConfigCustomAttackSphere(data::ConfigCustomAttackSphere *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->custom_attack_sphere__radius = 1.0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 68: range 000000000ED78EBC-000000000ED78FE9
void __cdecl data::ConfigCustomAttackBox::ConfigCustomAttackBox(data::ConfigCustomAttackBox *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->custom_attack_box__size__x = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_attack_box__size__y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_attack_box__size__y >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_attack_box__size__y, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->custom_attack_box__size__y = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_attack_box__size__z >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_attack_box__size__z >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_attack_box__size__z, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->custom_attack_box__size__z = 1.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 93: range 000000000ED78FEA-000000000ED790C7
void __cdecl data::ConfigCustomAttackCircle::ConfigCustomAttackCircle(data::ConfigCustomAttackCircle *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->custom_attack_circle__radius = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->custom_attack_circle__inner_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_attack_circle__inner_radius >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->custom_attack_circle__inner_radius, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->custom_attack_circle__inner_radius = 0.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 117: range 000000000ED790C8-000000000ED79142
void __cdecl data::ConfigCustomAttackShape::ConfigCustomAttackShape(data::ConfigCustomAttackShape *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  data::ConfigCustomAttackSphere::ConfigCustomAttackSphere(&this->sphere);
  data::ConfigCustomAttackBox::ConfigCustomAttackBox(&this->box);
  data::ConfigCustomAttackCircle::ConfigCustomAttackCircle(&this->circle);
  v1 = ((_BYTE)this + 36) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 139: range 000000000ED96F48-000000000ED97194
void __cdecl data::ConfigCharacter::ConfigCharacter(data::ConfigCharacter *const this, const data::ConfigCharacter *a2)
{
  int (**v2)(...); // rdx

  data::ConfigEntity::ConfigEntity(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  data::ConfigCombat::ConfigCombat(&this->combat, &a2->combat);
  std::shared_ptr<data::ConfigEquipController>::shared_ptr(&this->equip_controller, &a2->equip_controller);
  std::vector<std::shared_ptr<data::ConfigSubEquipController>>::vector(
    &this->sub_equip_controllers,
    &a2->sub_equip_controllers);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities, &a2->abilities);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::unordered_map(
    &this->state_layers,
    &a2->state_layers);
  data::ConfigFace::ConfigFace(&this->face, &a2->face);
  data::ConfigPartController::ConfigPartController(&this->part_control, &a2->part_control);
  std::shared_ptr<data::ConfigBillboard>::shared_ptr(&this->billboard, &a2->billboard);
  std::vector<std::string>::vector(&this->bind_emotions, &a2->bind_emotions);
};

// Line 139: range 000000000ED94B48-000000000ED96489
void __cdecl data::ConfigGadget::ConfigGadget(data::ConfigGadget *const this, const data::ConfigGadget *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool has_equip; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool has_audio; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool has_model; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  bool has_ability; // cl
  char v21; // dl
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  bool has_dither; // cl
  char v26; // dl
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rdx
  bool has_follow_wind_zone_rotation; // cl
  char v31; // dl
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx
  bool force_dont_use_update_rigidbody; // cl
  char v36; // dl
  __int64 v37; // rdx
  bool has_connect_trigger; // cl
  char v39; // al
  __int64 v40; // rsi
  __int64 v41; // rdx
  bool can_be_created_on_platform; // cl
  char v43; // dl
  __int64 v44; // rdx
  __int64 v45; // rsi
  uint32_t connect_trigger_priority; // ecx
  char v47; // dl
  bool ignore_child_scene_prop; // cl
  char v49; // al
  __int64 v50; // rsi
  __int64 v51; // rdx
  bool move_refresh_ground_force_up; // cl
  char v53; // dl
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rbx
  __int64 v58; // rbx
  char v59; // dl
  __int64 v60; // rsi
  __int64 v61; // rbx
  bool radar_hint; // cl
  char v63; // al
  __int64 v64; // rsi
  __int64 v65; // rdx
  bool keep_modifier_out_sight; // cl
  char v67; // dl
  __int64 v68; // rdx
  __int64 v69; // rbx
  __int64 v70; // rbx
  data::StringArray *p_bind_emotions; // rsi
  bool projector; // cl
  char v73; // al
  __int64 v74; // rsi
  __int64 v75; // rdx
  bool low_priority_intee; // cl
  char v77; // dl
  __int64 v78; // rdx
  __int64 v79; // rsi
  __int64 v80; // rdx
  bool can_remove_by_client; // cl
  char v82; // dl
  __int64 v83; // rdx
  data::StringArray *p_tags; // rsi
  bool can_be_triggered_by_avatar_ray; // cl
  char v86; // al
  data::ConfigFishingZonePtr *p_fishing_zone; // rsi
  data::EntityType force_set_entity_type; // ecx
  char v89; // al
  data::ConfigGadgetCameraBox *p_camera_box; // rsi
  bool open_watcher; // cl
  char v92; // al
  __int64 v93; // rsi
  uint32_t ray_tag; // ecx
  char v95; // dl
  bool has_ray_tag; // cl
  char v97; // al
  __int64 v98; // rsi
  __int64 v99; // rdx
  bool use_retreat_type; // cl
  char v101; // dl
  __int64 v102; // rdx
  __int64 v103; // rsi
  __int64 v104; // rdx
  bool dont_destroy_by_perform; // cl
  char v106; // dl
  __int64 v107; // rdx
  __int64 v108; // rsi
  __int64 v109; // rdx
  bool correct_owner; // cl
  char v111; // dl
  __int64 v112; // rdx

  data::ConfigEntity::ConfigEntity((data::ConfigEntity *const)this, (const data::ConfigEntity *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  v3 = ((_BYTE)a2 + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->has_equip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->has_equip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->has_equip, v3, v4);
  has_equip = a2->has_equip;
  v6 = *(_BYTE *)(((unsigned __int64)&this->has_equip >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 113) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_equip, v3, v7);
  this->has_equip = has_equip;
  v8 = ((_BYTE)a2 + 114) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->has_audio, v8, v9);
  has_audio = a2->has_audio;
  v11 = *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 114) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->has_audio, v8, v12);
  this->has_audio = has_audio;
  v13 = ((_BYTE)a2 + 115) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->has_model >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->has_model >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->has_model, v13, v14);
  has_model = a2->has_model;
  v16 = *(_BYTE *)(((unsigned __int64)&this->has_model >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 115) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->has_model, v13, v17);
  this->has_model = has_model;
  v18 = ((_BYTE)a2 + 116) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&a2->has_ability >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&a2->has_ability >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&a2->has_ability, v18, v19);
  has_ability = a2->has_ability;
  v21 = *(_BYTE *)(((unsigned __int64)&this->has_ability >> 3) + 0x7FFF8000);
  LOBYTE(v18) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((((unsigned __int8)this + 116) & 7) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store1(&this->has_ability, v18, v22);
  this->has_ability = has_ability;
  v23 = ((_BYTE)a2 + 117) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&a2->has_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&a2->has_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&a2->has_dither, v23, v24);
  has_dither = a2->has_dither;
  v26 = *(_BYTE *)(((unsigned __int64)&this->has_dither >> 3) + 0x7FFF8000);
  LOBYTE(v23) = v26 != 0;
  v27 = (v26 != 0) & (unsigned __int8)((((unsigned __int8)this + 117) & 7) >= v26);
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->has_dither, v23, v27);
  this->has_dither = has_dither;
  v28 = ((_BYTE)a2 + 118) & 7;
  v29 = (*(_BYTE *)(((unsigned __int64)&a2->has_follow_wind_zone_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v28 >= *(_BYTE *)(((unsigned __int64)&a2->has_follow_wind_zone_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v29 )
    __asan_report_load1(&a2->has_follow_wind_zone_rotation, v28, v29);
  has_follow_wind_zone_rotation = a2->has_follow_wind_zone_rotation;
  v31 = *(_BYTE *)(((unsigned __int64)&this->has_follow_wind_zone_rotation >> 3) + 0x7FFF8000);
  LOBYTE(v28) = v31 != 0;
  v32 = (v31 != 0) & (unsigned __int8)((((unsigned __int8)this + 118) & 7) >= v31);
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->has_follow_wind_zone_rotation, v28, v32);
  this->has_follow_wind_zone_rotation = has_follow_wind_zone_rotation;
  v33 = ((_BYTE)a2 + 119) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&a2->force_dont_use_update_rigidbody >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&a2->force_dont_use_update_rigidbody >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_load1(&a2->force_dont_use_update_rigidbody, v33, v34);
  force_dont_use_update_rigidbody = a2->force_dont_use_update_rigidbody;
  v36 = *(_BYTE *)(((unsigned __int64)&this->force_dont_use_update_rigidbody >> 3) + 0x7FFF8000);
  LOBYTE(v33) = v36 != 0;
  v37 = (v36 != 0) & (unsigned __int8)((((unsigned __int8)this + 119) & 7) >= v36);
  if ( (_BYTE)v37 )
    __asan_report_store1(&this->force_dont_use_update_rigidbody, v33, v37);
  this->force_dont_use_update_rigidbody = force_dont_use_update_rigidbody;
  if ( *(char *)(((unsigned __int64)&a2->has_connect_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_connect_trigger, v33, &a2->has_connect_trigger);
  has_connect_trigger = a2->has_connect_trigger;
  v39 = *(_BYTE *)(((unsigned __int64)&this->has_connect_trigger >> 3) + 0x7FFF8000);
  if ( v39 < 0 )
  {
    LOBYTE(v33) = v39 != 0;
    __asan_report_store1(&this->has_connect_trigger, v33, &this->has_connect_trigger);
  }
  this->has_connect_trigger = has_connect_trigger;
  v40 = ((_BYTE)a2 + 121) & 7;
  v41 = (*(_BYTE *)(((unsigned __int64)&a2->can_be_created_on_platform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v40 >= *(_BYTE *)(((unsigned __int64)&a2->can_be_created_on_platform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v41 )
    __asan_report_load1(&a2->can_be_created_on_platform, v40, v41);
  can_be_created_on_platform = a2->can_be_created_on_platform;
  v43 = *(_BYTE *)(((unsigned __int64)&this->can_be_created_on_platform >> 3) + 0x7FFF8000);
  LOBYTE(v40) = v43 != 0;
  v44 = (v43 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v43);
  if ( (_BYTE)v44 )
    __asan_report_store1(&this->can_be_created_on_platform, v40, v44);
  this->can_be_created_on_platform = can_be_created_on_platform;
  v45 = (((_BYTE)a2 + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->connect_trigger_priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->connect_trigger_priority >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->connect_trigger_priority);
  }
  connect_trigger_priority = a2->connect_trigger_priority;
  v47 = *(_BYTE *)(((unsigned __int64)&this->connect_trigger_priority >> 3) + 0x7FFF8000);
  LOBYTE(v45) = v47 != 0;
  if ( v47 != 0 && (char)((((_BYTE)this + 124) & 7) + 3) >= v47 )
    __asan_report_store4(&this->connect_trigger_priority, v45);
  this->connect_trigger_priority = connect_trigger_priority;
  if ( *(char *)(((unsigned __int64)&a2->ignore_child_scene_prop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->ignore_child_scene_prop, v45, &a2->ignore_child_scene_prop);
  ignore_child_scene_prop = a2->ignore_child_scene_prop;
  v49 = *(_BYTE *)(((unsigned __int64)&this->ignore_child_scene_prop >> 3) + 0x7FFF8000);
  if ( v49 < 0 )
  {
    LOBYTE(v45) = v49 != 0;
    __asan_report_store1(&this->ignore_child_scene_prop, v45, &this->ignore_child_scene_prop);
  }
  this->ignore_child_scene_prop = ignore_child_scene_prop;
  v50 = ((_BYTE)a2 - 127) & 7;
  v51 = (*(_BYTE *)(((unsigned __int64)&a2->move_refresh_ground_force_up >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v50 >= *(_BYTE *)(((unsigned __int64)&a2->move_refresh_ground_force_up >> 3) + 0x7FFF8000));
  if ( (_BYTE)v51 )
    __asan_report_load1(&a2->move_refresh_ground_force_up, v50, v51);
  move_refresh_ground_force_up = a2->move_refresh_ground_force_up;
  v53 = *(_BYTE *)(((unsigned __int64)&this->move_refresh_ground_force_up >> 3) + 0x7FFF8000);
  LOBYTE(v50) = v53 != 0;
  v54 = (v53 != 0) & (unsigned __int8)((((unsigned __int8)this - 127) & 7) >= v53);
  if ( (_BYTE)v54 )
    __asan_report_store1(&this->move_refresh_ground_force_up, v50, v54);
  this->move_refresh_ground_force_up = move_refresh_ground_force_up;
  data::ConfigCombat::ConfigCombat(&this->combat, &a2->combat);
  std::string::basic_string(&this->combat_template, &a2->combat_template);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities, &a2->abilities);
  data::ConfigTrigger::ConfigTrigger(&this->field, &a2->field);
  if ( *(char *)(((unsigned __int64)&this->timer >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->timer.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 5) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->timer.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->timer, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->timer >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->timer.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 5) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->timer.is_json_loaded + 3) >> 3)
                                                   + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->timer, 20LL);
  }
  v55 = *(_QWORD *)&a2->timer.check_interval;
  *(_QWORD *)&this->timer.life_infinite = *(_QWORD *)&a2->timer.life_infinite;
  *(_QWORD *)&this->timer.check_interval = v55;
  *(_DWORD *)&this->timer.is_json_loaded = *(_DWORD *)&a2->timer.is_json_loaded;
  std::shared_ptr<data::ConfigMove>::shared_ptr(&this->move, &a2->move);
  std::shared_ptr<data::ConfigGadgetPattern>::shared_ptr(&this->gadget, &a2->gadget);
  data::ConfigEquipment::ConfigEquipment(&this->equipment, &a2->equipment);
  if ( *(char *)(((unsigned __int64)&this->navigation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->navigation.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->navigation.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->navigation, 20LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->navigation >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->navigation.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->navigation.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->navigation, 20LL);
  }
  v56 = *(_QWORD *)&a2->navigation.size_y;
  *(_QWORD *)&this->navigation.type = *(_QWORD *)&a2->navigation.type;
  *(_QWORD *)&this->navigation.size_y = v56;
  *(_DWORD *)&this->navigation.is_json_loaded = *(_DWORD *)&a2->navigation.is_json_loaded;
  std::shared_ptr<data::ConfigGadgetUI>::shared_ptr(&this->ui_interact, &a2->ui_interact);
  data::ConfigGadgetMisc::ConfigGadgetMisc(&this->misc, &a2->misc);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::unordered_map(
    &this->state_layers,
    &a2->state_layers);
  std::shared_ptr<data::ConfigGadgetAudio>::shared_ptr(&this->audio, &a2->audio);
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta, &a2->aibeta);
  data::ConfigWeather::ConfigWeather(&this->weather, &a2->weather);
  data::ConfigWall::ConfigWall(&this->wall, &a2->wall);
  data::ConfigFace::ConfigFace(&this->face, &a2->face);
  data::ConfigPartController::ConfigPartController(&this->part_control, &a2->part_control);
  if ( *(char *)(((unsigned __int64)&this->paimon >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->paimon.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->paimon.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->paimon, 36LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->paimon >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->paimon.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->paimon.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->paimon, 36LL);
  }
  v57 = *(_QWORD *)&a2->paimon.follow_off_set.z;
  *(_QWORD *)&this->paimon.follow_off_set.x = *(_QWORD *)&a2->paimon.follow_off_set.x;
  *(_QWORD *)&this->paimon.follow_off_set.z = v57;
  v58 = *(_QWORD *)&a2->paimon.show_random_cdmin;
  *(_QWORD *)&this->paimon.slow_down_range_xz = *(_QWORD *)&a2->paimon.slow_down_range_xz;
  *(_QWORD *)&this->paimon.show_random_cdmin = v58;
  *(_DWORD *)&this->paimon.is_json_loaded = *(_DWORD *)&a2->paimon.is_json_loaded;
  if ( (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->character_rendering >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->character_rendering >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->character_rendering.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 103) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->character_rendering.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->character_rendering, 28LL);
  }
  v59 = *(_BYTE *)(((unsigned __int64)(&a2->character_rendering.is_json_loaded + 3) >> 3) + 0x7FFF8000);
  v60 = v59 != 0;
  if ( ((((unsigned __int8)a2 + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->character_rendering >> 3) + 0x7FFF8000)
     && *(_BYTE *)(((unsigned __int64)&a2->character_rendering >> 3) + 0x7FFF8000) != 0) | (unsigned __int8)v60 & ((((unsigned __int8)a2 + 103) & 7) >= v59) )
  {
    v60 = 28LL;
    __asan_report_load_n(&a2->character_rendering, 28LL);
  }
  v61 = *(_QWORD *)&a2->character_rendering.override_light_euler_angle.y;
  *(_QWORD *)&this->character_rendering.override_light_dir = *(_QWORD *)&a2->character_rendering.override_light_dir;
  *(_QWORD *)&this->character_rendering.override_light_euler_angle.y = v61;
  *(_QWORD *)&this->character_rendering.override_light_euler_angle.is_json_loaded = *(_QWORD *)&a2->character_rendering.override_light_euler_angle.is_json_loaded;
  *(_DWORD *)&this->character_rendering.is_json_loaded = *(_DWORD *)&a2->character_rendering.is_json_loaded;
  if ( *(char *)(((unsigned __int64)&a2->radar_hint >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->radar_hint, v60, &a2->radar_hint);
  radar_hint = a2->radar_hint;
  v63 = *(_BYTE *)(((unsigned __int64)&this->radar_hint >> 3) + 0x7FFF8000);
  if ( v63 < 0 )
  {
    LOBYTE(v60) = v63 != 0;
    __asan_report_store1(&this->radar_hint, v60, &this->radar_hint);
  }
  this->radar_hint = radar_hint;
  v64 = ((_BYTE)a2 + 105) & 7;
  v65 = (*(_BYTE *)(((unsigned __int64)&a2->keep_modifier_out_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v64 >= *(_BYTE *)(((unsigned __int64)&a2->keep_modifier_out_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v65 )
    __asan_report_load1(&a2->keep_modifier_out_sight, v64, v65);
  keep_modifier_out_sight = a2->keep_modifier_out_sight;
  v67 = *(_BYTE *)(((unsigned __int64)&this->keep_modifier_out_sight >> 3) + 0x7FFF8000);
  LOBYTE(v64) = v67 != 0;
  v68 = (v67 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v67);
  if ( (_BYTE)v68 )
    __asan_report_store1(&this->keep_modifier_out_sight, v64, v68);
  this->keep_modifier_out_sight = keep_modifier_out_sight;
  data::ConfigGadgetAction::ConfigGadgetAction(&this->gadget_action, &a2->gadget_action);
  std::shared_ptr<data::ConfigGadgetTurn>::shared_ptr(&this->gadget_turn, &a2->gadget_turn);
  std::shared_ptr<data::ConfigGlobalValueTurn>::shared_ptr(&this->gv_turn, &a2->gv_turn);
  std::shared_ptr<data::ConfigBillboard>::shared_ptr(&this->billboard, &a2->billboard);
  if ( *(char *)(((unsigned __int64)&this->intee >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->intee.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->intee.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->intee, 44LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->intee >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->intee.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 75) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->intee.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->intee, 44LL);
  }
  v69 = *(_QWORD *)&a2->intee.trigger_height;
  *(_QWORD *)&this->intee.use_trigger = *(_QWORD *)&a2->intee.use_trigger;
  *(_QWORD *)&this->intee.trigger_height = v69;
  v70 = *(_QWORD *)&a2->intee.trigger_offset.y;
  *(_QWORD *)&this->intee.head_ctrl_radius = *(_QWORD *)&a2->intee.head_ctrl_radius;
  *(_QWORD *)&this->intee.trigger_offset.y = v70;
  *(_QWORD *)&this->intee.trigger_offset.is_json_loaded = *(_QWORD *)&a2->intee.trigger_offset.is_json_loaded;
  *(_DWORD *)&this->intee.is_json_loaded = *(_DWORD *)&a2->intee.is_json_loaded;
  p_bind_emotions = &a2->bind_emotions;
  std::vector<std::string>::vector(&this->bind_emotions, &a2->bind_emotions);
  if ( *(char *)(((unsigned __int64)&a2->projector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->projector, p_bind_emotions, &a2->projector);
  projector = a2->projector;
  v73 = *(_BYTE *)(((unsigned __int64)&this->projector >> 3) + 0x7FFF8000);
  if ( v73 < 0 )
  {
    LOBYTE(p_bind_emotions) = v73 != 0;
    __asan_report_store1(&this->projector, p_bind_emotions, &this->projector);
  }
  this->projector = projector;
  v74 = ((_BYTE)a2 + 105) & 7;
  v75 = (*(_BYTE *)(((unsigned __int64)&a2->low_priority_intee >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v74 >= *(_BYTE *)(((unsigned __int64)&a2->low_priority_intee >> 3) + 0x7FFF8000));
  if ( (_BYTE)v75 )
    __asan_report_load1(&a2->low_priority_intee, v74, v75);
  low_priority_intee = a2->low_priority_intee;
  v77 = *(_BYTE *)(((unsigned __int64)&this->low_priority_intee >> 3) + 0x7FFF8000);
  LOBYTE(v74) = v77 != 0;
  v78 = (v77 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v77);
  if ( (_BYTE)v78 )
    __asan_report_store1(&this->low_priority_intee, v74, v78);
  this->low_priority_intee = low_priority_intee;
  v79 = ((_BYTE)a2 + 106) & 7;
  v80 = (*(_BYTE *)(((unsigned __int64)&a2->can_remove_by_client >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v79 >= *(_BYTE *)(((unsigned __int64)&a2->can_remove_by_client >> 3) + 0x7FFF8000));
  if ( (_BYTE)v80 )
    __asan_report_load1(&a2->can_remove_by_client, v79, v80);
  can_remove_by_client = a2->can_remove_by_client;
  v82 = *(_BYTE *)(((unsigned __int64)&this->can_remove_by_client >> 3) + 0x7FFF8000);
  LOBYTE(v79) = v82 != 0;
  v83 = (v82 != 0) & (unsigned __int8)((((unsigned __int8)this + 106) & 7) >= v82);
  if ( (_BYTE)v83 )
    __asan_report_store1(&this->can_remove_by_client, v79, v83);
  this->can_remove_by_client = can_remove_by_client;
  p_tags = &a2->tags;
  std::vector<std::string>::vector(&this->tags, &a2->tags);
  if ( *(char *)(((unsigned __int64)&a2->can_be_triggered_by_avatar_ray >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->can_be_triggered_by_avatar_ray, p_tags, &a2->can_be_triggered_by_avatar_ray);
  can_be_triggered_by_avatar_ray = a2->can_be_triggered_by_avatar_ray;
  v86 = *(_BYTE *)(((unsigned __int64)&this->can_be_triggered_by_avatar_ray >> 3) + 0x7FFF8000);
  if ( v86 < 0 )
  {
    LOBYTE(p_tags) = v86 != 0;
    __asan_report_store1(&this->can_be_triggered_by_avatar_ray, p_tags, &this->can_be_triggered_by_avatar_ray);
  }
  this->can_be_triggered_by_avatar_ray = can_be_triggered_by_avatar_ray;
  data::ConfigVehicle::ConfigVehicle(&this->vehicle, &a2->vehicle);
  std::shared_ptr<data::ConfigDangerZone>::shared_ptr(&this->dangerzone, &a2->dangerzone);
  p_fishing_zone = &a2->fishing_zone;
  std::shared_ptr<data::ConfigFishingZone>::shared_ptr(&this->fishing_zone, &a2->fishing_zone);
  if ( *(_BYTE *)(((unsigned __int64)&a2->force_set_entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->force_set_entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->force_set_entity_type);
  }
  force_set_entity_type = a2->force_set_entity_type;
  v89 = *(_BYTE *)(((unsigned __int64)&this->force_set_entity_type >> 3) + 0x7FFF8000);
  if ( v89 != 0 && v89 <= 3 )
  {
    LOBYTE(p_fishing_zone) = v89 != 0;
    __asan_report_store4(&this->force_set_entity_type, p_fishing_zone);
  }
  this->force_set_entity_type = force_set_entity_type;
  std::shared_ptr<data::ConfigGadgetSpecialCamera>::shared_ptr(&this->camera_adjust, &a2->camera_adjust);
  if ( *(_BYTE *)(((unsigned __int64)&this->vod_intee >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->vod_intee, &a2->camera_adjust);
  if ( *(_BYTE *)(((unsigned __int64)&a2->vod_intee >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->vod_intee);
  this->vod_intee = a2->vod_intee;
  std::shared_ptr<data::ConfigLivePlayer>::shared_ptr(&this->vod_player, &a2->vod_player);
  p_camera_box = &a2->camera_box;
  data::ConfigGadgetCameraBox::ConfigGadgetCameraBox(&this->camera_box, &a2->camera_box);
  if ( *(char *)(((unsigned __int64)&a2->open_watcher >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->open_watcher, p_camera_box, &a2->open_watcher);
  open_watcher = a2->open_watcher;
  v92 = *(_BYTE *)(((unsigned __int64)&this->open_watcher >> 3) + 0x7FFF8000);
  if ( v92 < 0 )
  {
    LOBYTE(p_camera_box) = v92 != 0;
    __asan_report_store1(&this->open_watcher, p_camera_box, &this->open_watcher);
  }
  this->open_watcher = open_watcher;
  v93 = (((_BYTE)a2 - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->ray_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->ray_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->ray_tag);
  }
  ray_tag = a2->ray_tag;
  v95 = *(_BYTE *)(((unsigned __int64)&this->ray_tag >> 3) + 0x7FFF8000);
  LOBYTE(v93) = v95 != 0;
  if ( v95 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v95 )
    __asan_report_store4(&this->ray_tag, v93);
  this->ray_tag = ray_tag;
  if ( *(char *)(((unsigned __int64)&a2->has_ray_tag >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_ray_tag, v93, &a2->has_ray_tag);
  has_ray_tag = a2->has_ray_tag;
  v97 = *(_BYTE *)(((unsigned __int64)&this->has_ray_tag >> 3) + 0x7FFF8000);
  if ( v97 < 0 )
  {
    LOBYTE(v93) = v97 != 0;
    __asan_report_store1(&this->has_ray_tag, v93, &this->has_ray_tag);
  }
  this->has_ray_tag = has_ray_tag;
  v98 = ((_BYTE)a2 - 119) & 7;
  v99 = (*(_BYTE *)(((unsigned __int64)&a2->use_retreat_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v98 >= *(_BYTE *)(((unsigned __int64)&a2->use_retreat_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v99 )
    __asan_report_load1(&a2->use_retreat_type, v98, v99);
  use_retreat_type = a2->use_retreat_type;
  v101 = *(_BYTE *)(((unsigned __int64)&this->use_retreat_type >> 3) + 0x7FFF8000);
  LOBYTE(v98) = v101 != 0;
  v102 = (v101 != 0) & (unsigned __int8)((((unsigned __int8)this - 119) & 7) >= v101);
  if ( (_BYTE)v102 )
    __asan_report_store1(&this->use_retreat_type, v98, v102);
  this->use_retreat_type = use_retreat_type;
  v103 = ((_BYTE)a2 - 118) & 7;
  v104 = (*(_BYTE *)(((unsigned __int64)&a2->dont_destroy_by_perform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v103 >= *(_BYTE *)(((unsigned __int64)&a2->dont_destroy_by_perform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v104 )
    __asan_report_load1(&a2->dont_destroy_by_perform, v103, v104);
  dont_destroy_by_perform = a2->dont_destroy_by_perform;
  v106 = *(_BYTE *)(((unsigned __int64)&this->dont_destroy_by_perform >> 3) + 0x7FFF8000);
  LOBYTE(v103) = v106 != 0;
  v107 = (v106 != 0) & (unsigned __int8)((((unsigned __int8)this - 118) & 7) >= v106);
  if ( (_BYTE)v107 )
    __asan_report_store1(&this->dont_destroy_by_perform, v103, v107);
  this->dont_destroy_by_perform = dont_destroy_by_perform;
  v108 = ((_BYTE)a2 - 117) & 7;
  v109 = (*(_BYTE *)(((unsigned __int64)&a2->correct_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v108 >= *(_BYTE *)(((unsigned __int64)&a2->correct_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v109 )
    __asan_report_load1(&a2->correct_owner, v108, v109);
  correct_owner = a2->correct_owner;
  v111 = *(_BYTE *)(((unsigned __int64)&this->correct_owner >> 3) + 0x7FFF8000);
  LOBYTE(v108) = v111 != 0;
  v112 = (v111 != 0) & (unsigned __int8)((((unsigned __int8)this - 117) & 7) >= v111);
  if ( (_BYTE)v112 )
    __asan_report_store1(&this->correct_owner, v108, v112);
  this->correct_owner = correct_owner;
};

// Line 139: range 000000000EDA9E50-000000000EDA9EAF
void __cdecl data::ConfigTransPointEntity::~ConfigTransPointEntity(data::ConfigTransPointEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTransPointEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::vector<data::TransPointUpdateMaterial>::~vector(&this->update_material_list);
  data::ConfigGadget::~ConfigGadget(this);
};

// Line 142: range 000000000ED7139C-000000000ED715E3
void __cdecl data::ConfigHeadControl::ConfigHeadControl(data::ConfigHeadControl *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx

  std::enable_shared_from_this<data::ConfigHeadControl>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigHeadControl>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHeadControl = v2;
  if ( *(char *)(((unsigned __int64)&this->use_head_control >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->use_head_control, v1, &this->use_head_control);
  this->use_head_control = 0;
  v3 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_yaw_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_yaw_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_yaw_degree, v3);
  }
  this->max_yaw_degree = 50.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_pitch_degree >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_pitch_degree >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_pitch_degree, v3);
  }
  this->max_pitch_degree = 15.0;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed, v4);
  }
  this->speed = 6.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight_speed, v4);
  }
  this->weight_speed = 2.0;
  v5 = ((_BYTE)this + 44) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_white_anim_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_white_anim_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_white_anim_states, v5, v6);
  this->use_white_anim_states = 1;
  std::vector<std::string>::vector(&this->anim_states);
  std::vector<std::string>::vector(&this->dont_anim_states);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 142: range 000000000ED77068-000000000ED774A6
void __cdecl data::ConfigHeadControl::ConfigHeadControl(
        data::ConfigHeadControl *const this,
        const data::ConfigHeadControl *a2)
{
  std::enable_shared_from_this<data::ConfigHeadControl> *v2; // rsi
  int (**v3)(...); // rdx
  bool use_head_control; // cl
  char v5; // al
  float max_yaw_degree; // xmm0_4
  __int64 v7; // rsi
  float max_pitch_degree; // xmm0_4
  float speed; // xmm0_4
  __int64 v10; // rsi
  float weight_speed; // xmm0_4
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool use_white_anim_states; // cl
  char v15; // dl
  __int64 v16; // rdx
  data::StringArray *p_dont_anim_states; // rsi
  bool is_json_loaded; // cl
  char v19; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigHeadControl>;
  std::enable_shared_from_this<data::ConfigHeadControl>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigHeadControl>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigHeadControl = v3;
  if ( *(char *)(((unsigned __int64)&a2->use_head_control >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->use_head_control, v2, &a2->use_head_control);
  use_head_control = a2->use_head_control;
  v5 = *(_BYTE *)(((unsigned __int64)&this->use_head_control >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->use_head_control, v2, &this->use_head_control);
  }
  this->use_head_control = use_head_control;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_yaw_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_yaw_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_yaw_degree);
  }
  max_yaw_degree = a2->max_yaw_degree;
  v7 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_yaw_degree >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_yaw_degree >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_yaw_degree, v7);
  }
  this->max_yaw_degree = max_yaw_degree;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_pitch_degree >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->max_pitch_degree >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->max_pitch_degree);
  }
  max_pitch_degree = a2->max_pitch_degree;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_pitch_degree >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_pitch_degree >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_pitch_degree, v7);
  }
  this->max_pitch_degree = max_pitch_degree;
  if ( *(_BYTE *)(((unsigned __int64)&a2->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->speed);
  }
  speed = a2->speed;
  v10 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed, v10);
  }
  this->speed = speed;
  if ( *(_BYTE *)(((unsigned __int64)&a2->weight_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->weight_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->weight_speed);
  }
  weight_speed = a2->weight_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->weight_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weight_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->weight_speed, v10);
  }
  this->weight_speed = weight_speed;
  v12 = ((_BYTE)a2 + 44) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&a2->use_white_anim_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&a2->use_white_anim_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&a2->use_white_anim_states, v12, v13);
  use_white_anim_states = a2->use_white_anim_states;
  v15 = *(_BYTE *)(((unsigned __int64)&this->use_white_anim_states >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->use_white_anim_states, v12, v16);
  this->use_white_anim_states = use_white_anim_states;
  std::vector<std::string>::vector(&this->anim_states, &a2->anim_states);
  p_dont_anim_states = &a2->dont_anim_states;
  std::vector<std::string>::vector(&this->dont_anim_states, &a2->dont_anim_states);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_dont_anim_states, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(p_dont_anim_states) = v19 != 0;
    __asan_report_store1(&this->is_json_loaded, p_dont_anim_states, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 157: range 000000000ED77790-000000000ED77801
void __cdecl data::ConfigHeadControl::~ConfigHeadControl(data::ConfigHeadControl *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHeadControl = v2;
  std::vector<std::string>::~vector(&this->dont_anim_states);
  std::vector<std::string>::~vector(&this->anim_states);
  std::enable_shared_from_this<data::ConfigHeadControl>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigHeadControl>);
};

// Line 157: range 000000000ED77802-000000000ED7782C
void __cdecl data::ConfigHeadControl::~ConfigHeadControl(data::ConfigHeadControl *const this)
{
  data::ConfigHeadControl::~ConfigHeadControl(this);
  operator delete(this, 0x68uLL);
};

// Line 162: range 000000000E6E39AC-000000000E6E39BC
const char *__cdecl data::ConfigHeadControl::getTypeName(const data::ConfigHeadControl *const this)
{
  return "ConfigHeadControl";
};

// Line 163: range 000000000E6E39BE-000000000E6E3B5A
int32_t __cdecl data::ConfigHeadControl::getHashNum(const data::ConfigHeadControl *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigHeadControl::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigHeadControl",
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

// Line 171: range 000000000ED8E210-000000000ED8E2A5
void __cdecl data::ConfigGuidePoint::ConfigGuidePoint(data::ConfigGuidePoint *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  data::ConfigTemplateData::ConfigTemplateData(&this->ui__indicator);
  if ( *(char *)(((unsigned __int64)&this->disable_quest_arrow >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_quest_arrow, v1, &this->disable_quest_arrow);
  this->disable_quest_arrow = 0;
  v2 = ((_BYTE)this + 97) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 182: range 000000000ED7782E-000000000ED7787B
void __cdecl data::ConfigMonsterHeadControl::ConfigMonsterHeadControl(data::ConfigMonsterHeadControl *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigHeadControl::ConfigHeadControl(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHeadControl = v2;
};

// Line 182: range 000000000ED77C30-000000000ED77C88
void __cdecl data::ConfigMonsterHeadControl::ConfigMonsterHeadControl(
        data::ConfigMonsterHeadControl *const this,
        const data::ConfigMonsterHeadControl *a2)
{
  int (**v2)(...); // rdx

  data::ConfigHeadControl::ConfigHeadControl(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigHeadControl = v2;
};

// Line 188: range 000000000EDAAB24-000000000EDAAB71
void __cdecl data::ConfigMonsterHeadControl::~ConfigMonsterHeadControl(data::ConfigMonsterHeadControl *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterHeadControl + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigHeadControl = v2;
  data::ConfigHeadControl::~ConfigHeadControl(this);
};

// Line 188: range 000000000EDAAB72-000000000EDAAB9C
void __cdecl data::ConfigMonsterHeadControl::~ConfigMonsterHeadControl(data::ConfigMonsterHeadControl *const this)
{
  data::ConfigMonsterHeadControl::~ConfigMonsterHeadControl(this);
  operator delete(this, 0x68uLL);
};

// Line 193: range 000000000E6E3B5C-000000000E6E3B6C
const char *__cdecl data::ConfigMonsterHeadControl::getTypeName(const data::ConfigMonsterHeadControl *const this)
{
  return "ConfigMonsterHeadControl";
};

// Line 194: range 000000000E6E3B6E-000000000E6E3D0A
int32_t __cdecl data::ConfigMonsterHeadControl::getHashNum(const data::ConfigMonsterHeadControl *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonsterHeadControl::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMonsterHeadControl",
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

// Line 210: range 000000000ED77F72-000000000ED77FB3
void __cdecl data::ConfigMonsterHeadControlFactory::ConfigMonsterHeadControlFactory(
        data::ConfigMonsterHeadControlFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterHeadControlFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMonsterHeadControlFactory = v2;
};

// Line 218: range 000000000ED78A76-000000000ED78E24
void __cdecl data::ConfigEntityPoint::ConfigEntityPoint(data::ConfigEntityPoint *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  __int64 v4; // rsi
  char v5[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown>";
  *(_QWORD *)(v1 + 16) = data::ConfigEntityPoint::ConfigEntityPoint;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -202116351;
  std::allocator<char>::allocator(v1 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->element_absorb,
    "RootNode",
    (const std::allocator<char> *)(v1 + 32));
  std::allocator<char>::~allocator(v1 + 32);
  *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->element_pendant);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    &this->element_drop,
    "RootNode",
    (const std::allocator<char> *)(v1 + 48));
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 1;
  std::allocator<char>::allocator(v1 + 64);
  std::string::basic_string<std::allocator<char>>(
    &this->bullet_aim,
    "RootNode",
    (const std::allocator<char> *)(v1 + 64));
  std::allocator<char>::~allocator(v1 + 64);
  *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
  std::vector<std::string>::vector(&this->hit_points);
  std::vector<std::string>::vector(&this->selected_points);
  if ( *(char *)(((unsigned __int64)&this->ignore_transform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_transform, "RootNode", &this->ignore_transform);
  this->ignore_transform = 0;
  v4 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_point_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->selected_point_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->selected_point_radius, v4);
  }
  this->selected_point_radius = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v4, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v5 == (char *)v1 )
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

// Line 218: range 000000000E7FB382-000000000E7FB63C
void __cdecl data::ConfigEntityPoint::ConfigEntityPoint(
        data::ConfigEntityPoint *const this,
        const data::ConfigEntityPoint *a2)
{
  data::StringArray *p_selected_points; // rsi
  bool ignore_transform; // cl
  char v4; // al
  float selected_point_radius; // xmm0_4
  __int64 v6; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->element_pendant, &a2->element_pendant);
  std::string::basic_string(&this->element_drop, &a2->element_drop);
  std::string::basic_string(&this->bullet_aim, &a2->bullet_aim);
  std::vector<std::string>::vector(&this->hit_points, &a2->hit_points);
  p_selected_points = &a2->selected_points;
  std::vector<std::string>::vector(&this->selected_points, p_selected_points);
  if ( *(char *)(((unsigned __int64)&a2->ignore_transform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->ignore_transform, p_selected_points, &a2->ignore_transform);
  ignore_transform = a2->ignore_transform;
  v4 = *(_BYTE *)(((unsigned __int64)&this->ignore_transform >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_selected_points) = v4 != 0;
    __asan_report_store1(&this->ignore_transform, p_selected_points, &this->ignore_transform);
  }
  this->ignore_transform = ignore_transform;
  if ( *(_BYTE *)(((unsigned __int64)&a2->selected_point_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->selected_point_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->selected_point_radius);
  }
  selected_point_radius = a2->selected_point_radius;
  v6 = (((_BYTE)this - 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_point_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->selected_point_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->selected_point_radius, v6);
  }
  this->selected_point_radius = selected_point_radius;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v6, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 218: range 000000000E7FB63E-000000000E7FB6AA
void __cdecl data::ConfigEntityPoint::~ConfigEntityPoint(data::ConfigEntityPoint *const this)
{
  std::vector<std::string>::~vector(&this->selected_points);
  std::vector<std::string>::~vector(&this->hit_points);
  std::string::~string(&this->bullet_aim);
  std::string::~string(&this->element_drop);
  std::string::~string(&this->element_pendant);
  std::string::~string(this);
};

// Line 230: range 000000000E6F097C-000000000E6F0A9D
void __cdecl data::ConfigKeyInput::ConfigKeyInput(data::ConfigKeyInput *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->key_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->input_key_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->input_key_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->input_key_code, v2);
  }
  this->input_key_code = 0;
  std::string::basic_string(&this->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_cd, v2);
  }
  this->ability_cd = 0.2;
  v3 = ((_BYTE)this + 44) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 237: range 000000000E8BB86A-000000000E8BBA7F
void __cdecl data::ConfigKeyInput::ConfigKeyInput(data::ConfigKeyInput *const this, data::ConfigKeyInput *a2)
{
  int32_t key_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t input_key_code; // ecx
  char v6; // dl
  float ability_cd; // xmm0_4
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_json_loaded; // cl
  char v11; // dl
  __int64 v12; // rdx
  data::ConfigKeyInput *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  key_id = a2->key_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->key_id = key_id;
  v4 = (((_BYTE)v13 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->input_key_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->input_key_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->input_key_code);
  }
  input_key_code = v13->input_key_code;
  v6 = *(_BYTE *)(((unsigned __int64)&this->input_key_code >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->input_key_code, v4);
  }
  this->input_key_code = input_key_code;
  std::string::basic_string(&this->ability_name, &v13->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&v13->ability_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->ability_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->ability_cd);
  }
  ability_cd = v13->ability_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_cd, &v13->ability_name);
  }
  this->ability_cd = ability_cd;
  v8 = ((_BYTE)v13 + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v13->is_json_loaded, v8, v9);
  is_json_loaded = v13->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v8, v12);
  this->is_json_loaded = is_json_loaded;
};

// Line 237: range 000000000E8C0BE4-000000000E8C0D0D
void __cdecl data::TransPointUpdateMaterial::TransPointUpdateMaterial(
        data::TransPointUpdateMaterial *const this,
        data::TransPointUpdateMaterial *a2)
{
  uint32_t level; // ecx
  char v3; // al
  data::StringArray *p_transforms; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  data::TransPointUpdateMaterial *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  level = a2->level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->level = level;
  std::string::basic_string(&this->mat_path, &v7->mat_path);
  p_transforms = &v7->transforms;
  std::vector<std::string>::vector(&this->transforms, &v7->transforms);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_transforms, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_transforms) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_transforms, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 248: range 000000000E6E77E2-000000000E6E796F
void __cdecl data::ConfigMatLinearChangedByDistance::ConfigMatLinearChangedByDistance(
        data::ConfigMatLinearChangedByDistance *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  std::string::basic_string(this);
  std::vector<std::string>::vector(&this->texture_property);
  std::vector<std::string>::vector(&this->float_property);
  if ( *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_ratio, v1);
  }
  this->min_ratio = 0.5;
  v2 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_ratio, v2);
  }
  this->max_ratio = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_distance, v2);
  }
  this->min_distance = 0.0;
  v3 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_distance, v3);
  }
  this->max_distance = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 248: range 000000000EBFE3E8-000000000EBFE6F1
void __cdecl data::ConfigMatLinearChangedByDistance::ConfigMatLinearChangedByDistance(
        data::ConfigMatLinearChangedByDistance *const this,
        const data::ConfigMatLinearChangedByDistance *a2)
{
  data::StringList *p_float_property; // rsi
  float min_ratio; // xmm0_4
  float max_ratio; // xmm0_4
  __int64 v5; // rsi
  float min_distance; // xmm0_4
  float max_distance; // xmm0_4
  __int64 v8; // rsi
  bool is_json_loaded; // cl
  char v10; // al

  std::string::basic_string(this, a2);
  std::vector<std::string>::vector(&this->texture_property, &a2->texture_property);
  p_float_property = &a2->float_property;
  std::vector<std::string>::vector(&this->float_property, p_float_property);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_ratio);
  }
  min_ratio = a2->min_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_ratio, p_float_property);
  }
  this->min_ratio = min_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_ratio);
  }
  max_ratio = a2->max_ratio;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_ratio, v5);
  }
  this->max_ratio = max_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_distance);
  }
  min_distance = a2->min_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_distance, v5);
  }
  this->min_distance = min_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_distance);
  }
  max_distance = a2->max_distance;
  v8 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_distance, v8);
  }
  this->max_distance = max_distance;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v8, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 248: range 000000000E89C7D4-000000000E89CAA5
void __cdecl data::ConfigMatLinearChangedByDistance::ConfigMatLinearChangedByDistance(
        data::ConfigMatLinearChangedByDistance *const this,
        data::ConfigMatLinearChangedByDistance *a2)
{
  std::vector<std::string> *p_float_property; // rsi
  float min_ratio; // xmm0_4
  float max_ratio; // xmm0_4
  __int64 v5; // rsi
  float min_distance; // xmm0_4
  float max_distance; // xmm0_4
  __int64 v8; // rsi
  bool is_json_loaded; // cl
  char v10; // al

  std::string::basic_string(this, a2);
  std::vector<std::string>::vector(&this->texture_property, &a2->texture_property);
  p_float_property = &a2->float_property;
  std::vector<std::string>::vector(&this->float_property, p_float_property);
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_ratio);
  }
  min_ratio = a2->min_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_ratio >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_ratio, p_float_property);
  }
  this->min_ratio = min_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_ratio);
  }
  max_ratio = a2->max_ratio;
  v5 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_ratio, v5);
  }
  this->max_ratio = max_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&a2->min_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->min_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->min_distance);
  }
  min_distance = a2->min_distance;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min_distance, v5);
  }
  this->min_distance = min_distance;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_distance);
  }
  max_distance = a2->max_distance;
  v8 = (((_BYTE)this + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_distance, v8);
  }
  this->max_distance = max_distance;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v8, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store1(&this->is_json_loaded, v8, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 248: range 000000000E6E7970-000000000E6E79AA
void __cdecl data::ConfigMatLinearChangedByDistance::~ConfigMatLinearChangedByDistance(
        data::ConfigMatLinearChangedByDistance *const this)
{
  std::vector<std::string>::~vector(&this->float_property);
  std::vector<std::string>::~vector(&this->texture_property);
  std::string::~string(this);
};

// Line 282: range 000000000ED7917C-000000000ED792F1
void __cdecl data::ConfigModel::ConfigModel(data::ConfigModel *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  std::vector<data::ConfigMatLinearChangedByDistance>::vector(&this->mat_linear_changed_by_distance);
  std::string::basic_string(&this->born_effect);
  std::string::basic_string(&this->attach_effect);
  if ( *(char *)(((unsigned __int64)&this->ignore_dist_check_when_attach_effect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_dist_check_when_attach_effect, v1, &this->ignore_dist_check_when_attach_effect);
  this->ignore_dist_check_when_attach_effect = 0;
  v2 = ((_BYTE)this + 89) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->can_bake_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->can_bake_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->can_bake_mesh, v2, v3);
  this->can_bake_mesh = 1;
  v4 = ((_BYTE)this + 90) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->set_per_object_shadow_group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->set_per_object_shadow_group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->set_per_object_shadow_group_id, v4, v5);
  this->set_per_object_shadow_group_id = 0;
  v6 = ((_BYTE)this + 91) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->has_character_renderering >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->has_character_renderering >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->has_character_renderering, v6, v7);
  this->has_character_renderering = 0;
  v8 = ((_BYTE)this + 92) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->is_json_loaded, v8, v9);
  this->is_json_loaded = 0;
};

// Line 282: range 000000000E7FBF0E-000000000E7FC217
void __cdecl data::ConfigModel::ConfigModel(data::ConfigModel *const this, const data::ConfigModel *a2)
{
  std::string *p_attach_effect; // rsi
  bool ignore_dist_check_when_attach_effect; // cl
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // rdx
  bool can_bake_mesh; // cl
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool set_per_object_shadow_group_id; // cl
  char v13; // dl
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  bool has_character_renderering; // cl
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  bool is_json_loaded; // cl
  char v23; // dl
  __int64 v24; // rdx

  std::vector<data::ConfigMatLinearChangedByDistance>::vector(
    &this->mat_linear_changed_by_distance,
    &a2->mat_linear_changed_by_distance);
  std::string::basic_string(&this->born_effect, &a2->born_effect);
  p_attach_effect = &a2->attach_effect;
  std::string::basic_string(&this->attach_effect, p_attach_effect);
  if ( *(char *)(((unsigned __int64)&a2->ignore_dist_check_when_attach_effect >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &a2->ignore_dist_check_when_attach_effect,
      p_attach_effect,
      &a2->ignore_dist_check_when_attach_effect);
  ignore_dist_check_when_attach_effect = a2->ignore_dist_check_when_attach_effect;
  v4 = *(_BYTE *)(((unsigned __int64)&this->ignore_dist_check_when_attach_effect >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_attach_effect) = v4 != 0;
    __asan_report_store1(
      &this->ignore_dist_check_when_attach_effect,
      p_attach_effect,
      &this->ignore_dist_check_when_attach_effect);
  }
  this->ignore_dist_check_when_attach_effect = ignore_dist_check_when_attach_effect;
  v5 = ((_BYTE)a2 + 89) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&a2->can_bake_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&a2->can_bake_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&a2->can_bake_mesh, v5, v6);
  can_bake_mesh = a2->can_bake_mesh;
  v8 = *(_BYTE *)(((unsigned __int64)&this->can_bake_mesh >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((((unsigned __int8)this + 89) & 7) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->can_bake_mesh, v5, v9);
  this->can_bake_mesh = can_bake_mesh;
  v10 = ((_BYTE)a2 + 90) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&a2->set_per_object_shadow_group_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&a2->set_per_object_shadow_group_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&a2->set_per_object_shadow_group_id, v10, v11);
  set_per_object_shadow_group_id = a2->set_per_object_shadow_group_id;
  v13 = *(_BYTE *)(((unsigned __int64)&this->set_per_object_shadow_group_id >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 90) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->set_per_object_shadow_group_id, v10, v14);
  this->set_per_object_shadow_group_id = set_per_object_shadow_group_id;
  v15 = ((_BYTE)a2 + 91) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&a2->has_character_renderering >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&a2->has_character_renderering >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&a2->has_character_renderering, v15, v16);
  has_character_renderering = a2->has_character_renderering;
  v18 = *(_BYTE *)(((unsigned __int64)&this->has_character_renderering >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this + 91) & 7) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->has_character_renderering, v15, v19);
  this->has_character_renderering = has_character_renderering;
  v20 = ((_BYTE)a2 + 92) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&a2->is_json_loaded, v20, v21);
  is_json_loaded = a2->is_json_loaded;
  v23 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v23 != 0;
  v24 = (v23 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v23);
  if ( (_BYTE)v24 )
    __asan_report_store1(&this->is_json_loaded, v20, v24);
  this->is_json_loaded = is_json_loaded;
};

// Line 282: range 000000000E7FC218-000000000E7FC252
void __cdecl data::ConfigModel::~ConfigModel(data::ConfigModel *const this)
{
  std::string::~string(&this->attach_effect);
  std::string::~string(&this->born_effect);
  std::vector<data::ConfigMatLinearChangedByDistance>::~vector(&this->mat_linear_changed_by_distance);
};

// Line 311: range 000000000ED792F2-000000000ED7937B
void __cdecl data::ConfigDitherByStartDitherAction::ConfigDitherByStartDitherAction(
        data::ConfigDitherByStartDitherAction *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 334: range 000000000ED7937C-000000000ED7940D
void __cdecl data::ConfigDitherByBetweenCameraAndAvatar::ConfigDitherByBetweenCameraAndAvatar(
        data::ConfigDitherByBetweenCameraAndAvatar *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->detect_dither_range = 0.0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 357: range 000000000ED7940E-000000000ED794A3
void __cdecl data::ConfigDitherByNormalBetweenCamera::ConfigDitherByNormalBetweenCamera(
        data::ConfigDitherByNormalBetweenCamera *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->detect_dither_range = 3.0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 380: range 000000000ED794A4-000000000ED795A5
void __cdecl data::ConfigDither::ConfigDither(data::ConfigDither *const this)
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
  this->show_dither_duration = 0.0;
  data::ConfigDitherByStartDitherAction::ConfigDitherByStartDitherAction(&this->start_dither_action);
  data::ConfigDitherByBetweenCameraAndAvatar::ConfigDitherByBetweenCameraAndAvatar(&this->between_camera_and_avatar);
  data::ConfigDitherByNormalBetweenCamera::ConfigDitherByNormalBetweenCamera(&this->normal_between_camera);
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->hide_effect_when_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->hide_effect_when_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->hide_effect_when_dither, v1, v2);
  this->hide_effect_when_dither = 0;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 407: range 000000000ED795A6-000000000ED7960B
void __cdecl data::ConfigGlobalValue::ConfigGlobalValue(data::ConfigGlobalValue *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->server_global_values);
  std::unordered_map<std::string,float>::unordered_map(&this->init_server_global_values);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 407: range 000000000E7FCAA2-000000000E7FCB7B
void __cdecl data::ConfigGlobalValue::ConfigGlobalValue(
        data::ConfigGlobalValue *const this,
        const data::ConfigGlobalValue *a2)
{
  data::FloatMap *p_init_server_global_values; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::string>::vector(&this->server_global_values, &a2->server_global_values);
  p_init_server_global_values = &a2->init_server_global_values;
  std::unordered_map<std::string,float>::unordered_map(&this->init_server_global_values, p_init_server_global_values);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_init_server_global_values, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_init_server_global_values) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_init_server_global_values, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 407: range 000000000E7FCB7C-000000000E7FCBA6
void __cdecl data::ConfigGlobalValue::~ConfigGlobalValue(data::ConfigGlobalValue *const this)
{
  std::unordered_map<std::string,float>::~unordered_map(&this->init_server_global_values);
  std::vector<std::string>::~vector(&this->server_global_values);
};

// Line 431: range 000000000ED7960C-000000000ED79661
void __cdecl data::ConfigEntityTags::ConfigEntityTags(data::ConfigEntityTags *const this)
{
  __int64 v1; // rsi

  std::vector<std::string>::vector(&this->init_tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 431: range 000000000E7FCF0E-000000000E7FCFA9
void __cdecl data::ConfigEntityTags::ConfigEntityTags(
        data::ConfigEntityTags *const this,
        const data::ConfigEntityTags *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<std::string>::vector(&this->init_tags, &a2->init_tags);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 431: range 000000000E7FCFAA-000000000E7FCFC4
void __cdecl data::ConfigEntityTags::~ConfigEntityTags(data::ConfigEntityTags *const this)
{
  std::vector<std::string>::~vector(&this->init_tags);
};

// Line 454: range 000000000ED79662-000000000ED797F6
void __cdecl data::ConfigEntity::ConfigEntity(data::ConfigEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigEntity>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEntity>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigEntityCommon::ConfigEntityCommon(&this->common);
  if ( *(_WORD *)(((unsigned __int64)&this->head_control >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigHeadControl>();
  data::ConfigEntityPoint::ConfigEntityPoint(&this->special_point);
  data::ConfigCustomAttackShape::ConfigCustomAttackShape(&this->custom_attack_shape);
  data::ConfigModel::ConfigModel(&this->model);
  data::ConfigDither::ConfigDither(&this->dither);
  data::ConfigGlobalValue::ConfigGlobalValue(&this->global_value);
  data::ConfigEntityTags::ConfigEntityTags(&this->entity_tags);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 454: range 000000000ED79DA4-000000000ED7A202
void __cdecl data::ConfigEntity::ConfigEntity(data::ConfigEntity *const this, const data::ConfigEntity *a2)
{
  std::enable_shared_from_this<data::ConfigEntity> *v2; // rsi
  int (**v3)(...); // rdx
  __int64 v4; // rbx
  __int64 v5; // rbx
  data::ConfigDitherByBetweenCameraAndAvatar between_camera_and_avatar; // rbx
  data::ConfigEntityTags *p_entity_tags; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigEntity>;
  std::enable_shared_from_this<data::ConfigEntity>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigEntity>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigEntity = v3;
  data::ConfigEntityCommon::ConfigEntityCommon(&this->common, &a2->common);
  std::shared_ptr<data::ConfigHeadControl>::shared_ptr(&this->head_control, &a2->head_control);
  data::ConfigEntityPoint::ConfigEntityPoint(&this->special_point, &a2->special_point);
  if ( *(char *)(((unsigned __int64)&this->custom_attack_shape >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->custom_attack_shape.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->custom_attack_shape.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->custom_attack_shape, 40LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->custom_attack_shape >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->custom_attack_shape.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->custom_attack_shape.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->custom_attack_shape, 40LL);
  }
  v4 = *(_QWORD *)&a2->custom_attack_shape.box.custom_attack_box__size__x;
  this->custom_attack_shape.sphere = a2->custom_attack_shape.sphere;
  *(_QWORD *)&this->custom_attack_shape.box.custom_attack_box__size__x = v4;
  v5 = *(_QWORD *)&a2->custom_attack_shape.circle.custom_attack_circle__radius;
  *(_QWORD *)&this->custom_attack_shape.box.custom_attack_box__size__z = *(_QWORD *)&a2->custom_attack_shape.box.custom_attack_box__size__z;
  *(_QWORD *)&this->custom_attack_shape.circle.custom_attack_circle__radius = v5;
  *(_QWORD *)&this->custom_attack_shape.circle.is_json_loaded = *(_QWORD *)&a2->custom_attack_shape.circle.is_json_loaded;
  data::ConfigModel::ConfigModel(&this->model, &a2->model);
  if ( *(char *)(((unsigned __int64)&this->dither >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->dither.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 13) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->dither.is_json_loaded + 2) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->dither, 28LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->dither >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->dither.is_json_loaded + 2) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 - 13) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->dither.is_json_loaded + 2) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->dither, 28LL);
  }
  between_camera_and_avatar = a2->dither.between_camera_and_avatar;
  *(_QWORD *)&this->dither.show_dither_duration = *(_QWORD *)&a2->dither.show_dither_duration;
  this->dither.between_camera_and_avatar = between_camera_and_avatar;
  this->dither.normal_between_camera = a2->dither.normal_between_camera;
  *(_DWORD *)&this->dither.hide_effect_when_dither = *(_DWORD *)&a2->dither.hide_effect_when_dither;
  data::ConfigGlobalValue::ConfigGlobalValue(&this->global_value, &a2->global_value);
  p_entity_tags = &a2->entity_tags;
  data::ConfigEntityTags::ConfigEntityTags(&this->entity_tags, &a2->entity_tags);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_entity_tags, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_entity_tags) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_entity_tags, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 469: range 000000000ED8B7DE-000000000ED8B808
void __cdecl data::ConfigEntity::~ConfigEntity(data::ConfigEntity *const this)
{
  data::ConfigEntity::~ConfigEntity(this);
  operator delete(this, 0x278uLL);
};

// Line 469: range 000000000ED8B724-000000000ED8B7DD
void __cdecl data::ConfigEntity::~ConfigEntity(data::ConfigEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigEntityTags::~ConfigEntityTags(&this->entity_tags);
  data::ConfigGlobalValue::~ConfigGlobalValue(&this->global_value);
  data::ConfigModel::~ConfigModel(&this->model);
  data::ConfigEntityPoint::~ConfigEntityPoint(&this->special_point);
  std::shared_ptr<data::ConfigHeadControl>::~shared_ptr(&this->head_control);
  data::ConfigEntityCommon::~ConfigEntityCommon(&this->common);
  std::enable_shared_from_this<data::ConfigEntity>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigEntity>);
};

// Line 474: range 000000000E6E3D48-000000000E6E3D58
const char *__cdecl data::ConfigEntity::getTypeName(const data::ConfigEntity *const this)
{
  return "ConfigEntity";
};

// Line 475: range 000000000E6E3D5A-000000000E6E3EF6
int32_t __cdecl data::ConfigEntity::getHashNum(const data::ConfigEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigEntity",
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

// Line 494: range 000000000ED921FC-000000000ED924CD
void __cdecl data::ConfigIntee::ConfigIntee(data::ConfigIntee *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->use_trigger = 1;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->use_interaction_trigger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->use_interaction_trigger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->use_interaction_trigger, v3, v4);
  this->use_interaction_trigger = 0;
  v5 = ((_BYTE)this + 2) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_push_collider >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_push_collider >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->use_push_collider, v5, v6);
  this->use_push_collider = 0;
  v7 = ((_BYTE)this + 3) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->use_head_control_trigger >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->use_head_control_trigger >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_head_control_trigger, v7, v8);
  this->use_head_control_trigger = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_radius, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->trigger_radius = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_height, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->trigger_height = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->interaction_trigger_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interaction_trigger_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->interaction_trigger_radius, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->interaction_trigger_radius = 3.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->head_ctrl_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->head_ctrl_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->head_ctrl_radius, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->head_ctrl_radius = 5.0;
  data::Vector::Vector(&this->trigger_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->attention_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attention_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attention_angle, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->attention_angle = 0.0;
  v9 = ((_BYTE)this + 40) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->is_json_loaded, v9, v10);
  this->is_json_loaded = 0;
};

// Line 526: range 000000000ED9204E-000000000ED9212D
void __cdecl data::ConfigCharacterRendering::ConfigCharacterRendering(data::ConfigCharacterRendering *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->override_light_dir = 0;
  data::Vector::Vector(&this->override_light_euler_angle);
  if ( *(_BYTE *)(((unsigned __int64)&this->override_tick_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->override_tick_interval >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->override_tick_interval, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->override_tick_interval = -1;
  v3 = ((_BYTE)this + 24) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 551: range 000000000E6F0FF6-000000000E6F1070
void __cdecl data::ConfigPoseInitialParam::ConfigPoseInitialParam(data::ConfigPoseInitialParam *const this)
{
  __int64 v1; // rsi

  std::unordered_map<std::string,std::string>::unordered_map(&this->int_params);
  std::unordered_map<std::string,std::string>::unordered_map(&this->float_params);
  std::unordered_map<std::string,std::string>::unordered_map(&this->bool_params);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 551: range 000000000EB59332-000000000EB59445
void __cdecl data::ConfigPoseInitialParam::ConfigPoseInitialParam(
        data::ConfigPoseInitialParam *const this,
        const data::ConfigPoseInitialParam *a2)
{
  data::StringMap *p_bool_params; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::unordered_map<std::string,std::string>::unordered_map(&this->int_params, &a2->int_params);
  std::unordered_map<std::string,std::string>::unordered_map(&this->float_params, &a2->float_params);
  p_bool_params = &a2->bool_params;
  std::unordered_map<std::string,std::string>::unordered_map(&this->bool_params, p_bool_params);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_bool_params, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_bool_params) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_bool_params, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 551: range 000000000E6F1072-000000000E6F10AC
void __cdecl data::ConfigPoseInitialParam::~ConfigPoseInitialParam(data::ConfigPoseInitialParam *const this)
{
  std::unordered_map<std::string,std::string>::~unordered_map(&this->bool_params);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->float_params);
  std::unordered_map<std::string,std::string>::~unordered_map(&this->int_params);
};

// Line 635: range 000000000ED72FB8-000000000ED7330F
void __cdecl data::ConfigGadgetUIBase::ConfigGadgetUIBase(data::ConfigGadgetUIBase *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetUIBase::ConfigGadgetUIBase;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  std::enable_shared_from_this<data::ConfigGadgetUIBase>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetUIBase>);
  v5 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v5;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->gadget_uibtn_cfg_path,
    "TEST/TEST_Chest_Btn",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  std::string::basic_string(&this->ui_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->on_touch >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->on_touch >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->on_touch, "TEST/TEST_Chest_Btn");
  }
  this->on_touch = Default_8;
  std::vector<std::string>::vector(&this->touch_params);
  if ( *(_BYTE *)(((unsigned __int64)&this->show_comb_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_comb_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->show_comb_type, "TEST/TEST_Chest_Btn");
  }
  this->show_comb_type = LOGIC_NONE;
  std::vector<data::GadgetUIItemShowCondType>::vector(&this->show_cond_types);
  std::vector<float>::vector(&this->post_gadget_action_params);
  std::string::basic_string(&this->icon);
  std::string::basic_string(&this->group_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->item_type, "TEST/TEST_Chest_Btn");
  }
  this->item_type = Default_9;
  v6 = ((_BYTE)this - 12) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->need_dialog_confirm >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->need_dialog_confirm >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->need_dialog_confirm, v6, v7);
  this->need_dialog_confirm = 0;
  std::string::basic_string(&this->confirm_dialog_title);
  std::string::basic_string(&this->confirm_dialog_content);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
  this->is_json_loaded = 0;
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 635: range 000000000ED7AFDC-000000000ED7B495
void __cdecl data::ConfigGadgetUIBase::ConfigGadgetUIBase(
        data::ConfigGadgetUIBase *const this,
        const data::ConfigGadgetUIBase *a2)
{
  std::enable_shared_from_this<data::ConfigGadgetUIBase> *v2; // rsi
  int (**v3)(...); // rdx
  std::string *p_ui_name; // rsi
  data::TouchInteractType on_touch; // ecx
  char v6; // al
  data::StringArray *p_touch_params; // rsi
  data::LogicType show_comb_type; // ecx
  char v9; // al
  std::string *p_group_name; // rsi
  data::GadgetInteractItemType item_type; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool need_dialog_confirm; // cl
  char v16; // dl
  __int64 v17; // rdx
  std::string *p_confirm_dialog_content; // rsi
  bool is_json_loaded; // cl
  char v20; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGadgetUIBase>;
  std::enable_shared_from_this<data::ConfigGadgetUIBase>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGadgetUIBase>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGadgetUIBase = v3;
  std::string::basic_string(&this->gadget_uibtn_cfg_path, &a2->gadget_uibtn_cfg_path);
  p_ui_name = &a2->ui_name;
  std::string::basic_string(&this->ui_name, &a2->ui_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->on_touch >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->on_touch >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->on_touch);
  }
  on_touch = a2->on_touch;
  v6 = *(_BYTE *)(((unsigned __int64)&this->on_touch >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_ui_name) = v6 != 0;
    __asan_report_store4(&this->on_touch, p_ui_name);
  }
  this->on_touch = on_touch;
  p_touch_params = &a2->touch_params;
  std::vector<std::string>::vector(&this->touch_params, &a2->touch_params);
  if ( *(_BYTE *)(((unsigned __int64)&a2->show_comb_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->show_comb_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->show_comb_type);
  }
  show_comb_type = a2->show_comb_type;
  v9 = *(_BYTE *)(((unsigned __int64)&this->show_comb_type >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_touch_params) = v9 != 0;
    __asan_report_store4(&this->show_comb_type, p_touch_params);
  }
  this->show_comb_type = show_comb_type;
  std::vector<data::GadgetUIItemShowCondType>::vector(&this->show_cond_types, &a2->show_cond_types);
  std::vector<float>::vector(&this->post_gadget_action_params, &a2->post_gadget_action_params);
  std::string::basic_string(&this->icon, &a2->icon);
  p_group_name = &a2->group_name;
  std::string::basic_string(&this->group_name, &a2->group_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->item_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->item_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->item_type);
  }
  item_type = a2->item_type;
  v12 = *(_BYTE *)(((unsigned __int64)&this->item_type >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_group_name) = v12 != 0;
    __asan_report_store4(&this->item_type, p_group_name);
  }
  this->item_type = item_type;
  v13 = ((_BYTE)a2 - 12) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->need_dialog_confirm >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->need_dialog_confirm >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->need_dialog_confirm, v13, v14);
  need_dialog_confirm = a2->need_dialog_confirm;
  v16 = *(_BYTE *)(((unsigned __int64)&this->need_dialog_confirm >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this - 12) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->need_dialog_confirm, v13, v17);
  this->need_dialog_confirm = need_dialog_confirm;
  std::string::basic_string(&this->confirm_dialog_title, &a2->confirm_dialog_title);
  p_confirm_dialog_content = &a2->confirm_dialog_content;
  std::string::basic_string(&this->confirm_dialog_content, &a2->confirm_dialog_content);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_confirm_dialog_content, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v20 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v20 < 0 )
  {
    LOBYTE(p_confirm_dialog_content) = v20 != 0;
    __asan_report_store1(&this->is_json_loaded, p_confirm_dialog_content, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 655: range 000000000ED73310-000000000ED733FB
void __cdecl data::ConfigGadgetUIBase::~ConfigGadgetUIBase(data::ConfigGadgetUIBase *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIBase + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v2;
  std::string::~string(&this->confirm_dialog_content);
  std::string::~string(&this->confirm_dialog_title);
  std::string::~string(&this->group_name);
  std::string::~string(&this->icon);
  std::vector<float>::~vector(&this->post_gadget_action_params);
  std::vector<data::GadgetUIItemShowCondType>::~vector(&this->show_cond_types);
  std::vector<std::string>::~vector(&this->touch_params);
  std::string::~string(&this->ui_name);
  std::string::~string(&this->gadget_uibtn_cfg_path);
  std::enable_shared_from_this<data::ConfigGadgetUIBase>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetUIBase>);
};

// Line 655: range 000000000ED733FC-000000000ED73426
void __cdecl data::ConfigGadgetUIBase::~ConfigGadgetUIBase(data::ConfigGadgetUIBase *const this)
{
  data::ConfigGadgetUIBase::~ConfigGadgetUIBase(this);
  operator delete(this, 0x140uLL);
};

// Line 660: range 000000000E6E3EF8-000000000E6E3F08
const char *__cdecl data::ConfigGadgetUIBase::getTypeName(const data::ConfigGadgetUIBase *const this)
{
  return "ConfigGadgetUIBase";
};

// Line 661: range 000000000E6E3F0A-000000000E6E40A6
int32_t __cdecl data::ConfigGadgetUIBase::getHashNum(const data::ConfigGadgetUIBase *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetUIBase::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetUIBase",
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

// Line 680: range 000000000ED7B77E-000000000ED7B816
void __cdecl data::ConfigGadgetUIExtraItem::ConfigGadgetUIExtraItem(data::ConfigGadgetUIExtraItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetUIBase::ConfigGadgetUIBase((data::ConfigGadgetUIBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIExtraItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->extra_id = 1;
};

// Line 680: range 000000000ED7BC68-000000000ED7BD4F
void __cdecl data::ConfigGadgetUIExtraItem::ConfigGadgetUIExtraItem(
        data::ConfigGadgetUIExtraItem *const this,
        const data::ConfigGadgetUIExtraItem *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  int32_t extra_id; // ecx
  char v5; // dl

  data::ConfigGadgetUIBase::ConfigGadgetUIBase(
    (data::ConfigGadgetUIBase *const)this,
    (const data::ConfigGadgetUIBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIExtraItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetUIBase = v2;
  v3 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_id);
  }
  extra_id = a2->extra_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->extra_id, v3);
  }
  this->extra_id = extra_id;
};

// Line 687: range 000000000EDAAAF8-000000000EDAAB22
void __cdecl data::ConfigGadgetUIExtraItem::~ConfigGadgetUIExtraItem(data::ConfigGadgetUIExtraItem *const this)
{
  data::ConfigGadgetUIExtraItem::~ConfigGadgetUIExtraItem(this);
  operator delete(this, 0x140uLL);
};

// Line 687: range 000000000EDAAAAA-000000000EDAAAF7
void __cdecl data::ConfigGadgetUIExtraItem::~ConfigGadgetUIExtraItem(data::ConfigGadgetUIExtraItem *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIExtraItem + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v2;
  data::ConfigGadgetUIBase::~ConfigGadgetUIBase((data::ConfigGadgetUIBase *const)this);
};

// Line 692: range 000000000E6E40A8-000000000E6E40B8
const char *__cdecl data::ConfigGadgetUIExtraItem::getTypeName(const data::ConfigGadgetUIExtraItem *const this)
{
  return "ConfigGadgetUIExtraItem";
};

// Line 693: range 000000000E6E40BA-000000000E6E4256
int32_t __cdecl data::ConfigGadgetUIExtraItem::getHashNum(const data::ConfigGadgetUIExtraItem *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetUIExtraItem::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetUIExtraItem",
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

// Line 709: range 000000000ED7C038-000000000ED7C079
void __cdecl data::ConfigGadgetUIExtraItemFactory::ConfigGadgetUIExtraItemFactory(
        data::ConfigGadgetUIExtraItemFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIExtraItemFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIExtraItemFactory = v2;
};

// Line 724: range 000000000ED73460-000000000ED735D9
void __cdecl data::ConfigGadgetUI::ConfigGadgetUI(data::ConfigGadgetUI *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  data::ConfigGadgetUIBase::ConfigGadgetUIBase((data::ConfigGadgetUIBase *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUI + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v2;
  v3 = ((_BYTE)this + 57) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->always_interactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->always_interactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->always_interactive, v3, v4);
  this->always_interactive = 0;
  v5 = ((_BYTE)this + 58) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->can_interact_in_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->can_interact_in_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->can_interact_in_combat, v5, v6);
  this->can_interact_in_combat = 1;
  v7 = ((_BYTE)this + 59) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->can_only_interact_in_stand_still >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->can_only_interact_in_stand_still >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->can_only_interact_in_stand_still, v7, v8);
  this->can_only_interact_in_stand_still = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->open_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->open_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->open_reward_id, (((_BYTE)this + 60) & 7u) + 3);
  }
  this->open_reward_id = 0;
  std::vector<std::shared_ptr<data::ConfigGadgetUIExtraItem>>::vector(&this->gadget_uiextra_items);
};

// Line 724: range 000000000ED7C3D8-000000000ED7C6A0
void __cdecl data::ConfigGadgetUI::ConfigGadgetUI(data::ConfigGadgetUI *const this, const data::ConfigGadgetUI *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool always_interactive; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool can_interact_in_combat; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool can_only_interact_in_stand_still; // cl
  char v16; // dl
  __int64 v17; // rdx
  __int64 v18; // rsi
  uint32_t open_reward_id; // ecx
  char v20; // dl

  data::ConfigGadgetUIBase::ConfigGadgetUIBase(
    (data::ConfigGadgetUIBase *const)this,
    (const data::ConfigGadgetUIBase *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUI + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetUIBase = v2;
  v3 = ((_BYTE)a2 + 57) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->always_interactive >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->always_interactive >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->always_interactive, v3, v4);
  always_interactive = a2->always_interactive;
  v6 = *(_BYTE *)(((unsigned __int64)&this->always_interactive >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 57) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->always_interactive, v3, v7);
  this->always_interactive = always_interactive;
  v8 = ((_BYTE)a2 + 58) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&a2->can_interact_in_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&a2->can_interact_in_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&a2->can_interact_in_combat, v8, v9);
  can_interact_in_combat = a2->can_interact_in_combat;
  v11 = *(_BYTE *)(((unsigned __int64)&this->can_interact_in_combat >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 58) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->can_interact_in_combat, v8, v12);
  this->can_interact_in_combat = can_interact_in_combat;
  v13 = ((_BYTE)a2 + 59) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&a2->can_only_interact_in_stand_still >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&a2->can_only_interact_in_stand_still >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&a2->can_only_interact_in_stand_still, v13, v14);
  can_only_interact_in_stand_still = a2->can_only_interact_in_stand_still;
  v16 = *(_BYTE *)(((unsigned __int64)&this->can_only_interact_in_stand_still >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 59) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->can_only_interact_in_stand_still, v13, v17);
  this->can_only_interact_in_stand_still = can_only_interact_in_stand_still;
  v18 = (((_BYTE)a2 + 60) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->open_reward_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->open_reward_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->open_reward_id);
  }
  open_reward_id = a2->open_reward_id;
  v20 = *(_BYTE *)(((unsigned __int64)&this->open_reward_id >> 3) + 0x7FFF8000);
  if ( v20 != 0 && (char)((((_BYTE)this + 60) & 7) + 3) >= v20 )
  {
    LOBYTE(v18) = v20 != 0;
    __asan_report_store4(&this->open_reward_id, v18);
  }
  this->open_reward_id = open_reward_id;
  std::vector<std::shared_ptr<data::ConfigGadgetUIExtraItem>>::vector(
    &this->gadget_uiextra_items,
    &a2->gadget_uiextra_items);
};

// Line 735: range 000000000EDAAA7E-000000000EDAAAA8
void __cdecl data::ConfigGadgetUI::~ConfigGadgetUI(data::ConfigGadgetUI *const this)
{
  data::ConfigGadgetUI::~ConfigGadgetUI(this);
  operator delete(this, 0x158uLL);
};

// Line 735: range 000000000EDAAA1E-000000000EDAAA7D
void __cdecl data::ConfigGadgetUI::~ConfigGadgetUI(data::ConfigGadgetUI *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUI + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIBase = v2;
  std::vector<std::shared_ptr<data::ConfigGadgetUIExtraItem>>::~vector(&this->gadget_uiextra_items);
  data::ConfigGadgetUIBase::~ConfigGadgetUIBase((data::ConfigGadgetUIBase *const)this);
};

// Line 740: range 000000000E6E4258-000000000E6E4268
const char *__cdecl data::ConfigGadgetUI::getTypeName(const data::ConfigGadgetUI *const this)
{
  return "ConfigGadgetUI";
};

// Line 741: range 000000000E6E426A-000000000E6E4406
int32_t __cdecl data::ConfigGadgetUI::getHashNum(const data::ConfigGadgetUI *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetUI::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetUI",
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

// Line 757: range 000000000ED7C98A-000000000ED7C9CB
void __cdecl data::ConfigGadgetUIFactory::ConfigGadgetUIFactory(data::ConfigGadgetUIFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetUIFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetUIFactory = v2;
};

// Line 799: range 000000000ED71998-000000000ED71A24
void __cdecl data::ConfigGadgetPredicate::ConfigGadgetPredicate(data::ConfigGadgetPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigGadgetPredicate>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetPredicate>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 799: range 000000000ED7CEE8-000000000ED7CFBE
void __cdecl data::ConfigGadgetPredicate::ConfigGadgetPredicate(
        data::ConfigGadgetPredicate *const this,
        const data::ConfigGadgetPredicate *a2)
{
  std::enable_shared_from_this<data::ConfigGadgetPredicate> *v2; // rsi
  int (**v3)(...); // rdx
  bool is_json_loaded; // cl
  char v5; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGadgetPredicate>;
  std::enable_shared_from_this<data::ConfigGadgetPredicate>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGadgetPredicate>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGadgetPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGadgetPredicate = v3;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 806: range 000000000ED7D25A-000000000ED7D284
void __cdecl data::ConfigGadgetPredicate::~ConfigGadgetPredicate(data::ConfigGadgetPredicate *const this)
{
  data::ConfigGadgetPredicate::~ConfigGadgetPredicate(this);
  operator delete(this, 0x20uLL);
};

// Line 806: range 000000000ED7D208-000000000ED7D259
void __cdecl data::ConfigGadgetPredicate::~ConfigGadgetPredicate(data::ConfigGadgetPredicate *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetPredicate + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  std::enable_shared_from_this<data::ConfigGadgetPredicate>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetPredicate>);
};

// Line 811: range 000000000E6E4408-000000000E6E4418
const char *__cdecl data::ConfigGadgetPredicate::getTypeName(const data::ConfigGadgetPredicate *const this)
{
  return "ConfigGadgetPredicate";
};

// Line 812: range 000000000E6E441A-000000000E6E45B6
int32_t __cdecl data::ConfigGadgetPredicate::getHashNum(const data::ConfigGadgetPredicate *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetPredicate::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetPredicate",
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

// Line 831: range 000000000ED7D286-000000000ED7D313
void __cdecl data::ConfigPredicateByTime::ConfigPredicateByTime(data::ConfigPredicateByTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_night >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_night >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_night, v3, v4);
  this->is_night = 0;
};

// Line 831: range 000000000ED7D79C-000000000ED7D874
void __cdecl data::ConfigPredicateByTime::ConfigPredicateByTime(
        data::ConfigPredicateByTime *const this,
        const data::ConfigPredicateByTime *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_night; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate(
    (data::ConfigGadgetPredicate *const)this,
    (const data::ConfigGadgetPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_night >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_night >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_night, v3, v4);
  is_night = a2->is_night;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_night >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_night, v3, v7);
  this->is_night = is_night;
};

// Line 838: range 000000000EDAA9A4-000000000EDAA9F1
void __cdecl data::ConfigPredicateByTime::~ConfigPredicateByTime(data::ConfigPredicateByTime *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByTime + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  data::ConfigGadgetPredicate::~ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
};

// Line 838: range 000000000EDAA9F2-000000000EDAAA1C
void __cdecl data::ConfigPredicateByTime::~ConfigPredicateByTime(data::ConfigPredicateByTime *const this)
{
  data::ConfigPredicateByTime::~ConfigPredicateByTime(this);
  operator delete(this, 0x20uLL);
};

// Line 843: range 000000000E6E45B8-000000000E6E45C8
const char *__cdecl data::ConfigPredicateByTime::getTypeName(const data::ConfigPredicateByTime *const this)
{
  return "ConfigPredicateByTime";
};

// Line 844: range 000000000E6E45CA-000000000E6E4766
int32_t __cdecl data::ConfigPredicateByTime::getHashNum(const data::ConfigPredicateByTime *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigPredicateByTime::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPredicateByTime",
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

// Line 860: range 000000000ED7DABE-000000000ED7DAFF
void __cdecl data::ConfigPredicateByTimeFactory::ConfigPredicateByTimeFactory(
        data::ConfigPredicateByTimeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByTimeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPredicateByTimeFactory = v2;
};

// Line 868: range 000000000ED7DE08-000000000ED7DE95
void __cdecl data::ConfigPredicateByPlatform::ConfigPredicateByPlatform(data::ConfigPredicateByPlatform *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlatform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_start, v3, v4);
  this->is_start = 0;
};

// Line 868: range 000000000ED7E31E-000000000ED7E3F6
void __cdecl data::ConfigPredicateByPlatform::ConfigPredicateByPlatform(
        data::ConfigPredicateByPlatform *const this,
        const data::ConfigPredicateByPlatform *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_start; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate(
    (data::ConfigGadgetPredicate *const)this,
    (const data::ConfigGadgetPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlatform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_start >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_start >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_start, v3, v4);
  is_start = a2->is_start;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_start >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_start, v3, v7);
  this->is_start = is_start;
};

// Line 875: range 000000000EDAA92A-000000000EDAA977
void __cdecl data::ConfigPredicateByPlatform::~ConfigPredicateByPlatform(data::ConfigPredicateByPlatform *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlatform + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  data::ConfigGadgetPredicate::~ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
};

// Line 875: range 000000000EDAA978-000000000EDAA9A2
void __cdecl data::ConfigPredicateByPlatform::~ConfigPredicateByPlatform(data::ConfigPredicateByPlatform *const this)
{
  data::ConfigPredicateByPlatform::~ConfigPredicateByPlatform(this);
  operator delete(this, 0x20uLL);
};

// Line 880: range 000000000E6E4768-000000000E6E4778
const char *__cdecl data::ConfigPredicateByPlatform::getTypeName(const data::ConfigPredicateByPlatform *const this)
{
  return "ConfigPredicateByPlatform";
};

// Line 881: range 000000000E6E477A-000000000E6E4916
int32_t __cdecl data::ConfigPredicateByPlatform::getHashNum(const data::ConfigPredicateByPlatform *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigPredicateByPlatform::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPredicateByPlatform",
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

// Line 897: range 000000000ED7E640-000000000ED7E681
void __cdecl data::ConfigPredicateByPlatformFactory::ConfigPredicateByPlatformFactory(
        data::ConfigPredicateByPlatformFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByPlatformFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPredicateByPlatformFactory = v2;
};

// Line 905: range 000000000ED7E98A-000000000ED7EA17
void __cdecl data::ConfigPredicateByInteract::ConfigPredicateByInteract(data::ConfigPredicateByInteract *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)this + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_enable_interact, v3, v4);
  this->is_enable_interact = 0;
};

// Line 905: range 000000000ED7EEA0-000000000ED7EF78
void __cdecl data::ConfigPredicateByInteract::ConfigPredicateByInteract(
        data::ConfigPredicateByInteract *const this,
        const data::ConfigPredicateByInteract *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool is_enable_interact; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGadgetPredicate::ConfigGadgetPredicate(
    (data::ConfigGadgetPredicate *const)this,
    (const data::ConfigGadgetPredicate *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetPredicate = v2;
  v3 = ((_BYTE)a2 + 25) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->is_enable_interact >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->is_enable_interact >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->is_enable_interact, v3, v4);
  is_enable_interact = a2->is_enable_interact;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_enable_interact >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 25) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_enable_interact, v3, v7);
  this->is_enable_interact = is_enable_interact;
};

// Line 912: range 000000000EDAA8FE-000000000EDAA928
void __cdecl data::ConfigPredicateByInteract::~ConfigPredicateByInteract(data::ConfigPredicateByInteract *const this)
{
  data::ConfigPredicateByInteract::~ConfigPredicateByInteract(this);
  operator delete(this, 0x20uLL);
};

// Line 912: range 000000000EDAA8B0-000000000EDAA8FD
void __cdecl data::ConfigPredicateByInteract::~ConfigPredicateByInteract(data::ConfigPredicateByInteract *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByInteract + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetPredicate = v2;
  data::ConfigGadgetPredicate::~ConfigGadgetPredicate((data::ConfigGadgetPredicate *const)this);
};

// Line 917: range 000000000E6E4918-000000000E6E4928
const char *__cdecl data::ConfigPredicateByInteract::getTypeName(const data::ConfigPredicateByInteract *const this)
{
  return "ConfigPredicateByInteract";
};

// Line 918: range 000000000E6E492A-000000000E6E4AC6
int32_t __cdecl data::ConfigPredicateByInteract::getHashNum(const data::ConfigPredicateByInteract *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigPredicateByInteract::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigPredicateByInteract",
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

// Line 934: range 000000000ED7F1C2-000000000ED7F203
void __cdecl data::ConfigPredicateByInteractFactory::ConfigPredicateByInteractFactory(
        data::ConfigPredicateByInteractFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigPredicateByInteractFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigPredicateByInteractFactory = v2;
};

// Line 942: range 000000000ED7F50C-000000000ED7F633
void __cdecl data::ConfigGadgetStateAction::ConfigGadgetStateAction(data::ConfigGadgetStateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigGadgetStateAction>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetStateAction>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gadget_state, v1);
  }
  this->gadget_state = Default_4;
  if ( *(_WORD *)(((unsigned __int64)&this->predicate >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetPredicate>();
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 942: range 000000000ED7FB72-000000000ED7FCD8
void __cdecl data::ConfigGadgetStateAction::ConfigGadgetStateAction(
        data::ConfigGadgetStateAction *const this,
        const data::ConfigGadgetStateAction *a2)
{
  std::enable_shared_from_this<data::ConfigGadgetStateAction> *v2; // rsi
  int (**v3)(...); // rdx
  data::GadgetState gadget_state; // ecx
  char v5; // al
  data::ConfigGadgetPredicatePtr *p_predicate; // rsi
  bool is_json_loaded; // cl
  char v8; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGadgetStateAction>;
  std::enable_shared_from_this<data::ConfigGadgetStateAction>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGadgetStateAction>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGadgetStateAction = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->gadget_state);
  }
  gadget_state = a2->gadget_state;
  v5 = *(_BYTE *)(((unsigned __int64)&this->gadget_state >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(v2) = v5 != 0;
    __asan_report_store4(&this->gadget_state, v2);
  }
  this->gadget_state = gadget_state;
  p_predicate = &a2->predicate;
  std::shared_ptr<data::ConfigGadgetPredicate>::shared_ptr(&this->predicate, &a2->predicate);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_predicate, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_predicate) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_predicate, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 951: range 000000000ED80E6E-000000000ED80E98
void __cdecl data::ConfigGadgetStateAction::~ConfigGadgetStateAction(data::ConfigGadgetStateAction *const this)
{
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
  operator delete(this, 0x38uLL);
};

// Line 951: range 000000000ED80E0C-000000000ED80E6D
void __cdecl data::ConfigGadgetStateAction::~ConfigGadgetStateAction(data::ConfigGadgetStateAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::shared_ptr<data::ConfigGadgetPredicate>::~shared_ptr(&this->predicate);
  std::enable_shared_from_this<data::ConfigGadgetStateAction>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetStateAction>);
};

// Line 956: range 000000000E6E4B04-000000000E6E4B14
const char *__cdecl data::ConfigGadgetStateAction::getTypeName(const data::ConfigGadgetStateAction *const this)
{
  return "ConfigGadgetStateAction";
};

// Line 957: range 000000000E6E4B16-000000000E6E4CB2
int32_t __cdecl data::ConfigGadgetStateAction::getHashNum(const data::ConfigGadgetStateAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateAction",
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

// Line 1017: range 000000000ED74306-000000000ED7449D
void __cdecl data::ConfigGadgetTurn::ConfigGadgetTurn(data::ConfigGadgetTurn *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  std::enable_shared_from_this<data::ConfigGadgetTurn>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetTurn>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTurn = v2;
  std::string::basic_string(&this->move_part_around_x);
  std::string::basic_string(&this->anchor_part_around_x);
  std::string::basic_string(&this->move_part_around_y);
  std::string::basic_string(&this->anchor_part_around_y);
  std::string::basic_string(&this->move_part_around_z);
  std::string::basic_string(&this->anchor_part_around_z);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_begin_turning_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_stop_turning_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_begin_turning_event_around_x);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_stop_turning_event_around_x);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_begin_turning_event_around_y);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_stop_turning_event_around_y);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_begin_turning_event_around_z);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_stop_turning_event_around_z);
  std::unordered_map<unsigned int,data::ConfigGadgetTurnState>::unordered_map(&this->turn_state_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1017: range 000000000ED7FFD6-000000000ED803E6
void __cdecl data::ConfigGadgetTurn::ConfigGadgetTurn(
        data::ConfigGadgetTurn *const this,
        const data::ConfigGadgetTurn *a2)
{
  std::enable_shared_from_this<data::ConfigGadgetTurn> *v2; // rsi
  int (**v3)(...); // rdx
  data::ConfigGadgetTurnStateMap *p_turn_state_map; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  v2 = &a2->std::enable_shared_from_this<data::ConfigGadgetTurn>;
  std::enable_shared_from_this<data::ConfigGadgetTurn>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigGadgetTurn>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigGadgetTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigGadgetTurn = v3;
  std::string::basic_string(&this->move_part_around_x, &a2->move_part_around_x);
  std::string::basic_string(&this->anchor_part_around_x, &a2->anchor_part_around_x);
  std::string::basic_string(&this->move_part_around_y, &a2->move_part_around_y);
  std::string::basic_string(&this->anchor_part_around_y, &a2->anchor_part_around_y);
  std::string::basic_string(&this->move_part_around_z, &a2->move_part_around_z);
  std::string::basic_string(&this->anchor_part_around_z, &a2->anchor_part_around_z);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_begin_turning_event, &a2->audio_begin_turning_event);
  data::ConfigWwiseString::ConfigWwiseString(&this->audio_stop_turning_event, &a2->audio_stop_turning_event);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_begin_turning_event_around_x,
    &a2->audio_begin_turning_event_around_x);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_stop_turning_event_around_x,
    &a2->audio_stop_turning_event_around_x);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_begin_turning_event_around_y,
    &a2->audio_begin_turning_event_around_y);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_stop_turning_event_around_y,
    &a2->audio_stop_turning_event_around_y);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_begin_turning_event_around_z,
    &a2->audio_begin_turning_event_around_z);
  data::ConfigWwiseString::ConfigWwiseString(
    &this->audio_stop_turning_event_around_z,
    &a2->audio_stop_turning_event_around_z);
  p_turn_state_map = &a2->turn_state_map;
  std::unordered_map<unsigned int,data::ConfigGadgetTurnState>::unordered_map(
    &this->turn_state_map,
    &a2->turn_state_map);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_turn_state_map, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_turn_state_map) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_turn_state_map, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1039: range 000000000ED7484C-000000000ED749A3
void __cdecl data::ConfigGadgetTurn::~ConfigGadgetTurn(data::ConfigGadgetTurn *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTurn = v2;
  std::unordered_map<unsigned int,data::ConfigGadgetTurnState>::~unordered_map(&this->turn_state_map);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_stop_turning_event_around_z);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_begin_turning_event_around_z);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_stop_turning_event_around_y);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_begin_turning_event_around_y);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_stop_turning_event_around_x);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_begin_turning_event_around_x);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_stop_turning_event);
  data::ConfigWwiseString::~ConfigWwiseString(&this->audio_begin_turning_event);
  std::string::~string(&this->anchor_part_around_z);
  std::string::~string(&this->move_part_around_z);
  std::string::~string(&this->anchor_part_around_y);
  std::string::~string(&this->move_part_around_y);
  std::string::~string(&this->anchor_part_around_x);
  std::string::~string(&this->move_part_around_x);
  std::enable_shared_from_this<data::ConfigGadgetTurn>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigGadgetTurn>);
};

// Line 1039: range 000000000ED749A4-000000000ED749CE
void __cdecl data::ConfigGadgetTurn::~ConfigGadgetTurn(data::ConfigGadgetTurn *const this)
{
  data::ConfigGadgetTurn::~ConfigGadgetTurn(this);
  operator delete(this, 0x258uLL);
};

// Line 1044: range 000000000E6E4CB4-000000000E6E4CC4
const char *__cdecl data::ConfigGadgetTurn::getTypeName(const data::ConfigGadgetTurn *const this)
{
  return "ConfigGadgetTurn";
};

// Line 1045: range 000000000E6E4CC6-000000000E6E4E62
int32_t __cdecl data::ConfigGadgetTurn::getHashNum(const data::ConfigGadgetTurn *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetTurn::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetTurn",
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

// Line 1064: range 000000000ED74B2A-000000000ED74BAD
void __cdecl data::ConfigGlobalValueTurn::ConfigGlobalValueTurn(data::ConfigGlobalValueTurn *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetTurn::ConfigGadgetTurn(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGlobalValueTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTurn = v2;
  std::string::basic_string(&this->global_value_name);
  std::string::basic_string(&this->avatar_target_pos_gvkey_name);
  std::unordered_map<unsigned int,data::Vector>::unordered_map(&this->avatar_target_pos_map);
};

// Line 1064: range 000000000ED806D0-000000000ED807D9
void __cdecl data::ConfigGlobalValueTurn::ConfigGlobalValueTurn(
        data::ConfigGlobalValueTurn *const this,
        const data::ConfigGlobalValueTurn *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadgetTurn::ConfigGadgetTurn(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGlobalValueTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetTurn = v2;
  std::string::basic_string(&this->global_value_name, &a2->global_value_name);
  std::string::basic_string(&this->avatar_target_pos_gvkey_name, &a2->avatar_target_pos_gvkey_name);
  std::unordered_map<unsigned int,data::Vector>::unordered_map(&this->avatar_target_pos_map, &a2->avatar_target_pos_map);
};

// Line 1073: range 000000000EDAA884-000000000EDAA8AE
void __cdecl data::ConfigGlobalValueTurn::~ConfigGlobalValueTurn(data::ConfigGlobalValueTurn *const this)
{
  data::ConfigGlobalValueTurn::~ConfigGlobalValueTurn(this);
  operator delete(this, 0x2D0uLL);
};

// Line 1073: range 000000000EDAA800-000000000EDAA883
void __cdecl data::ConfigGlobalValueTurn::~ConfigGlobalValueTurn(data::ConfigGlobalValueTurn *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGlobalValueTurn + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetTurn = v2;
  std::unordered_map<unsigned int,data::Vector>::~unordered_map(&this->avatar_target_pos_map);
  std::string::~string(&this->avatar_target_pos_gvkey_name);
  std::string::~string(&this->global_value_name);
  data::ConfigGadgetTurn::~ConfigGadgetTurn(this);
};

// Line 1078: range 000000000E6E4E64-000000000E6E4E74
const char *__cdecl data::ConfigGlobalValueTurn::getTypeName(const data::ConfigGlobalValueTurn *const this)
{
  return "ConfigGlobalValueTurn";
};

// Line 1079: range 000000000E6E4E76-000000000E6E5012
int32_t __cdecl data::ConfigGlobalValueTurn::getHashNum(const data::ConfigGlobalValueTurn *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGlobalValueTurn::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGlobalValueTurn",
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

// Line 1095: range 000000000ED80AC2-000000000ED80B03
void __cdecl data::ConfigGlobalValueTurnFactory::ConfigGlobalValueTurnFactory(
        data::ConfigGlobalValueTurnFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGlobalValueTurnFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGlobalValueTurnFactory = v2;
};

// Line 1103: range 000000000ED80E9A-000000000ED80F07
void __cdecl data::ConfigGadgetStateFireEffect::ConfigGadgetStateFireEffect(
        data::ConfigGadgetStateFireEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->root_name);
  std::string::basic_string(&this->effect_pattern);
};

// Line 1103: range 000000000ED81350-000000000ED81416
void __cdecl data::ConfigGadgetStateFireEffect::ConfigGadgetStateFireEffect(
        data::ConfigGadgetStateFireEffect *const this,
        const data::ConfigGadgetStateFireEffect *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->root_name, &a2->root_name);
  std::string::basic_string(&this->effect_pattern, &a2->effect_pattern);
};

// Line 1111: range 000000000EDAA766-000000000EDAA7D3
void __cdecl data::ConfigGadgetStateFireEffect::~ConfigGadgetStateFireEffect(
        data::ConfigGadgetStateFireEffect *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireEffect + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::~string(&this->effect_pattern);
  std::string::~string(&this->root_name);
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
};

// Line 1111: range 000000000EDAA7D4-000000000EDAA7FE
void __cdecl data::ConfigGadgetStateFireEffect::~ConfigGadgetStateFireEffect(
        data::ConfigGadgetStateFireEffect *const this)
{
  data::ConfigGadgetStateFireEffect::~ConfigGadgetStateFireEffect(this);
  operator delete(this, 0x78uLL);
};

// Line 1116: range 000000000E6E5014-000000000E6E5024
const char *__cdecl data::ConfigGadgetStateFireEffect::getTypeName(const data::ConfigGadgetStateFireEffect *const this)
{
  return "ConfigGadgetStateFireEffect";
};

// Line 1117: range 000000000E6E5026-000000000E6E51C2
int32_t __cdecl data::ConfigGadgetStateFireEffect::getHashNum(const data::ConfigGadgetStateFireEffect *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateFireEffect::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateFireEffect",
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

// Line 1133: range 000000000ED81700-000000000ED81741
void __cdecl data::ConfigGadgetStateFireEffectFactory::ConfigGadgetStateFireEffectFactory(
        data::ConfigGadgetStateFireEffectFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireEffectFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateFireEffectFactory = v2;
};

// Line 1141: range 000000000ED81A4A-000000000ED81AA7
void __cdecl data::ConfigGadgetStateSetAnimTrigger::ConfigGadgetStateSetAnimTrigger(
        data::ConfigGadgetStateSetAnimTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->trigger_id);
};

// Line 1141: range 000000000ED81EF6-000000000ED81F8C
void __cdecl data::ConfigGadgetStateSetAnimTrigger::ConfigGadgetStateSetAnimTrigger(
        data::ConfigGadgetStateSetAnimTrigger *const this,
        const data::ConfigGadgetStateSetAnimTrigger *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->trigger_id, &a2->trigger_id);
};

// Line 1148: range 000000000EDAA73A-000000000EDAA764
void __cdecl data::ConfigGadgetStateSetAnimTrigger::~ConfigGadgetStateSetAnimTrigger(
        data::ConfigGadgetStateSetAnimTrigger *const this)
{
  data::ConfigGadgetStateSetAnimTrigger::~ConfigGadgetStateSetAnimTrigger(this);
  operator delete(this, 0x58uLL);
};

// Line 1148: range 000000000EDAA6DC-000000000EDAA739
void __cdecl data::ConfigGadgetStateSetAnimTrigger::~ConfigGadgetStateSetAnimTrigger(
        data::ConfigGadgetStateSetAnimTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::~string(&this->trigger_id);
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
};

// Line 1153: range 000000000E6E51C4-000000000E6E51D4
const char *__cdecl data::ConfigGadgetStateSetAnimTrigger::getTypeName(
        const data::ConfigGadgetStateSetAnimTrigger *const this)
{
  return "ConfigGadgetStateSetAnimTrigger";
};

// Line 1154: range 000000000E6E51D6-000000000E6E5372
int32_t __cdecl data::ConfigGadgetStateSetAnimTrigger::getHashNum(
        const data::ConfigGadgetStateSetAnimTrigger *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateSetAnimTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateSetAnimTrigger",
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

// Line 1170: range 000000000ED82276-000000000ED822B7
void __cdecl data::ConfigGadgetStateSetAnimTriggerFactory::ConfigGadgetStateSetAnimTriggerFactory(
        data::ConfigGadgetStateSetAnimTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateSetAnimTriggerFactory = v2;
};

// Line 1178: range 000000000ED825C0-000000000ED8269B
void __cdecl data::ConfigGadgetStateSetAnimInt::ConfigGadgetStateSetAnimInt(
        data::ConfigGadgetStateSetAnimInt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->int_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->value, v1);
  }
  this->value = 0;
  v3 = ((_BYTE)this + 92) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sync_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sync_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sync_state, v3, v4);
  this->sync_state = 0;
};

// Line 1178: range 000000000ED82AE4-000000000ED82C6F
void __cdecl data::ConfigGadgetStateSetAnimInt::ConfigGadgetStateSetAnimInt(
        data::ConfigGadgetStateSetAnimInt *const this,
        const data::ConfigGadgetStateSetAnimInt *a2)
{
  int (**v2)(...); // rdx
  std::string *p_int_id; // rsi
  int32_t value; // ecx
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool sync_state; // cl
  char v9; // dl
  __int64 v10; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  p_int_id = &a2->int_id;
  std::string::basic_string(&this->int_id, &a2->int_id);
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v5 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_int_id) = v5 != 0;
    __asan_report_store4(&this->value, p_int_id);
  }
  this->value = value;
  v6 = ((_BYTE)a2 + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&a2->sync_state >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&a2->sync_state >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&a2->sync_state, v6, v7);
  sync_state = a2->sync_state;
  v9 = *(_BYTE *)(((unsigned __int64)&this->sync_state >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->sync_state, v6, v10);
  this->sync_state = sync_state;
};

// Line 1187: range 000000000EDAA652-000000000EDAA6AF
void __cdecl data::ConfigGadgetStateSetAnimInt::~ConfigGadgetStateSetAnimInt(
        data::ConfigGadgetStateSetAnimInt *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimInt + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::~string(&this->int_id);
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
};

// Line 1187: range 000000000EDAA6B0-000000000EDAA6DA
void __cdecl data::ConfigGadgetStateSetAnimInt::~ConfigGadgetStateSetAnimInt(
        data::ConfigGadgetStateSetAnimInt *const this)
{
  data::ConfigGadgetStateSetAnimInt::~ConfigGadgetStateSetAnimInt(this);
  operator delete(this, 0x60uLL);
};

// Line 1192: range 000000000E6E5374-000000000E6E5384
const char *__cdecl data::ConfigGadgetStateSetAnimInt::getTypeName(const data::ConfigGadgetStateSetAnimInt *const this)
{
  return "ConfigGadgetStateSetAnimInt";
};

// Line 1193: range 000000000E6E5386-000000000E6E5522
int32_t __cdecl data::ConfigGadgetStateSetAnimInt::getHashNum(const data::ConfigGadgetStateSetAnimInt *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateSetAnimInt::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateSetAnimInt",
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

// Line 1209: range 000000000ED82F58-000000000ED82F99
void __cdecl data::ConfigGadgetStateSetAnimIntFactory::ConfigGadgetStateSetAnimIntFactory(
        data::ConfigGadgetStateSetAnimIntFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSetAnimIntFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateSetAnimIntFactory = v2;
};

// Line 1217: range 000000000ED832A2-000000000ED8333B
void __cdecl data::ConfigGadgetStateFireAISound::ConfigGadgetStateFireAISound(
        data::ConfigGadgetStateFireAISound *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireAISound + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->volume >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->volume >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->volume, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->volume = 50.0;
};

// Line 1217: range 000000000ED837C6-000000000ED838A6
void __cdecl data::ConfigGadgetStateFireAISound::ConfigGadgetStateFireAISound(
        data::ConfigGadgetStateFireAISound *const this,
        const data::ConfigGadgetStateFireAISound *a2)
{
  int (**v2)(...); // rdx
  float volume; // xmm0_4

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(
    (data::ConfigGadgetStateAction *const)this,
    (const data::ConfigGadgetStateAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireAISound + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->volume >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->volume >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->volume);
  }
  volume = a2->volume;
  if ( *(_BYTE *)(((unsigned __int64)&this->volume >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->volume >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->volume, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->volume = volume;
};

// Line 1224: range 000000000EDAA5D8-000000000EDAA625
void __cdecl data::ConfigGadgetStateFireAISound::~ConfigGadgetStateFireAISound(
        data::ConfigGadgetStateFireAISound *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireAISound + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
};

// Line 1224: range 000000000EDAA626-000000000EDAA650
void __cdecl data::ConfigGadgetStateFireAISound::~ConfigGadgetStateFireAISound(
        data::ConfigGadgetStateFireAISound *const this)
{
  data::ConfigGadgetStateFireAISound::~ConfigGadgetStateFireAISound(this);
  operator delete(this, 0x38uLL);
};

// Line 1229: range 000000000E6E5524-000000000E6E5534
const char *__cdecl data::ConfigGadgetStateFireAISound::getTypeName(
        const data::ConfigGadgetStateFireAISound *const this)
{
  return "ConfigGadgetStateFireAISound";
};

// Line 1230: range 000000000E6E5536-000000000E6E56D2
int32_t __cdecl data::ConfigGadgetStateFireAISound::getHashNum(const data::ConfigGadgetStateFireAISound *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateFireAISound::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateFireAISound",
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

// Line 1246: range 000000000ED83AF0-000000000ED83B31
void __cdecl data::ConfigGadgetStateFireAISoundFactory::ConfigGadgetStateFireAISoundFactory(
        data::ConfigGadgetStateFireAISoundFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateFireAISoundFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateFireAISoundFactory = v2;
};

// Line 1254: range 000000000ED83E3A-000000000ED83EC7
void __cdecl data::ConfigGadgetStateEnableGadgetIntee::ConfigGadgetStateEnableGadgetIntee(
        data::ConfigGadgetStateEnableGadgetIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)this + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 0;
};

// Line 1254: range 000000000ED84352-000000000ED8442A
void __cdecl data::ConfigGadgetStateEnableGadgetIntee::ConfigGadgetStateEnableGadgetIntee(
        data::ConfigGadgetStateEnableGadgetIntee *const this,
        const data::ConfigGadgetStateEnableGadgetIntee *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(
    (data::ConfigGadgetStateAction *const)this,
    (const data::ConfigGadgetStateAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)a2 + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
};

// Line 1261: range 000000000EDAA55E-000000000EDAA5AB
void __cdecl data::ConfigGadgetStateEnableGadgetIntee::~ConfigGadgetStateEnableGadgetIntee(
        data::ConfigGadgetStateEnableGadgetIntee *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetIntee + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
};

// Line 1261: range 000000000EDAA5AC-000000000EDAA5D6
void __cdecl data::ConfigGadgetStateEnableGadgetIntee::~ConfigGadgetStateEnableGadgetIntee(
        data::ConfigGadgetStateEnableGadgetIntee *const this)
{
  data::ConfigGadgetStateEnableGadgetIntee::~ConfigGadgetStateEnableGadgetIntee(this);
  operator delete(this, 0x38uLL);
};

// Line 1266: range 000000000E6E56D4-000000000E6E56E4
const char *__cdecl data::ConfigGadgetStateEnableGadgetIntee::getTypeName(
        const data::ConfigGadgetStateEnableGadgetIntee *const this)
{
  return "ConfigGadgetStateEnableGadgetIntee";
};

// Line 1267: range 000000000E6E56E6-000000000E6E5882
int32_t __cdecl data::ConfigGadgetStateEnableGadgetIntee::getHashNum(
        const data::ConfigGadgetStateEnableGadgetIntee *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateEnableGadgetIntee::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateEnableGadgetIntee",
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

// Line 1283: range 000000000ED84674-000000000ED846B5
void __cdecl data::ConfigGadgetStateEnableGadgetInteeFactory::ConfigGadgetStateEnableGadgetInteeFactory(
        data::ConfigGadgetStateEnableGadgetInteeFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetInteeFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateEnableGadgetInteeFactory = v2;
};

// Line 1291: range 000000000ED849BE-000000000ED84A51
void __cdecl data::ConfigGadgetStateDynamicPickableHint::ConfigGadgetStateDynamicPickableHint(
        data::ConfigGadgetStateDynamicPickableHint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDynamicPickableHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->material_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->material_id = 0;
};

// Line 1291: range 000000000ED84EDC-000000000ED84FB9
void __cdecl data::ConfigGadgetStateDynamicPickableHint::ConfigGadgetStateDynamicPickableHint(
        data::ConfigGadgetStateDynamicPickableHint *const this,
        const data::ConfigGadgetStateDynamicPickableHint *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  uint32_t material_id; // ecx
  char v5; // dl

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(
    (data::ConfigGadgetStateAction *const)this,
    (const data::ConfigGadgetStateAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDynamicPickableHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->material_id);
  }
  material_id = a2->material_id;
  v5 = *(_BYTE *)(((unsigned __int64)&this->material_id >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->material_id, v3);
  }
  this->material_id = material_id;
};

// Line 1298: range 000000000EDAA4E4-000000000EDAA531
void __cdecl data::ConfigGadgetStateDynamicPickableHint::~ConfigGadgetStateDynamicPickableHint(
        data::ConfigGadgetStateDynamicPickableHint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDynamicPickableHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
};

// Line 1298: range 000000000EDAA532-000000000EDAA55C
void __cdecl data::ConfigGadgetStateDynamicPickableHint::~ConfigGadgetStateDynamicPickableHint(
        data::ConfigGadgetStateDynamicPickableHint *const this)
{
  data::ConfigGadgetStateDynamicPickableHint::~ConfigGadgetStateDynamicPickableHint(this);
  operator delete(this, 0x38uLL);
};

// Line 1303: range 000000000E6E5884-000000000E6E5894
const char *__cdecl data::ConfigGadgetStateDynamicPickableHint::getTypeName(
        const data::ConfigGadgetStateDynamicPickableHint *const this)
{
  return "ConfigGadgetStateDynamicPickableHint";
};

// Line 1304: range 000000000E6E5896-000000000E6E5A32
int32_t __cdecl data::ConfigGadgetStateDynamicPickableHint::getHashNum(
        const data::ConfigGadgetStateDynamicPickableHint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateDynamicPickableHint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateDynamicPickableHint",
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

// Line 1320: range 000000000ED85202-000000000ED85243
void __cdecl data::ConfigGadgetStateDynamicPickableHintFactory::ConfigGadgetStateDynamicPickableHintFactory(
        data::ConfigGadgetStateDynamicPickableHintFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDynamicPickableHintFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateDynamicPickableHintFactory = v2;
};

// Line 1328: range 000000000ED8554C-000000000ED8561F
void __cdecl data::ConfigGadgetStateEnableGadgetExtraButton::ConfigGadgetStateEnableGadgetExtraButton(
        data::ConfigGadgetStateEnableGadgetExtraButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetExtraButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)this + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->extra_id, (((_BYTE)this + 52) & 7u) + 3);
  }
  this->extra_id = 0;
};

// Line 1328: range 000000000ED85AAA-000000000ED85C07
void __cdecl data::ConfigGadgetStateEnableGadgetExtraButton::ConfigGadgetStateEnableGadgetExtraButton(
        data::ConfigGadgetStateEnableGadgetExtraButton *const this,
        const data::ConfigGadgetStateEnableGadgetExtraButton *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rsi
  int32_t extra_id; // ecx
  char v10; // dl

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(
    (data::ConfigGadgetStateAction *const)this,
    (const data::ConfigGadgetStateAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetExtraButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)a2 + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
  v8 = (((_BYTE)a2 + 52) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->extra_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->extra_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->extra_id);
  }
  extra_id = a2->extra_id;
  v10 = *(_BYTE *)(((unsigned __int64)&this->extra_id >> 3) + 0x7FFF8000);
  if ( v10 != 0 && (char)((((_BYTE)this + 52) & 7) + 3) >= v10 )
  {
    LOBYTE(v8) = v10 != 0;
    __asan_report_store4(&this->extra_id, v8);
  }
  this->extra_id = extra_id;
};

// Line 1336: range 000000000EDAA4B8-000000000EDAA4E2
void __cdecl data::ConfigGadgetStateEnableGadgetExtraButton::~ConfigGadgetStateEnableGadgetExtraButton(
        data::ConfigGadgetStateEnableGadgetExtraButton *const this)
{
  data::ConfigGadgetStateEnableGadgetExtraButton::~ConfigGadgetStateEnableGadgetExtraButton(this);
  operator delete(this, 0x38uLL);
};

// Line 1336: range 000000000EDAA46A-000000000EDAA4B7
void __cdecl data::ConfigGadgetStateEnableGadgetExtraButton::~ConfigGadgetStateEnableGadgetExtraButton(
        data::ConfigGadgetStateEnableGadgetExtraButton *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetExtraButton + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
};

// Line 1341: range 000000000E6E5A34-000000000E6E5A44
const char *__cdecl data::ConfigGadgetStateEnableGadgetExtraButton::getTypeName(
        const data::ConfigGadgetStateEnableGadgetExtraButton *const this)
{
  return "ConfigGadgetStateEnableGadgetExtraButton";
};

// Line 1342: range 000000000E6E5A46-000000000E6E5BE2
int32_t __cdecl data::ConfigGadgetStateEnableGadgetExtraButton::getHashNum(
        const data::ConfigGadgetStateEnableGadgetExtraButton *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateEnableGadgetExtraButton::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateEnableGadgetExtraButton",
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

// Line 1358: range 000000000ED85E50-000000000ED85E91
void __cdecl data::ConfigGadgetStateEnableGadgetExtraButtonFactory::ConfigGadgetStateEnableGadgetExtraButtonFactory(
        data::ConfigGadgetStateEnableGadgetExtraButtonFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableGadgetExtraButtonFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateEnableGadgetExtraButtonFactory = v2;
};

// Line 1366: range 000000000ED8619A-000000000ED86227
void __cdecl data::ConfigGadgetStateEnableAction::ConfigGadgetStateEnableAction(
        data::ConfigGadgetStateEnableAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)this + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->enable, v3, v4);
  this->enable = 0;
};

// Line 1366: range 000000000ED866B2-000000000ED8678A
void __cdecl data::ConfigGadgetStateEnableAction::ConfigGadgetStateEnableAction(
        data::ConfigGadgetStateEnableAction *const this,
        const data::ConfigGadgetStateEnableAction *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  bool enable; // cl
  char v6; // dl
  __int64 v7; // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(
    (data::ConfigGadgetStateAction *const)this,
    (const data::ConfigGadgetStateAction *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  v3 = ((_BYTE)a2 + 49) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&a2->enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_load1(&a2->enable, v3, v4);
  enable = a2->enable;
  v6 = *(_BYTE *)(((unsigned __int64)&this->enable >> 3) + 0x7FFF8000);
  LOBYTE(v3) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->enable, v3, v7);
  this->enable = enable;
};

// Line 1373: range 000000000EDAA3F0-000000000EDAA43D
void __cdecl data::ConfigGadgetStateEnableAction::~ConfigGadgetStateEnableAction(
        data::ConfigGadgetStateEnableAction *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableAction + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction((data::ConfigGadgetStateAction *const)this);
};

// Line 1373: range 000000000EDAA43E-000000000EDAA468
void __cdecl data::ConfigGadgetStateEnableAction::~ConfigGadgetStateEnableAction(
        data::ConfigGadgetStateEnableAction *const this)
{
  data::ConfigGadgetStateEnableAction::~ConfigGadgetStateEnableAction(this);
  operator delete(this, 0x38uLL);
};

// Line 1378: range 000000000E6E5BE4-000000000E6E5BF4
const char *__cdecl data::ConfigGadgetStateEnableAction::getTypeName(
        const data::ConfigGadgetStateEnableAction *const this)
{
  return "ConfigGadgetStateEnableAction";
};

// Line 1379: range 000000000E6E5BF6-000000000E6E5D92
int32_t __cdecl data::ConfigGadgetStateEnableAction::getHashNum(const data::ConfigGadgetStateEnableAction *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateEnableAction::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateEnableAction",
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

// Line 1395: range 000000000ED869D4-000000000ED86A15
void __cdecl data::ConfigGadgetStateEnableActionFactory::ConfigGadgetStateEnableActionFactory(
        data::ConfigGadgetStateEnableActionFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateEnableActionFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateEnableActionFactory = v2;
};

// Line 1403: range 000000000ED86D1E-000000000ED86D6B
void __cdecl data::ConfigGadgetStateDisableRadarHint::ConfigGadgetStateDisableRadarHint(
        data::ConfigGadgetStateDisableRadarHint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDisableRadarHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
};

// Line 1403: range 000000000ED871F6-000000000ED8724E
void __cdecl data::ConfigGadgetStateDisableRadarHint::ConfigGadgetStateDisableRadarHint(
        data::ConfigGadgetStateDisableRadarHint *const this,
        const data::ConfigGadgetStateDisableRadarHint *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDisableRadarHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
};

// Line 1409: range 000000000EDAA3C4-000000000EDAA3EE
void __cdecl data::ConfigGadgetStateDisableRadarHint::~ConfigGadgetStateDisableRadarHint(
        data::ConfigGadgetStateDisableRadarHint *const this)
{
  data::ConfigGadgetStateDisableRadarHint::~ConfigGadgetStateDisableRadarHint(this);
  operator delete(this, 0x38uLL);
};

// Line 1409: range 000000000EDAA376-000000000EDAA3C3
void __cdecl data::ConfigGadgetStateDisableRadarHint::~ConfigGadgetStateDisableRadarHint(
        data::ConfigGadgetStateDisableRadarHint *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDisableRadarHint + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
};

// Line 1414: range 000000000E6E5D94-000000000E6E5DA4
const char *__cdecl data::ConfigGadgetStateDisableRadarHint::getTypeName(
        const data::ConfigGadgetStateDisableRadarHint *const this)
{
  return "ConfigGadgetStateDisableRadarHint";
};

// Line 1415: range 000000000E6E5DA6-000000000E6E5F42
int32_t __cdecl data::ConfigGadgetStateDisableRadarHint::getHashNum(
        const data::ConfigGadgetStateDisableRadarHint *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateDisableRadarHint::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateDisableRadarHint",
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

// Line 1431: range 000000000ED87498-000000000ED874D9
void __cdecl data::ConfigGadgetStateDisableRadarHintFactory::ConfigGadgetStateDisableRadarHintFactory(
        data::ConfigGadgetStateDisableRadarHintFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateDisableRadarHintFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateDisableRadarHintFactory = v2;
};

// Line 1455: range 000000000ED87942-000000000ED87A33
void __cdecl data::ConfigGadgetStateSendEffectTrigger::ConfigGadgetStateSendEffectTrigger(
        data::ConfigGadgetStateSendEffectTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSendEffectTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::basic_string(&this->parameter);
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->type, v1);
  }
  this->type = Trigger_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->value, (((_BYTE)this + 92) & 7u) + 3);
  }
  this->value = 0;
  std::string::basic_string(&this->effect_pattern);
};

// Line 1455: range 000000000ED87E7C-000000000ED8803C
void __cdecl data::ConfigGadgetStateSendEffectTrigger::ConfigGadgetStateSendEffectTrigger(
        data::ConfigGadgetStateSendEffectTrigger *const this,
        const data::ConfigGadgetStateSendEffectTrigger *a2)
{
  int (**v2)(...); // rdx
  std::string *p_parameter; // rsi
  data::AnimatorParamType type; // ecx
  char v5; // al
  __int64 v6; // rsi
  int32_t value; // ecx
  char v8; // dl

  data::ConfigGadgetStateAction::ConfigGadgetStateAction(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSendEffectTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigGadgetStateAction = v2;
  p_parameter = &a2->parameter;
  std::string::basic_string(&this->parameter, &a2->parameter);
  if ( *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->type);
  }
  type = a2->type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(p_parameter) = v5 != 0;
    __asan_report_store4(&this->type, p_parameter);
  }
  this->type = type;
  v6 = (((_BYTE)a2 + 92) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->value);
  }
  value = a2->value;
  v8 = *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000);
  if ( v8 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v8 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store4(&this->value, v6);
  }
  this->value = value;
  std::string::basic_string(&this->effect_pattern, &a2->effect_pattern);
};

// Line 1465: range 000000000EDAA2DC-000000000EDAA349
void __cdecl data::ConfigGadgetStateSendEffectTrigger::~ConfigGadgetStateSendEffectTrigger(
        data::ConfigGadgetStateSendEffectTrigger *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSendEffectTrigger + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateAction = v2;
  std::string::~string(&this->effect_pattern);
  std::string::~string(&this->parameter);
  data::ConfigGadgetStateAction::~ConfigGadgetStateAction(this);
};

// Line 1465: range 000000000EDAA34A-000000000EDAA374
void __cdecl data::ConfigGadgetStateSendEffectTrigger::~ConfigGadgetStateSendEffectTrigger(
        data::ConfigGadgetStateSendEffectTrigger *const this)
{
  data::ConfigGadgetStateSendEffectTrigger::~ConfigGadgetStateSendEffectTrigger(this);
  operator delete(this, 0x80uLL);
};

// Line 1470: range 000000000E6E5F44-000000000E6E5F54
const char *__cdecl data::ConfigGadgetStateSendEffectTrigger::getTypeName(
        const data::ConfigGadgetStateSendEffectTrigger *const this)
{
  return "ConfigGadgetStateSendEffectTrigger";
};

// Line 1471: range 000000000E6E5F56-000000000E6E60F2
int32_t __cdecl data::ConfigGadgetStateSendEffectTrigger::getHashNum(
        const data::ConfigGadgetStateSendEffectTrigger *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetStateSendEffectTrigger::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadgetStateSendEffectTrigger",
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

// Line 1487: range 000000000ED88326-000000000ED88367
void __cdecl data::ConfigGadgetStateSendEffectTriggerFactory::ConfigGadgetStateSendEffectTriggerFactory(
        data::ConfigGadgetStateSendEffectTriggerFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadgetStateSendEffectTriggerFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigGadgetStateSendEffectTriggerFactory = v2;
};

// Line 1502: range 000000000ED92166-000000000ED921FB
void __cdecl data::ConfigGadgetAction::ConfigGadgetAction(data::ConfigGadgetAction *const this)
{
  __int64 v1; // rsi

  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(&this->trigger_enter_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(&this->gadget_state_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(&this->platform_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(&this->interact_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(&this->post_uiinteract_action_list);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1502: range 000000000E82751E-000000000E827687
void __cdecl data::ConfigGadgetAction::ConfigGadgetAction(
        data::ConfigGadgetAction *const this,
        const data::ConfigGadgetAction *a2)
{
  data::ConfigGadgetStateActionList *p_post_uiinteract_action_list; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(
    &this->trigger_enter_action_list,
    &a2->trigger_enter_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(
    &this->gadget_state_action_list,
    &a2->gadget_state_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(
    &this->platform_action_list,
    &a2->platform_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(
    &this->interact_action_list,
    &a2->interact_action_list);
  p_post_uiinteract_action_list = &a2->post_uiinteract_action_list;
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::vector(
    &this->post_uiinteract_action_list,
    p_post_uiinteract_action_list);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_post_uiinteract_action_list, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_post_uiinteract_action_list) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_post_uiinteract_action_list, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1502: range 000000000E827688-000000000E8276E2
void __cdecl data::ConfigGadgetAction::~ConfigGadgetAction(data::ConfigGadgetAction *const this)
{
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::~vector(&this->post_uiinteract_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::~vector(&this->interact_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::~vector(&this->platform_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::~vector(&this->gadget_state_action_list);
  std::vector<std::shared_ptr<data::ConfigGadgetStateAction>>::~vector(&this->trigger_enter_action_list);
};

// Line 1545: range 000000000ED8C57E-000000000ED8C64D
void __cdecl data::ConfigChest::ConfigChest(data::ConfigChest *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->born_locked_by_ability = 0;
  std::string::basic_string(&this->open_effect);
  if ( *(char *)(((unsigned __int64)&this->trigger_open_chest_vo >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->trigger_open_chest_vo, v1, &this->trigger_open_chest_vo);
  this->trigger_open_chest_vo = 0;
  v2 = ((_BYTE)this + 41) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 1545: range 000000000E81C49A-000000000E81C629
void __cdecl data::ConfigChest::ConfigChest(data::ConfigChest *const this, const data::ConfigChest *a2)
{
  bool born_locked_by_ability; // cl
  char v3; // al
  std::string *p_open_effect; // rsi
  bool trigger_open_chest_vo; // cl
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool is_json_loaded; // cl
  char v10; // dl
  __int64 v11; // rdx
  const data::ConfigChest *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  born_locked_by_ability = a2->born_locked_by_ability;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->born_locked_by_ability = born_locked_by_ability;
  p_open_effect = &v12->open_effect;
  std::string::basic_string(&this->open_effect, &v12->open_effect);
  if ( *(char *)(((unsigned __int64)&v12->trigger_open_chest_vo >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->trigger_open_chest_vo, p_open_effect, &v12->trigger_open_chest_vo);
  trigger_open_chest_vo = v12->trigger_open_chest_vo;
  v6 = *(_BYTE *)(((unsigned __int64)&this->trigger_open_chest_vo >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_open_effect) = v6 != 0;
    __asan_report_store1(&this->trigger_open_chest_vo, p_open_effect, &this->trigger_open_chest_vo);
  }
  this->trigger_open_chest_vo = trigger_open_chest_vo;
  v7 = ((_BYTE)v12 + 41) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&v12->is_json_loaded, v7, v8);
  is_json_loaded = v12->is_json_loaded;
  v10 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v7) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->is_json_loaded, v7, v11);
  this->is_json_loaded = is_json_loaded;
};

// Line 1545: range 000000000E81C62A-000000000E81C648
void __cdecl data::ConfigChest::~ConfigChest(data::ConfigChest *const this)
{
  std::string::~string(&this->open_effect);
};

// Line 1570: range 000000000ED8C64E-000000000ED8C881
void __cdecl data::ConfigGear::ConfigGear(data::ConfigGear *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->gear_type = None_27;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_elem_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_elem_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_elem_type, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->start_elem_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_value, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->start_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_last_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_last_time, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->start_last_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_elem_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_elem_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_elem_type, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->stop_elem_type = None_0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_value, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->stop_value = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->stop_last_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->stop_last_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->stop_last_time, (((_BYTE)this + 24) & 7u) + 3);
  }
  this->stop_last_time = 0;
  v1 = ((_BYTE)this + 28) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1599: range 000000000ED8C882-000000000ED8CA6A
void __cdecl data::ConfigCrystal::ConfigCrystal(data::ConfigCrystal *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->element_type = None_0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gain_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gain_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gain_speed, v2);
  }
  this->gain_speed = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drain_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drain_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drain_speed, v2);
  }
  this->drain_speed = 0;
  std::vector<unsigned int>::vector(&this->resonate_levels);
  if ( *(_BYTE *)(((unsigned __int64)&this->burst_resonate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->burst_resonate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->burst_resonate, v2);
  }
  this->burst_resonate = 0;
  std::string::basic_string(&this->burst_skill);
  if ( *(_BYTE *)(((unsigned __int64)&this->burst_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->burst_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->burst_time, v2);
  }
  this->burst_time = 0;
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->respawn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->respawn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->respawn_time, v3);
  }
  this->respawn_time = 0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1599: range 000000000E81C6EE-000000000E81CAA7
void __cdecl data::ConfigCrystal::ConfigCrystal(data::ConfigCrystal *const this, const data::ConfigCrystal *a2)
{
  data::ElementType element_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t gain_speed; // ecx
  char v6; // dl
  uint32_t drain_speed; // ecx
  char v8; // al
  data::UInt32List *p_resonate_levels; // rsi
  uint32_t burst_resonate; // ecx
  char v11; // al
  std::string *p_burst_skill; // rsi
  uint32_t burst_time; // ecx
  char v14; // al
  __int64 v15; // rsi
  uint32_t respawn_time; // ecx
  char v17; // dl
  bool is_json_loaded; // cl
  char v19; // al
  const data::ConfigCrystal *v20; // [rsp+0h] [rbp-20h]

  v20 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  element_type = a2->element_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->element_type = element_type;
  v4 = (((_BYTE)v20 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->gain_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->gain_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->gain_speed);
  }
  gain_speed = v20->gain_speed;
  v6 = *(_BYTE *)(((unsigned __int64)&this->gain_speed >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->gain_speed, v4);
  }
  this->gain_speed = gain_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v20->drain_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->drain_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->drain_speed);
  }
  drain_speed = v20->drain_speed;
  v8 = *(_BYTE *)(((unsigned __int64)&this->drain_speed >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(v4) = v8 != 0;
    __asan_report_store4(&this->drain_speed, v4);
  }
  this->drain_speed = drain_speed;
  p_resonate_levels = &v20->resonate_levels;
  std::vector<unsigned int>::vector(&this->resonate_levels, &v20->resonate_levels);
  if ( *(_BYTE *)(((unsigned __int64)&v20->burst_resonate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->burst_resonate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->burst_resonate);
  }
  burst_resonate = v20->burst_resonate;
  v11 = *(_BYTE *)(((unsigned __int64)&this->burst_resonate >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_resonate_levels) = v11 != 0;
    __asan_report_store4(&this->burst_resonate, p_resonate_levels);
  }
  this->burst_resonate = burst_resonate;
  p_burst_skill = &v20->burst_skill;
  std::string::basic_string(&this->burst_skill, &v20->burst_skill);
  if ( *(_BYTE *)(((unsigned __int64)&v20->burst_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->burst_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->burst_time);
  }
  burst_time = v20->burst_time;
  v14 = *(_BYTE *)(((unsigned __int64)&this->burst_time >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_burst_skill) = v14 != 0;
    __asan_report_store4(&this->burst_time, p_burst_skill);
  }
  this->burst_time = burst_time;
  v15 = (((_BYTE)v20 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v20->respawn_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->respawn_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->respawn_time);
  }
  respawn_time = v20->respawn_time;
  v17 = *(_BYTE *)(((unsigned __int64)&this->respawn_time >> 3) + 0x7FFF8000);
  LOBYTE(v15) = v17 != 0;
  if ( v17 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v17 )
    __asan_report_store4(&this->respawn_time, v15);
  this->respawn_time = respawn_time;
  if ( *(char *)(((unsigned __int64)&v20->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v20->is_json_loaded, v15, &v20->is_json_loaded);
  is_json_loaded = v20->is_json_loaded;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v19 < 0 )
  {
    LOBYTE(v15) = v19 != 0;
    __asan_report_store1(&this->is_json_loaded, v15, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1599: range 000000000E81CAA8-000000000E81CAD6
void __cdecl data::ConfigCrystal::~ConfigCrystal(data::ConfigCrystal *const this)
{
  std::string::~string(&this->burst_skill);
  std::vector<unsigned int>::~vector(&this->resonate_levels);
};

// Line 1643: range 000000000ED8CA6C-000000000ED8CBA6
void __cdecl data::ConfigSeal::ConfigSeal(data::ConfigSeal *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->progress_type = Circle;
  std::string::basic_string(&this->board_effect);
  if ( *(_BYTE *)(((unsigned __int64)&this->board_effect_start_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->board_effect_start_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->board_effect_start_position, v1);
  }
  this->board_effect_start_position = 0.0;
  v2 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->board_effect_end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->board_effect_end_position >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->board_effect_end_position, v2);
  }
  this->board_effect_end_position = 0.0;
  std::string::basic_string(&this->start_tips);
  std::string::basic_string(&this->title);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1643: range 000000000E81CAD8-000000000E81CD58
void __cdecl data::ConfigSeal::ConfigSeal(data::ConfigSeal *const this, const data::ConfigSeal *a2)
{
  data::SealProgressType progress_type; // ecx
  char v3; // al
  float board_effect_start_position; // xmm0_4
  float board_effect_end_position; // xmm0_4
  std::string *p_title; // rsi
  bool is_json_loaded; // cl
  char v8; // al
  const data::ConfigSeal *v9; // [rsp+0h] [rbp-20h]

  v9 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  progress_type = a2->progress_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->progress_type = progress_type;
  std::string::basic_string(&this->board_effect, &v9->board_effect);
  if ( *(_BYTE *)(((unsigned __int64)&v9->board_effect_start_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->board_effect_start_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v9->board_effect_start_position);
  }
  board_effect_start_position = v9->board_effect_start_position;
  if ( *(_BYTE *)(((unsigned __int64)&this->board_effect_start_position >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->board_effect_start_position >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->board_effect_start_position, &v9->board_effect);
  }
  this->board_effect_start_position = board_effect_start_position;
  if ( *(_BYTE *)(((unsigned __int64)&v9->board_effect_end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v9 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->board_effect_end_position >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&v9->board_effect_end_position);
  }
  board_effect_end_position = v9->board_effect_end_position;
  if ( *(_BYTE *)(((unsigned __int64)&this->board_effect_end_position >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->board_effect_end_position >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->board_effect_end_position, (((_BYTE)this + 44) & 7u) + 3);
  }
  this->board_effect_end_position = board_effect_end_position;
  std::string::basic_string(&this->start_tips, &v9->start_tips);
  p_title = &v9->title;
  std::string::basic_string(&this->title, &v9->title);
  if ( *(char *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v9->is_json_loaded, p_title, &v9->is_json_loaded);
  is_json_loaded = v9->is_json_loaded;
  v8 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_title) = v8 != 0;
    __asan_report_store1(&this->is_json_loaded, p_title, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1643: range 000000000E81CD5A-000000000E81CD98
void __cdecl data::ConfigSeal::~ConfigSeal(data::ConfigSeal *const this)
{
  std::string::~string(&this->title);
  std::string::~string(&this->start_tips);
  std::string::~string(&this->board_effect);
};

// Line 1690: range 000000000ED8CBA8-000000000ED8CD6A
void __cdecl data::ConfigPickupMulti::ConfigPickupMulti(data::ConfigPickupMulti *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx

  data::Vector::Vector(&this->dir_min_vec);
  data::Vector::Vector(&this->dir_max_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_num, (((_BYTE)this + 32) & 7u) + 3);
  }
  this->max_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_num, (((_BYTE)this + 36) & 7u) + 3);
  }
  this->min_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attract_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attract_speed, (((_BYTE)this + 40) & 7u) + 3);
  }
  this->attract_speed = 15.0;
  v1 = ((_BYTE)this + 44) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->use_world_trans >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->use_world_trans >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->use_world_trans, v1, v2);
  this->use_world_trans = 1;
  v3 = ((_BYTE)this + 45) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_auto_attract >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_auto_attract >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_auto_attract, v3, v4);
  this->is_auto_attract = 1;
  v5 = ((_BYTE)this + 46) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_json_loaded, v5, v6);
  this->is_json_loaded = 0;
};

// Line 1719: range 000000000ED8CD6C-000000000ED8D52E
void __cdecl data::ConfigPickup::ConfigPickup(data::ConfigPickup *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->pick_type = None_28;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_static >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_static >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_static, v2, v3);
  this->is_static = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_max_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_point_max_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_point_max_yaw, v2);
  }
  this->drop_point_max_yaw = 30.0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_point_min_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_point_min_speed, v4);
  }
  this->drop_point_min_speed = 1.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_point_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_point_max_speed, v4);
  }
  this->drop_point_max_speed = 5.0;
  std::string::basic_string(&this->born_effect);
  std::string::basic_string(&this->drop_effect);
  data::Vector::Vector(&this->drop_offset);
  if ( *(char *)(((unsigned __int64)&this->enable_scan >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->enable_scan, v4, &this->enable_scan);
  this->enable_scan = 1;
  v5 = ((_BYTE)this + 105) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->lock_ymove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->lock_ymove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->lock_ymove, v5, v6);
  this->lock_ymove = 0;
  v7 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suspend_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suspend_height, v7);
  }
  this->suspend_height = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suspend_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->suspend_speed, v7);
  }
  this->suspend_speed = 0.0;
  v8 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_amplitude >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suspend_amplitude >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suspend_amplitude, v8);
  }
  this->suspend_amplitude = 0.2;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rotate_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rotate_speed, v8);
  }
  this->rotate_speed = 0.0;
  data::Vector::Vector(&this->rotate_vec);
  v9 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attract_delay_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attract_delay_time, v9);
  }
  this->attract_delay_time = 0.5;
  data::ConfigPickupMulti::ConfigPickupMulti(&this->multi);
  data::Vector::Vector(&this->dir_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_ration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity_ration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity_ration, v9);
  }
  this->gravity_ration = 1.0;
  v10 = ((_BYTE)this - 44) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->disable_init_jump >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->disable_init_jump >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_store1(&this->disable_init_jump, v10, v11);
  this->disable_init_jump = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_back_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_back_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_back_speed, v10);
  }
  this->init_back_speed = 6.0;
  v12 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_decelerate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_decelerate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_decelerate, v12);
  }
  this->back_decelerate = 6.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->back_fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->back_fan_angle, v12);
  }
  this->back_fan_angle = 160.0;
  v13 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_fan_start_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_fan_start_angle >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_fan_start_angle, v13);
  }
  this->back_fan_start_angle = 140.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rebound_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rebound_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rebound_times, v13);
  }
  this->rebound_times = 1;
  v14 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rebound_ration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rebound_ration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rebound_ration, v14);
  }
  this->rebound_ration = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_accelerate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attract_accelerate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attract_accelerate, v14);
  }
  this->attract_accelerate = 16.0;
  v15 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attract_max_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attract_max_distance, v15);
  }
  this->attract_max_distance = 10.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_offset, v15);
  }
  this->height_offset = 0.0;
  data::Vector::Vector(&this->rotate_decelerate);
  std::string::basic_string(&this->attract_audio);
  if ( *(char *)(((unsigned __int64)&this->is_dummy_pick >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dummy_pick, v15, &this->is_dummy_pick);
  this->is_dummy_pick = 0;
  v16 = ((_BYTE)this + 49) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->is_pick_destroy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->is_pick_destroy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_pick_destroy, v16, v17);
  this->is_pick_destroy = 0;
  v18 = ((_BYTE)this + 50) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_store1(&this->is_json_loaded, v18, v19);
  this->is_json_loaded = 0;
};

// Line 1719: range 000000000E81CD9A-000000000E81DFA2
void __cdecl data::ConfigPickup::ConfigPickup(data::ConfigPickup *const this, const data::ConfigPickup *a2)
{
  data::PickType pick_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_static; // cl
  char v7; // dl
  __int64 v8; // rdx
  float drop_point_max_yaw; // xmm0_4
  float drop_point_min_speed; // xmm0_4
  __int64 v11; // rsi
  float drop_point_max_speed; // xmm0_4
  std::string *p_drop_effect; // rsi
  __int64 v14; // rdx
  bool enable_scan; // cl
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // rdx
  bool lock_ymove; // cl
  char v20; // dl
  __int64 v21; // rdx
  float suspend_height; // xmm0_4
  __int64 v23; // rsi
  float suspend_speed; // xmm0_4
  float suspend_amplitude; // xmm0_4
  __int64 v26; // rsi
  float rotate_speed; // xmm0_4
  __int64 v28; // rdx
  float attract_delay_time; // xmm0_4
  __int64 v30; // rsi
  char v31; // dl
  __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rdx
  float gravity_ration; // xmm0_4
  __int64 v37; // rsi
  __int64 v38; // rdx
  bool disable_init_jump; // cl
  char v40; // dl
  __int64 v41; // rdx
  float init_back_speed; // xmm0_4
  float back_decelerate; // xmm0_4
  __int64 v44; // rsi
  float back_fan_angle; // xmm0_4
  float back_fan_start_angle; // xmm0_4
  __int64 v47; // rsi
  int32_t rebound_times; // ecx
  char v49; // al
  float rebound_ration; // xmm0_4
  __int64 v51; // rsi
  float attract_accelerate; // xmm0_4
  float attract_max_distance; // xmm0_4
  __int64 v54; // rsi
  float height_offset; // xmm0_4
  __int64 v56; // rdx
  std::string *p_attract_audio; // rsi
  bool is_dummy_pick; // cl
  char v59; // al
  __int64 v60; // rsi
  __int64 v61; // rdx
  bool is_pick_destroy; // cl
  char v63; // dl
  __int64 v64; // rdx
  __int64 v65; // rsi
  __int64 v66; // rdx
  bool is_json_loaded; // cl
  char v68; // dl
  __int64 v69; // rdx
  const data::ConfigPickup *v70; // [rsp+0h] [rbp-20h]

  v70 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  pick_type = a2->pick_type;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->pick_type = pick_type;
  v4 = ((_BYTE)v70 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v70->is_static >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v70->is_static >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v70->is_static, v4, v5);
  is_static = v70->is_static;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_static >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_static, v4, v8);
  this->is_static = is_static;
  if ( *(_BYTE *)(((unsigned __int64)&v70->drop_point_max_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->drop_point_max_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->drop_point_max_yaw);
  }
  drop_point_max_yaw = v70->drop_point_max_yaw;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_max_yaw >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_point_max_yaw >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_point_max_yaw, v4);
  }
  this->drop_point_max_yaw = drop_point_max_yaw;
  if ( *(_BYTE *)(((unsigned __int64)&v70->drop_point_min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->drop_point_min_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->drop_point_min_speed);
  }
  drop_point_min_speed = v70->drop_point_min_speed;
  v11 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_min_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_point_min_speed >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_point_min_speed, v11);
  }
  this->drop_point_min_speed = drop_point_min_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v70->drop_point_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->drop_point_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->drop_point_max_speed);
  }
  drop_point_max_speed = v70->drop_point_max_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_point_max_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->drop_point_max_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->drop_point_max_speed, v11);
  }
  this->drop_point_max_speed = drop_point_max_speed;
  std::string::basic_string(&this->born_effect, &v70->born_effect);
  p_drop_effect = &v70->drop_effect;
  std::string::basic_string(&this->drop_effect, &v70->drop_effect);
  if ( *(_WORD *)(((unsigned __int64)&this->drop_offset >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v70->drop_offset >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v70->drop_offset);
  v14 = *(_QWORD *)&v70->drop_offset.z;
  *(_QWORD *)&this->drop_offset.x = *(_QWORD *)&v70->drop_offset.x;
  *(_QWORD *)&this->drop_offset.z = v14;
  if ( *(char *)(((unsigned __int64)&v70->enable_scan >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v70->enable_scan, p_drop_effect, &v70->enable_scan);
  enable_scan = v70->enable_scan;
  v16 = *(_BYTE *)(((unsigned __int64)&this->enable_scan >> 3) + 0x7FFF8000);
  if ( v16 < 0 )
  {
    LOBYTE(p_drop_effect) = v16 != 0;
    __asan_report_store1(&this->enable_scan, p_drop_effect, &this->enable_scan);
  }
  this->enable_scan = enable_scan;
  v17 = ((_BYTE)v70 + 105) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&v70->lock_ymove >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&v70->lock_ymove >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&v70->lock_ymove, v17, v18);
  lock_ymove = v70->lock_ymove;
  v20 = *(_BYTE *)(((unsigned __int64)&this->lock_ymove >> 3) + 0x7FFF8000);
  LOBYTE(v17) = v20 != 0;
  v21 = (v20 != 0) & (unsigned __int8)((((unsigned __int8)this + 105) & 7) >= v20);
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->lock_ymove, v17, v21);
  this->lock_ymove = lock_ymove;
  if ( *(_BYTE *)(((unsigned __int64)&v70->suspend_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->suspend_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->suspend_height);
  }
  suspend_height = v70->suspend_height;
  v23 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suspend_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suspend_height, v23);
  }
  this->suspend_height = suspend_height;
  if ( *(_BYTE *)(((unsigned __int64)&v70->suspend_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->suspend_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->suspend_speed);
  }
  suspend_speed = v70->suspend_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->suspend_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->suspend_speed, v23);
  }
  this->suspend_speed = suspend_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v70->suspend_amplitude >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->suspend_amplitude >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->suspend_amplitude);
  }
  suspend_amplitude = v70->suspend_amplitude;
  v26 = (((_BYTE)this + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->suspend_amplitude >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->suspend_amplitude >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->suspend_amplitude, v26);
  }
  this->suspend_amplitude = suspend_amplitude;
  if ( *(_BYTE *)(((unsigned __int64)&v70->rotate_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->rotate_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->rotate_speed);
  }
  rotate_speed = v70->rotate_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rotate_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->rotate_speed, v26);
  }
  this->rotate_speed = rotate_speed;
  if ( (((unsigned __int8)this + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate_vec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotate_vec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rotate_vec.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rotate_vec.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotate_vec, 16LL);
  }
  if ( (((unsigned __int8)v70 + 124) & 7) >= *(_BYTE *)(((unsigned __int64)&v70->rotate_vec >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v70->rotate_vec >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v70->rotate_vec.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v70 - 117) & 7) >= *(_BYTE *)(((unsigned __int64)(&v70->rotate_vec.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load_n(&v70->rotate_vec, 16LL);
  }
  v28 = *(_QWORD *)&v70->rotate_vec.z;
  *(_QWORD *)&this->rotate_vec.x = *(_QWORD *)&v70->rotate_vec.x;
  *(_QWORD *)&this->rotate_vec.z = v28;
  if ( *(_BYTE *)(((unsigned __int64)&v70->attract_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->attract_delay_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->attract_delay_time);
  }
  attract_delay_time = v70->attract_delay_time;
  v30 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_delay_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attract_delay_time >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attract_delay_time, v30);
  }
  this->attract_delay_time = attract_delay_time;
  if ( *(char *)(((unsigned __int64)&this->multi >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->multi.is_json_loaded + 1) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 65) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->multi.is_json_loaded + 1) >> 3)
                                                      + 0x7FFF8000) )
  {
    v30 = 48LL;
    __asan_report_store_n(&this->multi, 48LL);
  }
  v31 = *(_BYTE *)(((unsigned __int64)(&v70->multi.is_json_loaded + 1) >> 3) + 0x7FFF8000);
  LOBYTE(v30) = v31 != 0;
  if ( *(char *)(((unsigned __int64)&v70->multi >> 3) + 0x7FFF8000) < 0
    || v31 != 0 && (((unsigned __int8)v70 - 65) & 7) >= v31 )
  {
    v30 = 48LL;
    __asan_report_load_n(&v70->multi, 48LL);
  }
  v32 = *(_QWORD *)&v70->multi.dir_min_vec.z;
  *(_QWORD *)&this->multi.dir_min_vec.x = *(_QWORD *)&v70->multi.dir_min_vec.x;
  *(_QWORD *)&this->multi.dir_min_vec.z = v32;
  v33 = *(_QWORD *)&v70->multi.dir_max_vec.z;
  *(_QWORD *)&this->multi.dir_max_vec.x = *(_QWORD *)&v70->multi.dir_max_vec.x;
  *(_QWORD *)&this->multi.dir_max_vec.z = v33;
  v34 = *(_QWORD *)&v70->multi.attract_speed;
  *(_QWORD *)&this->multi.max_num = *(_QWORD *)&v70->multi.max_num;
  *(_QWORD *)&this->multi.attract_speed = v34;
  if ( *(_WORD *)(((unsigned __int64)&this->dir_vec >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v70->dir_vec >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v70->dir_vec);
  v35 = *(_QWORD *)&v70->dir_vec.z;
  *(_QWORD *)&this->dir_vec.x = *(_QWORD *)&v70->dir_vec.x;
  *(_QWORD *)&this->dir_vec.z = v35;
  if ( *(_BYTE *)(((unsigned __int64)&v70->gravity_ration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->gravity_ration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->gravity_ration);
  }
  gravity_ration = v70->gravity_ration;
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity_ration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gravity_ration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gravity_ration, v30);
  }
  this->gravity_ration = gravity_ration;
  v37 = ((_BYTE)v70 - 44) & 7;
  v38 = (*(_BYTE *)(((unsigned __int64)&v70->disable_init_jump >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v37 >= *(_BYTE *)(((unsigned __int64)&v70->disable_init_jump >> 3) + 0x7FFF8000));
  if ( (_BYTE)v38 )
    __asan_report_load1(&v70->disable_init_jump, v37, v38);
  disable_init_jump = v70->disable_init_jump;
  v40 = *(_BYTE *)(((unsigned __int64)&this->disable_init_jump >> 3) + 0x7FFF8000);
  LOBYTE(v37) = v40 != 0;
  v41 = (v40 != 0) & (unsigned __int8)((((unsigned __int8)this - 44) & 7) >= v40);
  if ( (_BYTE)v41 )
    __asan_report_store1(&this->disable_init_jump, v37, v41);
  this->disable_init_jump = disable_init_jump;
  if ( *(_BYTE *)(((unsigned __int64)&v70->init_back_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->init_back_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->init_back_speed);
  }
  init_back_speed = v70->init_back_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_back_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->init_back_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->init_back_speed, v37);
  }
  this->init_back_speed = init_back_speed;
  if ( *(_BYTE *)(((unsigned __int64)&v70->back_decelerate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->back_decelerate >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->back_decelerate);
  }
  back_decelerate = v70->back_decelerate;
  v44 = (((_BYTE)this - 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_decelerate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_decelerate >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_decelerate, v44);
  }
  this->back_decelerate = back_decelerate;
  if ( *(_BYTE *)(((unsigned __int64)&v70->back_fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->back_fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->back_fan_angle);
  }
  back_fan_angle = v70->back_fan_angle;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_fan_angle >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->back_fan_angle >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->back_fan_angle, v44);
  }
  this->back_fan_angle = back_fan_angle;
  if ( *(_BYTE *)(((unsigned __int64)&v70->back_fan_start_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->back_fan_start_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->back_fan_start_angle);
  }
  back_fan_start_angle = v70->back_fan_start_angle;
  v47 = (((_BYTE)this - 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->back_fan_start_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->back_fan_start_angle >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->back_fan_start_angle, v47);
  }
  this->back_fan_start_angle = back_fan_start_angle;
  if ( *(_BYTE *)(((unsigned __int64)&v70->rebound_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->rebound_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->rebound_times);
  }
  rebound_times = v70->rebound_times;
  v49 = *(_BYTE *)(((unsigned __int64)&this->rebound_times >> 3) + 0x7FFF8000);
  if ( v49 != 0 && v49 <= 3 )
  {
    LOBYTE(v47) = v49 != 0;
    __asan_report_store4(&this->rebound_times, v47);
  }
  this->rebound_times = rebound_times;
  if ( *(_BYTE *)(((unsigned __int64)&v70->rebound_ration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->rebound_ration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->rebound_ration);
  }
  rebound_ration = v70->rebound_ration;
  v51 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rebound_ration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rebound_ration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rebound_ration, v51);
  }
  this->rebound_ration = rebound_ration;
  if ( *(_BYTE *)(((unsigned __int64)&v70->attract_accelerate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->attract_accelerate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->attract_accelerate);
  }
  attract_accelerate = v70->attract_accelerate;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_accelerate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attract_accelerate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->attract_accelerate, v51);
  }
  this->attract_accelerate = attract_accelerate;
  if ( *(_BYTE *)(((unsigned __int64)&v70->attract_max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v70 - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v70->attract_max_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v70->attract_max_distance);
  }
  attract_max_distance = v70->attract_max_distance;
  v54 = (((_BYTE)this - 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->attract_max_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attract_max_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->attract_max_distance, v54);
  }
  this->attract_max_distance = attract_max_distance;
  if ( *(_BYTE *)(((unsigned __int64)&v70->height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v70->height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v70->height_offset);
  }
  height_offset = v70->height_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->height_offset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->height_offset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->height_offset, v54);
  }
  this->height_offset = height_offset;
  if ( (((unsigned __int8)this - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->rotate_decelerate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->rotate_decelerate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->rotate_decelerate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->rotate_decelerate.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->rotate_decelerate, 16LL);
  }
  if ( (((unsigned __int8)v70 - 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v70->rotate_decelerate >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v70->rotate_decelerate >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v70->rotate_decelerate.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v70 + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&v70->rotate_decelerate.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v70->rotate_decelerate, 16LL);
  }
  v56 = *(_QWORD *)&v70->rotate_decelerate.z;
  *(_QWORD *)&this->rotate_decelerate.x = *(_QWORD *)&v70->rotate_decelerate.x;
  *(_QWORD *)&this->rotate_decelerate.z = v56;
  p_attract_audio = &v70->attract_audio;
  std::string::basic_string(&this->attract_audio, &v70->attract_audio);
  if ( *(char *)(((unsigned __int64)&v70->is_dummy_pick >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v70->is_dummy_pick, p_attract_audio, &v70->is_dummy_pick);
  is_dummy_pick = v70->is_dummy_pick;
  v59 = *(_BYTE *)(((unsigned __int64)&this->is_dummy_pick >> 3) + 0x7FFF8000);
  if ( v59 < 0 )
  {
    LOBYTE(p_attract_audio) = v59 != 0;
    __asan_report_store1(&this->is_dummy_pick, p_attract_audio, &this->is_dummy_pick);
  }
  this->is_dummy_pick = is_dummy_pick;
  v60 = ((_BYTE)v70 + 49) & 7;
  v61 = (*(_BYTE *)(((unsigned __int64)&v70->is_pick_destroy >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v60 >= *(_BYTE *)(((unsigned __int64)&v70->is_pick_destroy >> 3) + 0x7FFF8000));
  if ( (_BYTE)v61 )
    __asan_report_load1(&v70->is_pick_destroy, v60, v61);
  is_pick_destroy = v70->is_pick_destroy;
  v63 = *(_BYTE *)(((unsigned __int64)&this->is_pick_destroy >> 3) + 0x7FFF8000);
  LOBYTE(v60) = v63 != 0;
  v64 = (v63 != 0) & (unsigned __int8)((((unsigned __int8)this + 49) & 7) >= v63);
  if ( (_BYTE)v64 )
    __asan_report_store1(&this->is_pick_destroy, v60, v64);
  this->is_pick_destroy = is_pick_destroy;
  v65 = ((_BYTE)v70 + 50) & 7;
  v66 = (*(_BYTE *)(((unsigned __int64)&v70->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v65 >= *(_BYTE *)(((unsigned __int64)&v70->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v66 )
    __asan_report_load1(&v70->is_json_loaded, v65, v66);
  is_json_loaded = v70->is_json_loaded;
  v68 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v65) = v68 != 0;
  v69 = (v68 != 0) & (unsigned __int8)((((unsigned __int8)this + 50) & 7) >= v68);
  if ( (_BYTE)v69 )
    __asan_report_store1(&this->is_json_loaded, v65, v69);
  this->is_json_loaded = is_json_loaded;
};

// Line 1719: range 000000000E81DFA4-000000000E81DFE4
void __cdecl data::ConfigPickup::~ConfigPickup(data::ConfigPickup *const this)
{
  std::string::~string(&this->attract_audio);
  std::string::~string(&this->drop_effect);
  std::string::~string(&this->born_effect);
};

// Line 1774: range 000000000ED8D530-000000000ED8D5C5
void __cdecl data::ConfigWindSeed::ConfigWindSeed(data::ConfigWindSeed *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->athuority_radius = 25.0;
  v1 = ((_BYTE)this + 4) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 1797: range 000000000ED8D5C6-000000000ED8D84C
void __cdecl data::ConfigCannon::ConfigCannon(data::ConfigCannon *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(this, v1, this);
  this->close_operation_page_after_fire = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->close_page_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->close_page_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->close_page_delay, v2);
  }
  this->close_page_delay = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reminder_vanish_delay, v2);
  }
  this->reminder_vanish_delay = 3.0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_interval, v3);
  }
  this->fire_interval = 2.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->turning_btn_press_block_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turning_btn_press_block_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turning_btn_press_block_time, v3);
  }
  this->turning_btn_press_block_time = 1.0;
  std::string::basic_string(&this->reminder_text_map);
  std::string::basic_string(&this->turn_up_ability_name);
  std::string::basic_string(&this->turn_down_ability_name);
  std::string::basic_string(&this->turn_left_ability_name);
  std::string::basic_string(&this->turn_right_ability_name);
  std::string::basic_string(&this->fire_ability_name);
  std::string::basic_string(&this->release_occupy_ability_name);
  std::string::basic_string(&this->occupy_gvname);
  std::string::basic_string(&this->fire_btn_icon);
  if ( *(_BYTE *)(((unsigned __int64)&this->btn_element_color_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->btn_element_color_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->btn_element_color_index, v3);
  }
  this->btn_element_color_index = 0;
  v4 = ((_BYTE)this + 60) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_json_loaded, v4, v5);
  this->is_json_loaded = 0;
};

// Line 1797: range 000000000E81DFE6-000000000E81E53E
void __cdecl data::ConfigCannon::ConfigCannon(data::ConfigCannon *const this, const data::ConfigCannon *a2)
{
  bool close_operation_page_after_fire; // cl
  char v3; // al
  float close_page_delay; // xmm0_4
  __int64 v5; // rsi
  float reminder_vanish_delay; // xmm0_4
  float fire_interval; // xmm0_4
  __int64 v8; // rsi
  float turning_btn_press_block_time; // xmm0_4
  std::string *p_fire_btn_icon; // rsi
  int32_t btn_element_color_index; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_json_loaded; // cl
  char v16; // dl
  __int64 v17; // rdx
  const data::ConfigCannon *v18; // [rsp+0h] [rbp-20h]

  v18 = a2;
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(a2, a2, a2);
  close_operation_page_after_fire = a2->close_operation_page_after_fire;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(this, a2, this);
  }
  this->close_operation_page_after_fire = close_operation_page_after_fire;
  if ( *(_BYTE *)(((unsigned __int64)&v18->close_page_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->close_page_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->close_page_delay);
  }
  close_page_delay = v18->close_page_delay;
  v5 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->close_page_delay >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->close_page_delay >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->close_page_delay, v5);
  }
  this->close_page_delay = close_page_delay;
  if ( *(_BYTE *)(((unsigned __int64)&v18->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->reminder_vanish_delay);
  }
  reminder_vanish_delay = v18->reminder_vanish_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reminder_vanish_delay, v5);
  }
  this->reminder_vanish_delay = reminder_vanish_delay;
  if ( *(_BYTE *)(((unsigned __int64)&v18->fire_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v18 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->fire_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v18->fire_interval);
  }
  fire_interval = v18->fire_interval;
  v8 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->fire_interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fire_interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fire_interval, v8);
  }
  this->fire_interval = fire_interval;
  if ( *(_BYTE *)(((unsigned __int64)&v18->turning_btn_press_block_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->turning_btn_press_block_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->turning_btn_press_block_time);
  }
  turning_btn_press_block_time = v18->turning_btn_press_block_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->turning_btn_press_block_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->turning_btn_press_block_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->turning_btn_press_block_time, v8);
  }
  this->turning_btn_press_block_time = turning_btn_press_block_time;
  std::string::basic_string(&this->reminder_text_map, &v18->reminder_text_map);
  std::string::basic_string(&this->turn_up_ability_name, &v18->turn_up_ability_name);
  std::string::basic_string(&this->turn_down_ability_name, &v18->turn_down_ability_name);
  std::string::basic_string(&this->turn_left_ability_name, &v18->turn_left_ability_name);
  std::string::basic_string(&this->turn_right_ability_name, &v18->turn_right_ability_name);
  std::string::basic_string(&this->fire_ability_name, &v18->fire_ability_name);
  std::string::basic_string(&this->release_occupy_ability_name, &v18->release_occupy_ability_name);
  std::string::basic_string(&this->occupy_gvname, &v18->occupy_gvname);
  p_fire_btn_icon = &v18->fire_btn_icon;
  std::string::basic_string(&this->fire_btn_icon, &v18->fire_btn_icon);
  if ( *(_BYTE *)(((unsigned __int64)&v18->btn_element_color_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v18->btn_element_color_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v18->btn_element_color_index);
  }
  btn_element_color_index = v18->btn_element_color_index;
  v12 = *(_BYTE *)(((unsigned __int64)&this->btn_element_color_index >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_fire_btn_icon) = v12 != 0;
    __asan_report_store4(&this->btn_element_color_index, p_fire_btn_icon);
  }
  this->btn_element_color_index = btn_element_color_index;
  v13 = ((_BYTE)v18 + 60) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v18->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v18->is_json_loaded, v13, v14);
  is_json_loaded = v18->is_json_loaded;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 60) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_json_loaded, v13, v17);
  this->is_json_loaded = is_json_loaded;
};

// Line 1797: range 000000000E81E540-000000000E81E5E8
void __cdecl data::ConfigCannon::~ConfigCannon(data::ConfigCannon *const this)
{
  std::string::~string(&this->fire_btn_icon);
  std::string::~string(&this->occupy_gvname);
  std::string::~string(&this->release_occupy_ability_name);
  std::string::~string(&this->fire_ability_name);
  std::string::~string(&this->turn_right_ability_name);
  std::string::~string(&this->turn_left_ability_name);
  std::string::~string(&this->turn_down_ability_name);
  std::string::~string(&this->turn_up_ability_name);
  std::string::~string(&this->reminder_text_map);
};

// Line 1849: range 000000000E6EEA54-000000000E6EEBC2
void __cdecl data::ConfigGadgetConsoleOperation::ConfigGadgetConsoleOperation(
        data::ConfigGadgetConsoleOperation *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->trans_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_type, v1);
  }
  this->move_type = x;
  v2 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_speed, v2);
  }
  this->move_speed = 0.0;
  if ( *(char *)(((unsigned __int64)&this->has_disable_value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_disable_value, v2, &this->has_disable_value);
  this->has_disable_value = 0;
  v3 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_value, v3);
  }
  this->disable_value = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1849: range 000000000EC0FCD8-000000000EC0FFAC
void __cdecl data::ConfigGadgetConsoleOperation::ConfigGadgetConsoleOperation(
        data::ConfigGadgetConsoleOperation *const this,
        const data::ConfigGadgetConsoleOperation *a2)
{
  std::string *p_trans_name; // rsi
  data::ConfigGadgetConsoleOperationType move_type; // ecx
  char v4; // al
  float move_speed; // xmm0_4
  __int64 v6; // rsi
  bool has_disable_value; // cl
  char v8; // al
  float disable_value; // xmm0_4
  __int64 v10; // rsi
  bool is_json_loaded; // cl
  char v12; // al

  std::string::basic_string(this, a2);
  p_trans_name = &a2->trans_name;
  std::string::basic_string(&this->trans_name, p_trans_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_trans_name) = v4 != 0;
    __asan_report_store4(&this->move_type, p_trans_name);
  }
  this->move_type = move_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->move_speed);
  }
  move_speed = a2->move_speed;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_speed, v6);
  }
  this->move_speed = move_speed;
  if ( *(char *)(((unsigned __int64)&a2->has_disable_value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_disable_value, v6, &a2->has_disable_value);
  has_disable_value = a2->has_disable_value;
  v8 = *(_BYTE *)(((unsigned __int64)&this->has_disable_value >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store1(&this->has_disable_value, v6, &this->has_disable_value);
  }
  this->has_disable_value = has_disable_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->disable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->disable_value);
  }
  disable_value = a2->disable_value;
  v10 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_value, v10);
  }
  this->disable_value = disable_value;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v10, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, v10, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1849: range 000000000E8AE4B8-000000000E8AE769
void __cdecl data::ConfigGadgetConsoleOperation::ConfigGadgetConsoleOperation(
        data::ConfigGadgetConsoleOperation *const this,
        data::ConfigGadgetConsoleOperation *a2)
{
  std::string *p_trans_name; // rsi
  data::ConfigGadgetConsoleOperationType move_type; // ecx
  char v4; // al
  float move_speed; // xmm0_4
  __int64 v6; // rsi
  bool has_disable_value; // cl
  char v8; // al
  float disable_value; // xmm0_4
  __int64 v10; // rsi
  bool is_json_loaded; // cl
  char v12; // al

  std::string::basic_string(this, a2);
  p_trans_name = &a2->trans_name;
  std::string::basic_string(&this->trans_name, p_trans_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v4 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(p_trans_name) = v4 != 0;
    __asan_report_store4(&this->move_type, p_trans_name);
  }
  this->move_type = move_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->move_speed);
  }
  move_speed = a2->move_speed;
  v6 = (((_BYTE)this + 68) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->move_speed >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->move_speed, v6);
  }
  this->move_speed = move_speed;
  if ( *(char *)(((unsigned __int64)&a2->has_disable_value >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_disable_value, v6, &a2->has_disable_value);
  has_disable_value = a2->has_disable_value;
  v8 = *(_BYTE *)(((unsigned __int64)&this->has_disable_value >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(v6) = v8 != 0;
    __asan_report_store1(&this->has_disable_value, v6, &this->has_disable_value);
  }
  this->has_disable_value = has_disable_value;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->disable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->disable_value);
  }
  disable_value = a2->disable_value;
  v10 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_value, v10);
  }
  this->disable_value = disable_value;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v10, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store1(&this->is_json_loaded, v10, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1849: range 000000000E6EEBC4-000000000E6EEBEE
void __cdecl data::ConfigGadgetConsoleOperation::~ConfigGadgetConsoleOperation(
        data::ConfigGadgetConsoleOperation *const this)
{
  std::string::~string(&this->trans_name);
  std::string::~string(this);
};

// Line 1882: range 000000000E6EEBF0-000000000E6EED88
void __cdecl data::ConfigGadgetConsoleLimitation::ConfigGadgetConsoleLimitation(
        data::ConfigGadgetConsoleLimitation *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->move_type, v1);
  }
  this->move_type = x;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->has_min >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->has_min >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->has_min, v2, v3);
  this->has_min = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min, v2);
  }
  this->min = 0.0;
  v4 = ((_BYTE)this + 44) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->has_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->has_max >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->has_max, v4, v5);
  this->has_max = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v4);
  }
  this->max = 0.0;
  v6 = ((_BYTE)this + 52) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->is_json_loaded, v6, v7);
  this->is_json_loaded = 0;
};

// Line 1882: range 000000000EC1002C-000000000EC10336
void __cdecl data::ConfigGadgetConsoleLimitation::ConfigGadgetConsoleLimitation(
        data::ConfigGadgetConsoleLimitation *const this,
        const data::ConfigGadgetConsoleLimitation *a2)
{
  data::ConfigGadgetConsoleOperationType move_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool has_min; // cl
  char v7; // dl
  __int64 v8; // rdx
  float min; // xmm0_4
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool has_max; // cl
  char v13; // dl
  __int64 v14; // rdx
  float max; // xmm0_4
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_json_loaded; // cl
  char v19; // dl
  __int64 v20; // rdx
  const data::ConfigGadgetConsoleLimitation *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v21->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->move_type, a2);
  }
  this->move_type = move_type;
  v4 = ((_BYTE)v21 + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v21->has_min >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v21->has_min >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v21->has_min, v4, v5);
  has_min = v21->has_min;
  v7 = *(_BYTE *)(((unsigned __int64)&this->has_min >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->has_min, v4, v8);
  this->has_min = has_min;
  if ( *(_BYTE *)(((unsigned __int64)&v21->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->min);
  }
  min = v21->min;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min, v4);
  }
  this->min = min;
  v10 = ((_BYTE)v21 + 44) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v21->has_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v21->has_max >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v21->has_max, v10, v11);
  has_max = v21->has_max;
  v13 = *(_BYTE *)(((unsigned __int64)&this->has_max >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->has_max, v10, v14);
  this->has_max = has_max;
  if ( *(_BYTE *)(((unsigned __int64)&v21->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->max);
  }
  max = v21->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v10);
  }
  this->max = max;
  v16 = ((_BYTE)v21 + 52) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v21->is_json_loaded, v16, v17);
  is_json_loaded = v21->is_json_loaded;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_json_loaded, v16, v20);
  this->is_json_loaded = is_json_loaded;
};

// Line 1882: range 000000000E8AEF24-000000000E8AF22E
void __cdecl data::ConfigGadgetConsoleLimitation::ConfigGadgetConsoleLimitation(
        data::ConfigGadgetConsoleLimitation *const this,
        data::ConfigGadgetConsoleLimitation *a2)
{
  data::ConfigGadgetConsoleOperationType move_type; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool has_min; // cl
  char v7; // dl
  __int64 v8; // rdx
  float min; // xmm0_4
  __int64 v10; // rsi
  __int64 v11; // rdx
  bool has_max; // cl
  char v13; // dl
  __int64 v14; // rdx
  float max; // xmm0_4
  __int64 v16; // rsi
  __int64 v17; // rdx
  bool is_json_loaded; // cl
  char v19; // dl
  __int64 v20; // rdx
  data::ConfigGadgetConsoleLimitation *v21; // [rsp+0h] [rbp-10h]

  v21 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v21->move_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->move_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->move_type);
  }
  move_type = a2->move_type;
  v3 = *(_BYTE *)(((unsigned __int64)&this->move_type >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->move_type, a2);
  }
  this->move_type = move_type;
  v4 = ((_BYTE)v21 + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v21->has_min >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v21->has_min >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v21->has_min, v4, v5);
  has_min = v21->has_min;
  v7 = *(_BYTE *)(((unsigned __int64)&this->has_min >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->has_min, v4, v8);
  this->has_min = has_min;
  if ( *(_BYTE *)(((unsigned __int64)&v21->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->min);
  }
  min = v21->min;
  if ( *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->min, v4);
  }
  this->min = min;
  v10 = ((_BYTE)v21 + 44) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&v21->has_max >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&v21->has_max >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&v21->has_max, v10, v11);
  has_max = v21->has_max;
  v13 = *(_BYTE *)(((unsigned __int64)&this->has_max >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->has_max, v10, v14);
  this->has_max = has_max;
  if ( *(_BYTE *)(((unsigned __int64)&v21->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v21->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v21->max);
  }
  max = v21->max;
  if ( *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max, v10);
  }
  this->max = max;
  v16 = ((_BYTE)v21 + 52) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&v21->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&v21->is_json_loaded, v16, v17);
  is_json_loaded = v21->is_json_loaded;
  v19 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v16) = v19 != 0;
  v20 = (v19 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v19);
  if ( (_BYTE)v20 )
    __asan_report_store1(&this->is_json_loaded, v16, v20);
  this->is_json_loaded = is_json_loaded;
};

// Line 1882: range 000000000E6EED8A-000000000E6EEDA4
void __cdecl data::ConfigGadgetConsoleLimitation::~ConfigGadgetConsoleLimitation(
        data::ConfigGadgetConsoleLimitation *const this)
{
  std::string::~string(this);
};

// Line 1915: range 000000000E6EEDA6-000000000E6EEE0B
void __cdecl data::ConfigGadgetConsolePosition::ConfigGadgetConsolePosition(
        data::ConfigGadgetConsolePosition *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  data::Vector::Vector(&this->rotation);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1915: range 000000000EC103B6-000000000EC104B5
void __cdecl data::ConfigGadgetConsolePosition::ConfigGadgetConsolePosition(
        data::ConfigGadgetConsolePosition *const this,
        const data::ConfigGadgetConsolePosition *a2)
{
  __int64 v2; // rdx
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  if ( *(_WORD *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->rotation);
  v2 = *(_QWORD *)&a2->rotation.z;
  *(_QWORD *)&this->rotation.x = *(_QWORD *)&a2->rotation.x;
  *(_QWORD *)&this->rotation.z = v2;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1915: range 000000000E8AF9E4-000000000E8AFAE3
void __cdecl data::ConfigGadgetConsolePosition::ConfigGadgetConsolePosition(
        data::ConfigGadgetConsolePosition *const this,
        data::ConfigGadgetConsolePosition *a2)
{
  __int64 v2; // rdx
  bool is_json_loaded; // cl
  char v4; // al

  std::string::basic_string(this, a2);
  if ( *(_WORD *)(((unsigned __int64)&this->rotation >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->rotation >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->rotation);
  v2 = *(_QWORD *)&a2->rotation.z;
  *(_QWORD *)&this->rotation.x = *(_QWORD *)&a2->rotation.x;
  *(_QWORD *)&this->rotation.z = v2;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1915: range 000000000E6EEE0C-000000000E6EEE26
void __cdecl data::ConfigGadgetConsolePosition::~ConfigGadgetConsolePosition(
        data::ConfigGadgetConsolePosition *const this)
{
  std::string::~string(this);
};

// Line 1944: range 000000000ED8D8F6-000000000ED8DA39
void __cdecl data::ConfigGadgetConsole::ConfigGadgetConsole(data::ConfigGadgetConsole *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  std::string::basic_string(&this->out_trigger_ability_name);
  std::string::basic_string(&this->reminder_text_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reminder_vanish_delay, v1);
  }
  this->reminder_vanish_delay = 0.0;
  std::string::basic_string(&this->camera_attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_gadget_state, v1);
  }
  this->finish_gadget_state = 0;
  std::vector<data::ConfigGadgetConsoleOperation>::vector(&this->operations);
  std::vector<data::ConfigGadgetConsoleLimitation>::vector(&this->limitations);
  std::vector<data::ConfigGadgetConsolePosition>::vector(&this->finish_position);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1944: range 000000000E81E5EA-000000000E81E8CA
void __cdecl data::ConfigGadgetConsole::ConfigGadgetConsole(
        data::ConfigGadgetConsole *const this,
        const data::ConfigGadgetConsole *a2)
{
  std::string *p_reminder_text_map; // rsi
  float reminder_vanish_delay; // xmm0_4
  std::string *p_camera_attach_point; // rsi
  uint32_t finish_gadget_state; // ecx
  char v6; // al
  data::ConfigGadgetConsolePositionArray *p_finish_position; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  std::string::basic_string(this, a2);
  std::string::basic_string(&this->out_trigger_ability_name, &a2->out_trigger_ability_name);
  p_reminder_text_map = &a2->reminder_text_map;
  std::string::basic_string(&this->reminder_text_map, p_reminder_text_map);
  if ( *(_BYTE *)(((unsigned __int64)&a2->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->reminder_vanish_delay);
  }
  reminder_vanish_delay = a2->reminder_vanish_delay;
  if ( *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reminder_vanish_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->reminder_vanish_delay, p_reminder_text_map);
  }
  this->reminder_vanish_delay = reminder_vanish_delay;
  p_camera_attach_point = &a2->camera_attach_point;
  std::string::basic_string(&this->camera_attach_point, &a2->camera_attach_point);
  if ( *(_BYTE *)(((unsigned __int64)&a2->finish_gadget_state >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->finish_gadget_state >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->finish_gadget_state);
  }
  finish_gadget_state = a2->finish_gadget_state;
  v6 = *(_BYTE *)(((unsigned __int64)&this->finish_gadget_state >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(p_camera_attach_point) = v6 != 0;
    __asan_report_store4(&this->finish_gadget_state, p_camera_attach_point);
  }
  this->finish_gadget_state = finish_gadget_state;
  std::vector<data::ConfigGadgetConsoleOperation>::vector(&this->operations, &a2->operations);
  std::vector<data::ConfigGadgetConsoleLimitation>::vector(&this->limitations, &a2->limitations);
  p_finish_position = &a2->finish_position;
  std::vector<data::ConfigGadgetConsolePosition>::vector(&this->finish_position, &a2->finish_position);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_finish_position, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(p_finish_position) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, p_finish_position, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1944: range 000000000E81E8CC-000000000E81E94C
void __cdecl data::ConfigGadgetConsole::~ConfigGadgetConsole(data::ConfigGadgetConsole *const this)
{
  std::vector<data::ConfigGadgetConsolePosition>::~vector(&this->finish_position);
  std::vector<data::ConfigGadgetConsoleLimitation>::~vector(&this->limitations);
  std::vector<data::ConfigGadgetConsoleOperation>::~vector(&this->operations);
  std::string::~string(&this->camera_attach_point);
  std::string::~string(&this->reminder_text_map);
  std::string::~string(&this->out_trigger_ability_name);
  std::string::~string(this);
};

// Line 1975: range 000000000ED8DA3A-000000000ED8DADC
void __cdecl data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(data::ConfigXmLensScanEntityInfo *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->check_sub_node_id = 0;
  std::string::basic_string(&this->total_num_gvname);
  std::string::basic_string(&this->finish_num_gvname);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 1975: range 000000000E81E94E-000000000E81EA9E
void __cdecl data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(
        data::ConfigXmLensScanEntityInfo *const this,
        const data::ConfigXmLensScanEntityInfo *a2)
{
  uint32_t check_sub_node_id; // ecx
  char v3; // al
  std::string *p_finish_num_gvname; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::ConfigXmLensScanEntityInfo *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  check_sub_node_id = a2->check_sub_node_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->check_sub_node_id = check_sub_node_id;
  std::string::basic_string(&this->total_num_gvname, &v7->total_num_gvname);
  p_finish_num_gvname = &v7->finish_num_gvname;
  std::string::basic_string(&this->finish_num_gvname, &v7->finish_num_gvname);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_finish_num_gvname, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_finish_num_gvname) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_finish_num_gvname, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 1975: range 000000000E81EAA0-000000000E81EACE
void __cdecl data::ConfigXmLensScanEntityInfo::~ConfigXmLensScanEntityInfo(
        data::ConfigXmLensScanEntityInfo *const this)
{
  std::string::~string(&this->finish_num_gvname);
  std::string::~string(&this->total_num_gvname);
};

// Line 2000: range 000000000ED8DADE-000000000ED8DB95
void __cdecl data::ConfigXmLens::ConfigXmLens(data::ConfigXmLens *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->check_main_node_id = 0;
  data::Vector::Vector(&this->camera_offset);
  data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(&this->black_smoke);
  data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(&this->aranara);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2000: range 000000000E81EAD0-000000000E81ED20
void __cdecl data::ConfigXmLens::ConfigXmLens(data::ConfigXmLens *const this, const data::ConfigXmLens *a2)
{
  uint32_t check_main_node_id; // ecx
  char v3; // al
  __int64 v4; // rdx
  data::ConfigXmLensScanEntityInfo *p_aranara; // rsi
  bool is_json_loaded; // cl
  char v7; // al
  const data::ConfigXmLens *v8; // [rsp+0h] [rbp-20h]

  v8 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  check_main_node_id = a2->check_main_node_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->check_main_node_id = check_main_node_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->camera_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->camera_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->camera_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->camera_offset.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->camera_offset, 16LL);
  }
  if ( (((unsigned __int8)v8 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v8->camera_offset >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v8->camera_offset >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v8->camera_offset.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v8 + 19) & 7) >= *(_BYTE *)(((unsigned __int64)(&v8->camera_offset.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&v8->camera_offset, 16LL);
  }
  v4 = *(_QWORD *)&v8->camera_offset.z;
  *(_QWORD *)&this->camera_offset.x = *(_QWORD *)&v8->camera_offset.x;
  *(_QWORD *)&this->camera_offset.z = v4;
  data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(&this->black_smoke, &v8->black_smoke);
  p_aranara = &v8->aranara;
  data::ConfigXmLensScanEntityInfo::ConfigXmLensScanEntityInfo(&this->aranara, &v8->aranara);
  if ( *(char *)(((unsigned __int64)&v8->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v8->is_json_loaded, p_aranara, &v8->is_json_loaded);
  is_json_loaded = v8->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v7 < 0 )
  {
    LOBYTE(p_aranara) = v7 != 0;
    __asan_report_store1(&this->is_json_loaded, p_aranara, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2000: range 000000000E81ED22-000000000E81ED50
void __cdecl data::ConfigXmLens::~ConfigXmLens(data::ConfigXmLens *const this)
{
  data::ConfigXmLensScanEntityInfo::~ConfigXmLensScanEntityInfo(&this->aranara);
  data::ConfigXmLensScanEntityInfo::~ConfigXmLensScanEntityInfo(&this->black_smoke);
};

// Line 2026: range 000000000ED8DB96-000000000ED8DC77
void __cdecl data::ConfigAutoDool::ConfigAutoDool(data::ConfigAutoDool *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->check_interval = 0.050000001;
  if ( *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->trigger_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->trigger_distance, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->trigger_distance = 3.0;
  v1 = ((_BYTE)this + 8) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2050: range 000000000ED8DC78-000000000ED8DE79
void __cdecl data::CustomGadgetCameraSettings::CustomGadgetCameraSettings(data::CustomGadgetCameraSettings *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->gadget_height = 0.5;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_camera_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_camera_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_camera_radius, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->min_camera_radius = 1.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->min_elevation >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_elevation >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->min_elevation, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->min_elevation = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->leftright_shift >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->leftright_shift >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->leftright_shift, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->leftright_shift = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_down_shift >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_down_shift >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_down_shift, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->up_down_shift = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fov >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->fov, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->fov = 0.0;
  v1 = ((_BYTE)this + 24) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2078: range 000000000E6EEE28-000000000E6EEEC0
void __cdecl data::CustomGadgetNodeSlot::CustomGadgetNodeSlot(data::CustomGadgetNodeSlot *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->slot_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slot_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->slot_config_id, v1);
  }
  this->slot_config_id = 0;
  v2 = ((_BYTE)this + 36) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_json_loaded, v2, v3);
  this->is_json_loaded = 0;
};

// Line 2078: range 000000000EB4E05C-000000000EB4E176
void __cdecl data::CustomGadgetNodeSlot::CustomGadgetNodeSlot(
        data::CustomGadgetNodeSlot *const this,
        const data::CustomGadgetNodeSlot *a2)
{
  uint32_t slot_config_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::CustomGadgetNodeSlot *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&v9->slot_config_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->slot_config_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->slot_config_id);
  }
  slot_config_id = a2->slot_config_id;
  v3 = *(_BYTE *)(((unsigned __int64)&this->slot_config_id >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->slot_config_id, a2);
  }
  this->slot_config_id = slot_config_id;
  v4 = ((_BYTE)v9 + 36) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 2078: range 000000000E6EEEC2-000000000E6EEEDC
void __cdecl data::CustomGadgetNodeSlot::~CustomGadgetNodeSlot(data::CustomGadgetNodeSlot *const this)
{
  std::string::~string(this);
};

// Line 2109: range 000000000ED8DFD4-000000000ED8E039
void __cdecl data::ConfigCustomGadgetNode::ConfigCustomGadgetNode(data::ConfigCustomGadgetNode *const this)
{
  __int64 v1; // rsi

  data::CustomGadgetCameraSettings::CustomGadgetCameraSettings(&this->camera_settings);
  std::unordered_map<std::string,data::CustomGadgetNodeSlot>::unordered_map(&this->slot_map);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2109: range 000000000E81ED94-000000000E81EF29
void __cdecl data::ConfigCustomGadgetNode::ConfigCustomGadgetNode(
        data::ConfigCustomGadgetNode *const this,
        const data::ConfigCustomGadgetNode *a2)
{
  __int64 v2; // rbx
  data::CustomGadgetNodeSlotMap *p_slot_map; // rsi
  bool is_json_loaded; // cl
  char v5; // al

  if ( *(char *)(((unsigned __int64)this >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->camera_settings.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->camera_settings.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(this, 28LL);
  }
  if ( *(char *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->camera_settings.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 27) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->camera_settings.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(a2, 28LL);
  }
  v2 = *(_QWORD *)&a2->camera_settings.min_elevation;
  *(_QWORD *)&this->camera_settings.gadget_height = *(_QWORD *)&a2->camera_settings.gadget_height;
  *(_QWORD *)&this->camera_settings.min_elevation = v2;
  *(_QWORD *)&this->camera_settings.up_down_shift = *(_QWORD *)&a2->camera_settings.up_down_shift;
  *(_DWORD *)&this->camera_settings.is_json_loaded = *(_DWORD *)&a2->camera_settings.is_json_loaded;
  p_slot_map = &a2->slot_map;
  std::unordered_map<std::string,data::CustomGadgetNodeSlot>::unordered_map(&this->slot_map, &a2->slot_map);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_slot_map, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v5 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v5 < 0 )
  {
    LOBYTE(p_slot_map) = v5 != 0;
    __asan_report_store1(&this->is_json_loaded, p_slot_map, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2109: range 000000000E81EF2A-000000000E81EF48
void __cdecl data::ConfigCustomGadgetNode::~ConfigCustomGadgetNode(data::ConfigCustomGadgetNode *const this)
{
  std::unordered_map<std::string,data::CustomGadgetNodeSlot>::~unordered_map(&this->slot_map);
};

// Line 2133: range 000000000ED8E03A-000000000ED8E15F
void __cdecl data::ConfigCustomGadgetDither::ConfigCustomGadgetDither(data::ConfigCustomGadgetDither *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3);
  }
  this->dither_value_limit = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_depth_threshold_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delta_depth_threshold_min >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delta_depth_threshold_min, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->delta_depth_threshold_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->delta_depth_threshold_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->delta_depth_threshold_max >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store4(&this->delta_depth_threshold_max, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->delta_depth_threshold_max = 2.0;
  v1 = ((_BYTE)this + 12) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_json_loaded, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2158: range 000000000ED8E160-000000000ED8E1A9
void __cdecl data::ConfigCustomGadgetColliderControl::ConfigCustomGadgetColliderControl(
        data::ConfigCustomGadgetColliderControl *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->is_json_loaded = 0;
};

// Line 2180: range 000000000E81F050-000000000E81F16B
void __cdecl data::ConfigGuidePoint::ConfigGuidePoint(
        data::ConfigGuidePoint *const this,
        const data::ConfigGuidePoint *a2)
{
  bool disable_quest_arrow; // cl
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool is_json_loaded; // cl
  char v7; // dl
  __int64 v8; // rdx
  const data::ConfigGuidePoint *v9; // [rsp+0h] [rbp-10h]

  v9 = a2;
  data::ConfigTemplateData::ConfigTemplateData(&this->ui__indicator, &a2->ui__indicator);
  if ( *(char *)(((unsigned __int64)&a2->disable_quest_arrow >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->disable_quest_arrow, a2, &a2->disable_quest_arrow);
  disable_quest_arrow = a2->disable_quest_arrow;
  v3 = *(_BYTE *)(((unsigned __int64)&this->disable_quest_arrow >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->disable_quest_arrow, a2, &this->disable_quest_arrow);
  }
  this->disable_quest_arrow = disable_quest_arrow;
  v4 = ((_BYTE)v9 + 97) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v9->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v9->is_json_loaded, v4, v5);
  is_json_loaded = v9->is_json_loaded;
  v7 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 97) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v4, v8);
  this->is_json_loaded = is_json_loaded;
};

// Line 2180: range 000000000E81F16C-000000000E81F186
void __cdecl data::ConfigGuidePoint::~ConfigGuidePoint(data::ConfigGuidePoint *const this)
{
  data::ConfigTemplateData::~ConfigTemplateData(&this->ui__indicator);
};

// Line 2204: range 000000000ED8E2A6-000000000ED8E6C2
void __cdecl data::ConfigGadgetMisc::ConfigGadgetMisc(data::ConfigGadgetMisc *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi

  data::ConfigChest::ConfigChest(&this->chest);
  data::ConfigGear::ConfigGear(&this->gear);
  if ( *(_WORD *)(((unsigned __int64)&this->force_field >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigConstForceField>();
  data::ConfigCrystal::ConfigCrystal(&this->crystal);
  data::ConfigSeal::ConfigSeal(&this->seal);
  data::ConfigPickup::ConfigPickup(&this->pickup);
  data::ConfigWindSeed::ConfigWindSeed(&this->wind_seed);
  data::ConfigCannon::ConfigCannon(&this->cannon);
  data::ConfigGadgetConsole::ConfigGadgetConsole(&this->gadget_console);
  data::ConfigXmLens::ConfigXmLens(&this->xm_lens);
  data::ConfigAutoDool::ConfigAutoDool(&this->auto_door);
  data::ConfigCustomGadgetNode::ConfigCustomGadgetNode(&this->custom_gadget_node);
  data::ConfigCustomGadgetDither::ConfigCustomGadgetDither(&this->custom_gadget_dither);
  data::ConfigCustomGadgetColliderControl::ConfigCustomGadgetColliderControl(&this->custom_gadget_collider_control);
  std::string::basic_string(&this->escape_effect);
  if ( *(char *)(((unsigned __int64)&this->guide_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->guide_point, v1, &this->guide_point);
  this->guide_point = 0;
  v2 = ((_BYTE)this + 1) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_uipoint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_uipoint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_uipoint, v2, v3);
  this->is_uipoint = 0;
  v4 = ((_BYTE)this + 2) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->guide_point_managed_by_indicator >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->guide_point_managed_by_indicator >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->guide_point_managed_by_indicator, v4, v5);
  this->guide_point_managed_by_indicator = 0;
  v6 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->guide_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guide_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guide_point_type, v6);
  }
  this->guide_point_type = DEFAULT_1;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_indicator_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_indicator_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_indicator_yoffset, v6);
  }
  this->target_indicator_yoffset = 0.0;
  data::ConfigGuidePoint::ConfigGuidePoint(&this->guide_point_config);
  if ( *(char *)(((unsigned __int64)&this->has_avatar_crash_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_avatar_crash_damage, v6, &this->has_avatar_crash_damage);
  this->has_avatar_crash_damage = 1;
  v7 = ((_BYTE)this + 121) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->has_avatar_fall_on_ground_roll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->has_avatar_fall_on_ground_roll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->has_avatar_fall_on_ground_roll, v7, v8);
  this->has_avatar_fall_on_ground_roll = 1;
  v9 = ((_BYTE)this + 122) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->need_turn_grey >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->need_turn_grey >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->need_turn_grey, v9, v10);
  this->need_turn_grey = 0;
  v11 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_duration, v11);
  }
  this->disable_duration = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v11, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2204: range 000000000E81F188-000000000E81FC5F
void __cdecl data::ConfigGadgetMisc::ConfigGadgetMisc(
        data::ConfigGadgetMisc *const this,
        const data::ConfigGadgetMisc *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  data::ConfigCustomGadgetNode *p_custom_gadget_node; // rsi
  __int64 v5; // rdx
  std::string *p_escape_effect; // rsi
  bool guide_point; // cl
  char v8; // al
  __int64 v9; // rsi
  __int64 v10; // rdx
  bool is_uipoint; // cl
  char v12; // dl
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool guide_point_managed_by_indicator; // cl
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rsi
  data::TargetIndicatorType guide_point_type; // ecx
  char v21; // dl
  float target_indicator_yoffset; // xmm0_4
  data::ConfigGuidePoint *p_guide_point_config; // rsi
  bool has_avatar_crash_damage; // cl
  char v25; // al
  __int64 v26; // rsi
  __int64 v27; // rdx
  bool has_avatar_fall_on_ground_roll; // cl
  char v29; // dl
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  bool need_turn_grey; // cl
  char v34; // dl
  __int64 v35; // rdx
  float disable_duration; // xmm0_4
  __int64 v37; // rsi
  bool is_json_loaded; // cl
  char v39; // al

  data::ConfigChest::ConfigChest(&this->chest, &a2->chest);
  if ( *(char *)(((unsigned __int64)&this->gear >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->gear.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->gear.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->gear, 32LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->gear >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->gear.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 79) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->gear.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->gear, 32LL);
  }
  v2 = *(_QWORD *)&a2->gear.start_value;
  *(_QWORD *)&this->gear.gear_type = *(_QWORD *)&a2->gear.gear_type;
  *(_QWORD *)&this->gear.start_value = v2;
  v3 = *(_QWORD *)&a2->gear.stop_last_time;
  *(_QWORD *)&this->gear.stop_elem_type = *(_QWORD *)&a2->gear.stop_elem_type;
  *(_QWORD *)&this->gear.stop_last_time = v3;
  std::shared_ptr<data::ConfigConstForceField>::shared_ptr(&this->force_field, &a2->force_field);
  data::ConfigCrystal::ConfigCrystal(&this->crystal, &a2->crystal);
  data::ConfigSeal::ConfigSeal(&this->seal, &a2->seal);
  data::ConfigPickup::ConfigPickup(&this->pickup, &a2->pickup);
  if ( *(_BYTE *)(((unsigned __int64)&this->wind_seed >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->wind_seed, &a2->pickup);
  if ( *(_BYTE *)(((unsigned __int64)&a2->wind_seed >> 3) + 0x7FFF8000) )
    __asan_report_load8(&a2->wind_seed);
  this->wind_seed = a2->wind_seed;
  data::ConfigCannon::ConfigCannon(&this->cannon, &a2->cannon);
  data::ConfigGadgetConsole::ConfigGadgetConsole(&this->gadget_console, &a2->gadget_console);
  data::ConfigXmLens::ConfigXmLens(&this->xm_lens, &a2->xm_lens);
  if ( *(char *)(((unsigned __int64)&this->auto_door >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->auto_door.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->auto_door.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->auto_door, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->auto_door >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->auto_door.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 99) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->auto_door.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->auto_door, 12LL);
  }
  this->auto_door = a2->auto_door;
  p_custom_gadget_node = &a2->custom_gadget_node;
  data::ConfigCustomGadgetNode::ConfigCustomGadgetNode(&this->custom_gadget_node, &a2->custom_gadget_node);
  if ( *(_WORD *)(((unsigned __int64)&this->custom_gadget_dither >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->custom_gadget_dither >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->custom_gadget_dither);
  v5 = *(_QWORD *)&a2->custom_gadget_dither.delta_depth_threshold_max;
  *(_QWORD *)&this->custom_gadget_dither.dither_value_limit = *(_QWORD *)&a2->custom_gadget_dither.dither_value_limit;
  *(_QWORD *)&this->custom_gadget_dither.delta_depth_threshold_max = v5;
  if ( *(char *)(((unsigned __int64)&this->custom_gadget_collider_control >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(
      &this->custom_gadget_collider_control,
      p_custom_gadget_node,
      &this->custom_gadget_collider_control);
  if ( *(char *)(((unsigned __int64)&a2->custom_gadget_collider_control >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->custom_gadget_collider_control, p_custom_gadget_node, &a2->custom_gadget_collider_control);
  this->custom_gadget_collider_control.is_json_loaded = a2->custom_gadget_collider_control.is_json_loaded;
  p_escape_effect = &a2->escape_effect;
  std::string::basic_string(&this->escape_effect, &a2->escape_effect);
  if ( *(char *)(((unsigned __int64)&a2->guide_point >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->guide_point, p_escape_effect, &a2->guide_point);
  guide_point = a2->guide_point;
  v8 = *(_BYTE *)(((unsigned __int64)&this->guide_point >> 3) + 0x7FFF8000);
  if ( v8 < 0 )
  {
    LOBYTE(p_escape_effect) = v8 != 0;
    __asan_report_store1(&this->guide_point, p_escape_effect, &this->guide_point);
  }
  this->guide_point = guide_point;
  v9 = ((_BYTE)a2 + 1) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&a2->is_uipoint >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&a2->is_uipoint >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&a2->is_uipoint, v9, v10);
  is_uipoint = a2->is_uipoint;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_uipoint >> 3) + 0x7FFF8000);
  LOBYTE(v9) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 1) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_uipoint, v9, v13);
  this->is_uipoint = is_uipoint;
  v14 = ((_BYTE)a2 + 2) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&a2->guide_point_managed_by_indicator >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&a2->guide_point_managed_by_indicator >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&a2->guide_point_managed_by_indicator, v14, v15);
  guide_point_managed_by_indicator = a2->guide_point_managed_by_indicator;
  v17 = *(_BYTE *)(((unsigned __int64)&this->guide_point_managed_by_indicator >> 3) + 0x7FFF8000);
  LOBYTE(v14) = v17 != 0;
  v18 = (v17 != 0) & (unsigned __int8)((((unsigned __int8)this + 2) & 7) >= v17);
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->guide_point_managed_by_indicator, v14, v18);
  this->guide_point_managed_by_indicator = guide_point_managed_by_indicator;
  v19 = (((_BYTE)a2 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->guide_point_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->guide_point_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->guide_point_type);
  }
  guide_point_type = a2->guide_point_type;
  v21 = *(_BYTE *)(((unsigned __int64)&this->guide_point_type >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v21 != 0;
  if ( v21 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v21 )
    __asan_report_store4(&this->guide_point_type, v19);
  this->guide_point_type = guide_point_type;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_indicator_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_indicator_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_indicator_yoffset);
  }
  target_indicator_yoffset = a2->target_indicator_yoffset;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_indicator_yoffset >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_indicator_yoffset >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_indicator_yoffset, v19);
  }
  this->target_indicator_yoffset = target_indicator_yoffset;
  p_guide_point_config = &a2->guide_point_config;
  data::ConfigGuidePoint::ConfigGuidePoint(&this->guide_point_config, &a2->guide_point_config);
  if ( *(char *)(((unsigned __int64)&a2->has_avatar_crash_damage >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->has_avatar_crash_damage, p_guide_point_config, &a2->has_avatar_crash_damage);
  has_avatar_crash_damage = a2->has_avatar_crash_damage;
  v25 = *(_BYTE *)(((unsigned __int64)&this->has_avatar_crash_damage >> 3) + 0x7FFF8000);
  if ( v25 < 0 )
  {
    LOBYTE(p_guide_point_config) = v25 != 0;
    __asan_report_store1(&this->has_avatar_crash_damage, p_guide_point_config, &this->has_avatar_crash_damage);
  }
  this->has_avatar_crash_damage = has_avatar_crash_damage;
  v26 = ((_BYTE)a2 + 121) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&a2->has_avatar_fall_on_ground_roll >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&a2->has_avatar_fall_on_ground_roll >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_load1(&a2->has_avatar_fall_on_ground_roll, v26, v27);
  has_avatar_fall_on_ground_roll = a2->has_avatar_fall_on_ground_roll;
  v29 = *(_BYTE *)(((unsigned __int64)&this->has_avatar_fall_on_ground_roll >> 3) + 0x7FFF8000);
  LOBYTE(v26) = v29 != 0;
  v30 = (v29 != 0) & (unsigned __int8)((((unsigned __int8)this + 121) & 7) >= v29);
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->has_avatar_fall_on_ground_roll, v26, v30);
  this->has_avatar_fall_on_ground_roll = has_avatar_fall_on_ground_roll;
  v31 = ((_BYTE)a2 + 122) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&a2->need_turn_grey >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&a2->need_turn_grey >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_load1(&a2->need_turn_grey, v31, v32);
  need_turn_grey = a2->need_turn_grey;
  v34 = *(_BYTE *)(((unsigned __int64)&this->need_turn_grey >> 3) + 0x7FFF8000);
  LOBYTE(v31) = v34 != 0;
  v35 = (v34 != 0) & (unsigned __int8)((((unsigned __int8)this + 122) & 7) >= v34);
  if ( (_BYTE)v35 )
    __asan_report_store1(&this->need_turn_grey, v31, v35);
  this->need_turn_grey = need_turn_grey;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disable_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->disable_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->disable_duration);
  }
  disable_duration = a2->disable_duration;
  v37 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->disable_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->disable_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->disable_duration, v37);
  }
  this->disable_duration = disable_duration;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v37, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v39 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v39 < 0 )
  {
    LOBYTE(v37) = v39 != 0;
    __asan_report_store1(&this->is_json_loaded, v37, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2204: range 000000000E81FC60-000000000E81FD2A
void __cdecl data::ConfigGadgetMisc::~ConfigGadgetMisc(data::ConfigGadgetMisc *const this)
{
  data::ConfigGuidePoint::~ConfigGuidePoint(&this->guide_point_config);
  std::string::~string(&this->escape_effect);
  data::ConfigCustomGadgetNode::~ConfigCustomGadgetNode(&this->custom_gadget_node);
  data::ConfigXmLens::~ConfigXmLens(&this->xm_lens);
  data::ConfigGadgetConsole::~ConfigGadgetConsole(&this->gadget_console);
  data::ConfigCannon::~ConfigCannon(&this->cannon);
  data::ConfigPickup::~ConfigPickup(&this->pickup);
  data::ConfigSeal::~ConfigSeal(&this->seal);
  data::ConfigCrystal::~ConfigCrystal(&this->crystal);
  std::shared_ptr<data::ConfigConstForceField>::~shared_ptr(&this->force_field);
  data::ConfigChest::~ConfigChest(&this->chest);
};

// Line 2309: range 000000000ED891B8-000000000ED894A0
void __cdecl data::ConfigControlPart::ConfigControlPart(data::ConfigControlPart *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx

  std::enable_shared_from_this<data::ConfigControlPart>::enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigControlPart>);
  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->angular_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angular_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angular_speed, v1);
  }
  this->angular_speed = 0.0;
  std::string::basic_string(&this->part_root_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->forward_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forward_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->forward_by, v1);
  }
  this->forward_by = EntityForward;
  data::Vector::Vector(&this->forward_axial_fix);
  v3 = (((_BYTE)this + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->rotate_by >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rotate_by >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->rotate_by, v3);
  }
  this->rotate_by = WorldXZ;
  if ( *(_BYTE *)(((unsigned __int64)&this->do_on_un_eabled >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->do_on_un_eabled >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->do_on_un_eabled, v3);
  }
  this->do_on_un_eabled = Stay;
  std::string::basic_string(&this->forward_by_trans_name);
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_horizontal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_horizontal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_horizontal, v3);
  }
  this->limit_horizontal = 90.0;
  v4 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_vertical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_vertical >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_vertical, v4);
  }
  this->limit_vertical = 90.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_type, v4);
  }
  this->target_type = AIThreatTarget;
  v5 = ((_BYTE)this - 116) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->default_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->default_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->default_enable, v5, v6);
  this->default_enable = 1;
  v7 = ((_BYTE)this - 115) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->is_json_loaded, v7, v8);
  this->is_json_loaded = 0;
};

// Line 2309: range 000000000ED8990A-000000000ED89F5C
void __cdecl data::ConfigControlPart::ConfigControlPart(
        data::ConfigControlPart *const this,
        const data::ConfigControlPart *a2)
{
  std::enable_shared_from_this<data::ConfigControlPart> *v2; // rsi
  int (**v3)(...); // rdx
  float angular_speed; // xmm0_4
  std::string *p_part_root_name; // rsi
  data::ControlPartForwardBy forward_by; // ecx
  char v7; // al
  __int64 v8; // rdx
  __int64 v9; // rsi
  data::ControlPartRotateBy rotate_by; // ecx
  char v11; // dl
  data::ControlPartDoOnUnEnabled do_on_un_eabled; // ecx
  char v13; // al
  float limit_horizontal; // xmm0_4
  float limit_vertical; // xmm0_4
  __int64 v16; // rsi
  data::ControlPartTargetType target_type; // ecx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  bool default_enable; // cl
  char v22; // dl
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  bool is_json_loaded; // cl
  char v27; // dl
  __int64 v28; // rdx

  v2 = &a2->std::enable_shared_from_this<data::ConfigControlPart>;
  std::enable_shared_from_this<data::ConfigControlPart>::enable_shared_from_this(
    &this->std::enable_shared_from_this<data::ConfigControlPart>,
    v2);
  v3 = (int (**)(...))(&`vtable for'data::ConfigControlPart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v2);
  this->_vptr_ConfigControlPart = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->angular_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->angular_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->angular_speed);
  }
  angular_speed = a2->angular_speed;
  if ( *(_BYTE *)(((unsigned __int64)&this->angular_speed >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angular_speed >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->angular_speed, v2);
  }
  this->angular_speed = angular_speed;
  p_part_root_name = &a2->part_root_name;
  std::string::basic_string(&this->part_root_name, &a2->part_root_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->forward_by >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->forward_by >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->forward_by);
  }
  forward_by = a2->forward_by;
  v7 = *(_BYTE *)(((unsigned __int64)&this->forward_by >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(p_part_root_name) = v7 != 0;
    __asan_report_store4(&this->forward_by, p_part_root_name);
  }
  this->forward_by = forward_by;
  if ( (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->forward_axial_fix >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->forward_axial_fix >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->forward_axial_fix.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->forward_axial_fix.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->forward_axial_fix, 16LL);
  }
  if ( (((unsigned __int8)a2 + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->forward_axial_fix >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->forward_axial_fix >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->forward_axial_fix.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 83) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->forward_axial_fix.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->forward_axial_fix, 16LL);
  }
  v8 = *(_QWORD *)&a2->forward_axial_fix.z;
  *(_QWORD *)&this->forward_axial_fix.x = *(_QWORD *)&a2->forward_axial_fix.x;
  *(_QWORD *)&this->forward_axial_fix.z = v8;
  v9 = (((_BYTE)a2 + 84) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->rotate_by >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->rotate_by >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->rotate_by);
  }
  rotate_by = a2->rotate_by;
  v11 = *(_BYTE *)(((unsigned __int64)&this->rotate_by >> 3) + 0x7FFF8000);
  if ( v11 != 0 && (char)((((_BYTE)this + 84) & 7) + 3) >= v11 )
  {
    LOBYTE(v9) = v11 != 0;
    __asan_report_store4(&this->rotate_by, v9);
  }
  this->rotate_by = rotate_by;
  if ( *(_BYTE *)(((unsigned __int64)&a2->do_on_un_eabled >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->do_on_un_eabled >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->do_on_un_eabled);
  }
  do_on_un_eabled = a2->do_on_un_eabled;
  v13 = *(_BYTE *)(((unsigned __int64)&this->do_on_un_eabled >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(v9) = v13 != 0;
    __asan_report_store4(&this->do_on_un_eabled, v9);
  }
  this->do_on_un_eabled = do_on_un_eabled;
  std::string::basic_string(&this->forward_by_trans_name, &a2->forward_by_trans_name);
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_horizontal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->limit_horizontal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->limit_horizontal);
  }
  limit_horizontal = a2->limit_horizontal;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_horizontal >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->limit_horizontal >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->limit_horizontal, &a2->forward_by_trans_name);
  }
  this->limit_horizontal = limit_horizontal;
  if ( *(_BYTE *)(((unsigned __int64)&a2->limit_vertical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->limit_vertical >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->limit_vertical);
  }
  limit_vertical = a2->limit_vertical;
  v16 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->limit_vertical >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->limit_vertical >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->limit_vertical, v16);
  }
  this->limit_vertical = limit_vertical;
  if ( *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->target_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->target_type);
  }
  target_type = a2->target_type;
  v18 = *(_BYTE *)(((unsigned __int64)&this->target_type >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->target_type, v16);
  }
  this->target_type = target_type;
  v19 = ((_BYTE)a2 - 116) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&a2->default_enable >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&a2->default_enable >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&a2->default_enable, v19, v20);
  default_enable = a2->default_enable;
  v22 = *(_BYTE *)(((unsigned __int64)&this->default_enable >> 3) + 0x7FFF8000);
  LOBYTE(v19) = v22 != 0;
  v23 = (v22 != 0) & (unsigned __int8)((((unsigned __int8)this - 116) & 7) >= v22);
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->default_enable, v19, v23);
  this->default_enable = default_enable;
  v24 = ((_BYTE)a2 - 115) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&a2->is_json_loaded, v24, v25);
  is_json_loaded = a2->is_json_loaded;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v24) = v27 != 0;
  v28 = (v27 != 0) & (unsigned __int8)((((unsigned __int8)this - 115) & 7) >= v27);
  if ( (_BYTE)v28 )
    __asan_report_store1(&this->is_json_loaded, v24, v28);
  this->is_json_loaded = is_json_loaded;
};

// Line 2327: range 000000000ED8A2B8-000000000ED8A2E2
void __cdecl data::ConfigControlPart::~ConfigControlPart(data::ConfigControlPart *const this)
{
  data::ConfigControlPart::~ConfigControlPart(this);
  operator delete(this, 0x90uLL);
};

// Line 2327: range 000000000ED8A246-000000000ED8A2B7
void __cdecl data::ConfigControlPart::~ConfigControlPart(data::ConfigControlPart *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPart + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
  std::string::~string(&this->forward_by_trans_name);
  std::string::~string(&this->part_root_name);
  std::enable_shared_from_this<data::ConfigControlPart>::~enable_shared_from_this(&this->std::enable_shared_from_this<data::ConfigControlPart>);
};

// Line 2332: range 000000000E6E6130-000000000E6E6140
const char *__cdecl data::ConfigControlPart::getTypeName(const data::ConfigControlPart *const this)
{
  return "ConfigControlPart";
};

// Line 2333: range 000000000E6E6142-000000000E6E62DE
int32_t __cdecl data::ConfigControlPart::getHashNum(const data::ConfigControlPart *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigControlPart::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigControlPart",
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

// Line 2352: range 000000000ED8A2E4-000000000ED8A331
void __cdecl data::ConfigControlPartByIK::ConfigControlPartByIK(data::ConfigControlPartByIK *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigControlPart::ConfigControlPart(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIK + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
};

// Line 2352: range 000000000ED8A6E6-000000000ED8A73E
void __cdecl data::ConfigControlPartByIK::ConfigControlPartByIK(
        data::ConfigControlPartByIK *const this,
        const data::ConfigControlPartByIK *a2)
{
  int (**v2)(...); // rdx

  data::ConfigControlPart::ConfigControlPart(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIK + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigControlPart = v2;
};

// Line 2358: range 000000000ED8AA28-000000000ED8AA75
void __cdecl data::ConfigControlPartByIK::~ConfigControlPartByIK(data::ConfigControlPartByIK *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIK + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
  data::ConfigControlPart::~ConfigControlPart(this);
};

// Line 2358: range 000000000ED8AA76-000000000ED8AAA0
void __cdecl data::ConfigControlPartByIK::~ConfigControlPartByIK(data::ConfigControlPartByIK *const this)
{
  data::ConfigControlPartByIK::~ConfigControlPartByIK(this);
  operator delete(this, 0x90uLL);
};

// Line 2363: range 000000000E6E62E0-000000000E6E62F0
const char *__cdecl data::ConfigControlPartByIK::getTypeName(const data::ConfigControlPartByIK *const this)
{
  return "ConfigControlPartByIK";
};

// Line 2364: range 000000000E6E62F2-000000000E6E648E
int32_t __cdecl data::ConfigControlPartByIK::getHashNum(const data::ConfigControlPartByIK *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigControlPartByIK::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigControlPartByIK",
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

// Line 2383: range 000000000ED8AAA2-000000000ED8AB58
void __cdecl data::ConfigControlPartByIKCCD::ConfigControlPartByIKCCD(data::ConfigControlPartByIKCCD *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigControlPartByIK::ConfigControlPartByIK(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIKCCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
  std::string::basic_string(&this->root_name);
  data::Vector::Vector(&this->final_axial_fix);
  if ( *(_BYTE *)(((unsigned __int64)&this->vertical_damping >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vertical_damping >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vertical_damping, v1);
  }
  this->vertical_damping = 0.0;
};

// Line 2383: range 000000000ED8AF18-000000000ED8B0A9
void __cdecl data::ConfigControlPartByIKCCD::ConfigControlPartByIKCCD(
        data::ConfigControlPartByIKCCD *const this,
        const data::ConfigControlPartByIKCCD *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rdx
  float vertical_damping; // xmm0_4

  data::ConfigControlPartByIK::ConfigControlPartByIK(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIKCCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigControlPart = v2;
  std::string::basic_string(&this->root_name, &a2->root_name);
  if ( *(_WORD *)(((unsigned __int64)&this->final_axial_fix >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&a2->final_axial_fix >> 3) + 0x7FFF8000) )
    __asan_report_load16(&a2->final_axial_fix);
  v3 = *(_QWORD *)&a2->final_axial_fix.z;
  *(_QWORD *)&this->final_axial_fix.x = *(_QWORD *)&a2->final_axial_fix.x;
  *(_QWORD *)&this->final_axial_fix.z = v3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->vertical_damping >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->vertical_damping >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->vertical_damping);
  }
  vertical_damping = a2->vertical_damping;
  if ( *(_BYTE *)(((unsigned __int64)&this->vertical_damping >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->vertical_damping >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->vertical_damping, &a2->root_name);
  }
  this->vertical_damping = vertical_damping;
};

// Line 2392: range 000000000EDAA2B0-000000000EDAA2DA
void __cdecl data::ConfigControlPartByIKCCD::~ConfigControlPartByIKCCD(data::ConfigControlPartByIKCCD *const this)
{
  data::ConfigControlPartByIKCCD::~ConfigControlPartByIKCCD(this);
  operator delete(this, 0xC8uLL);
};

// Line 2392: range 000000000EDAA250-000000000EDAA2AF
void __cdecl data::ConfigControlPartByIKCCD::~ConfigControlPartByIKCCD(data::ConfigControlPartByIKCCD *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIKCCD + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPart = v2;
  std::string::~string(&this->root_name);
  data::ConfigControlPartByIK::~ConfigControlPartByIK(this);
};

// Line 2397: range 000000000E6E6490-000000000E6E64A0
const char *__cdecl data::ConfigControlPartByIKCCD::getTypeName(const data::ConfigControlPartByIKCCD *const this)
{
  return "ConfigControlPartByIKCCD";
};

// Line 2398: range 000000000E6E64A2-000000000E6E663E
int32_t __cdecl data::ConfigControlPartByIKCCD::getHashNum(const data::ConfigControlPartByIKCCD *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigControlPartByIKCCD::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigControlPartByIKCCD",
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

// Line 2414: range 000000000ED8B392-000000000ED8B3D3
void __cdecl data::ConfigControlPartByIKCCDFactory::ConfigControlPartByIKCCDFactory(
        data::ConfigControlPartByIKCCDFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigControlPartByIKCCDFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigControlPartByIKCCDFactory = v2;
};

// Line 2429: range 000000000ED91E6C-000000000ED91EC1
void __cdecl data::ConfigPartController::ConfigPartController(data::ConfigPartController *const this)
{
  __int64 v1; // rsi

  std::vector<std::shared_ptr<data::ConfigControlPart>>::vector(&this->parts);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2429: range 000000000E826720-000000000E8267BB
void __cdecl data::ConfigPartController::ConfigPartController(
        data::ConfigPartController *const this,
        const data::ConfigPartController *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::vector<std::shared_ptr<data::ConfigControlPart>>::vector(&this->parts, &a2->parts);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2429: range 000000000E8267BC-000000000E8267D6
void __cdecl data::ConfigPartController::~ConfigPartController(data::ConfigPartController *const this)
{
  std::vector<std::shared_ptr<data::ConfigControlPart>>::~vector(&this->parts);
};

// Line 2452: range 000000000ED92A7A-000000000ED937C7
void __cdecl data::ConfigGadget::ConfigGadget(data::ConfigGadget *const this)
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
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rdx
  __int64 v33; // rsi
  __int64 v34; // rdx

  data::ConfigEntity::ConfigEntity((data::ConfigEntity *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  v3 = ((_BYTE)this + 113) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->has_equip >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->has_equip >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->has_equip, v3, v4);
  this->has_equip = 0;
  v5 = ((_BYTE)this + 114) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->has_audio >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->has_audio, v5, v6);
  this->has_audio = 0;
  v7 = ((_BYTE)this + 115) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->has_model >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->has_model >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->has_model, v7, v8);
  this->has_model = 0;
  v9 = ((_BYTE)this + 116) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->has_ability >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->has_ability >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->has_ability, v9, v10);
  this->has_ability = 0;
  v11 = ((_BYTE)this + 117) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->has_dither >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->has_dither >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->has_dither, v11, v12);
  this->has_dither = 0;
  v13 = ((_BYTE)this + 118) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->has_follow_wind_zone_rotation >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->has_follow_wind_zone_rotation >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->has_follow_wind_zone_rotation, v13, v14);
  this->has_follow_wind_zone_rotation = 0;
  v15 = ((_BYTE)this + 119) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->force_dont_use_update_rigidbody >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->force_dont_use_update_rigidbody >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_store1(&this->force_dont_use_update_rigidbody, v15, v16);
  this->force_dont_use_update_rigidbody = 1;
  if ( *(char *)(((unsigned __int64)&this->has_connect_trigger >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_connect_trigger, v15, &this->has_connect_trigger);
  this->has_connect_trigger = 0;
  v17 = ((_BYTE)this + 121) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->can_be_created_on_platform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->can_be_created_on_platform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_store1(&this->can_be_created_on_platform, v17, v18);
  this->can_be_created_on_platform = 0;
  v19 = (((_BYTE)this + 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->connect_trigger_priority >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->connect_trigger_priority >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->connect_trigger_priority, v19);
  }
  this->connect_trigger_priority = 0;
  if ( *(char *)(((unsigned __int64)&this->ignore_child_scene_prop >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->ignore_child_scene_prop, v19, &this->ignore_child_scene_prop);
  this->ignore_child_scene_prop = 0;
  v20 = ((_BYTE)this - 127) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->move_refresh_ground_force_up >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->move_refresh_ground_force_up >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_store1(&this->move_refresh_ground_force_up, v20, v21);
  this->move_refresh_ground_force_up = 0;
  data::ConfigCombat::ConfigCombat(&this->combat);
  std::string::basic_string(&this->combat_template);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities);
  data::ConfigTrigger::ConfigTrigger(&this->field);
  data::ConfigTimer::ConfigTimer(&this->timer);
  if ( *(_WORD *)(((unsigned __int64)&this->move >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMove>();
  if ( *(_WORD *)(((unsigned __int64)&this->gadget >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetPattern>();
  data::ConfigEquipment::ConfigEquipment(&this->equipment);
  data::ConfigNavigation::ConfigNavigation(&this->navigation);
  if ( *(_WORD *)(((unsigned __int64)&this->ui_interact >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetUI>();
  data::ConfigGadgetMisc::ConfigGadgetMisc(&this->misc);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::unordered_map(&this->state_layers);
  if ( *(_WORD *)(((unsigned __int64)&this->audio >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetAudio>();
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta);
  data::ConfigWeather::ConfigWeather(&this->weather);
  data::ConfigWall::ConfigWall(&this->wall);
  data::ConfigFace::ConfigFace(&this->face);
  data::ConfigPartController::ConfigPartController(&this->part_control);
  data::ConfigPaimon::ConfigPaimon(&this->paimon);
  data::ConfigCharacterRendering::ConfigCharacterRendering(&this->character_rendering);
  if ( *(char *)(((unsigned __int64)&this->radar_hint >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->radar_hint, v20, &this->radar_hint);
  this->radar_hint = 0;
  v22 = ((_BYTE)this + 105) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->keep_modifier_out_sight >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->keep_modifier_out_sight >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_store1(&this->keep_modifier_out_sight, v22, v23);
  this->keep_modifier_out_sight = 1;
  data::ConfigGadgetAction::ConfigGadgetAction(&this->gadget_action);
  if ( *(_WORD *)(((unsigned __int64)&this->gadget_turn >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetTurn>();
  if ( *(_WORD *)(((unsigned __int64)&this->gv_turn >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGlobalValueTurn>();
  if ( *(_WORD *)(((unsigned __int64)&this->billboard >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBillboard>();
  data::ConfigIntee::ConfigIntee(&this->intee);
  std::vector<std::string>::vector(&this->bind_emotions);
  if ( *(char *)(((unsigned __int64)&this->projector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->projector, v22, &this->projector);
  this->projector = 0;
  v24 = ((_BYTE)this + 105) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->low_priority_intee >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->low_priority_intee >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_store1(&this->low_priority_intee, v24, v25);
  this->low_priority_intee = 0;
  v26 = ((_BYTE)this + 106) & 7;
  v27 = (*(_BYTE *)(((unsigned __int64)&this->can_remove_by_client >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v26 >= *(_BYTE *)(((unsigned __int64)&this->can_remove_by_client >> 3) + 0x7FFF8000));
  if ( (_BYTE)v27 )
    __asan_report_store1(&this->can_remove_by_client, v26, v27);
  this->can_remove_by_client = 0;
  std::vector<std::string>::vector(&this->tags);
  if ( *(char *)(((unsigned __int64)&this->can_be_triggered_by_avatar_ray >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->can_be_triggered_by_avatar_ray, v26, &this->can_be_triggered_by_avatar_ray);
  this->can_be_triggered_by_avatar_ray = 0;
  data::ConfigVehicle::ConfigVehicle(&this->vehicle);
  if ( *(_WORD *)(((unsigned __int64)&this->dangerzone >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigDangerZone>();
  if ( *(_WORD *)(((unsigned __int64)&this->fishing_zone >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigFishingZone>();
  if ( *(_BYTE *)(((unsigned __int64)&this->force_set_entity_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_set_entity_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->force_set_entity_type, v26);
  }
  this->force_set_entity_type = None_10;
  if ( *(_WORD *)(((unsigned __int64)&this->camera_adjust >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetSpecialCamera>();
  data::ConfigVODIntee::ConfigVODIntee(&this->vod_intee);
  if ( *(_WORD *)(((unsigned __int64)&this->vod_player >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigLivePlayer>();
  data::ConfigGadgetCameraBox::ConfigGadgetCameraBox(&this->camera_box);
  if ( *(char *)(((unsigned __int64)&this->open_watcher >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->open_watcher, v26, &this->open_watcher);
  this->open_watcher = 0;
  v28 = (((_BYTE)this - 124) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->ray_tag >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ray_tag >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->ray_tag, v28);
  }
  this->ray_tag = 0;
  if ( *(char *)(((unsigned __int64)&this->has_ray_tag >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_ray_tag, v28, &this->has_ray_tag);
  this->has_ray_tag = 0;
  v29 = ((_BYTE)this - 119) & 7;
  v30 = (*(_BYTE *)(((unsigned __int64)&this->use_retreat_type >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v29 >= *(_BYTE *)(((unsigned __int64)&this->use_retreat_type >> 3) + 0x7FFF8000));
  if ( (_BYTE)v30 )
    __asan_report_store1(&this->use_retreat_type, v29, v30);
  this->use_retreat_type = 0;
  v31 = ((_BYTE)this - 118) & 7;
  v32 = (*(_BYTE *)(((unsigned __int64)&this->dont_destroy_by_perform >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v31 >= *(_BYTE *)(((unsigned __int64)&this->dont_destroy_by_perform >> 3) + 0x7FFF8000));
  if ( (_BYTE)v32 )
    __asan_report_store1(&this->dont_destroy_by_perform, v31, v32);
  this->dont_destroy_by_perform = 0;
  v33 = ((_BYTE)this - 117) & 7;
  v34 = (*(_BYTE *)(((unsigned __int64)&this->correct_owner >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v33 >= *(_BYTE *)(((unsigned __int64)&this->correct_owner >> 3) + 0x7FFF8000));
  if ( (_BYTE)v34 )
    __asan_report_store1(&this->correct_owner, v33, v34);
  this->correct_owner = 0;
};

// Line 2517: range 000000000ED9C9AE-000000000ED9CBF3
void __cdecl data::ConfigGadget::~ConfigGadget(data::ConfigGadget *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigGadget + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigGadgetCameraBox::~ConfigGadgetCameraBox(&this->camera_box);
  std::shared_ptr<data::ConfigLivePlayer>::~shared_ptr(&this->vod_player);
  std::shared_ptr<data::ConfigGadgetSpecialCamera>::~shared_ptr(&this->camera_adjust);
  std::shared_ptr<data::ConfigFishingZone>::~shared_ptr(&this->fishing_zone);
  std::shared_ptr<data::ConfigDangerZone>::~shared_ptr(&this->dangerzone);
  data::ConfigVehicle::~ConfigVehicle(&this->vehicle);
  std::vector<std::string>::~vector(&this->tags);
  std::vector<std::string>::~vector(&this->bind_emotions);
  std::shared_ptr<data::ConfigBillboard>::~shared_ptr(&this->billboard);
  std::shared_ptr<data::ConfigGlobalValueTurn>::~shared_ptr(&this->gv_turn);
  std::shared_ptr<data::ConfigGadgetTurn>::~shared_ptr(&this->gadget_turn);
  data::ConfigGadgetAction::~ConfigGadgetAction(&this->gadget_action);
  data::ConfigPartController::~ConfigPartController(&this->part_control);
  data::ConfigFace::~ConfigFace(&this->face);
  data::ConfigWall::~ConfigWall(&this->wall);
  data::ConfigWeather::~ConfigWeather(&this->weather);
  data::ConfigAIBeta::~ConfigAIBeta(&this->aibeta);
  std::shared_ptr<data::ConfigGadgetAudio>::~shared_ptr(&this->audio);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::~unordered_map(&this->state_layers);
  data::ConfigGadgetMisc::~ConfigGadgetMisc(&this->misc);
  std::shared_ptr<data::ConfigGadgetUI>::~shared_ptr(&this->ui_interact);
  data::ConfigEquipment::~ConfigEquipment(&this->equipment);
  std::shared_ptr<data::ConfigGadgetPattern>::~shared_ptr(&this->gadget);
  std::shared_ptr<data::ConfigMove>::~shared_ptr(&this->move);
  data::ConfigTrigger::~ConfigTrigger(&this->field);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->abilities);
  std::string::~string(&this->combat_template);
  data::ConfigCombat::~ConfigCombat(&this->combat);
  data::ConfigEntity::~ConfigEntity((data::ConfigEntity *const)this);
};

// Line 2517: range 000000000ED9CBF4-000000000ED9CC1E
void __cdecl data::ConfigGadget::~ConfigGadget(data::ConfigGadget *const this)
{
  data::ConfigGadget::~ConfigGadget(this);
  operator delete(this, 0x1890uLL);
};

// Line 2522: range 000000000E6E685C-000000000E6E686C
const char *__cdecl data::ConfigGadget::getTypeName(const data::ConfigGadget *const this)
{
  return "ConfigGadget";
};

// Line 2523: range 000000000E6E686E-000000000E6E6A0A
int32_t __cdecl data::ConfigGadget::getHashNum(const data::ConfigGadget *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadget::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigGadget",
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

// Line 2549: range 000000000EC15BE6-000000000EC15DFB
void __cdecl data::ConfigKeyInput::ConfigKeyInput(data::ConfigKeyInput *const this, const data::ConfigKeyInput *a2)
{
  int32_t key_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t input_key_code; // ecx
  char v6; // dl
  float ability_cd; // xmm0_4
  __int64 v8; // rsi
  __int64 v9; // rdx
  bool is_json_loaded; // cl
  char v11; // dl
  __int64 v12; // rdx
  const data::ConfigKeyInput *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  key_id = a2->key_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->key_id = key_id;
  v4 = (((_BYTE)v13 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->input_key_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->input_key_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->input_key_code);
  }
  input_key_code = v13->input_key_code;
  v6 = *(_BYTE *)(((unsigned __int64)&this->input_key_code >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->input_key_code, v4);
  }
  this->input_key_code = input_key_code;
  std::string::basic_string(&this->ability_name, &v13->ability_name);
  if ( *(_BYTE *)(((unsigned __int64)&v13->ability_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->ability_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->ability_cd);
  }
  ability_cd = v13->ability_cd;
  if ( *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ability_cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->ability_cd, &v13->ability_name);
  }
  this->ability_cd = ability_cd;
  v8 = ((_BYTE)v13 + 44) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&v13->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&v13->is_json_loaded, v8, v9);
  is_json_loaded = v13->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v11 != 0;
  v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v11);
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v8, v12);
  this->is_json_loaded = is_json_loaded;
};

// Line 2549: range 000000000E6F0A9E-000000000E6F0ABC
void __cdecl data::ConfigKeyInput::~ConfigKeyInput(data::ConfigKeyInput *const this)
{
  std::string::~string(&this->ability_name);
};

// Line 2580: range 000000000ED9759A-000000000ED976FF
void __cdecl data::ConfigShoot::ConfigShoot(data::ConfigShoot *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi

  std::string::basic_string(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_range_from_viewport >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_range_from_viewport >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_range_from_viewport, v1);
  }
  this->detect_range_from_viewport = 0.0;
  v2 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_radius_from_viewport >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_radius_from_viewport >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_radius_from_viewport, v2);
  }
  this->detect_radius_from_viewport = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_focus_min_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_focus_min_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_focus_min_range, v2);
  }
  this->auto_focus_min_range = 0.0;
  v3 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_focus_max_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_focus_max_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_focus_max_range, v3);
  }
  this->auto_focus_max_range = 0.0;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v3, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2580: range 000000000E82E140-000000000E82E3DB
void __cdecl data::ConfigShoot::ConfigShoot(data::ConfigShoot *const this, const data::ConfigShoot *a2)
{
  float detect_range_from_viewport; // xmm0_4
  float detect_radius_from_viewport; // xmm0_4
  __int64 v4; // rsi
  float auto_focus_min_range; // xmm0_4
  float auto_focus_max_range; // xmm0_4
  __int64 v7; // rsi
  bool is_json_loaded; // cl
  char v9; // al

  std::string::basic_string(this, a2);
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_range_from_viewport >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->detect_range_from_viewport >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->detect_range_from_viewport);
  }
  detect_range_from_viewport = a2->detect_range_from_viewport;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_range_from_viewport >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->detect_range_from_viewport >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->detect_range_from_viewport, a2);
  }
  this->detect_range_from_viewport = detect_range_from_viewport;
  if ( *(_BYTE *)(((unsigned __int64)&a2->detect_radius_from_viewport >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->detect_radius_from_viewport >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->detect_radius_from_viewport);
  }
  detect_radius_from_viewport = a2->detect_radius_from_viewport;
  v4 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_radius_from_viewport >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_radius_from_viewport >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->detect_radius_from_viewport, v4);
  }
  this->detect_radius_from_viewport = detect_radius_from_viewport;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_focus_min_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->auto_focus_min_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->auto_focus_min_range);
  }
  auto_focus_min_range = a2->auto_focus_min_range;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_focus_min_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->auto_focus_min_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->auto_focus_min_range, v4);
  }
  this->auto_focus_min_range = auto_focus_min_range;
  if ( *(_BYTE *)(((unsigned __int64)&a2->auto_focus_max_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->auto_focus_max_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->auto_focus_max_range);
  }
  auto_focus_max_range = a2->auto_focus_max_range;
  v7 = (((_BYTE)this + 44) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_focus_max_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_focus_max_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->auto_focus_max_range, v7);
  }
  this->auto_focus_max_range = auto_focus_max_range;
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, v7, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v9 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v9 < 0 )
  {
    LOBYTE(v7) = v9 != 0;
    __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2580: range 000000000E82E3DC-000000000E82E3F6
void __cdecl data::ConfigShoot::~ConfigShoot(data::ConfigShoot *const this)
{
  std::string::~string(this);
};

// Line 2607: range 000000000ED97700-000000000ED97765
void __cdecl data::ConfigAvatarShoot::ConfigAvatarShoot(data::ConfigAvatarShoot *const this)
{
  __int64 v1; // rsi

  data::ConfigShoot::ConfigShoot(&this->normal_shoot);
  data::ConfigShoot::ConfigShoot(&this->aiming_shoot);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2607: range 000000000E82E3F8-000000000E82E4D1
void __cdecl data::ConfigAvatarShoot::ConfigAvatarShoot(
        data::ConfigAvatarShoot *const this,
        const data::ConfigAvatarShoot *a2)
{
  data::ConfigShoot *p_aiming_shoot; // rsi
  bool is_json_loaded; // cl
  char v4; // al

  data::ConfigShoot::ConfigShoot(&this->normal_shoot, &a2->normal_shoot);
  p_aiming_shoot = &a2->aiming_shoot;
  data::ConfigShoot::ConfigShoot(&this->aiming_shoot, p_aiming_shoot);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_aiming_shoot, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_aiming_shoot) = v4 != 0;
    __asan_report_store1(&this->is_json_loaded, p_aiming_shoot, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2607: range 000000000E82E4D2-000000000E82E4FC
void __cdecl data::ConfigAvatarShoot::~ConfigAvatarShoot(data::ConfigAvatarShoot *const this)
{
  data::ConfigShoot::~ConfigShoot(&this->aiming_shoot);
  data::ConfigShoot::~ConfigShoot(&this->normal_shoot);
};

// Line 2631: range 000000000ED97A3C-000000000ED97A91
void __cdecl data::ConfigMoveStateEffect::ConfigMoveStateEffect(data::ConfigMoveStateEffect *const this)
{
  __int64 v1; // rsi

  data::ConfigFootprint::ConfigFootprint(&this->footprint);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2631: range 000000000E82F3F0-000000000E82F48B
void __cdecl data::ConfigMoveStateEffect::ConfigMoveStateEffect(
        data::ConfigMoveStateEffect *const this,
        const data::ConfigMoveStateEffect *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  data::ConfigFootprint::ConfigFootprint(&this->footprint, &a2->footprint);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2631: range 000000000E82F48C-000000000E82F4A6
void __cdecl data::ConfigMoveStateEffect::~ConfigMoveStateEffect(data::ConfigMoveStateEffect *const this)
{
  data::ConfigFootprint::~ConfigFootprint(&this->footprint);
};

// Line 2683: range 000000000ED97ACA-000000000ED97BB6
void __cdecl data::ConfigStandbyPerform::ConfigStandbyPerform(data::ConfigStandbyPerform *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->min_time = 0.0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_time, v2);
  }
  this->max_time = 0.0;
  std::vector<int>::vector(&this->perform_ids);
  std::vector<data::ConfigLoopPerformID>::vector(&this->loop_perform_ids);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2683: range 000000000E82F80E-000000000E82F9E9
void __cdecl data::ConfigStandbyPerform::ConfigStandbyPerform(
        data::ConfigStandbyPerform *const this,
        const data::ConfigStandbyPerform *a2)
{
  float min_time; // xmm0_4
  float max_time; // xmm0_4
  data::ConfigLoopPerformIDList *p_loop_perform_ids; // rsi
  bool is_json_loaded; // cl
  char v6; // al

  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  min_time = a2->min_time;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, a2);
  }
  this->min_time = min_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->max_time);
  }
  max_time = a2->max_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_time, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->max_time = max_time;
  std::vector<int>::vector(&this->perform_ids, &a2->perform_ids);
  p_loop_perform_ids = &a2->loop_perform_ids;
  std::vector<data::ConfigLoopPerformID>::vector(&this->loop_perform_ids, &a2->loop_perform_ids);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, p_loop_perform_ids, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_loop_perform_ids) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_loop_perform_ids, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2683: range 000000000E82F9EA-000000000E82FA18
void __cdecl data::ConfigStandbyPerform::~ConfigStandbyPerform(data::ConfigStandbyPerform *const this)
{
  std::vector<data::ConfigLoopPerformID>::~vector(&this->loop_perform_ids);
  std::vector<int>::~vector(&this->perform_ids);
};

// Line 2709: range 000000000ED97BB8-000000000ED97C0D
void __cdecl data::ConfigAvatarPerform::ConfigAvatarPerform(data::ConfigAvatarPerform *const this)
{
  __int64 v1; // rsi

  data::ConfigStandbyPerform::ConfigStandbyPerform(&this->standby);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2709: range 000000000E82FA1A-000000000E82FAB5
void __cdecl data::ConfigAvatarPerform::ConfigAvatarPerform(
        data::ConfigAvatarPerform *const this,
        const data::ConfigAvatarPerform *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  data::ConfigStandbyPerform::ConfigStandbyPerform(&this->standby, &a2->standby);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2709: range 000000000E82FAB6-000000000E82FAD0
void __cdecl data::ConfigAvatarPerform::~ConfigAvatarPerform(data::ConfigAvatarPerform *const this)
{
  data::ConfigStandbyPerform::~ConfigStandbyPerform(&this->standby);
};

// Line 2732: range 000000000ED96904-000000000ED96AF1
void __cdecl data::ConfigCharacter::ConfigCharacter(data::ConfigCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigEntity::ConfigEntity(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigCombat::ConfigCombat(&this->combat);
  if ( *(_WORD *)(((unsigned __int64)&this->equip_controller >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigEquipController>();
  std::vector<std::shared_ptr<data::ConfigSubEquipController>>::vector(&this->sub_equip_controllers);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::unordered_map(&this->state_layers);
  data::ConfigFace::ConfigFace(&this->face);
  data::ConfigPartController::ConfigPartController(&this->part_control);
  if ( *(_WORD *)(((unsigned __int64)&this->billboard >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBillboard>();
  std::vector<std::string>::vector(&this->bind_emotions);
};

// Line 2747: range 000000000ED9747E-000000000ED9756D
void __cdecl data::ConfigCharacter::~ConfigCharacter(data::ConfigCharacter *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigCharacter + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::vector<std::string>::~vector(&this->bind_emotions);
  std::shared_ptr<data::ConfigBillboard>::~shared_ptr(&this->billboard);
  data::ConfigPartController::~ConfigPartController(&this->part_control);
  data::ConfigFace::~ConfigFace(&this->face);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigBaseStateLayer>>::~unordered_map(&this->state_layers);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->abilities);
  std::vector<std::shared_ptr<data::ConfigSubEquipController>>::~vector(&this->sub_equip_controllers);
  std::shared_ptr<data::ConfigEquipController>::~shared_ptr(&this->equip_controller);
  data::ConfigCombat::~ConfigCombat(&this->combat);
  data::ConfigEntity::~ConfigEntity(this);
};

// Line 2747: range 000000000ED9756E-000000000ED97598
void __cdecl data::ConfigCharacter::~ConfigCharacter(data::ConfigCharacter *const this)
{
  data::ConfigCharacter::~ConfigCharacter(this);
  operator delete(this, 0x558uLL);
};

// Line 2752: range 000000000E6E6A48-000000000E6E6A58
const char *__cdecl data::ConfigCharacter::getTypeName(const data::ConfigCharacter *const this)
{
  return "ConfigCharacter";
};

// Line 2753: range 000000000E6E6A5A-000000000E6E6BF6
int32_t __cdecl data::ConfigCharacter::getHashNum(const data::ConfigCharacter *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigCharacter::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigCharacter",
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

// Line 2772: range 000000000ED97C0E-000000000ED97D12
void __cdecl data::ConfigAvatar::ConfigAvatar(data::ConfigAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCharacter::ConfigCharacter(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigAvatarShoot::ConfigAvatarShoot(&this->shoot_config);
  if ( *(_WORD *)(((unsigned __int64)&this->audio >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigAvatarAudio>();
  data::ConfigAvatarControllerAssembly::ConfigAvatarControllerAssembly(&this->controller_assembly);
  data::ConfigMoveStateEffect::ConfigMoveStateEffect(&this->move_state_effect);
  data::ConfigAvatarPerform::ConfigAvatarPerform(&this->perform);
};

// Line 2772: range 000000000ED984DE-000000000ED98650
void __cdecl data::ConfigAvatar::ConfigAvatar(data::ConfigAvatar *const this, const data::ConfigAvatar *a2)
{
  int (**v2)(...); // rdx

  data::ConfigCharacter::ConfigCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  data::ConfigAvatarShoot::ConfigAvatarShoot(&this->shoot_config, &a2->shoot_config);
  std::shared_ptr<data::ConfigAvatarAudio>::shared_ptr(&this->audio, &a2->audio);
  data::ConfigAvatarControllerAssembly::ConfigAvatarControllerAssembly(
    &this->controller_assembly,
    &a2->controller_assembly);
  data::ConfigMoveStateEffect::ConfigMoveStateEffect(&this->move_state_effect, &a2->move_state_effect);
  data::ConfigAvatarPerform::ConfigAvatarPerform(&this->perform, &a2->perform);
};

// Line 2783: range 000000000EDAA17C-000000000EDAA223
void __cdecl data::ConfigAvatar::~ConfigAvatar(data::ConfigAvatar *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatar + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  data::ConfigAvatarPerform::~ConfigAvatarPerform(&this->perform);
  data::ConfigMoveStateEffect::~ConfigMoveStateEffect(&this->move_state_effect);
  data::ConfigAvatarControllerAssembly::~ConfigAvatarControllerAssembly(&this->controller_assembly);
  std::shared_ptr<data::ConfigAvatarAudio>::~shared_ptr(&this->audio);
  data::ConfigAvatarShoot::~ConfigAvatarShoot(&this->shoot_config);
  data::ConfigCharacter::~ConfigCharacter(this);
};

// Line 2783: range 000000000EDAA224-000000000EDAA24E
void __cdecl data::ConfigAvatar::~ConfigAvatar(data::ConfigAvatar *const this)
{
  data::ConfigAvatar::~ConfigAvatar(this);
  operator delete(this, 0x780uLL);
};

// Line 2788: range 000000000E6E6C34-000000000E6E6C44
const char *__cdecl data::ConfigAvatar::getTypeName(const data::ConfigAvatar *const this)
{
  return "ConfigAvatar";
};

// Line 2789: range 000000000E6E6C46-000000000E6E6DE2
int32_t __cdecl data::ConfigAvatar::getHashNum(const data::ConfigAvatar *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigAvatar::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigAvatar",
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

// Line 2805: range 000000000ED9893A-000000000ED9897B
void __cdecl data::ConfigAvatarFactory::ConfigAvatarFactory(data::ConfigAvatarFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigAvatarFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigAvatarFactory = v2;
};

// Line 2813: range 000000000E6F10AE-000000000E6F1185
void __cdecl data::ConfigMonsterInitialPose::ConfigMonsterInitialPose(data::ConfigMonsterInitialPose *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->initial_pose_id = 0;
  v2 = ((_BYTE)this + 4) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->released >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->released >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->released, v2, v3);
  this->released = 1;
  data::ConfigPoseInitialParam::ConfigPoseInitialParam(&this->initial_pose_params);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v2, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2813: range 000000000EB59446-000000000EB595DE
void __cdecl data::ConfigMonsterInitialPose::ConfigMonsterInitialPose(
        data::ConfigMonsterInitialPose *const this,
        const data::ConfigMonsterInitialPose *a2)
{
  int32_t initial_pose_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool released; // cl
  char v7; // dl
  __int64 v8; // rdx
  data::ConfigPoseInitialParam *p_initial_pose_params; // rsi
  bool is_json_loaded; // cl
  char v11; // al
  const data::ConfigMonsterInitialPose *v12; // [rsp+0h] [rbp-10h]

  v12 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  initial_pose_id = a2->initial_pose_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->initial_pose_id = initial_pose_id;
  v4 = ((_BYTE)v12 + 4) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&v12->released >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&v12->released >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&v12->released, v4, v5);
  released = v12->released;
  v7 = *(_BYTE *)(((unsigned __int64)&this->released >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 4) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->released, v4, v8);
  this->released = released;
  p_initial_pose_params = &v12->initial_pose_params;
  data::ConfigPoseInitialParam::ConfigPoseInitialParam(&this->initial_pose_params, &v12->initial_pose_params);
  if ( *(char *)(((unsigned __int64)&v12->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v12->is_json_loaded, p_initial_pose_params, &v12->is_json_loaded);
  is_json_loaded = v12->is_json_loaded;
  v11 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v11 < 0 )
  {
    LOBYTE(p_initial_pose_params) = v11 != 0;
    __asan_report_store1(&this->is_json_loaded, p_initial_pose_params, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2813: range 000000000E6F1186-000000000E6F11A4
void __cdecl data::ConfigMonsterInitialPose::~ConfigMonsterInitialPose(data::ConfigMonsterInitialPose *const this)
{
  data::ConfigPoseInitialParam::~ConfigPoseInitialParam(&this->initial_pose_params);
};

// Line 2845: range 000000000ED98E60-000000000ED98FE9
void __cdecl data::ConfigAnimal::ConfigAnimal(data::ConfigAnimal *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
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

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->has_ability = 1;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->tick_ability_element >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->tick_ability_element >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->tick_ability_element, v3, v4);
  this->tick_ability_element = 1;
  v5 = ((_BYTE)this + 2) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->simple_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->simple_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->simple_combat, v5, v6);
  this->simple_combat = 0;
  v7 = ((_BYTE)this + 3) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->has_character_renderering >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->has_character_renderering >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->has_character_renderering, v7, v8);
  this->has_character_renderering = 1;
  v9 = ((_BYTE)this + 4) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->can_env_animal_change_animator >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->can_env_animal_change_animator >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_store1(&this->can_env_animal_change_animator, v9, v10);
  this->can_env_animal_change_animator = 0;
  v11 = ((_BYTE)this + 5) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_store1(&this->is_json_loaded, v11, v12);
  this->is_json_loaded = 0;
};

// Line 2872: range 000000000ED98FEA-000000000ED9903F
void __cdecl data::ConfigCapture::ConfigCapture(data::ConfigCapture *const this)
{
  __int64 v1; // rsi

  std::string::basic_string(this);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2872: range 000000000E8321BC-000000000E832257
void __cdecl data::ConfigCapture::ConfigCapture(data::ConfigCapture *const this, const data::ConfigCapture *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  std::string::basic_string(this, a2);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2872: range 000000000E832258-000000000E832272
void __cdecl data::ConfigCapture::~ConfigCapture(data::ConfigCapture *const this)
{
  std::string::~string(this);
};

// Line 2895: range 000000000ED99040-000000000ED99095
void __cdecl data::ConfigCaptureGroup::ConfigCaptureGroup(data::ConfigCaptureGroup *const this)
{
  __int64 v1; // rsi

  data::ConfigCapture::ConfigCapture(&this->default_config);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 2895: range 000000000E832274-000000000E83230F
void __cdecl data::ConfigCaptureGroup::ConfigCaptureGroup(
        data::ConfigCaptureGroup *const this,
        const data::ConfigCaptureGroup *a2)
{
  bool is_json_loaded; // cl
  char v3; // al

  data::ConfigCapture::ConfigCapture(&this->default_config, &a2->default_config);
  if ( *(char *)(((unsigned __int64)&a2->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_json_loaded, a2, &a2->is_json_loaded);
  is_json_loaded = a2->is_json_loaded;
  v3 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v3 < 0 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store1(&this->is_json_loaded, a2, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 2895: range 000000000E832310-000000000E83232A
void __cdecl data::ConfigCaptureGroup::~ConfigCaptureGroup(data::ConfigCaptureGroup *const this)
{
  data::ConfigCapture::~ConfigCapture(&this->default_config);
};

// Line 2925: range 000000000ED991F0-000000000ED993E1
void __cdecl data::ConfigClothoid::ConfigClothoid(data::ConfigClothoid *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->enable_exit = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_max, (((_BYTE)this + 4) & 7u) + 3);
  }
  this->cur_max = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_min, (((_BYTE)this + 8) & 7u) + 3);
  }
  this->cur_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_max >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_max, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->speed_max = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->speed_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->speed_min >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->speed_min, (((_BYTE)this + 16) & 7u) + 3);
  }
  this->speed_min = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->curve_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->curve_length >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->curve_length, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->curve_length = 0.0;
  v3 = ((_BYTE)this + 24) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2953: range 000000000ED993E2-000000000ED9946B
void __cdecl data::ConfigUISetting::ConfigUISetting(data::ConfigUISetting *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx

  v1 = (unsigned __int8)this & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(this, v1, v2);
  this->radar_hint = 0;
  v3 = ((_BYTE)this + 1) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_json_loaded, v3, v4);
  this->is_json_loaded = 0;
};

// Line 2976: range 000000000ED9946C-000000000ED99682
void __cdecl data::ConfigMonster::ConfigMonster(data::ConfigMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigCharacter::ConfigCharacter(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::unordered_map<std::string,data::ConfigMonsterInitialPose>::unordered_map(&this->initial_poses);
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta);
  std::vector<data::ConfigKeyInput>::vector(&this->input_keys);
  if ( *(_WORD *)(((unsigned __int64)&this->move >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMove>();
  if ( *(_WORD *)(((unsigned __int64)&this->audio >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMonsterAudio>();
  data::ConfigEmojiBubble::ConfigEmojiBubble(&this->emoji_bubble);
  data::ConfigCharacterRendering::ConfigCharacterRendering(&this->character_rendering);
  data::ConfigAnimal::ConfigAnimal(&this->animal);
  data::ConfigTrigger::ConfigTrigger(&this->field);
  data::ConfigCaptureGroup::ConfigCaptureGroup(&this->capture_group);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigSpecialCamera>>::unordered_map(&this->camera_adjust_map);
  data::ConfigClothoid::ConfigClothoid(&this->clothoid);
  data::ConfigUISetting::ConfigUISetting(&this->ui_setting);
};

// Line 2976: range 000000000ED99AC6-000000000ED9A112
void __cdecl data::ConfigMonster::ConfigMonster(data::ConfigMonster *const this, const data::ConfigMonster *a2)
{
  int (**v2)(...); // rdx
  data::ConfigMonsterAudioPtr *p_audio; // rsi
  __int64 v4; // rbx
  __int64 v5; // rbx

  data::ConfigCharacter::ConfigCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  std::unordered_map<std::string,data::ConfigMonsterInitialPose>::unordered_map(
    &this->initial_poses,
    &a2->initial_poses);
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta, &a2->aibeta);
  std::vector<data::ConfigKeyInput>::vector(&this->input_keys, &a2->input_keys);
  std::shared_ptr<data::ConfigMove>::shared_ptr(&this->move, &a2->move);
  p_audio = &a2->audio;
  std::shared_ptr<data::ConfigMonsterAudio>::shared_ptr(&this->audio, &a2->audio);
  if ( *(char *)(((unsigned __int64)&this->emoji_bubble >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->emoji_bubble, p_audio, &this->emoji_bubble);
  if ( *(char *)(((unsigned __int64)&a2->emoji_bubble >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->emoji_bubble, p_audio, &a2->emoji_bubble);
  this->emoji_bubble.is_json_loaded = a2->emoji_bubble.is_json_loaded;
  if ( (((unsigned __int8)this + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&this->character_rendering >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->character_rendering >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->character_rendering.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->character_rendering.is_json_loaded
                                                                           + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->character_rendering, 28LL);
  }
  if ( (((unsigned __int8)a2 + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->character_rendering >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&a2->character_rendering >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&a2->character_rendering.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 119) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->character_rendering.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->character_rendering, 28LL);
  }
  v4 = *(_QWORD *)&a2->character_rendering.override_light_euler_angle.y;
  *(_QWORD *)&this->character_rendering.override_light_dir = *(_QWORD *)&a2->character_rendering.override_light_dir;
  *(_QWORD *)&this->character_rendering.override_light_euler_angle.y = v4;
  *(_QWORD *)&this->character_rendering.override_light_euler_angle.is_json_loaded = *(_QWORD *)&a2->character_rendering.override_light_euler_angle.is_json_loaded;
  *(_DWORD *)&this->character_rendering.is_json_loaded = *(_DWORD *)&a2->character_rendering.is_json_loaded;
  if ( *(char *)(((unsigned __int64)&this->animal >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&this->animal.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&this->animal.is_json_loaded >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->animal, 6LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->animal >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)&a2->animal.is_json_loaded >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 125) & 7) >= *(_BYTE *)(((unsigned __int64)&a2->animal.is_json_loaded >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->animal, 6LL);
  }
  this->animal = a2->animal;
  data::ConfigTrigger::ConfigTrigger(&this->field, &a2->field);
  data::ConfigCaptureGroup::ConfigCaptureGroup(&this->capture_group, &a2->capture_group);
  std::unordered_map<std::string,std::shared_ptr<data::ConfigSpecialCamera>>::unordered_map(
    &this->camera_adjust_map,
    &a2->camera_adjust_map);
  if ( *(char *)(((unsigned __int64)&this->clothoid >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->clothoid.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->clothoid.is_json_loaded + 3) >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->clothoid, 28LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->clothoid >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->clothoid.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 123) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->clothoid.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->clothoid, 28LL);
  }
  v5 = *(_QWORD *)&a2->clothoid.cur_min;
  *(_QWORD *)&this->clothoid.enable_exit = *(_QWORD *)&a2->clothoid.enable_exit;
  *(_QWORD *)&this->clothoid.cur_min = v5;
  *(_QWORD *)&this->clothoid.speed_min = *(_QWORD *)&a2->clothoid.speed_min;
  *(_DWORD *)&this->clothoid.is_json_loaded = *(_DWORD *)&a2->clothoid.is_json_loaded;
  if ( *(_BYTE *)(((unsigned __int64)&this->ui_setting >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&this->ui_setting >> 3) + 0x7FFF8000) )
  {
    __asan_report_store2(&this->ui_setting);
  }
  if ( *(_BYTE *)(((unsigned __int64)&a2->ui_setting >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 124) & 7) + 1) >= *(_BYTE *)(((unsigned __int64)&a2->ui_setting >> 3) + 0x7FFF8000) )
  {
    __asan_report_load2(&a2->ui_setting);
  }
  this->ui_setting = a2->ui_setting;
};

// Line 2995: range 000000000EDAA150-000000000EDAA17A
void __cdecl data::ConfigMonster::~ConfigMonster(data::ConfigMonster *const this)
{
  data::ConfigMonster::~ConfigMonster(this);
  operator delete(this, 0xE80uLL);
};

// Line 2995: range 000000000EDAA072-000000000EDAA14F
void __cdecl data::ConfigMonster::~ConfigMonster(data::ConfigMonster *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonster + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::unordered_map<std::string,std::shared_ptr<data::ConfigSpecialCamera>>::~unordered_map(&this->camera_adjust_map);
  data::ConfigCaptureGroup::~ConfigCaptureGroup(&this->capture_group);
  data::ConfigTrigger::~ConfigTrigger(&this->field);
  std::shared_ptr<data::ConfigMonsterAudio>::~shared_ptr(&this->audio);
  std::shared_ptr<data::ConfigMove>::~shared_ptr(&this->move);
  std::vector<data::ConfigKeyInput>::~vector(&this->input_keys);
  data::ConfigAIBeta::~ConfigAIBeta(&this->aibeta);
  std::unordered_map<std::string,data::ConfigMonsterInitialPose>::~unordered_map(&this->initial_poses);
  data::ConfigCharacter::~ConfigCharacter(this);
};

// Line 3000: range 000000000E6E6E20-000000000E6E6E30
const char *__cdecl data::ConfigMonster::getTypeName(const data::ConfigMonster *const this)
{
  return "ConfigMonster";
};

// Line 3001: range 000000000E6E6E32-000000000E6E6FCE
int32_t __cdecl data::ConfigMonster::getHashNum(const data::ConfigMonster *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigMonster::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigMonster",
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

// Line 3017: range 000000000ED9A3FC-000000000ED9A43D
void __cdecl data::ConfigMonsterFactory::ConfigMonsterFactory(data::ConfigMonsterFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigMonsterFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigMonsterFactory = v2;
};

// Line 3025: range 000000000ED9A746-000000000ED9AA84
void __cdecl data::ConfigNpc::ConfigNpc(data::ConfigNpc *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNpc::ConfigNpc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  data::ConfigCharacter::ConfigCharacter(this);
  v5 = (int (**)(...))(&`vtable for'data::ConfigNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_dither >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_dither >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_dither, v1);
  }
  this->default_dither = 1.0;
  v6 = ((_BYTE)this + 92) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->use_shape >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->use_shape >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store1(&this->use_shape, v6, v7);
  this->use_shape = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_duration, v6);
  }
  this->disappear_duration = 2.0;
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta);
  if ( *(_WORD *)(((unsigned __int64)&this->move >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigMove>();
  data::ConfigIntee::ConfigIntee(&this->intee);
  if ( *(_WORD *)(((unsigned __int64)&this->audio >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetAudio>();
  data::ConfigEmojiBubble::ConfigEmojiBubble(&this->emoji_bubble);
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    &this->element_pendant_point,
    "PRIVATE_Pendant",
    (const std::allocator<char> *)(v2 + 32));
  std::allocator<char>::~allocator(v2 + 32);
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3025: range 000000000ED9AEDA-000000000ED9B34B
void __cdecl data::ConfigNpc::ConfigNpc(data::ConfigNpc *const this, const data::ConfigNpc *a2)
{
  int (**v2)(...); // rdx
  float default_dither; // xmm0_4
  __int64 v4; // rsi
  __int64 v5; // rdx
  bool use_shape; // cl
  char v7; // dl
  __int64 v8; // rdx
  float disappear_duration; // xmm0_4
  __int64 v10; // rbx
  __int64 v11; // rbx
  data::ConfigGadgetAudioPtr *p_audio; // rsi

  data::ConfigCharacter::ConfigCharacter(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->default_dither >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->default_dither >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->default_dither);
  }
  default_dither = a2->default_dither;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_dither >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_dither >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->default_dither, a2);
  }
  this->default_dither = default_dither;
  v4 = ((_BYTE)a2 + 92) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&a2->use_shape >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&a2->use_shape >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_load1(&a2->use_shape, v4, v5);
  use_shape = a2->use_shape;
  v7 = *(_BYTE *)(((unsigned __int64)&this->use_shape >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v7 != 0;
  v8 = (v7 != 0) & (unsigned __int8)((((unsigned __int8)this + 92) & 7) >= v7);
  if ( (_BYTE)v8 )
    __asan_report_store1(&this->use_shape, v4, v8);
  this->use_shape = use_shape;
  if ( *(_BYTE *)(((unsigned __int64)&a2->disappear_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->disappear_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->disappear_duration);
  }
  disappear_duration = a2->disappear_duration;
  if ( *(_BYTE *)(((unsigned __int64)&this->disappear_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->disappear_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->disappear_duration, v4);
  }
  this->disappear_duration = disappear_duration;
  data::ConfigAIBeta::ConfigAIBeta(&this->aibeta, &a2->aibeta);
  std::shared_ptr<data::ConfigMove>::shared_ptr(&this->move, &a2->move);
  if ( *(char *)(((unsigned __int64)&this->intee >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&this->intee.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->intee.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->intee, 44LL);
  }
  if ( *(char *)(((unsigned __int64)&a2->intee >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((unsigned __int64)(&a2->intee.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)a2 + 51) & 7) >= *(_BYTE *)(((unsigned __int64)(&a2->intee.is_json_loaded + 3) >> 3)
                                                    + 0x7FFF8000) )
  {
    __asan_report_load_n(&a2->intee, 44LL);
  }
  v10 = *(_QWORD *)&a2->intee.trigger_height;
  *(_QWORD *)&this->intee.use_trigger = *(_QWORD *)&a2->intee.use_trigger;
  *(_QWORD *)&this->intee.trigger_height = v10;
  v11 = *(_QWORD *)&a2->intee.trigger_offset.y;
  *(_QWORD *)&this->intee.head_ctrl_radius = *(_QWORD *)&a2->intee.head_ctrl_radius;
  *(_QWORD *)&this->intee.trigger_offset.y = v11;
  *(_QWORD *)&this->intee.trigger_offset.is_json_loaded = *(_QWORD *)&a2->intee.trigger_offset.is_json_loaded;
  *(_DWORD *)&this->intee.is_json_loaded = *(_DWORD *)&a2->intee.is_json_loaded;
  p_audio = &a2->audio;
  std::shared_ptr<data::ConfigGadgetAudio>::shared_ptr(&this->audio, &a2->audio);
  if ( *(char *)(((unsigned __int64)&this->emoji_bubble >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->emoji_bubble, p_audio, &this->emoji_bubble);
  if ( *(char *)(((unsigned __int64)&a2->emoji_bubble >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->emoji_bubble, p_audio, &a2->emoji_bubble);
  this->emoji_bubble.is_json_loaded = a2->emoji_bubble.is_json_loaded;
  std::string::basic_string(&this->element_pendant_point, &a2->element_pendant_point);
};

// Line 3040: range 000000000EDAA046-000000000EDAA070
void __cdecl data::ConfigNpc::~ConfigNpc(data::ConfigNpc *const this)
{
  data::ConfigNpc::~ConfigNpc(this);
  operator delete(this, 0xC70uLL);
};

// Line 3040: range 000000000EDA9FB0-000000000EDAA045
void __cdecl data::ConfigNpc::~ConfigNpc(data::ConfigNpc *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpc + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::string::~string(&this->element_pendant_point);
  std::shared_ptr<data::ConfigGadgetAudio>::~shared_ptr(&this->audio);
  std::shared_ptr<data::ConfigMove>::~shared_ptr(&this->move);
  data::ConfigAIBeta::~ConfigAIBeta(&this->aibeta);
  data::ConfigCharacter::~ConfigCharacter(this);
};

// Line 3045: range 000000000E6E6FD0-000000000E6E6FE0
const char *__cdecl data::ConfigNpc::getTypeName(const data::ConfigNpc *const this)
{
  return "ConfigNpc";
};

// Line 3046: range 000000000E6E6FE2-000000000E6E717E
int32_t __cdecl data::ConfigNpc::getHashNum(const data::ConfigNpc *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpc::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigNpc",
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

// Line 3062: range 000000000ED9B634-000000000ED9B675
void __cdecl data::ConfigNpcFactory::ConfigNpcFactory(data::ConfigNpcFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigNpcFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigNpcFactory = v2;
};

// Line 3084: range 000000000ED9BADE-000000000ED9BBD0
void __cdecl data::ConfigLevelEntity::ConfigLevelEntity(data::ConfigLevelEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigEntity::ConfigEntity((data::ConfigEntity *const)this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->drop_elem_control_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->drop_elem_control_type >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_store4(&this->drop_elem_control_type, (((_BYTE)this + 116) & 7u) + 3);
  }
  this->drop_elem_control_type = All_2;
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->avatar_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->team_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->monster_abilities);
  std::vector<unsigned int>::vector(&this->preload_monster_entity_ids);
};

// Line 3084: range 000000000ED9C01A-000000000ED9C220
void __cdecl data::ConfigLevelEntity::ConfigLevelEntity(
        data::ConfigLevelEntity *const this,
        const data::ConfigLevelEntity *a2)
{
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  data::DropElemControlType drop_elem_control_type; // ecx
  char v5; // dl

  data::ConfigEntity::ConfigEntity((data::ConfigEntity *const)this, (const data::ConfigEntity *)a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  v3 = (((_BYTE)a2 + 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->drop_elem_control_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->drop_elem_control_type >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->drop_elem_control_type);
  }
  drop_elem_control_type = a2->drop_elem_control_type;
  v5 = *(_BYTE *)(((unsigned __int64)&this->drop_elem_control_type >> 3) + 0x7FFF8000);
  if ( v5 != 0 && (char)((((_BYTE)this + 116) & 7) + 3) >= v5 )
  {
    LOBYTE(v3) = v5 != 0;
    __asan_report_store4(&this->drop_elem_control_type, v3);
  }
  this->drop_elem_control_type = drop_elem_control_type;
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->abilities, &a2->abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->avatar_abilities, &a2->avatar_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->team_abilities, &a2->team_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::vector(&this->monster_abilities, &a2->monster_abilities);
  std::vector<unsigned int>::vector(&this->preload_monster_entity_ids, &a2->preload_monster_entity_ids);
};

// Line 3096: range 000000000EDA9F84-000000000EDA9FAE
void __cdecl data::ConfigLevelEntity::~ConfigLevelEntity(data::ConfigLevelEntity *const this)
{
  data::ConfigLevelEntity::~ConfigLevelEntity(this);
  operator delete(this, 0x2F0uLL);
};

// Line 3096: range 000000000EDA9EDC-000000000EDA9F83
void __cdecl data::ConfigLevelEntity::~ConfigLevelEntity(data::ConfigLevelEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::vector<unsigned int>::~vector(&this->preload_monster_entity_ids);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->monster_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->team_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->avatar_abilities);
  std::vector<data::ConfigEntityAbilityEntry>::~vector(&this->abilities);
  data::ConfigEntity::~ConfigEntity((data::ConfigEntity *const)this);
};

// Line 3101: range 000000000E6E7180-000000000E6E7190
const char *__cdecl data::ConfigLevelEntity::getTypeName(const data::ConfigLevelEntity *const this)
{
  return "ConfigLevelEntity";
};

// Line 3102: range 000000000E6E7192-000000000E6E732E
int32_t __cdecl data::ConfigLevelEntity::getHashNum(const data::ConfigLevelEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigLevelEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigLevelEntity",
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

// Line 3118: range 000000000ED9C50A-000000000ED9C54B
void __cdecl data::ConfigLevelEntityFactory::ConfigLevelEntityFactory(data::ConfigLevelEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigLevelEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigLevelEntityFactory = v2;
};

// Line 3133: range 000000000E6F1DD8-000000000E6F1E7A
void __cdecl data::TransPointUpdateMaterial::TransPointUpdateMaterial(data::TransPointUpdateMaterial *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->level = 0;
  std::string::basic_string(&this->mat_path);
  std::vector<std::string>::vector(&this->transforms);
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v1, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 3133: range 000000000EC1891C-000000000EC18A6C
void __cdecl data::TransPointUpdateMaterial::TransPointUpdateMaterial(
        data::TransPointUpdateMaterial *const this,
        const data::TransPointUpdateMaterial *a2)
{
  uint32_t level; // ecx
  char v3; // al
  data::StringArray *p_transforms; // rsi
  bool is_json_loaded; // cl
  char v6; // al
  const data::TransPointUpdateMaterial *v7; // [rsp+0h] [rbp-20h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  level = a2->level;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->level = level;
  std::string::basic_string(&this->mat_path, &v7->mat_path);
  p_transforms = &v7->transforms;
  std::vector<std::string>::vector(&this->transforms, &v7->transforms);
  if ( *(char *)(((unsigned __int64)&v7->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v7->is_json_loaded, p_transforms, &v7->is_json_loaded);
  is_json_loaded = v7->is_json_loaded;
  v6 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v6 < 0 )
  {
    LOBYTE(p_transforms) = v6 != 0;
    __asan_report_store1(&this->is_json_loaded, p_transforms, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 3133: range 000000000E6F1E7C-000000000E6F1EAA
void __cdecl data::TransPointUpdateMaterial::~TransPointUpdateMaterial(data::TransPointUpdateMaterial *const this)
{
  std::vector<std::string>::~vector(&this->transforms);
  std::string::~string(&this->mat_path);
};

// Line 3163: range 000000000ED9CC58-000000000ED9CCB7
void __cdecl data::ConfigTransPointEntity::ConfigTransPointEntity(data::ConfigTransPointEntity *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  data::ConfigGadget::ConfigGadget(this);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTransPointEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigEntity = v2;
  std::vector<data::TransPointUpdateMaterial>::vector(&this->update_material_list);
};

// Line 3163: range 000000000ED9D0FA-000000000ED9D195
void __cdecl data::ConfigTransPointEntity::ConfigTransPointEntity(
        data::ConfigTransPointEntity *const this,
        const data::ConfigTransPointEntity *a2)
{
  int (**v2)(...); // rdx

  data::ConfigGadget::ConfigGadget(this, a2);
  v2 = (int (**)(...))(&`vtable for'data::ConfigTransPointEntity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_ConfigEntity = v2;
  std::vector<data::TransPointUpdateMaterial>::vector(&this->update_material_list, &a2->update_material_list);
};

// Line 3170: range 000000000EDA9EB0-000000000EDA9EDA
void __cdecl data::ConfigTransPointEntity::~ConfigTransPointEntity(data::ConfigTransPointEntity *const this)
{
  data::ConfigTransPointEntity::~ConfigTransPointEntity(this);
  operator delete(this, 0x18A8uLL);
};

// Line 3175: range 000000000E6E7330-000000000E6E7340
const char *__cdecl data::ConfigTransPointEntity::getTypeName(const data::ConfigTransPointEntity *const this)
{
  return "ConfigTransPointEntity";
};

// Line 3176: range 000000000E6E7342-000000000E6E74DE
int32_t __cdecl data::ConfigTransPointEntity::getHashNum(const data::ConfigTransPointEntity *const this)
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
  *(_QWORD *)(v1 + 16) = data::ConfigTransPointEntity::getHashNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -202116109;
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 64),
    "ConfigTransPointEntity",
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

// Line 3192: range 000000000ED9D47E-000000000ED9D4BF
void __cdecl data::ConfigTransPointEntityFactory::ConfigTransPointEntityFactory(
        data::ConfigTransPointEntityFactory *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::ConfigTransPointEntityFactory + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_ConfigTransPointEntityFactory = v2;
};

// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigCrowdSpawnInfos.h

// Line 39: range 0000000013C182A0-0000000013C184D6
void __cdecl data::ConfigCrowdSpawnInfo::ConfigCrowdSpawnInfo(data::ConfigCrowdSpawnInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->crowd_type_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->anim_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anim_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->anim_config_id, v2);
  }
  this->anim_config_id = 0;
  data::Vector::Vector(&this->spawn_position);
  data::Vector::Vector(&this->spawn_face_fwd);
  if ( *(char *)(((unsigned __int64)&this->has_collider >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->has_collider, v2, &this->has_collider);
  this->has_collider = 0;
  v3 = ((_BYTE)this + 41) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->sit_on_chair >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->sit_on_chair >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->sit_on_chair, v3, v4);
  this->sit_on_chair = 0;
  data::ColorVector::ColorVector(&this->hair_color);
  std::vector<data::ColorVector>::vector(&this->body_colors);
  std::vector<data::ColorVector>::vector(&this->hat_colors);
  std::vector<data::ColorVector>::vector(&this->screw_colors);
  if ( *(_BYTE *)(((unsigned __int64)&this->instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->instance_id, v3);
  }
  this->instance_id = 0;
  v5 = (((_BYTE)this - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->spawn_grade >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spawn_grade >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->spawn_grade, v5);
  }
  this->spawn_grade = Low_6;
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
  this->is_json_loaded = 0;
};

// Line 39: range 0000000013E7631A-0000000013E768B5
void __cdecl data::ConfigCrowdSpawnInfo::ConfigCrowdSpawnInfo(
        data::ConfigCrowdSpawnInfo *const this,
        data::ConfigCrowdSpawnInfo *a2)
{
  int32_t crowd_type_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  int32_t anim_config_id; // ecx
  char v6; // dl
  __int64 v7; // rdx
  __int64 v8; // rdx
  bool has_collider; // cl
  char v10; // al
  __int64 v11; // rsi
  __int64 v12; // rdx
  bool sit_on_chair; // cl
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rdx
  data::BodyColorList *p_screw_colors; // rsi
  int32_t instance_id; // ecx
  char v19; // al
  __int64 v20; // rsi
  data::ConfigCrowdInstSpawnGradeEnum spawn_grade; // ecx
  char v22; // dl
  bool is_json_loaded; // cl
  char v24; // al
  data::ConfigCrowdSpawnInfo *v25; // [rsp+0h] [rbp-10h]

  v25 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  crowd_type_id = a2->crowd_type_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->crowd_type_id = crowd_type_id;
  v4 = (((_BYTE)v25 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->anim_config_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->anim_config_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->anim_config_id);
  }
  anim_config_id = v25->anim_config_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->anim_config_id >> 3) + 0x7FFF8000);
  LOBYTE(v4) = v6 != 0;
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
    __asan_report_store4(&this->anim_config_id, v4);
  this->anim_config_id = anim_config_id;
  if ( *(_WORD *)(((unsigned __int64)&this->spawn_position >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v25->spawn_position >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v25->spawn_position);
  v7 = *(_QWORD *)&v25->spawn_position.z;
  *(_QWORD *)&this->spawn_position.x = *(_QWORD *)&v25->spawn_position.x;
  *(_QWORD *)&this->spawn_position.z = v7;
  if ( *(_WORD *)(((unsigned __int64)&this->spawn_face_fwd >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  if ( *(_WORD *)(((unsigned __int64)&v25->spawn_face_fwd >> 3) + 0x7FFF8000) )
    __asan_report_load16(&v25->spawn_face_fwd);
  v8 = *(_QWORD *)&v25->spawn_face_fwd.z;
  *(_QWORD *)&this->spawn_face_fwd.x = *(_QWORD *)&v25->spawn_face_fwd.x;
  *(_QWORD *)&this->spawn_face_fwd.z = v8;
  if ( *(char *)(((unsigned __int64)&v25->has_collider >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->has_collider, v4, &v25->has_collider);
  has_collider = v25->has_collider;
  v10 = *(_BYTE *)(((unsigned __int64)&this->has_collider >> 3) + 0x7FFF8000);
  if ( v10 < 0 )
  {
    LOBYTE(v4) = v10 != 0;
    __asan_report_store1(&this->has_collider, v4, &this->has_collider);
  }
  this->has_collider = has_collider;
  v11 = ((_BYTE)v25 + 41) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&v25->sit_on_chair >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&v25->sit_on_chair >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&v25->sit_on_chair, v11, v12);
  sit_on_chair = v25->sit_on_chair;
  v14 = *(_BYTE *)(((unsigned __int64)&this->sit_on_chair >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 41) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->sit_on_chair, v11, v15);
  this->sit_on_chair = sit_on_chair;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->hair_color >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->hair_color >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&this->hair_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 63) & 7) >= *(_BYTE *)(((unsigned __int64)(&this->hair_color.is_json_loaded + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->hair_color, 20LL);
  }
  if ( (((unsigned __int8)v25 + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&v25->hair_color >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v25->hair_color >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)(((unsigned __int64)(&v25->hair_color.is_json_loaded + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v25 + 63) & 7) >= *(_BYTE *)(((unsigned __int64)(&v25->hair_color.is_json_loaded + 3) >> 3)
                                                     + 0x7FFF8000) )
  {
    __asan_report_load_n(&v25->hair_color, 20LL);
  }
  v16 = *(_QWORD *)&v25->hair_color.b;
  *(_QWORD *)&this->hair_color.r = *(_QWORD *)&v25->hair_color.r;
  *(_QWORD *)&this->hair_color.b = v16;
  *(_DWORD *)&this->hair_color.is_json_loaded = *(_DWORD *)&v25->hair_color.is_json_loaded;
  std::vector<data::ColorVector>::vector(&this->body_colors, &v25->body_colors);
  std::vector<data::ColorVector>::vector(&this->hat_colors, &v25->hat_colors);
  p_screw_colors = &v25->screw_colors;
  std::vector<data::ColorVector>::vector(&this->screw_colors, &v25->screw_colors);
  if ( *(_BYTE *)(((unsigned __int64)&v25->instance_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v25->instance_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v25->instance_id);
  }
  instance_id = v25->instance_id;
  v19 = *(_BYTE *)(((unsigned __int64)&this->instance_id >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_screw_colors) = v19 != 0;
    __asan_report_store4(&this->instance_id, p_screw_colors);
  }
  this->instance_id = instance_id;
  v20 = (((_BYTE)v25 - 116) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v25->spawn_grade >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v25 - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v25->spawn_grade >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v25->spawn_grade);
  }
  spawn_grade = v25->spawn_grade;
  v22 = *(_BYTE *)(((unsigned __int64)&this->spawn_grade >> 3) + 0x7FFF8000);
  LOBYTE(v20) = v22 != 0;
  if ( v22 != 0 && (char)((((_BYTE)this - 116) & 7) + 3) >= v22 )
    __asan_report_store4(&this->spawn_grade, v20);
  this->spawn_grade = spawn_grade;
  if ( *(char *)(((unsigned __int64)&v25->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v25->is_json_loaded, v20, &v25->is_json_loaded);
  is_json_loaded = v25->is_json_loaded;
  v24 = *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000);
  if ( v24 < 0 )
  {
    LOBYTE(v20) = v24 != 0;
    __asan_report_store1(&this->is_json_loaded, v20, &this->is_json_loaded);
  }
  this->is_json_loaded = is_json_loaded;
};

// Line 39: range 0000000013C184D8-0000000013C18516
void __cdecl data::ConfigCrowdSpawnInfo::~ConfigCrowdSpawnInfo(data::ConfigCrowdSpawnInfo *const this)
{
  std::vector<data::ColorVector>::~vector(&this->screw_colors);
  std::vector<data::ColorVector>::~vector(&this->hat_colors);
  std::vector<data::ColorVector>::~vector(&this->body_colors);
};

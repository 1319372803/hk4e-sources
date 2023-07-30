// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityHideAndSeekExcelConfig.h

// Line 19: range 0000000012EBEEEC-0000000012EBEFD7
void __cdecl HideAndSeekMapConfig::HideAndSeekMapConfig(HideAndSeekMapConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->scene_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->group_id, v2);
  }
  this->group_id = 0;
  std::vector<unsigned int>::vector(&this->transport_point_vec);
  std::vector<unsigned int>::vector(&this->stage_duration_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->gallery_id, v2);
  }
  this->gallery_id = 0;
};

// Line 19: range 00000000133A60C6-00000000133A6273
void __cdecl HideAndSeekMapConfig::HideAndSeekMapConfig(HideAndSeekMapConfig *const this, HideAndSeekMapConfig *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t group_id; // ecx
  char v6; // dl
  std::vector<unsigned int> *p_stage_duration_vec; // rsi
  uint32_t gallery_id; // ecx
  char v9; // al
  HideAndSeekMapConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  scene_id = a2->scene_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->scene_id = scene_id;
  v4 = (((_BYTE)v10 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->group_id);
  }
  group_id = v10->group_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->transport_point_vec, &v10->transport_point_vec);
  p_stage_duration_vec = &v10->stage_duration_vec;
  std::vector<unsigned int>::vector(&this->stage_duration_vec, &v10->stage_duration_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v10->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->gallery_id);
  }
  gallery_id = v10->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_stage_duration_vec) = v9 != 0;
    __asan_report_store4(&this->gallery_id, p_stage_duration_vec);
  }
  this->gallery_id = gallery_id;
};

// Line 19: range 0000000012EBEFD8-0000000012EBF006
void __cdecl HideAndSeekMapConfig::~HideAndSeekMapConfig(HideAndSeekMapConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->stage_duration_vec);
  std::vector<unsigned int>::~vector(&this->transport_point_vec);
};

// Line 31: range 0000000012EBECC2-0000000012EBEDEE
void __cdecl HideAndSeekDetailConfig::HideAndSeekDetailConfig(HideAndSeekDetailConfig *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi

  std::set<unsigned int>::set(&this->map_set);
  std::set<unsigned int>::set(&this->skill_set);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map(&this->hider_default_skill_map);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map(&this->hunter_default_skill_map);
  std::vector<Vector3>::vector(&this->transfer_pos_vec);
  if ( *(char *)(((unsigned __int64)&this->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_punish_disappear, v1, &this->is_punish_disappear);
  this->is_punish_disappear = 0;
  v2 = (((_BYTE)this - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_punish_disappear_time, v2);
  }
  this->first_punish_disappear_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->repeat_punish_disappear_time, v2);
  }
  this->repeat_punish_disappear_time = 0;
};

// Line 31: range 00000000133A580A-00000000133A5A33
void __cdecl HideAndSeekDetailConfig::HideAndSeekDetailConfig(
        HideAndSeekDetailConfig *const this,
        HideAndSeekDetailConfig *a2)
{
  std::vector<Vector3> *p_transfer_pos_vec; // rsi
  bool is_punish_disappear; // cl
  char v4; // al
  __int64 v5; // rsi
  uint32_t first_punish_disappear_time; // ecx
  char v7; // dl
  uint32_t repeat_punish_disappear_time; // ecx
  char v9; // al

  std::set<unsigned int>::set(&this->map_set, &a2->map_set);
  std::set<unsigned int>::set(&this->skill_set, &a2->skill_set);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map(
    &this->hider_default_skill_map,
    &a2->hider_default_skill_map);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::unordered_map(
    &this->hunter_default_skill_map,
    &a2->hunter_default_skill_map);
  p_transfer_pos_vec = &a2->transfer_pos_vec;
  std::vector<Vector3>::vector(&this->transfer_pos_vec, p_transfer_pos_vec);
  if ( *(char *)(((unsigned __int64)&a2->is_punish_disappear >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&a2->is_punish_disappear, p_transfer_pos_vec, &a2->is_punish_disappear);
  is_punish_disappear = a2->is_punish_disappear;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_punish_disappear >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(p_transfer_pos_vec) = v4 != 0;
    __asan_report_store1(&this->is_punish_disappear, p_transfer_pos_vec, &this->is_punish_disappear);
  }
  this->is_punish_disappear = is_punish_disappear;
  v5 = (((_BYTE)a2 - 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&a2->first_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)a2 - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&a2->first_punish_disappear_time >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&a2->first_punish_disappear_time);
  }
  first_punish_disappear_time = a2->first_punish_disappear_time;
  v7 = *(_BYTE *)(((unsigned __int64)&this->first_punish_disappear_time >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this - 20) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->first_punish_disappear_time, v5);
  }
  this->first_punish_disappear_time = first_punish_disappear_time;
  if ( *(_BYTE *)(((unsigned __int64)&a2->repeat_punish_disappear_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->repeat_punish_disappear_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->repeat_punish_disappear_time);
  }
  repeat_punish_disappear_time = a2->repeat_punish_disappear_time;
  v9 = *(_BYTE *)(((unsigned __int64)&this->repeat_punish_disappear_time >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->repeat_punish_disappear_time, v5);
  }
  this->repeat_punish_disappear_time = repeat_punish_disappear_time;
};

// Line 31: range 0000000012EBEDF0-0000000012EBEE4E
void __cdecl HideAndSeekDetailConfig::~HideAndSeekDetailConfig(HideAndSeekDetailConfig *const this)
{
  std::vector<Vector3>::~vector(&this->transfer_pos_vec);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::~unordered_map(&this->hunter_default_skill_map);
  std::unordered_map<data::HIDE_AND_SEEK_SKILL_SUB_CATEGORY,unsigned int>::~unordered_map(&this->hider_default_skill_map);
  std::set<unsigned int>::~set(&this->skill_set);
  std::set<unsigned int>::~set(&this->map_set);
};

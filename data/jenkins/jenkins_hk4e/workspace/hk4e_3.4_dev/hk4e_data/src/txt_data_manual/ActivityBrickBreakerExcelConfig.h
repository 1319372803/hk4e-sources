// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityBrickBreakerExcelConfig.h

// Line 19: range 0000000012EAC578-0000000012EAC6AE
void __cdecl BrickBreakerWorldLevelConfig::BrickBreakerWorldLevelConfig(BrickBreakerWorldLevelConfig *const this)
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
  std::vector<unsigned int>::vector(&this->score_param_vec);
  if ( *(char *)(((unsigned __int64)&this->is_hard >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_hard, v2, &this->is_hard);
  this->is_hard = 0;
};

// Line 19: range 0000000013380A6C-0000000013380CAA
void __cdecl BrickBreakerWorldLevelConfig::BrickBreakerWorldLevelConfig(
        BrickBreakerWorldLevelConfig *const this,
        BrickBreakerWorldLevelConfig *a2)
{
  uint32_t scene_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t group_id; // ecx
  char v6; // dl
  std::vector<unsigned int> *p_stage_duration_vec; // rsi
  uint32_t gallery_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_score_param_vec; // rsi
  bool is_hard; // cl
  char v12; // al
  BrickBreakerWorldLevelConfig *v13; // [rsp+0h] [rbp-10h]

  v13 = a2;
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
  v4 = (((_BYTE)v13 + 4) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->group_id);
  }
  group_id = v13->group_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->group_id, v4);
  }
  this->group_id = group_id;
  std::vector<unsigned int>::vector(&this->transport_point_vec, &v13->transport_point_vec);
  p_stage_duration_vec = &v13->stage_duration_vec;
  std::vector<unsigned int>::vector(&this->stage_duration_vec, &v13->stage_duration_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->gallery_id);
  }
  gallery_id = v13->gallery_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(p_stage_duration_vec) = v9 != 0;
    __asan_report_store4(&this->gallery_id, p_stage_duration_vec);
  }
  this->gallery_id = gallery_id;
  p_score_param_vec = &v13->score_param_vec;
  std::vector<unsigned int>::vector(&this->score_param_vec, &v13->score_param_vec);
  if ( *(char *)(((unsigned __int64)&v13->is_hard >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v13->is_hard, p_score_param_vec, &v13->is_hard);
  is_hard = v13->is_hard;
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_hard >> 3) + 0x7FFF8000);
  if ( v12 < 0 )
  {
    LOBYTE(p_score_param_vec) = v12 != 0;
    __asan_report_store1(&this->is_hard, p_score_param_vec, &this->is_hard);
  }
  this->is_hard = is_hard;
};

// Line 19: range 0000000012EAC6B0-0000000012EAC6EE
void __cdecl BrickBreakerWorldLevelConfig::~BrickBreakerWorldLevelConfig(BrickBreakerWorldLevelConfig *const this)
{
  std::vector<unsigned int>::~vector(&this->score_param_vec);
  std::vector<unsigned int>::~vector(&this->stage_duration_vec);
  std::vector<unsigned int>::~vector(&this->transport_point_vec);
};

// Line 30: range 0000000012EAC6F0-0000000012EAC79D
void __cdecl BrickBreakerWorldLevelGroupConfig::BrickBreakerWorldLevelGroupConfig(
        BrickBreakerWorldLevelGroupConfig *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1);
  }
  this->stage_id = 0;
  std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(&this->level_pair);
  if ( *(_BYTE *)(((unsigned __int64)&this->pre_level_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pre_level_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pre_level_group_id, (((_BYTE)this + 12) & 7u) + 3);
  }
  this->pre_level_group_id = 0;
  std::set<unsigned int>::set(&this->unlock_skill_set);
};

// Line 30: range 0000000013381158-0000000013381363
void __cdecl BrickBreakerWorldLevelGroupConfig::BrickBreakerWorldLevelGroupConfig(
        BrickBreakerWorldLevelGroupConfig *const this,
        const BrickBreakerWorldLevelGroupConfig *a2)
{
  uint32_t stage_id; // ecx
  char v3; // al
  __int64 v4; // rsi
  uint32_t pre_level_group_id; // ecx
  char v6; // dl
  const BrickBreakerWorldLevelGroupConfig *v7; // [rsp+0h] [rbp-10h]

  v7 = a2;
  if ( *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(a2);
  }
  stage_id = a2->stage_id;
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(this, a2);
  }
  this->stage_id = stage_id;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->level_pair >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->level_pair >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->level_pair.second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->level_pair.second + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->level_pair, 8LL);
  }
  if ( (((unsigned __int8)v7 + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&v7->level_pair >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&v7->level_pair >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&v7->level_pair.second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v7 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->level_pair.second + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&v7->level_pair, 8LL);
  }
  this->level_pair = v7->level_pair;
  v4 = (((_BYTE)v7 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v7->pre_level_group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v7 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v7->pre_level_group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v7->pre_level_group_id);
  }
  pre_level_group_id = v7->pre_level_group_id;
  v6 = *(_BYTE *)(((unsigned __int64)&this->pre_level_group_id >> 3) + 0x7FFF8000);
  if ( v6 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v6 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->pre_level_group_id, v4);
  }
  this->pre_level_group_id = pre_level_group_id;
  std::set<unsigned int>::set(&this->unlock_skill_set, &v7->unlock_skill_set);
};

// Line 30: range 0000000012EAC79E-0000000012EAC7BC
void __cdecl BrickBreakerWorldLevelGroupConfig::~BrickBreakerWorldLevelGroupConfig(
        BrickBreakerWorldLevelGroupConfig *const this)
{
  std::set<unsigned int>::~set(&this->unlock_skill_set);
};

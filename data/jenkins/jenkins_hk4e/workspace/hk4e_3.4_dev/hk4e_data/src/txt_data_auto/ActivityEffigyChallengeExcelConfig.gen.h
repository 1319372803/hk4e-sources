// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityEffigyChallengeExcelConfig.gen.h

// Line 68: range 0000000012EBC002-0000000012EBC163
void __cdecl data::EffigyChallengeExcelConfig::EffigyChallengeExcelConfig(data::EffigyChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->day_index, v3);
  }
  this->day_index = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dungeon_id, v3);
  }
  this->dungeon_id = 0;
  std::vector<unsigned int>::vector(&this->limiting_condition_vec);
  std::vector<unsigned int>::vector(&this->up_avatar_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->first_pass_reward_id, v3);
  }
  this->first_pass_reward_id = 0;
};

// Line 68: range 000000001339F122-000000001339F3A8
void __cdecl data::EffigyChallengeExcelConfig::EffigyChallengeExcelConfig(
        data::EffigyChallengeExcelConfig *const this,
        const data::EffigyChallengeExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t dungeon_id; // ecx
  char v9; // al
  std::vector<unsigned int> *p_up_avatar_vec; // rsi
  uint32_t first_pass_reward_id; // ecx
  char v12; // al
  const data::EffigyChallengeExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyChallengeExcelConfig = v2;
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
  v5 = (((_BYTE)v13 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->day_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->day_index);
  }
  day_index = v13->day_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->day_index >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->day_index, v5);
  }
  this->day_index = day_index;
  if ( *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->dungeon_id);
  }
  dungeon_id = v13->dungeon_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_id, v5);
  }
  this->dungeon_id = dungeon_id;
  std::vector<unsigned int>::vector(&this->limiting_condition_vec, &v13->limiting_condition_vec);
  p_up_avatar_vec = &v13->up_avatar_vec;
  std::vector<unsigned int>::vector(&this->up_avatar_vec, &v13->up_avatar_vec);
  if ( *(_BYTE *)(((unsigned __int64)&v13->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v13->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v13->first_pass_reward_id);
  }
  first_pass_reward_id = v13->first_pass_reward_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->first_pass_reward_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_up_avatar_vec) = v12 != 0;
    __asan_report_store4(&this->first_pass_reward_id, p_up_avatar_vec);
  }
  this->first_pass_reward_id = first_pass_reward_id;
};

// Line 71: range 00000000134260B8-00000000134260E2
void __cdecl data::EffigyChallengeExcelConfig::~EffigyChallengeExcelConfig(
        data::EffigyChallengeExcelConfig *const this)
{
  data::EffigyChallengeExcelConfig::~EffigyChallengeExcelConfig(this);
  operator delete(this, 0x50uLL);
};

// Line 71: range 0000000013426056-00000000134260B7
void __cdecl data::EffigyChallengeExcelConfig::~EffigyChallengeExcelConfig(
        data::EffigyChallengeExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyChallengeExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyChallengeExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->up_avatar_vec);
  std::vector<unsigned int>::~vector(&this->limiting_condition_vec);
};

// Line 87: range 0000000013384378-0000000013384723
void __cdecl data::EffigyDifficultyExcelConfig::EffigyDifficultyExcelConfig(
        data::EffigyDifficultyExcelConfig *const this,
        const data::EffigyDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t challenge_id; // ecx
  char v7; // dl
  uint32_t base_score; // ecx
  char v9; // al
  __int64 v10; // rsi
  data::EffigyDifficulty monster_difficulty; // ecx
  char v12; // dl
  uint32_t monster_level; // ecx
  char v14; // al
  float score_ratio; // xmm0_4
  __int64 v16; // rsi
  uint32_t finish_challenge_index; // ecx
  char v18; // al
  const data::EffigyDifficultyExcelConfig *v19; // [rsp+0h] [rbp-10h]

  v19 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyDifficultyExcelConfig = v2;
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
  v5 = (((_BYTE)v19 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->challenge_id);
  }
  challenge_id = v19->challenge_id;
  v7 = *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->challenge_id, v5);
  }
  this->challenge_id = challenge_id;
  if ( *(_BYTE *)(((unsigned __int64)&v19->base_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->base_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->base_score);
  }
  base_score = v19->base_score;
  v9 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->base_score, v5);
  }
  this->base_score = base_score;
  v10 = (((_BYTE)v19 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v19->monster_difficulty >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->monster_difficulty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->monster_difficulty);
  }
  monster_difficulty = v19->monster_difficulty;
  v12 = *(_BYTE *)(((unsigned __int64)&this->monster_difficulty >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->monster_difficulty, v10);
  }
  this->monster_difficulty = monster_difficulty;
  if ( *(_BYTE *)(((unsigned __int64)&v19->monster_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->monster_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->monster_level);
  }
  monster_level = v19->monster_level;
  v14 = *(_BYTE *)(((unsigned __int64)&this->monster_level >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(v10) = v14 != 0;
    __asan_report_store4(&this->monster_level, v10);
  }
  this->monster_level = monster_level;
  if ( *(_BYTE *)(((unsigned __int64)&v19->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v19 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v19->score_ratio);
  }
  score_ratio = v19->score_ratio;
  v16 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_ratio, v16);
  }
  this->score_ratio = score_ratio;
  if ( *(_BYTE *)(((unsigned __int64)&v19->finish_challenge_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v19->finish_challenge_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v19->finish_challenge_index);
  }
  finish_challenge_index = v19->finish_challenge_index;
  v18 = *(_BYTE *)(((unsigned __int64)&this->finish_challenge_index >> 3) + 0x7FFF8000);
  if ( v18 != 0 && v18 <= 3 )
  {
    LOBYTE(v16) = v18 != 0;
    __asan_report_store4(&this->finish_challenge_index, v16);
  }
  this->finish_challenge_index = finish_challenge_index;
};

// Line 90: range 000000001342602A-0000000013426054
void __cdecl data::EffigyDifficultyExcelConfig::~EffigyDifficultyExcelConfig(
        data::EffigyDifficultyExcelConfig *const this)
{
  data::EffigyDifficultyExcelConfig::~EffigyDifficultyExcelConfig(this);
  operator delete(this, 0x28uLL);
};

// Line 90: range 0000000013425FE8-0000000013426029
void __cdecl data::EffigyDifficultyExcelConfig::~EffigyDifficultyExcelConfig(
        data::EffigyDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyDifficultyExcelConfig = v2;
};

// Line 107: range 000000001339F62A-000000001339F7DE
void __cdecl data::EffigyRewardExcelConfig::EffigyRewardExcelConfig(
        data::EffigyRewardExcelConfig *const this,
        const data::EffigyRewardExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t score_grade; // ecx
  char v7; // dl
  uint32_t reward_id; // ecx
  char v9; // al
  const data::EffigyRewardExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyRewardExcelConfig = v2;
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
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->score_grade >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->score_grade >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->score_grade);
  }
  score_grade = v10->score_grade;
  v7 = *(_BYTE *)(((unsigned __int64)&this->score_grade >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->score_grade, v5);
  }
  this->score_grade = score_grade;
  if ( *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->reward_id);
  }
  reward_id = v10->reward_id;
  v9 = *(_BYTE *)(((unsigned __int64)&this->reward_id >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->reward_id, v5);
  }
  this->reward_id = reward_id;
};

// Line 110: range 0000000013425FBC-0000000013425FE6
void __cdecl data::EffigyRewardExcelConfig::~EffigyRewardExcelConfig(data::EffigyRewardExcelConfig *const this)
{
  data::EffigyRewardExcelConfig::~EffigyRewardExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 110: range 0000000013425F7A-0000000013425FBB
void __cdecl data::EffigyRewardExcelConfig::~EffigyRewardExcelConfig(data::EffigyRewardExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyRewardExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyRewardExcelConfig = v2;
};

// Line 123: range 0000000012EBC164-0000000012EBC333
void __cdecl data::EffigyLimitingConditionExcelConfig::EffigyLimitingConditionExcelConfig(
        data::EffigyLimitingConditionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyLimitingConditionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyLimitingConditionExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->condition_type, v3);
  }
  this->condition_type = EFFIGY_CONDITION_NONE;
  if ( *(_BYTE *)(((unsigned __int64)&this->condition_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->condition_param1, v3);
  }
  this->condition_param1 = 0;
  std::vector<unsigned int>::vector(&this->condition_param2);
  if ( *(_BYTE *)(((unsigned __int64)&this->exclusive_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exclusive_id, v3);
  }
  this->exclusive_id = 0;
  v4 = ((_BYTE)this + 52) & 7;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->is_in_row >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->is_in_row >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store1(&this->is_in_row, v4, v5);
  this->is_in_row = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score, v4);
  }
  this->score = 0;
};

// Line 123: range 000000001339F920-000000001339FC59
void __cdecl data::EffigyLimitingConditionExcelConfig::EffigyLimitingConditionExcelConfig(
        data::EffigyLimitingConditionExcelConfig *const this,
        const data::EffigyLimitingConditionExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  data::EffigyCondition condition_type; // ecx
  char v7; // dl
  uint32_t condition_param1; // ecx
  char v9; // al
  std::vector<unsigned int> *p_condition_param2; // rsi
  uint32_t exclusive_id; // ecx
  char v12; // al
  __int64 v13; // rsi
  __int64 v14; // rdx
  bool is_in_row; // cl
  char v16; // dl
  __int64 v17; // rdx
  int32_t score; // ecx
  char v19; // al
  const data::EffigyLimitingConditionExcelConfig *v20; // [rsp+0h] [rbp-10h]

  v20 = a2;
  v2 = (int (**)(...))(&`vtable for'data::EffigyLimitingConditionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_EffigyLimitingConditionExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&v20->condition_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v20 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v20->condition_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v20->condition_type);
  }
  condition_type = v20->condition_type;
  v7 = *(_BYTE *)(((unsigned __int64)&this->condition_type >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->condition_type, v5);
  }
  this->condition_type = condition_type;
  if ( *(_BYTE *)(((unsigned __int64)&v20->condition_param1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->condition_param1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->condition_param1);
  }
  condition_param1 = v20->condition_param1;
  v9 = *(_BYTE *)(((unsigned __int64)&this->condition_param1 >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->condition_param1, v5);
  }
  this->condition_param1 = condition_param1;
  p_condition_param2 = &v20->condition_param2;
  std::vector<unsigned int>::vector(&this->condition_param2, &v20->condition_param2);
  if ( *(_BYTE *)(((unsigned __int64)&v20->exclusive_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->exclusive_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->exclusive_id);
  }
  exclusive_id = v20->exclusive_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->exclusive_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(p_condition_param2) = v12 != 0;
    __asan_report_store4(&this->exclusive_id, p_condition_param2);
  }
  this->exclusive_id = exclusive_id;
  v13 = ((_BYTE)v20 + 52) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&v20->is_in_row >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&v20->is_in_row >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&v20->is_in_row, v13, v14);
  is_in_row = v20->is_in_row;
  v16 = *(_BYTE *)(((unsigned __int64)&this->is_in_row >> 3) + 0x7FFF8000);
  LOBYTE(v13) = v16 != 0;
  v17 = (v16 != 0) & (unsigned __int8)((((unsigned __int8)this + 52) & 7) >= v16);
  if ( (_BYTE)v17 )
    __asan_report_store1(&this->is_in_row, v13, v17);
  this->is_in_row = is_in_row;
  if ( *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v20->score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v20->score);
  }
  score = v20->score;
  v19 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(v13) = v19 != 0;
    __asan_report_store4(&this->score, v13);
  }
  this->score = score;
};

// Line 126: range 0000000013425F4E-0000000013425F78
void __cdecl data::EffigyLimitingConditionExcelConfig::~EffigyLimitingConditionExcelConfig(
        data::EffigyLimitingConditionExcelConfig *const this)
{
  data::EffigyLimitingConditionExcelConfig::~EffigyLimitingConditionExcelConfig(this);
  operator delete(this, 0x40uLL);
};

// Line 126: range 0000000013425EFC-0000000013425F4D
void __cdecl data::EffigyLimitingConditionExcelConfig::~EffigyLimitingConditionExcelConfig(
        data::EffigyLimitingConditionExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::EffigyLimitingConditionExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_EffigyLimitingConditionExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->condition_param2);
};

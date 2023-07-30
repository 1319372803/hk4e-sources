// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_auto/ActivityTeamChainExcelConfig.gen.h

// Line 17: range 0000000013BD7A2A-0000000013BD7BA3
void __cdecl data::TeamChainExcelConfig::TeamChainExcelConfig(data::TeamChainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TeamChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainExcelConfig = v2;
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
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_id, (((_BYTE)this + 20) & 7u) + 3);
  }
  this->gallery_id = 0;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list);
  std::vector<std::vector<unsigned int>>::vector(&this->chain_config);
  std::vector<unsigned int>::vector(&this->normal_buff_id_list);
};

// Line 17: range 000000001419027E-0000000014190544
void __cdecl data::TeamChainExcelConfig::TeamChainExcelConfig(
        data::TeamChainExcelConfig *const this,
        const data::TeamChainExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t day_index; // ecx
  char v7; // dl
  uint32_t dungeon_id; // ecx
  char v9; // al
  __int64 v10; // rsi
  uint32_t gallery_id; // ecx
  char v12; // dl
  const data::TeamChainExcelConfig *v13; // [rsp+0h] [rbp-20h]

  v13 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TeamChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TeamChainExcelConfig = v2;
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
  v10 = (((_BYTE)v13 + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v13 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->gallery_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v13->gallery_id);
  }
  gallery_id = v13->gallery_id;
  v12 = *(_BYTE *)(((unsigned __int64)&this->gallery_id >> 3) + 0x7FFF8000);
  if ( v12 != 0 && (char)((((_BYTE)this + 20) & 7) + 3) >= v12 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->gallery_id, v10);
  }
  this->gallery_id = gallery_id;
  std::vector<unsigned int>::vector(&this->trial_avatar_id_list, &v13->trial_avatar_id_list);
  std::vector<std::vector<unsigned int>>::vector(&this->chain_config, &v13->chain_config);
  std::vector<unsigned int>::vector(&this->normal_buff_id_list, &v13->normal_buff_id_list);
};

// Line 20: range 00000000142A2686-00000000142A26B0
void __cdecl data::TeamChainExcelConfig::~TeamChainExcelConfig(data::TeamChainExcelConfig *const this)
{
  data::TeamChainExcelConfig::~TeamChainExcelConfig(this);
  operator delete(this, 0x60uLL);
};

// Line 20: range 00000000142A2614-00000000142A2685
void __cdecl data::TeamChainExcelConfig::~TeamChainExcelConfig(data::TeamChainExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamChainExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->normal_buff_id_list);
  std::vector<std::vector<unsigned int>>::~vector(&this->chain_config);
  std::vector<unsigned int>::~vector(&this->trial_avatar_id_list);
};

// Line 37: range 0000000013BD7BA4-0000000013BD7C33
void __cdecl data::TeamChainBuffExcelConfig::TeamChainBuffExcelConfig(data::TeamChainBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamChainBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainBuffExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->id, v1);
  }
  this->id = 0;
  std::string::basic_string(&this->ability_group_name);
};

// Line 37: range 0000000014190686-000000001419075B
void __cdecl data::TeamChainBuffExcelConfig::TeamChainBuffExcelConfig(
        data::TeamChainBuffExcelConfig *const this,
        const data::TeamChainBuffExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t id; // ecx
  char v4; // al
  const data::TeamChainBuffExcelConfig *v5; // [rsp+0h] [rbp-10h]

  v5 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TeamChainBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TeamChainBuffExcelConfig = v2;
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
  std::string::basic_string(&this->ability_group_name, &v5->ability_group_name);
};

// Line 40: range 00000000142A25E8-00000000142A2612
void __cdecl data::TeamChainBuffExcelConfig::~TeamChainBuffExcelConfig(data::TeamChainBuffExcelConfig *const this)
{
  data::TeamChainBuffExcelConfig::~TeamChainBuffExcelConfig(this);
  operator delete(this, 0x30uLL);
};

// Line 40: range 00000000142A2596-00000000142A25E7
void __cdecl data::TeamChainBuffExcelConfig::~TeamChainBuffExcelConfig(data::TeamChainBuffExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamChainBuffExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainBuffExcelConfig = v2;
  std::string::~string(&this->ability_group_name);
};

// Line 52: range 000000001419089C-0000000014190A50
void __cdecl data::TeamChainDifficultyExcelConfig::TeamChainDifficultyExcelConfig(
        data::TeamChainDifficultyExcelConfig *const this,
        const data::TeamChainDifficultyExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t difficulty_level; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t score_magnification; // ecx
  char v7; // dl
  uint32_t dungeon_level; // ecx
  char v9; // al
  const data::TeamChainDifficultyExcelConfig *v10; // [rsp+0h] [rbp-10h]

  v10 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TeamChainDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TeamChainDifficultyExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->difficulty_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->difficulty_level);
  }
  difficulty_level = a2->difficulty_level;
  v4 = *(_BYTE *)(((unsigned __int64)&this->difficulty_level >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->difficulty_level, a2);
  }
  this->difficulty_level = difficulty_level;
  v5 = (((_BYTE)v10 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v10->score_magnification >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->score_magnification >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v10->score_magnification);
  }
  score_magnification = v10->score_magnification;
  v7 = *(_BYTE *)(((unsigned __int64)&this->score_magnification >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
  {
    LOBYTE(v5) = v7 != 0;
    __asan_report_store4(&this->score_magnification, v5);
  }
  this->score_magnification = score_magnification;
  if ( *(_BYTE *)(((unsigned __int64)&v10->dungeon_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v10->dungeon_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v10->dungeon_level);
  }
  dungeon_level = v10->dungeon_level;
  v9 = *(_BYTE *)(((unsigned __int64)&this->dungeon_level >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(v5) = v9 != 0;
    __asan_report_store4(&this->dungeon_level, v5);
  }
  this->dungeon_level = dungeon_level;
};

// Line 55: range 00000000142A2528-00000000142A2569
void __cdecl data::TeamChainDifficultyExcelConfig::~TeamChainDifficultyExcelConfig(
        data::TeamChainDifficultyExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamChainDifficultyExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainDifficultyExcelConfig = v2;
};

// Line 55: range 00000000142A256A-00000000142A2594
void __cdecl data::TeamChainDifficultyExcelConfig::~TeamChainDifficultyExcelConfig(
        data::TeamChainDifficultyExcelConfig *const this)
{
  data::TeamChainDifficultyExcelConfig::~TeamChainDifficultyExcelConfig(this);
  operator delete(this, 0x18uLL);
};

// Line 68: range 0000000013BD7C34-0000000013BD7F6A
void __cdecl data::TeamChainOverallExcelConfig::TeamChainOverallExcelConfig(
        data::TeamChainOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi

  v2 = (int (**)(...))(&`vtable for'data::TeamChainOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->schedule_id, v1);
  }
  this->schedule_id = 0;
  v3 = (((_BYTE)this + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->base_score, v3);
  }
  this->base_score = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_param_a1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_param_a1, v3);
  }
  this->score_param_a1 = 0.0;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_param_a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_param_a2, v4);
  }
  this->score_param_a2 = 0.0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_param_a3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_param_a3, v4);
  }
  this->score_param_a3 = 0.0;
  v5 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->gallery_score_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gallery_score_duration >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->gallery_score_duration, v5);
  }
  this->gallery_score_duration = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->room_num, v5);
  }
  this->room_num = 0;
  v6 = (((_BYTE)this + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->room_skill_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->room_skill_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->room_skill_num, v6);
  }
  this->room_skill_num = 0;
  std::string::basic_string(&this->chain_avatar_ability_group_name);
  if ( *(char *)(((unsigned __int64)&this->disable_appearance >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->disable_appearance, v6, &this->disable_appearance);
  this->disable_appearance = 0;
  v7 = (((_BYTE)this + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id, v7);
  }
  this->costume_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->costume_reward_id, v7);
  }
  this->costume_reward_id = 0;
  std::vector<unsigned int>::vector(&this->costume_target_watcher_id_list);
};

// Line 68: range 0000000014190B92-0000000014191195
void __cdecl data::TeamChainOverallExcelConfig::TeamChainOverallExcelConfig(
        data::TeamChainOverallExcelConfig *const this,
        const data::TeamChainOverallExcelConfig *a2)
{
  int (**v2)(...); // rdx
  uint32_t schedule_id; // ecx
  char v4; // al
  __int64 v5; // rsi
  uint32_t base_score; // ecx
  char v7; // dl
  float score_param_a1; // xmm0_4
  float score_param_a2; // xmm0_4
  __int64 v10; // rsi
  float score_param_a3; // xmm0_4
  __int64 v12; // rsi
  uint32_t gallery_score_duration; // ecx
  char v14; // dl
  uint32_t room_num; // ecx
  char v16; // al
  __int64 v17; // rsi
  uint32_t room_skill_num; // ecx
  char v19; // dl
  std::string *p_chain_avatar_ability_group_name; // rsi
  bool disable_appearance; // cl
  char v22; // al
  __int64 v23; // rsi
  uint32_t costume_id; // ecx
  char v25; // dl
  uint32_t costume_reward_id; // ecx
  char v27; // al
  const data::TeamChainOverallExcelConfig *v28; // [rsp+0h] [rbp-20h]

  v28 = a2;
  v2 = (int (**)(...))(&`vtable for'data::TeamChainOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, a2);
  this->_vptr_TeamChainOverallExcelConfig = v2;
  if ( *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->schedule_id);
  }
  schedule_id = a2->schedule_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->schedule_id >> 3) + 0x7FFF8000);
  if ( v4 != 0 && v4 <= 3 )
  {
    LOBYTE(a2) = v4 != 0;
    __asan_report_store4(&this->schedule_id, a2);
  }
  this->schedule_id = schedule_id;
  v5 = (((_BYTE)v28 + 12) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->base_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->base_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->base_score);
  }
  base_score = v28->base_score;
  v7 = *(_BYTE *)(((unsigned __int64)&this->base_score >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v7 != 0;
  if ( v7 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v7 )
    __asan_report_store4(&this->base_score, v5);
  this->base_score = base_score;
  if ( *(_BYTE *)(((unsigned __int64)&v28->score_param_a1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->score_param_a1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->score_param_a1);
  }
  score_param_a1 = v28->score_param_a1;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_param_a1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_param_a1, v5);
  }
  this->score_param_a1 = score_param_a1;
  if ( *(_BYTE *)(((unsigned __int64)&v28->score_param_a2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->score_param_a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->score_param_a2);
  }
  score_param_a2 = v28->score_param_a2;
  v10 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_param_a2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_param_a2, v10);
  }
  this->score_param_a2 = score_param_a2;
  if ( *(_BYTE *)(((unsigned __int64)&v28->score_param_a3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->score_param_a3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->score_param_a3);
  }
  score_param_a3 = v28->score_param_a3;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_param_a3 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->score_param_a3 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->score_param_a3, v10);
  }
  this->score_param_a3 = score_param_a3;
  v12 = (((_BYTE)v28 + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->gallery_score_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->gallery_score_duration >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->gallery_score_duration);
  }
  gallery_score_duration = v28->gallery_score_duration;
  v14 = *(_BYTE *)(((unsigned __int64)&this->gallery_score_duration >> 3) + 0x7FFF8000);
  if ( v14 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v14 )
  {
    LOBYTE(v12) = v14 != 0;
    __asan_report_store4(&this->gallery_score_duration, v12);
  }
  this->gallery_score_duration = gallery_score_duration;
  if ( *(_BYTE *)(((unsigned __int64)&v28->room_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->room_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->room_num);
  }
  room_num = v28->room_num;
  v16 = *(_BYTE *)(((unsigned __int64)&this->room_num >> 3) + 0x7FFF8000);
  if ( v16 != 0 && v16 <= 3 )
  {
    LOBYTE(v12) = v16 != 0;
    __asan_report_store4(&this->room_num, v12);
  }
  this->room_num = room_num;
  v17 = (((_BYTE)v28 + 36) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->room_skill_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->room_skill_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->room_skill_num);
  }
  room_skill_num = v28->room_skill_num;
  v19 = *(_BYTE *)(((unsigned __int64)&this->room_skill_num >> 3) + 0x7FFF8000);
  if ( v19 != 0 && (char)((((_BYTE)this + 36) & 7) + 3) >= v19 )
  {
    LOBYTE(v17) = v19 != 0;
    __asan_report_store4(&this->room_skill_num, v17);
  }
  this->room_skill_num = room_skill_num;
  p_chain_avatar_ability_group_name = &v28->chain_avatar_ability_group_name;
  std::string::basic_string(&this->chain_avatar_ability_group_name, &v28->chain_avatar_ability_group_name);
  if ( *(char *)(((unsigned __int64)&v28->disable_appearance >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&v28->disable_appearance, p_chain_avatar_ability_group_name, &v28->disable_appearance);
  disable_appearance = v28->disable_appearance;
  v22 = *(_BYTE *)(((unsigned __int64)&this->disable_appearance >> 3) + 0x7FFF8000);
  if ( v22 < 0 )
  {
    LOBYTE(p_chain_avatar_ability_group_name) = v22 != 0;
    __asan_report_store1(&this->disable_appearance, p_chain_avatar_ability_group_name, &this->disable_appearance);
  }
  this->disable_appearance = disable_appearance;
  v23 = (((_BYTE)v28 + 76) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&v28->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v28 + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v28->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&v28->costume_id);
  }
  costume_id = v28->costume_id;
  v25 = *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000);
  if ( v25 != 0 && (char)((((_BYTE)this + 76) & 7) + 3) >= v25 )
  {
    LOBYTE(v23) = v25 != 0;
    __asan_report_store4(&this->costume_id, v23);
  }
  this->costume_id = costume_id;
  if ( *(_BYTE *)(((unsigned __int64)&v28->costume_reward_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v28->costume_reward_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v28->costume_reward_id);
  }
  costume_reward_id = v28->costume_reward_id;
  v27 = *(_BYTE *)(((unsigned __int64)&this->costume_reward_id >> 3) + 0x7FFF8000);
  if ( v27 != 0 && v27 <= 3 )
  {
    LOBYTE(v23) = v27 != 0;
    __asan_report_store4(&this->costume_reward_id, v23);
  }
  this->costume_reward_id = costume_reward_id;
  std::vector<unsigned int>::vector(&this->costume_target_watcher_id_list, &v28->costume_target_watcher_id_list);
};

// Line 71: range 00000000142A24FC-00000000142A2526
void __cdecl data::TeamChainOverallExcelConfig::~TeamChainOverallExcelConfig(
        data::TeamChainOverallExcelConfig *const this)
{
  data::TeamChainOverallExcelConfig::~TeamChainOverallExcelConfig(this);
  operator delete(this, 0x70uLL);
};

// Line 71: range 00000000142A249A-00000000142A24FB
void __cdecl data::TeamChainOverallExcelConfig::~TeamChainOverallExcelConfig(
        data::TeamChainOverallExcelConfig *const this)
{
  __int64 v1; // rsi
  int (**v2)(...); // rdx

  v2 = (int (**)(...))(&`vtable for'data::TeamChainOverallExcelConfig + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, v1);
  this->_vptr_TeamChainOverallExcelConfig = v2;
  std::vector<unsigned int>::~vector(&this->costume_target_watcher_id_list);
  std::string::~string(&this->chain_avatar_ability_group_name);
};
